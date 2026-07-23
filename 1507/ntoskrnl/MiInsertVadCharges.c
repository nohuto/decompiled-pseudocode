/*
 * XREFs of MiInsertVadCharges @ 0x1404B8410
 * Callers:
 *     MiDeletePartialVad @ 0x1400F14D0 (MiDeletePartialVad.c)
 *     MiAllocateChildVads @ 0x140406234 (MiAllocateChildVads.c)
 *     MiCreatePebOrTeb @ 0x140421270 (MiCreatePebOrTeb.c)
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     MiInsertProcessVads @ 0x140467DD0 (MiInsertProcessVads.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x14055EF68 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1405B2C58 (MiMapViewOfPhysicalSection.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1405C008C (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14008B5D0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14008B640 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14008B6A0 (PsChargeProcessNonPagedPoolQuota.c)
 *     RtlSetBits @ 0x14008B810 (RtlSetBits.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14008B8B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiVadPureReserve @ 0x14008F840 (MiVadPureReserve.c)
 *     MiGetProcessPartition @ 0x14008F8A0 (MiGetProcessPartition.c)
 *     PspChargeQuota @ 0x14008F940 (PspChargeQuota.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1400EFD68 (PsReturnProcessPagedPoolQuota.c)
 *     MiCommitPageTablesForVad @ 0x1404BBCD0 (MiCommitPageTablesForVad.c)
 *     MiResidentPagesForSpan @ 0x14054BA90 (MiResidentPagesForSpan.c)
 */

__int64 __fastcall MiInsertVadCharges(__int64 a1, struct _KPROCESS *a2, unsigned __int64 a3, __int64 a4)
{
  ULONG_PTR v5; // r12
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // r14
  __int64 result; // rax
  int v15; // eax
  BOOL v16; // ebx
  int v17; // r15d
  int v18; // ecx
  __int64 v19; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  int v21; // ebp
  unsigned int v22; // edx
  unsigned int v23; // ecx
  unsigned int v24; // r8d
  unsigned int v25; // r9d
  __int16 *ProcessPartition; // rbx
  __int64 v27; // r9
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-38h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v7 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v8 = (unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32;
  v9 = *(unsigned int *)(a1 + 28);
  v11 = *(unsigned int *)(a1 + 52);
  LODWORD(v11) = v11 & 0x7FFFFFFF;
  v12 = v7 << 12;
  v13 = (v9 | v8) << 12;
  if ( (((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31) | v11) < 0x7FFFFFFFELL )
  {
    result = PsChargeProcessNonPagedPoolQuota((__int64)a2, 0x88uLL);
    if ( (int)result < 0 )
      return result;
    v15 = *(_DWORD *)(a1 + 48);
    v16 = 0;
    if ( (v15 & 0x8000) != 0 )
    {
      v16 = (v15 & 7) == 5;
    }
    else if ( !(unsigned int)MiVadPureReserve(a1) )
    {
      v16 = (*(_BYTE *)(a1 + 67) & 1) != 0;
      a3 = (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
         - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32));
      v5 = 8 * a3 + 8;
      if ( a2 != PsInitialSystemProcess )
      {
        v17 = PspChargeQuota(a2[1].ActiveProcessors.Bitmap[4], (__int64)a2, 1, 8 * a3 + 8);
        if ( v17 < 0 )
        {
          PsReturnProcessNonPagedPoolQuota((ULONG_PTR)a2, 0x88uLL);
          return (unsigned int)v17;
        }
      }
    }
    if ( (*(_DWORD *)(a1 + 48) & 7) != 7 && (v18 = 74, _bittest(&v18, *(_DWORD *)(a1 + 48) & 7)) || v16 )
    {
      v6 = MiResidentPagesForSpan(v12, v13);
      if ( v16 )
      {
        a3 = (__int64)(((v13 >> 9) & 0x7FFFFFFFF8LL) - ((v12 >> 9) & 0x7FFFFFFFF8LL)) >> 3;
        v6 -= ((8 * a3 + 8) >> 12) + ((((v12 >> 9) & 0xFF8) + ((8 * (_WORD)a3 + 8) & 0xFFFu) + 4095) >> 12);
      }
      if ( v6 )
      {
        ProcessPartition = MiGetProcessPartition((__int64)a2);
        if ( !(unsigned int)MiChargeResident(ProcessPartition, v6, 128LL, v27) )
        {
          v6 = 0LL;
          v21 = -1073741670;
          goto LABEL_30;
        }
        if ( ProcessPartition == MiSystemPartition )
          _InterlockedExchangeAdd64(&qword_14034F928, v6);
      }
    }
  }
  v19 = *(unsigned int *)(a1 + 52);
  LODWORD(v19) = v19 & 0x7FFFFFFF;
  if ( (((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31) | v19) > 0x7FFFFFFFELL
    || (CurrentThread = KeGetCurrentThread(),
        LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)a2, a3, a4),
        v21 = MiCommitPageTablesForVad(a1, v12, v13),
        UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)a2),
        v21 >= 0) )
  {
    v22 = (*(_DWORD *)(a1 + 24) >> 4) | (*(unsigned __int8 *)(a1 + 32) << 28);
    v23 = (*(_DWORD *)(a1 + 28) >> 4) | (*(unsigned __int8 *)(a1 + 33) << 28);
    v24 = 8 * MEMORY[0xFFFFF58010804230];
    if ( v23 >= 8 * MEMORY[0xFFFFF58010804230] )
    {
      v25 = MEMORY[0xFFFFF5801080420C] + v24;
      if ( v22 < MEMORY[0xFFFFF5801080420C] + v24 )
      {
        if ( v22 < v24 )
          v22 = 8 * MEMORY[0xFFFFF58010804230];
        if ( v23 >= v25 )
          v23 = v25 - 1;
        BitMapHeader.SizeOfBitMap = MEMORY[0xFFFFF5801080420C];
        BitMapHeader.Buffer = (unsigned int *)MEMORY[0xFFFFF58010804230];
        RtlSetBits(&BitMapHeader, v22 - v24, v23 - v22 + 1);
      }
    }
    return 0LL;
  }
LABEL_30:
  PsReturnProcessNonPagedPoolQuota((ULONG_PTR)a2, 0x88uLL);
  if ( v5 )
    PsReturnProcessPagedPoolQuota((ULONG_PTR)a2, v5);
  if ( v6 )
  {
    MiReturnResidentAvailable(v6);
    _InterlockedExchangeAdd64(&qword_14034F938, v6);
  }
  return (unsigned int)v21;
}

/*
 * XREFs of MiInsertVadCharges @ 0x140415EF0
 * Callers:
 *     MiDeletePartialVad @ 0x1400D6084 (MiDeletePartialVad.c)
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     MiAllocateChildVads @ 0x140461278 (MiAllocateChildVads.c)
 *     MiInsertProcessVads @ 0x140462C58 (MiInsertProcessVads.c)
 *     MiAllocateNewTebRegion @ 0x140482F48 (MiAllocateNewTebRegion.c)
 *     MiMapLockedPagesInUserSpace @ 0x1404E65E0 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x14053B280 (MiMapViewOfPhysicalSection.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140549A5C (MmInitializeHandBuiltProcess2.c)
 *     MiAllocateEnclaveVad @ 0x140628DA0 (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiVadPureReserve @ 0x140061050 (MiVadPureReserve.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400610B0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x140061118 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1400612C0 (PsChargeProcessNonPagedPoolQuota.c)
 *     RtlSetBits @ 0x140061410 (RtlSetBits.c)
 *     MiGetProcessPartition @ 0x140063890 (MiGetProcessPartition.c)
 *     PspChargeQuota @ 0x140063930 (PspChargeQuota.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14006C2EC (PsReturnProcessNonPagedPoolQuota.c)
 *     PsReturnProcessPagedPoolQuota @ 0x14006DCC4 (PsReturnProcessPagedPoolQuota.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     MiCommitPageTablesForVad @ 0x140415350 (MiCommitPageTablesForVad.c)
 *     MiResidentPagesForSpan @ 0x1404BD834 (MiResidentPagesForSpan.c)
 */

__int64 __fastcall MiInsertVadCharges(__int64 a1, struct _KPROCESS *a2)
{
  __int64 v3; // r12
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r14
  __int64 result; // rax
  int v13; // eax
  BOOL v14; // edi
  unsigned __int64 v15; // r8
  int v16; // r15d
  int v17; // ecx
  __int64 v18; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  int v20; // ebp
  unsigned int v21; // esi
  int v22; // edi
  unsigned int v23; // eax
  unsigned __int64 v24; // rbx
  unsigned int v25; // edi
  unsigned int i; // ebp
  unsigned int v27; // ecx
  unsigned int v28; // r8d
  int v29; // r14d
  int v30; // edx
  unsigned int v31; // eax
  int *ProcessPartition; // rdi
  __int64 PteAddress; // rdi
  __int64 v34; // rax

  v3 = 0LL;
  v4 = 0LL;
  v5 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v6 = (unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32;
  v7 = *(unsigned int *)(a1 + 28);
  v9 = *(unsigned int *)(a1 + 52);
  LODWORD(v9) = v9 & 0x7FFFFFFF;
  v10 = v5 << 12;
  v11 = (v7 | v6) << 12;
  if ( (((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31) | v9) < 0x7FFFFFFFELL )
  {
    result = PsChargeProcessNonPagedPoolQuota((__int64)a2, 0x88uLL);
    if ( (int)result < 0 )
      return result;
    v13 = *(_DWORD *)(a1 + 48);
    v14 = 0;
    if ( (v13 & 0x8000) != 0 )
    {
      v14 = (v13 & 7) == 5;
    }
    else if ( !(unsigned int)MiVadPureReserve(a1) )
    {
      v14 = (*(_BYTE *)(a1 + 67) & 1) != 0;
      v15 = (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
          - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32));
      v3 = 8 * v15 + 8;
      if ( a2 != PsInitialSystemProcess )
      {
        v16 = PspChargeQuota(a2[1].ActiveProcessors.Bitmap[4], (__int64)a2, 1, 8 * v15 + 8);
        if ( v16 < 0 )
        {
          PsReturnProcessNonPagedPoolQuota(a2, 136LL);
          return (unsigned int)v16;
        }
      }
    }
    if ( (*(_DWORD *)(a1 + 48) & 7) != 7 && (v17 = 74, _bittest(&v17, *(_DWORD *)(a1 + 48) & 7)) || v14 )
    {
      v4 = MiResidentPagesForSpan(v10, v11);
      if ( v14 )
      {
        PteAddress = MiGetPteAddress(v10);
        v34 = MiGetPteAddress(v11);
        v4 -= ((unsigned __int64)(8 * ((v34 - PteAddress) >> 3) + 8) >> 12)
            + ((unsigned __int64)(((8 * (unsigned __int16)((v34 - PteAddress) >> 3) + 8) & 0xFFF)
                                + (unsigned int)(PteAddress & 0xFFF)
                                + 4095) >> 12);
      }
      if ( v4 )
      {
        ProcessPartition = MiGetProcessPartition((__int64)a2);
        if ( !(unsigned int)MiChargeResident(ProcessPartition, v4, 128LL) )
        {
          v4 = 0LL;
          v20 = -1073741670;
          goto LABEL_33;
        }
        if ( ProcessPartition == MiSystemPartition )
          _InterlockedExchangeAdd64(&qword_1402FF4A8, v4);
      }
    }
  }
  v18 = *(unsigned int *)(a1 + 52);
  LODWORD(v18) = v18 & 0x7FFFFFFF;
  if ( (((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31) | v18) > 0x7FFFFFFFELL
    || (CurrentThread = KeGetCurrentThread(),
        LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)a2),
        v20 = MiCommitPageTablesForVad(a1, v10, v11),
        UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)a2),
        v20 >= 0) )
  {
    v21 = (*(_DWORD *)(a1 + 24) >> 4) | (*(unsigned __int8 *)(a1 + 32) << 28);
    v22 = *(unsigned __int8 *)(a1 + 33) << 28;
    v23 = *(_DWORD *)(a1 + 28);
    v24 = 0xFFFFF58010804208uLL;
    v25 = (v23 >> 4) | v22;
    for ( i = 0; i < 2; ++i )
    {
      v27 = 8 * *(_DWORD *)(v24 + 8);
      if ( v25 >= v27 )
      {
        v28 = v27 + *(_DWORD *)v24;
        if ( v21 < v28 )
        {
          v29 = 0;
          v30 = v21;
          if ( v21 < v27 )
          {
            v30 = 8 * *(_DWORD *)(v24 + 8);
            v29 = 1;
          }
          v31 = v25;
          if ( v25 >= v28 )
          {
            v31 = v28 - 1;
            v29 = 1;
          }
          RtlSetBits((PRTL_BITMAP)v24, v30 - v27, v31 - v30 + 1);
          if ( !v29 )
            break;
        }
      }
      v24 += 40LL;
    }
    return 0LL;
  }
LABEL_33:
  PsReturnProcessNonPagedPoolQuota(a2, 136LL);
  if ( v3 )
    PsReturnProcessPagedPoolQuota(a2, v3);
  if ( v4 )
  {
    MiReturnResidentAvailable(v4);
    _InterlockedExchangeAdd64(&qword_1402FF4B8, v4);
  }
  return (unsigned int)v20;
}

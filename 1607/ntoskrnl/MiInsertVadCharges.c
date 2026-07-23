/*
 * XREFs of MiInsertVadCharges @ 0x14042ED10
 * Callers:
 *     MiDeletePartialVad @ 0x1400955C0 (MiDeletePartialVad.c)
 *     MiMapViewOfImageSection @ 0x140428990 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 *     MiInsertProcessVads @ 0x14046C754 (MiInsertProcessVads.c)
 *     MiAllocateNewTebRegion @ 0x1404A6450 (MiAllocateNewTebRegion.c)
 *     MiAllocateChildVads @ 0x14050ABE0 (MiAllocateChildVads.c)
 *     MiMapLockedPagesInUserSpace @ 0x140528B40 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140573180 (MiMapViewOfPhysicalSection.c)
 *     MmInitializeHandBuiltProcess2 @ 0x14057F1E4 (MmInitializeHandBuiltProcess2.c)
 *     MiAllocateEnclaveVad @ 0x14065E5A8 (MiAllocateEnclaveVad.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1400276FC (PsReturnProcessPagedPoolQuota.c)
 *     RtlSetBits @ 0x140027FA0 (RtlSetBits.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140028040 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140029750 (PsChargeProcessNonPagedPoolQuota.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400298C0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiVadPureReserve @ 0x14002B610 (MiVadPureReserve.c)
 *     MiGetProcessPartition @ 0x14002B670 (MiGetProcessPartition.c)
 *     PspChargeQuota @ 0x14002B710 (PspChargeQuota.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14002BAD0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 *     MiCommitPageTablesForVad @ 0x14042F900 (MiCommitPageTablesForVad.c)
 *     MiResidentPagesForSpan @ 0x1404C9880 (MiResidentPagesForSpan.c)
 */

__int64 __fastcall MiInsertVadCharges(__int64 a1, struct _KPROCESS *a2)
{
  ULONG_PTR v3; // r15
  unsigned __int64 v4; // rbp
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r13
  __int64 result; // rax
  int v13; // eax
  BOOL v14; // ebx
  int v15; // ecx
  __int64 PteAddress; // rax
  __int64 v17; // rdx
  int *ProcessPartition; // rax
  int v19; // r14d
  unsigned __int64 v20; // r8
  int v21; // r14d
  __int64 v22; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v24; // r8
  int v25; // ebp
  __int64 v26; // rdx
  unsigned int v27; // ebx
  unsigned int v28; // esi
  __int64 i; // r14
  _RTL_BITMAP *v30; // r10
  unsigned int v31; // eax
  unsigned int v32; // r9d
  int v33; // edi
  unsigned int v34; // edx
  unsigned int v35; // r8d

  v3 = 0LL;
  v4 = 0LL;
  v6 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v7 = (unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32;
  v8 = *(unsigned int *)(a1 + 28);
  v9 = *(unsigned int *)(a1 + 52);
  LODWORD(v9) = v9 & 0x7FFFFFFF;
  v10 = v6 << 12;
  v11 = (v8 | v7) << 12;
  if ( (((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31) | v9) >= 0x7FFFFFFFELL )
    goto LABEL_17;
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
    v20 = (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
        - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32));
    v3 = 8 * v20 + 8;
    if ( a2 != PsInitialSystemProcess )
    {
      v21 = PspChargeQuota(a2[1].ActiveProcessors.Bitmap[4], (__int64)a2, 1, 8 * v20 + 8);
      if ( v21 < 0 )
      {
        PsReturnProcessNonPagedPoolQuota((ULONG_PTR)a2, 0x88uLL);
        return (unsigned int)v21;
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 48) & 7) == 7 || (v15 = 74, !_bittest(&v15, *(_DWORD *)(a1 + 48) & 7)) )
  {
    if ( !v14 )
      goto LABEL_17;
  }
  v4 = MiResidentPagesForSpan(v10, v11);
  if ( v14 )
  {
    MiGetPteAddress(v10);
    PteAddress = MiGetPteAddress(v11);
    v4 -= ((unsigned __int64)(8 * ((PteAddress - v17) >> 3) + 8) >> 12)
        + ((unsigned __int64)(((8 * (unsigned __int16)((PteAddress - v17) >> 3) + 8) & 0xFFF)
                            + (unsigned int)(v17 & 0xFFF)
                            + 4095) >> 12);
  }
  if ( v4
    && (ProcessPartition = MiGetProcessPartition((__int64)a2),
        !(unsigned int)MiChargeResident(ProcessPartition, v4, 128LL)) )
  {
    v4 = 0LL;
    v19 = -1073741670;
  }
  else
  {
LABEL_17:
    v22 = *(unsigned int *)(a1 + 52);
    LODWORD(v22) = v22 & 0x7FFFFFFF;
    if ( (((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31) | v22) > 0x7FFFFFFFELL
      || (CurrentThread = KeGetCurrentThread(),
          LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)a2),
          v19 = MiCommitPageTablesForVad(a1, v10, v11),
          UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)a2),
          v19 >= 0) )
    {
      v25 = 0;
      v26 = qword_140327FD0;
      v27 = (*(_DWORD *)(a1 + 24) >> 4) | (*(unsigned __int8 *)(a1 + 32) << 28);
      v28 = (*(_DWORD *)(a1 + 28) >> 4) | (*(unsigned __int8 *)(a1 + 33) << 28);
      for ( i = 0LL; ; i += 40LL )
      {
        v30 = (_RTL_BITMAP *)(i + v26);
        v31 = 8 * (*(_DWORD *)(i + v26 + 276840472) - v26);
        if ( v28 >= v31 )
        {
          v32 = v31 + v30[17302529].SizeOfBitMap;
          if ( v27 < v32 )
          {
            v33 = 0;
            v34 = v27;
            if ( v27 < v31 )
            {
              v34 = v31;
              v33 = 1;
            }
            v35 = v28;
            if ( v28 >= v32 )
            {
              v35 = v32 - 1;
              v33 = 1;
            }
            RtlSetBits(v30 + 17302529, v34 - v31, v35 - v34 + 1);
            if ( !v33 )
              return 0LL;
            v26 = qword_140327FD0;
          }
        }
        if ( (unsigned int)++v25 >= 2 )
          return 0LL;
      }
    }
  }
  v24 = *(unsigned int *)(a1 + 52);
  LODWORD(v24) = v24 & 0x7FFFFFFF;
  if ( (((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31) | v24) < 0x7FFFFFFFELL )
    PsReturnProcessNonPagedPoolQuota((ULONG_PTR)a2, 0x88uLL);
  if ( v3 )
    PsReturnProcessPagedPoolQuota((ULONG_PTR)a2, v3);
  if ( v4 )
    MiReturnResidentAvailable(v4);
  return (unsigned int)v19;
}

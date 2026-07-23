/*
 * XREFs of MiFreePagesFromMdl @ 0x1400996F8
 * Callers:
 *     MmFreePagesFromMdl @ 0x1400996F0 (MmFreePagesFromMdl.c)
 *     MiInitializeMdlPages @ 0x14010480C (MiInitializeMdlPages.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1401206F0 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     BgpFwAllocateMemory @ 0x140129A78 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x140129BFC (BgpFwFreeMemory.c)
 *     MmFreePagesFromMdlEx @ 0x1401E47EC (MmFreePagesFromMdlEx.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1401F0E04 (MiAllocatePartitionPhysicalPages.c)
 *     PspIumAllocatePhysicalPages @ 0x14020FF24 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x140210044 (PspIumFreePhysicalPages.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14021E8C4 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     NtAllocateUserPhysicalPages @ 0x14065CB7C (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x14065D304 (NtFreeUserPhysicalPages.c)
 *     MiProcessCrcList @ 0x140663EAC (MiProcessCrcList.c)
 *     KiComputeNumaCosts @ 0x1407927E0 (KiComputeNumaCosts.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiFreeMdlPageRun @ 0x1400225B4 (MiFreeMdlPageRun.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MmUnmapLockedPages @ 0x140025890 (MmUnmapLockedPages.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1401623C0 (KeZeroPages.c)
 *     MiRetardMdl @ 0x1401E2CDC (MiRetardMdl.c)
 *     MiLogMdlRangeEvent @ 0x1401E4694 (MiLogMdlRangeEvent.c)
 */

__int16 __fastcall MiFreePagesFromMdl(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  __int16 v2; // ax
  ULONG_PTR v4; // rbp
  PVOID v5; // rcx
  PVOID v6; // rax
  __int64 *v7; // r14
  unsigned __int64 i; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int16 v11; // ax
  ULONG_PTR *BugCheckParameter4; // rbx
  unsigned __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rsi
  int *v19; // r9
  int v20; // r12d
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  ULONG_PTR v25; // rcx
  ULONG_PTR v26; // rcx
  unsigned __int8 v28; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v29; // [rsp+78h] [rbp+10h]
  __int64 v30; // [rsp+80h] [rbp+18h]

  v29 = a2;
  v2 = *(_WORD *)(BugCheckParameter2 + 10);
  v4 = 0LL;
  if ( (v2 & 0x200) != 0 )
  {
    v29 = a2 & 0xFFFFFFFE;
    MiRetardMdl(BugCheckParameter2);
    goto LABEL_11;
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (v2 & 1) != 0 )
    {
      v5 = *(PVOID *)(BugCheckParameter2 + 24);
LABEL_8:
      KeZeroPages(v5, *(unsigned int *)(BugCheckParameter2 + 40));
      goto LABEL_11;
    }
    v6 = MmMapLockedPagesSpecifyCache((PMDL)BugCheckParameter2, 0, MmCached, 0LL, 0, 0x40000020u);
    if ( v6 )
    {
      v5 = v6;
      goto LABEL_8;
    }
    v7 = (__int64 *)(BugCheckParameter2 + 48);
    for ( i = (((*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFFLL)
             + (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 40)
             + 4095) >> 12; i; --i )
    {
      v9 = MiMapPageInHyperSpaceWorker(*v7, &v28, 0x80000000);
      KeZeroPages(v9, 4096LL);
      LOBYTE(v10) = v28;
      MiUnmapPageInHyperSpaceWorker(v9, v10);
      ++v7;
    }
  }
LABEL_11:
  if ( (*(_BYTE *)(BugCheckParameter2 + 10) & 1) != 0 )
    MmUnmapLockedPages(*(PVOID *)(BugCheckParameter2 + 24), (PMDL)BugCheckParameter2);
  v11 = *(_WORD *)(BugCheckParameter2 + 10);
  if ( (v11 & 0x801) != 0 )
    KeBugCheckEx(0x1Au, 0x1238uLL, BugCheckParameter2, v11, 0LL);
  BugCheckParameter4 = (ULONG_PTR *)(BugCheckParameter2 + 48);
  v13 = 0LL;
  v14 = (*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFFLL;
  LOWORD(v15) = WORD2(PerfGlobalGroupMask);
  v16 = (v14 + (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 40) + 4095) >> 12;
  v17 = v16;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    LOWORD(v15) = MiLogMdlRangeEvent(
                    BugCheckParameter2 + 48,
                    633LL,
                    (v14 + (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 40) + 4095) >> 12);
  v18 = 0LL;
  v19 = MiSystemPartition;
  v20 = 1;
  if ( v16 )
  {
    while ( 1 )
    {
      v21 = 48 * *BugCheckParameter4 - 0x58000000000LL;
      v30 = v21;
      v22 = *(_QWORD *)(v21 + 40);
      if ( (v22 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL )
        KeBugCheckEx(0x1Au, 0x1236uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter4, *BugCheckParameter4);
      LOWORD(v15) = (HIDWORD(v22) >> 8) & 0x3FF;
      if ( (_WORD)v15 != 1023 )
      {
        v23 = (unsigned __int16)v15;
        LOWORD(v15) = qword_140327038;
        v19 = *(int **)(qword_140327038 + 8 * v23);
        v21 = v30;
      }
      if ( (int *)v4 != v19 )
      {
        if ( v4 )
          KeBugCheckEx(0x1Au, 0x1301uLL, v4, (ULONG_PTR)v19, (ULONG_PTR)BugCheckParameter4);
        v4 = (ULONG_PTR)v19;
      }
      if ( ((v22 >> 54) & 7) == 3 )
      {
        LOBYTE(v15) = MiLockPageInline(v21);
        v24 = v30;
        *(_QWORD *)(v30 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
        _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        LOWORD(v15) = (unsigned __int8)v15;
        __writecr8((unsigned __int8)v15);
        _InterlockedDecrement64(&qword_140326AE0);
      }
      if ( v18 )
      {
        v25 = *(BugCheckParameter4 - 1);
        LOWORD(v15) = v25 + 1;
        if ( *BugCheckParameter4 == v25 + 1 )
        {
          if ( v18 == 1 || v20 == 1 )
          {
            v20 = 1;
LABEL_30:
            ++v18;
            goto LABEL_39;
          }
        }
        else
        {
          LOWORD(v15) = v25 - 1;
          if ( *BugCheckParameter4 == v25 - 1 && (v18 == 1 || !v20) )
          {
            v20 = 0;
            goto LABEL_30;
          }
          if ( v20 == 1 )
            v25 = BugCheckParameter4[-v18];
        }
        v15 = MiFreeMdlPageRun(v25, v18, v29);
        v13 += v15;
      }
      v18 = 1LL;
LABEL_39:
      ++BugCheckParameter4;
      if ( !--v16 )
      {
        if ( v18 )
        {
          if ( v20 == 1 )
            v26 = BugCheckParameter4[-v18];
          else
            v26 = *(BugCheckParameter4 - 1);
          v15 = MiFreeMdlPageRun(v26, v18, v29);
          v13 += v15;
        }
        if ( v13 )
        {
          if ( (int *)v4 == MiSystemPartition )
            MiReturnResidentAvailable(v13);
          else
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 6528), v13);
          LOWORD(v15) = MiReturnCommit(v4, v13);
        }
        break;
      }
      v19 = MiSystemPartition;
    }
  }
  if ( (int *)v4 == MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140327928, -(__int64)v17);
  *(_WORD *)(BugCheckParameter2 + 10) &= ~2u;
  return v15;
}

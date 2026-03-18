/*
 * XREFs of MiLocateWsle @ 0x140046B50
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14000CE40 (MiSetReadOnlyOnSectionView.c)
 *     MiTrimSharedPageFromViews @ 0x140018E50 (MiTrimSharedPageFromViews.c)
 *     MiSetProtectionOnSection @ 0x140043BF0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x140044D50 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045C00 (MiDeleteVirtualAddresses.c)
 *     MmUnmapViewInSystemCache @ 0x1400492C0 (MmUnmapViewInSystemCache.c)
 *     MiDeleteSystemPagableVm @ 0x14004ACA0 (MiDeleteSystemPagableVm.c)
 *     MiGetWorkingSetInfoList @ 0x1400B79E0 (MiGetWorkingSetInfoList.c)
 *     NtUnlockVirtualMemory @ 0x1400BA2E0 (NtUnlockVirtualMemory.c)
 *     MiUnlockVa @ 0x1400BAA10 (MiUnlockVa.c)
 *     NtLockVirtualMemory @ 0x1400BAEC8 (NtLockVirtualMemory.c)
 *     MiActOnPte @ 0x1400BBC88 (MiActOnPte.c)
 *     MiBuildForkPte @ 0x1400BCCA0 (MiBuildForkPte.c)
 *     MiGetPageProtection @ 0x1400BD710 (MiGetPageProtection.c)
 *     MiProtectPrivateMemory @ 0x1400E1040 (MiProtectPrivateMemory.c)
 *     MiTerminateWsle @ 0x1400E22C0 (MiTerminateWsle.c)
 *     MiCopyOnWriteEx @ 0x1400E2730 (MiCopyOnWriteEx.c)
 *     MiProtectPool @ 0x1400EA400 (MiProtectPool.c)
 *     MiRemoveImagePageFromSystemWorkingSet @ 0x1400FDEF0 (MiRemoveImagePageFromSystemWorkingSet.c)
 *     MiRemoveMappedPtes @ 0x140100320 (MiRemoveMappedPtes.c)
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140110334 (MiDeprioritizeVirtualAddresses.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x140133238 (MiEmptyWsPrivatePagesCallback.c)
 *     MiCrcStillIntact @ 0x1401F94D4 (MiCrcStillIntact.c)
 *     MiDemoteCombinedPte @ 0x1401F97B0 (MiDemoteCombinedPte.c)
 *     MiSharePages @ 0x1401FA8E4 (MiSharePages.c)
 * Callees:
 *     MiTryLocateWsle @ 0x140046B90 (MiTryLocateWsle.c)
 *     MiGetSharedWorkingSetList @ 0x140047070 (MiGetSharedWorkingSetList.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiLocateWsle(ULONG_PTR BugCheckParameter2, __int64 a2, ULONG_PTR a3)
{
  unsigned __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // r10
  char *v8; // rbp
  unsigned __int64 v9; // r9
  char *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax

  result = MiTryLocateWsle(BugCheckParameter2);
  if ( result == 0xFFFFFFFFFLL )
  {
    ++dword_140327118;
    BugCheckParameter4 = MiGetSharedWorkingSetList(a2);
    v8 = *(char **)(BugCheckParameter4 + 80);
    v9 = *(unsigned int *)(BugCheckParameter4 + 32);
    v10 = v8;
    while ( 1 )
    {
      v11 = *(_QWORD *)v10;
      if ( (*(_QWORD *)v10 & 1) != 0 )
      {
        v12 = v11 & 0x800000000000LL;
        v13 = (v11 & 0x800000000000LL) != 0 ? v11 | 0xFFFF000000000000uLL : v11 & 0xFFFFFFFFFFFFLL;
        if ( (v13 & 0x800000000000LL) != 0 )
        {
          v14 = v12 ? v11 | 0xFFFF000000000000uLL : v11 & 0xFFFFFFFFFFFFLL;
          v15 = v14 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL;
        }
        else
        {
          v16 = v12 ? v11 | 0xFFFF000000000000uLL : v11 & 0xFFFFFFFFFFFFLL;
          v15 = v16 & 0xFFFFFFFFF000LL | 1;
        }
        if ( v15 == (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL | 1) )
          break;
      }
      v10 += v9;
      if ( v10 > &v8[v9 * *(_QWORD *)(BugCheckParameter4 + 24)] )
        KeBugCheckEx(0x1Au, 0x41284uLL, BugCheckParameter2, a3, BugCheckParameter4);
    }
    return (v10 - v8) / v9;
  }
  return result;
}

/*
 * XREFs of MiLocateWsle @ 0x140095350
 * Callers:
 *     MiBuildForkPte @ 0x14000253C (MiBuildForkPte.c)
 *     MiSetReadOnlyOnSectionView @ 0x140031070 (MiSetReadOnlyOnSectionView.c)
 *     MiRemoveMappedPtes @ 0x140039410 (MiRemoveMappedPtes.c)
 *     MiGetPageProtection @ 0x14003BD40 (MiGetPageProtection.c)
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiProtectPrivateMemory @ 0x14005DD20 (MiProtectPrivateMemory.c)
 *     MiProtectPool @ 0x14005EFD0 (MiProtectPool.c)
 *     MiGetWorkingSetInfoList @ 0x14007A1C0 (MiGetWorkingSetInfoList.c)
 *     MiUnlockVa @ 0x14007C98C (MiUnlockVa.c)
 *     NtUnlockVirtualMemory @ 0x14007ECE0 (NtUnlockVirtualMemory.c)
 *     MiActOnPte @ 0x14007FD30 (MiActOnPte.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 *     MmUnmapViewInSystemCache @ 0x140098640 (MmUnmapViewInSystemCache.c)
 *     MiTerminateWsle @ 0x1400AE090 (MiTerminateWsle.c)
 *     MiDeleteSystemPagableVm @ 0x1400AFDF0 (MiDeleteSystemPagableVm.c)
 *     MiTrimSharedPageFromViews @ 0x1400FAC3C (MiTrimSharedPageFromViews.c)
 *     NtLockVirtualMemory @ 0x1400FD8C4 (NtLockVirtualMemory.c)
 *     MiRemoveImagePageFromSystemWorkingSet @ 0x140123B68 (MiRemoveImagePageFromSystemWorkingSet.c)
 *     MiDeprioritizeVARange @ 0x140126B74 (MiDeprioritizeVARange.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x1402138D0 (MiEmptyWsPrivatePagesCallback.c)
 *     MiCrcStillIntact @ 0x140229DF8 (MiCrcStillIntact.c)
 *     MiDemoteCombinedPte @ 0x14022A174 (MiDemoteCombinedPte.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 * Callees:
 *     MiTryLocateWsle @ 0x140095390 (MiTryLocateWsle.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
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
    ++dword_14034F1FC;
    BugCheckParameter4 = *(_QWORD *)(a2 + 184);
    v8 = *(char **)(BugCheckParameter4 + 496);
    v9 = *(unsigned int *)(BugCheckParameter4 + 64);
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
      if ( v10 > &v8[v9 * *(_QWORD *)(BugCheckParameter4 + 32)] )
        KeBugCheckEx(0x1Au, 0x41284uLL, BugCheckParameter2, a3, BugCheckParameter4);
    }
    return (v10 - v8) / v9;
  }
  return result;
}

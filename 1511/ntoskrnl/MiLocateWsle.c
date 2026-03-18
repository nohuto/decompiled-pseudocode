/*
 * XREFs of MiLocateWsle @ 0x140058C00
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140008834 (MiTrimSharedPageFromViews.c)
 *     MiRemoveImagePageFromSystemWorkingSet @ 0x14001C40C (MiRemoveImagePageFromSystemWorkingSet.c)
 *     MiActOnPte @ 0x14001C9B4 (MiActOnPte.c)
 *     MiBuildForkPte @ 0x14001DDD8 (MiBuildForkPte.c)
 *     NtUnlockVirtualMemory @ 0x140021060 (NtUnlockVirtualMemory.c)
 *     MiUnlockVa @ 0x140021744 (MiUnlockVa.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 *     MiDecommitPages @ 0x14005ADD0 (MiDecommitPages.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiGetPageProtection @ 0x14005F320 (MiGetPageProtection.c)
 *     MiProtectPrivateMemory @ 0x1400614B0 (MiProtectPrivateMemory.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MmUnmapViewInSystemCache @ 0x1400ADB30 (MmUnmapViewInSystemCache.c)
 *     MiRemoveMappedPtes @ 0x1400B6D00 (MiRemoveMappedPtes.c)
 *     MiTerminateWsle @ 0x1400B7650 (MiTerminateWsle.c)
 *     MiGetWorkingSetInfoList @ 0x1400B9CE0 (MiGetWorkingSetInfoList.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400BB050 (MiSetReadOnlyOnSectionView.c)
 *     NtLockVirtualMemory @ 0x1400BB80C (NtLockVirtualMemory.c)
 *     MiDemoteCombinedPte @ 0x14012836C (MiDemoteCombinedPte.c)
 *     MiCrcStillIntact @ 0x140128AC0 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x14012BE8C (MiEmptyWsPrivatePagesCallback.c)
 *     MiDeprioritizeVARange @ 0x1401D257C (MiDeprioritizeVARange.c)
 * Callees:
 *     MiTryLocateWsle @ 0x140058C40 (MiTryLocateWsle.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
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

  result = MiTryLocateWsle();
  if ( result == 0xFFFFFFFFFLL )
  {
    ++dword_1402FED48;
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

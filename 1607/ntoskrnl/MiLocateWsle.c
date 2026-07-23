/*
 * XREFs of MiLocateWsle @ 0x1400466D0
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14000C9C0 (MiSetReadOnlyOnSectionView.c)
 *     MiTrimSharedPageFromViews @ 0x1400189D0 (MiTrimSharedPageFromViews.c)
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     MmUnmapViewInSystemCache @ 0x140048E40 (MmUnmapViewInSystemCache.c)
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 *     MiGetWorkingSetInfoList @ 0x1400B5870 (MiGetWorkingSetInfoList.c)
 *     NtUnlockVirtualMemory @ 0x1400B8170 (NtUnlockVirtualMemory.c)
 *     MiUnlockVa @ 0x1400B88A0 (MiUnlockVa.c)
 *     NtLockVirtualMemory @ 0x1400B8D58 (NtLockVirtualMemory.c)
 *     MiActOnPte @ 0x1400B9B18 (MiActOnPte.c)
 *     MiBuildForkPte @ 0x1400BAB30 (MiBuildForkPte.c)
 *     MiGetPageProtection @ 0x1400BB5A0 (MiGetPageProtection.c)
 *     MiProtectPrivateMemory @ 0x1400DEEE0 (MiProtectPrivateMemory.c)
 *     MiTerminateWsle @ 0x1400E0160 (MiTerminateWsle.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiProtectPool @ 0x1400E8270 (MiProtectPool.c)
 *     MiRemoveImagePageFromSystemWorkingSet @ 0x1400FBC70 (MiRemoveImagePageFromSystemWorkingSet.c)
 *     MiRemoveMappedPtes @ 0x1400FE0A0 (MiRemoveMappedPtes.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140110898 (MiDeprioritizeVirtualAddresses.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x1401337A8 (MiEmptyWsPrivatePagesCallback.c)
 *     MiCrcStillIntact @ 0x1401F9300 (MiCrcStillIntact.c)
 *     MiDemoteCombinedPte @ 0x1401F95DC (MiDemoteCombinedPte.c)
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 * Callees:
 *     MiTryLocateWsle @ 0x140046710 (MiTryLocateWsle.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
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
    ++dword_140327158;
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

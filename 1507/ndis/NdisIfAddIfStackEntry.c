/*
 * XREFs of NdisIfAddIfStackEntry @ 0x1C001A910
 * Callers:
 *     ndisFilterAttachCleanUp @ 0x1C0054074 (ndisFilterAttachCleanUp.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E88AC (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisIfFindInterface @ 0x1C001AA70 (ndisIfFindInterface.c)
 *     ?ndisIfFindStackEntry@@YAPEAU_NDIS_IF_STACK_ENTRY@@KK@Z @ 0x1C001AAA0 (-ndisIfFindStackEntry@@YAPEAU_NDIS_IF_STACK_ENTRY@@KK@Z.c)
 *     ?ndisIfStackTablePathExist@@YAEKKG@Z @ 0x1C001AAC8 (-ndisIfStackTablePathExist@@YAEKKG@Z.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_dL @ 0x1C003E17C (WPP_SF_dL.c)
 *     WPP_SF_llL @ 0x1C003E344 (WPP_SF_llL.c)
 *     ndisBugCheckEx @ 0x1C0049E68 (ndisBugCheckEx.c)
 */

NDIS_STATUS __stdcall NdisIfAddIfStackEntry(NET_IFINDEX HigherLayerIfIndex, NET_IFINDEX LowerLayerIfIndex)
{
  ULONG_PTR v2; // rsi
  ULONG_PTR v3; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rdi
  KIRQL v6; // r14
  __int64 v7; // rcx
  __int64 Interface; // rax
  __int64 v9; // r10
  PVOID **v10; // rcx
  NDIS_STATUS v11; // ebx
  __int64 v12; // rdx

  v2 = LowerLayerIfIndex;
  v3 = HigherLayerIfIndex;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_dL(50LL, LowerLayerIfIndex, HigherLayerIfIndex, LowerLayerIfIndex);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6669444Eu);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  memset(PoolWithTag, 0, 0x28uLL);
  *((_DWORD *)v5 + 4) = v3;
  *((_DWORD *)v5 + 5) = v2;
  v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
  if ( (_DWORD)v3 == (_DWORD)v2 || ndisIfStackTablePathExist(v3, v2, 0) )
  {
    if ( MmIsDriverVerifying((struct _DRIVER_OBJECT *)ndisDriverObject) )
      ndisBugCheckEx(0x1BuLL, v3, v2, 0LL);
    v11 = -1073741811;
    goto LABEL_12;
  }
  if ( ndisIfFindStackEntry(v3, v2) )
  {
    ExFreePoolWithTag(v5, 0);
    v5 = 0LL;
  }
  else
  {
    ndisIfFindInterface(v7);
    Interface = ndisIfFindInterface((unsigned int)v2);
    if ( !v9 || !Interface )
    {
      v11 = -1071448021;
      goto LABEL_12;
    }
    v5[3] = v9;
    v5[4] = Interface;
    v10 = (PVOID **)ndisIfStackEntryList;
    *v5 = ndisIfStackEntryList;
    v5[1] = &ndisIfStackEntryList;
    if ( v10[1] != &ndisIfStackEntryList )
      __fastfail(3u);
    v10[1] = (PVOID *)v5;
    ndisIfStackEntryList = v5;
    ++*(_DWORD *)(v9 + 1296);
    ++*(_DWORD *)(Interface + 1300);
  }
  v11 = 0;
LABEL_12:
  KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
  KeReleaseSpinLock(&ndisIfListLock, v6);
  if ( v11 )
    ExFreePoolWithTag(v5, 0);
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_llL(51LL, v12, (unsigned int)v3, (unsigned int)v2, v11);
  return v11;
}

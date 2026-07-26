/*
 * XREFs of ndisFilterAttachCleanUp @ 0x1C0011700
 * Callers:
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00E6AE0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E93B4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisSetupLwfMiniportHandlers @ 0x1C0018D40 (ndisSetupLwfMiniportHandlers.c)
 *     ndisIfUpdateFilterIfStack @ 0x1C001A948 (ndisIfUpdateFilterIfStack.c)
 *     NdisIfAddIfStackEntry @ 0x1C001AC00 (NdisIfAddIfStackEntry.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C009CBB0 (NdisIfFreeNetLuidIndex.c)
 *     NdisIfDeregisterInterface @ 0x1C009CC90 (NdisIfDeregisterInterface.c)
 */

__int64 __fastcall ndisFilterAttachCleanUp(PVOID P, __int64 a2, char a3)
{
  unsigned __int64 v5; // rbx
  KIRQL v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  KIRQL v11; // al
  KIRQL v12; // bl
  __int64 v14; // rax
  NET_IFINDEX v15; // edx
  KIRQL v16; // bl

  if ( a3 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)P + 104) + 1312LL);
    NdisIfDeregisterInterface(*((_DWORD *)P + 206));
    NdisIfFreeNetLuidIndex(HIWORD(v5), (v5 >> 24) & 0xFFFFFF);
    *((_QWORD *)P + 104) = 0LL;
    *((_DWORD *)P + 206) = 0;
  }
  if ( a2 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a2 + 1856) = 2099272;
    v7 = *((_QWORD *)P + 14);
    if ( v7 )
      *(_QWORD *)(v7 + 120) = *((_QWORD *)P + 15);
    else
      *(_QWORD *)(a2 + 2048) = *((_QWORD *)P + 15);
    v8 = *((_QWORD *)P + 15);
    v9 = *((_QWORD *)P + 14);
    if ( v8 )
      *(_QWORD *)(v8 + 112) = v9;
    else
      *(_QWORD *)(a2 + 2056) = v9;
    *(_QWORD *)(a2 + 520) = 0LL;
    *(_DWORD *)(a2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v6);
    v10 = *((_QWORD *)P + 15);
    if ( v10 )
    {
      v14 = *((_QWORD *)P + 14);
      if ( v14 )
        v15 = *(_DWORD *)(v14 + 824);
      else
        v15 = *(_DWORD *)(*((_QWORD *)P + 4) + 4112LL);
      NdisIfAddIfStackEntry(*(_DWORD *)(v10 + 824), v15);
      v16 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      ndisIfUpdateFilterIfStack(*((_QWORD *)P + 4));
      KeReleaseSpinLock(&ndisIfListLock, v16);
    }
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
    v12 = v11;
    *(_DWORD *)(a2 + 1856) = 2099311;
    ndisSetupLwfMiniportHandlers(a2);
    *(_QWORD *)(a2 + 520) = 0LL;
    *(_DWORD *)(a2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v12);
  }
  return ndisDereferenceFilter(P);
}

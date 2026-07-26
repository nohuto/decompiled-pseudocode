/*
 * XREFs of ndisFilterAttachCleanUp @ 0x1C0054464
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E1F18 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00EFB2C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ndisIfUpdateFilterIfStack @ 0x1C0018930 (ndisIfUpdateFilterIfStack.c)
 *     NdisIfAddIfStackEntry @ 0x1C0018B70 (NdisIfAddIfStackEntry.c)
 *     ndisSetupLwfMiniportHandlers @ 0x1C001A0D4 (ndisSetupLwfMiniportHandlers.c)
 *     NdisIfDeregisterInterface @ 0x1C00BF7B0 (NdisIfDeregisterInterface.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C00BF7C0 (NdisIfFreeNetLuidIndex.c)
 */

void __fastcall ndisFilterAttachCleanUp(PVOID P, __int64 a2, char a3)
{
  unsigned __int64 v5; // rbx
  KIRQL v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  NET_IFINDEX v12; // edx
  KIRQL v13; // bl
  KIRQL v14; // al
  KIRQL v15; // bl

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
      v11 = *((_QWORD *)P + 14);
      if ( v11 )
        v12 = *(_DWORD *)(v11 + 824);
      else
        v12 = *(_DWORD *)(*((_QWORD *)P + 4) + 4112LL);
      NdisIfAddIfStackEntry(*(_DWORD *)(v10 + 824), v12);
      v13 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      ndisIfUpdateFilterIfStack(*((_QWORD *)P + 4));
      KeReleaseSpinLock(&ndisIfListLock, v13);
    }
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
    v15 = v14;
    *(_DWORD *)(a2 + 1856) = 2099311;
    ndisSetupLwfMiniportHandlers(a2);
    *(_QWORD *)(a2 + 520) = 0LL;
    *(_DWORD *)(a2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v15);
  }
  ndisDereferenceFilter((struct _NDIS_FILTER_BLOCK *)P, 0xFFu);
}

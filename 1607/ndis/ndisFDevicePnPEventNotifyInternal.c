/*
 * XREFs of ndisFDevicePnPEventNotifyInternal @ 0x1C00CDF90
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C0059150 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C001612C (ndisDereferenceRef.c)
 *     ndisGetLowerFilterWithPnpRef @ 0x1C001B130 (ndisGetLowerFilterWithPnpRef.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     ndisClearBusy @ 0x1C006B5C8 (ndisClearBusy.c)
 *     ndisSetBusySync @ 0x1C006C7E0 (ndisSetBusySync.c)
 *     ndisMInvokeDevicePnPEventNotifyHandler @ 0x1C00AB22C (ndisMInvokeDevicePnPEventNotifyHandler.c)
 *     ndisFForwardNetDevicePnPEvent @ 0x1C00CE064 (ndisFForwardNetDevicePnPEvent.c)
 */

void __fastcall ndisFDevicePnPEventNotifyInternal(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdi
  struct _NDIS_MINIPORT_BLOCK *v3; // rbx
  __int64 LowerFilterWithPnpRef; // rax
  __int64 v5; // rsi
  void (__fastcall *PnPEventNotifyHandler)(void *, _NDIS_DEVICE_PNP_EVENT, void *, unsigned int); // rax

  v1 = a1[1];
  v2 = a1[3];
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)(v1 + 32);
  LowerFilterWithPnpRef = ndisGetLowerFilterWithPnpRef((__int64)v3, v1, 5u);
  v5 = LowerFilterWithPnpRef;
  if ( LowerFilterWithPnpRef )
  {
    ndisFForwardNetDevicePnPEvent(LowerFilterWithPnpRef, v2);
    ndisDereferenceRef((PKSPIN_LOCK)(v5 + 312), 5u);
  }
  else if ( v3->MajorNdisVersion >= 6u )
  {
    if ( (v3->Flags & 0x80u) == 0 )
    {
      if ( v3->SelectiveSuspend )
        ndisSetBusySync(v3, 0x25u, 0);
      ndisMInvokeDevicePnPEventNotifyHandler((__int64)v3, v2);
      if ( v3->SelectiveSuspend )
        ndisClearBusy((__int64)v3, 1, 37);
    }
  }
  else
  {
    PnPEventNotifyHandler = v3->DriverHandle->MiniportCharacteristics.PnPEventNotifyHandler;
    if ( PnPEventNotifyHandler )
      PnPEventNotifyHandler(
        v3->MiniportAdapterContext,
        *(_NDIS_DEVICE_PNP_EVENT *)(v2 + 8),
        *(void **)(v2 + 16),
        *(_DWORD *)(v2 + 24));
  }
}

/*
 * XREFs of NdisMSleep @ 0x1C00AFE00
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C00036D0 (ndisQuerySetMiniportEx.c)
 *     ndisMDoOidRequest @ 0x1C00078B0 (ndisMDoOidRequest.c)
 *     ndisFIndicateStatusInternal @ 0x1C0014710 (ndisFIndicateStatusInternal.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C0016828 (ndisIndicateInitialStateToFilter.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0016C08 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisMResetMiniportInternal @ 0x1C005AC38 (ndisMResetMiniportInternal.c)
 *     ndisDeviceControlHandler @ 0x1C009652C (ndisDeviceControlHandler.c)
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisDispatchRequest @ 0x1C0098EF0 (ndisDispatchRequest.c)
 *     ndisPnPDispatch @ 0x1C009FAA0 (ndisPnPDispatch.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00A8144 (ndisWmiQuerySingleInstance.c)
 *     ndisPnPAddDevice @ 0x1C00AEEAC (ndisPnPAddDevice.c)
 *     ?ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00DDD94 (-ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C00E6698 (ndisMCommonHaltMiniport.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00F59AC (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisMSleep(ULONG MicrosecondsToSleep)
{
  struct _KTIMER Timer; // [rsp+30h] [rbp-48h] BYREF

  KeInitializeTimerEx(&Timer, SynchronizationTimer);
  if ( MicrosecondsToSleep == -1 )
  {
    MicrosecondsToSleep = 0;
  }
  else if ( MicrosecondsToSleep > 0x1C9C380 )
  {
    MicrosecondsToSleep = 30000000;
  }
  KeSetTimer(&Timer, (LARGE_INTEGER)(-10LL * (int)MicrosecondsToSleep), 0LL);
  KeWaitForSingleObject(&Timer, Executive, 0, 0, 0LL);
}

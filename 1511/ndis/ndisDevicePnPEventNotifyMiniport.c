/*
 * XREFs of ndisDevicePnPEventNotifyMiniport @ 0x1C00A85C4
 * Callers:
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00984BC (ndisPnPIrpSurpriseRemoval.c)
 *     ndisNotifyMiniports @ 0x1C00E4E20 (ndisNotifyMiniports.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C001C6C4 (ndisDereferenceRef.c)
 *     ndisGetLowerFilterWithPnpRef @ 0x1C001F444 (ndisGetLowerFilterWithPnpRef.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisClearBusy @ 0x1C00665D8 (ndisClearBusy.c)
 *     ndisSetBusySync @ 0x1C0067C58 (ndisSetBusySync.c)
 *     ndisFForwardNetDevicePnPEvent @ 0x1C0098330 (ndisFForwardNetDevicePnPEvent.c)
 *     ndisMInvokeDevicePnPEventNotifyHandler @ 0x1C00A86AC (ndisMInvokeDevicePnPEventNotifyHandler.c)
 */

void __fastcall ndisDevicePnPEventNotifyMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned __int32 a2,
        void *a3,
        unsigned int a4)
{
  _QWORD *LowerFilterWithPnpRef; // rax
  _QWORD *v9; // rsi
  void (__fastcall *PnPEventNotifyHandler)(void *, _NDIS_DEVICE_PNP_EVENT, void *, unsigned int); // rax
  struct _NET_DEVICE_PNP_EVENT v11; // [rsp+30h] [rbp-68h] BYREF

  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qD(0x41u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, (__int64)a1, a2);
  memset(&v11, 0, sizeof(v11));
  v11.Header = (_NDIS_OBJECT_HEADER)3146112;
  v11.DevicePnPEvent = a2;
  v11.InformationBuffer = a3;
  v11.InformationBufferLength = a4;
  LowerFilterWithPnpRef = (_QWORD *)ndisGetLowerFilterWithPnpRef((__int64)a1, 0LL);
  v9 = LowerFilterWithPnpRef;
  if ( LowerFilterWithPnpRef )
  {
    ndisFForwardNetDevicePnPEvent(LowerFilterWithPnpRef, &v11);
    ndisDereferenceRef(v9 + 39, 6u);
  }
  else if ( a1->MajorNdisVersion < 6u )
  {
    PnPEventNotifyHandler = a1->DriverHandle->MiniportCharacteristics.PnPEventNotifyHandler;
    if ( PnPEventNotifyHandler )
      PnPEventNotifyHandler(a1->MiniportAdapterContext, (_NDIS_DEVICE_PNP_EVENT)a2, a3, a4);
  }
  else
  {
    if ( a1->SelectiveSuspend )
      ndisSetBusySync(a1, 37, 0);
    ndisMInvokeDevicePnPEventNotifyHandler(a1, &v11);
    if ( a1->SelectiveSuspend )
      ndisClearBusy((__int64)a1, 1, 37);
  }
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qD(0x42u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, (__int64)a1, a2);
}

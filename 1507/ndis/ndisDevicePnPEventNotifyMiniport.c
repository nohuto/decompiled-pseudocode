/*
 * XREFs of ndisDevicePnPEventNotifyMiniport @ 0x1C00AB9A8
 * Callers:
 *     ndisPnPIrpSurpriseRemoval @ 0x1C009A8A0 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisNotifyMiniports @ 0x1C00EAC48 (ndisNotifyMiniports.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C00172CC (ndisDereferenceRef.c)
 *     ndisGetLowerFilterWithPnpRef @ 0x1C001B784 (ndisGetLowerFilterWithPnpRef.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisClearBusy @ 0x1C0067508 (ndisClearBusy.c)
 *     ndisSetBusySync @ 0x1C0068B84 (ndisSetBusySync.c)
 *     ndisFForwardNetDevicePnPEvent @ 0x1C009C1E0 (ndisFForwardNetDevicePnPEvent.c)
 *     ndisMInvokeDevicePnPEventNotifyHandler @ 0x1C00ABA90 (ndisMInvokeDevicePnPEventNotifyHandler.c)
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

  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_qD(0x41u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, (__int64)a1, a2);
  memset(&v11, 0, sizeof(v11));
  v11.Header = (_NDIS_OBJECT_HEADER)3146112;
  v11.DevicePnPEvent = a2;
  v11.InformationBuffer = a3;
  v11.InformationBufferLength = a4;
  LowerFilterWithPnpRef = (_QWORD *)ndisGetLowerFilterWithPnpRef((__int64)a1, 0LL, 6u);
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
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_qD(0x42u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, (__int64)a1, a2);
}

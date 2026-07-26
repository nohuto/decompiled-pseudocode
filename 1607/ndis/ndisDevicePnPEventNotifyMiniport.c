/*
 * XREFs of ndisDevicePnPEventNotifyMiniport @ 0x1C00AB154
 * Callers:
 *     ndisPnPIrpSurpriseRemoval @ 0x1C009E0B4 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisNotifyMiniports @ 0x1C00EB1F0 (ndisNotifyMiniports.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C001612C (ndisDereferenceRef.c)
 *     ndisGetLowerFilterWithPnpRef @ 0x1C001B130 (ndisGetLowerFilterWithPnpRef.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisClearBusy @ 0x1C006B5C8 (ndisClearBusy.c)
 *     ndisSetBusySync @ 0x1C006C7E0 (ndisSetBusySync.c)
 *     ndisMInvokeDevicePnPEventNotifyHandler @ 0x1C00AB22C (ndisMInvokeDevicePnPEventNotifyHandler.c)
 *     ndisFForwardNetDevicePnPEvent @ 0x1C00CE064 (ndisFForwardNetDevicePnPEvent.c)
 */

void __fastcall ndisDevicePnPEventNotifyMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        void *a3,
        unsigned int a4)
{
  __int64 LowerFilterWithPnpRef; // rax
  __int64 v9; // rsi
  void (__fastcall *PnPEventNotifyHandler)(void *, _NDIS_DEVICE_PNP_EVENT, void *, unsigned int); // rax
  _QWORD v11[6]; // [rsp+30h] [rbp-68h] BYREF

  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qD(0x41u, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids, (__int64)a1, a2);
  memset(v11, 0, sizeof(v11));
  LODWORD(v11[0]) = 3146112;
  LODWORD(v11[1]) = a2;
  v11[2] = a3;
  LODWORD(v11[3]) = a4;
  LowerFilterWithPnpRef = ndisGetLowerFilterWithPnpRef((__int64)a1, 0LL, 6u);
  v9 = LowerFilterWithPnpRef;
  if ( LowerFilterWithPnpRef )
  {
    ndisFForwardNetDevicePnPEvent(LowerFilterWithPnpRef, v11);
    ndisDereferenceRef((PKSPIN_LOCK)(v9 + 312), 6u);
  }
  else if ( a1->MajorNdisVersion < 6u )
  {
    PnPEventNotifyHandler = a1->DriverHandle->MiniportCharacteristics.PnPEventNotifyHandler;
    if ( PnPEventNotifyHandler )
      PnPEventNotifyHandler(a1->MiniportAdapterContext, (_NDIS_DEVICE_PNP_EVENT)a2, a3, a4);
  }
  else if ( (a1->Flags & 0x80u) == 0 )
  {
    if ( a1->SelectiveSuspend )
      ndisSetBusySync(a1, 0x25u, 0);
    ndisMInvokeDevicePnPEventNotifyHandler(a1, v11);
    if ( a1->SelectiveSuspend )
      ndisClearBusy((__int64)a1, 1, 37);
  }
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qD(0x42u, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids, (__int64)a1, a2);
}

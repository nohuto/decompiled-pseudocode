/*
 * XREFs of HUBDSM_AddingDeviceToGlobalChildList @ 0x1C001A270
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x1C0028080 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     HUBCONNECTOR_GetConnectorMapNodeForPort @ 0x1C0069908 (HUBCONNECTOR_GetConnectorMapNodeForPort.c)
 */

__int64 __fastcall HUBDSM_AddingDeviceToGlobalChildList(__int64 a1)
{
  __int64 v1; // rdi
  __int64 ConnectorMapNodeForPort; // rax
  int v3; // eax

  v1 = *(_QWORD *)(a1 + 960);
  if ( !*(_QWORD *)(v1 + 2136) )
    return 4077LL;
  ConnectorMapNodeForPort = HUBCONNECTOR_GetConnectorMapNodeForPort(*(_QWORD *)(v1 + 8));
  v3 = USBD_AddDeviceToGlobalList(
         v1,
         *(_QWORD *)v1,
         *(unsigned __int16 *)(*(_QWORD *)(v1 + 8) + 200LL),
         ConnectorMapNodeForPort,
         *(_WORD *)(v1 + 1980),
         *(_WORD *)(v1 + 1982),
         v1 + 2128);
  switch ( v3 )
  {
    case 1:
      return 4077LL;
    case 2:
      return 4073LL;
    case 3:
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
        WdfDriverGlobals,
        WdfDriverGlobals->Driver,
        off_1C00570E8);
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x24u,
        (__int64)&WPP_4365074be9fe45a9236a5dea2660cd62_Traceguids);
      HUBMISC_LogDescriptorValidationErrorForDevice(v1, 234LL);
      break;
  }
  return 4065LL;
}

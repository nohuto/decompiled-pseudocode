/*
 * XREFs of HUBDSM_AddingDeviceToGlobalChildList @ 0x1C00198B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x1C0027430 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     HUBCONNECTOR_GetConnectorMapNodeForPort @ 0x1C0068C98 (HUBCONNECTOR_GetConnectorMapNodeForPort.c)
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
        off_1C0057090);
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x24u,
        (__int64)&WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids);
      HUBMISC_LogDescriptorValidationErrorForDevice(v1, 234LL);
      break;
  }
  return 4065LL;
}

/*
 * XREFs of HUBDSM_AddingDeviceToGlobalChildList @ 0x1C001BF80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x1C002A990 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     HUBMISC_TypeCCompanionHasIdenticalDeviceAttached @ 0x1C002AB64 (HUBMISC_TypeCCompanionHasIdenticalDeviceAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     HUBCONNECTOR_GetConnectorMapNodeForPort @ 0x1C006DC44 (HUBCONNECTOR_GetConnectorMapNodeForPort.c)
 */

__int64 __fastcall HUBDSM_AddingDeviceToGlobalChildList(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 ConnectorMapNodeForPort; // rax
  int v5; // eax
  int v6; // eax
  __int16 v7; // [rsp+20h] [rbp-28h]
  __int16 v8; // [rsp+28h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_QWORD *)(v1 + 8);
  if ( !*(_QWORD *)(v1 + 2136) )
  {
    if ( (*(_DWORD *)(v2 + 204) & 0x200) != 0 )
    {
      if ( (unsigned __int8)HUBMISC_TypeCCompanionHasIdenticalDeviceAttached(v1) )
        return 4073LL;
      _InterlockedOr((volatile signed __int32 *)(v2 + 1336), 0x40u);
    }
    return 4077LL;
  }
  ConnectorMapNodeForPort = HUBCONNECTOR_GetConnectorMapNodeForPort(*(_QWORD *)(v1 + 8));
  v8 = *(_WORD *)(v1 + 1982);
  v7 = *(_WORD *)(v1 + 1980);
  v5 = USBD_AddDeviceToGlobalList(
         v1,
         *(_QWORD *)v1,
         *(unsigned __int16 *)(*(_QWORD *)(v1 + 8) + 200LL),
         ConnectorMapNodeForPort,
         v7,
         v8,
         v1 + 2128)
     - 1;
  if ( !v5 )
    return 4077LL;
  v6 = v5 - 1;
  if ( !v6 )
    return 4073LL;
  if ( v6 == 1 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
      WdfDriverGlobals,
      WdfDriverGlobals->Driver,
      off_1C005B110);
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x24u,
      (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids);
    HUBMISC_LogDescriptorValidationErrorForDevice(v1, 234LL);
  }
  return 4065LL;
}

/*
 * XREFs of HUBPDO_EvtDeviceSurpriseRemoval @ 0x1C0066730
 * Callers:
 *     <none>
 * Callees:
 *     Template_p @ 0x1C0005B18 (Template_p.c)
 *     HUBPDO_BillboardCleanup @ 0x1C0013AB8 (HUBPDO_BillboardCleanup.c)
 *     HUBUCX_CheckIfHubIsDisconnected @ 0x1C001E758 (HUBUCX_CheckIfHubIsDisconnected.c)
 *     HUBMISC_RemoveDeviceInfoFromGlobalChildList @ 0x1C00249A4 (HUBMISC_RemoveDeviceInfoFromGlobalChildList.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall HUBPDO_EvtDeviceSurpriseRemoval(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rcx
  NTSTATUS result; // eax

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00570C0)
                 + 24);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 2) != 0 )
    Template_p(v1, &USBHUB3_ETW_EVENT_DEVICE_SURPRISE_REMOVAL_START, 0LL, *(_QWORD *)(v2 + 24));
  if ( (unsigned __int8)HUBUCX_CheckIfHubIsDisconnected(*(_QWORD *)v2) )
    HUBMISC_RemoveDeviceInfoFromGlobalChildList(v2);
  **(_BYTE **)(v2 + 16) = 1;
  HUBPDO_BillboardCleanup(v2);
  result = (NTSTATUS)WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 2) != 0 )
    return Template_p(v3, &USBHUB3_ETW_EVENT_DEVICE_SURPRISE_REMOVAL_COMPLETE, 0LL, *(_QWORD *)(v2 + 24));
  return result;
}

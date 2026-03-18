/*
 * XREFs of HUBPDO_EvtDeviceReleaseHardware @ 0x1C006ABC0
 * Callers:
 *     <none>
 * Callees:
 *     Template_pq @ 0x1C00012BC (Template_pq.c)
 *     Template_p @ 0x1C000630C (Template_p.c)
 *     UsbSleepStudy_UnregisterPdo @ 0x1C0036480 (UsbSleepStudy_UnregisterPdo.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     HUBREG_DeleteUxdSettings @ 0x1C0071D54 (HUBREG_DeleteUxdSettings.c)
 *     HUBWNF_PublishUsbPartnerDualRoleFeatures @ 0x1C0074F60 (HUBWNF_PublishUsbPartnerDualRoleFeatures.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceReleaseHardware(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rbx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005B070);
  v4 = *(_QWORD *)(v3 + 24);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    Template_p(v2, &USBHUB3_ETW_EVENT_DEVICE_RELEASE_HARDWARE_START, 0LL, *(_QWORD *)(v4 + 24));
  v5 = *(_QWORD **)(v3 + 392);
  if ( v5 )
  {
    UsbSleepStudy_UnregisterPdo(v5);
    *(_QWORD *)(v3 + 392) = 0LL;
  }
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005B070);
  *(_BYTE *)v6 = 1;
  _InterlockedAnd((volatile signed __int32 *)(v4 + 1620), 0xFFFFBFFF);
  v7 = *(unsigned int *)(v6 + 32);
  if ( (v7 & 0x400) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v6 + 32), 0xFFFFFBFF);
  }
  else
  {
    if ( (v7 & 0x800) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v6 + 32), 0xFFFFF7FF);
      HUBREG_DeleteUxdSettings(*(_QWORD *)(v6 + 24), 1LL);
    }
    if ( (*(_DWORD *)(v4 + 1616) & 0x40000) != 0 )
    {
      HUBWNF_PublishUsbPartnerDualRoleFeatures(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 1416LL), 0LL, 0LL);
      _InterlockedAnd((volatile signed __int32 *)(v4 + 1616), 0xFFFBFFFF);
    }
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    Template_pq(v7, &USBHUB3_ETW_EVENT_DEVICE_RELEASE_HARDWARE_COMPLETE, 0LL, *(_QWORD *)(v4 + 24), 0);
  return 0LL;
}

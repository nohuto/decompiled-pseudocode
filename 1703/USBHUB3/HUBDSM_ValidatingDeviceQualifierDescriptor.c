/*
 * XREFs of HUBDSM_ValidatingDeviceQualifierDescriptor @ 0x1C001BEB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     Template_p @ 0x1C000630C (Template_p.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_ValidatingDeviceQualifierDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  unsigned int v3; // eax
  __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
    WdfDriverGlobals,
    WdfDriverGlobals->Driver,
    off_1C005B110);
  v3 = *(_DWORD *)(v1 + 240);
  if ( v3 >= 0xA )
  {
    _InterlockedOr((volatile signed __int32 *)(v1 + 1616), 0x2000u);
  }
  else
  {
    *(_DWORD *)(v1 + 2416) = 1073807379;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x4Cu,
      (__int64)&WPP_1456c6ef7b533877ee207863935bf626_Traceguids,
      v3);
    v2 = 4065;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
      Template_p(
        v4,
        &USBHUB3_ETW_EVENT_INVALID_DEVICE_QUALIFIER_DESCRIPTOR,
        (const GUID *)(v1 + 1500),
        *(_QWORD *)(v1 + 24));
  }
  return v2;
}

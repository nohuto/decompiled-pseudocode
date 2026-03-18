/*
 * XREFs of UsbdHubDisarmBusForWake @ 0x1C00025C0
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001000 (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbdHubDisarmBusForWake(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = FdoExt(a1);
  result = 0LL;
  if ( *(_QWORD *)(v1 + 4416) )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        11,
        (__int64)&WPP_8d36cf52eaaf9aa8dffc4ee2e11132d2_Traceguids);
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v1 + 4416))(*(_QWORD *)(v1 + 4232), 0LL);
    *(_DWORD *)(v1 + 2560) &= ~0x40000u;
  }
  return result;
}

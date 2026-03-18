/*
 * XREFs of UsbdHubArmBusForWake @ 0x1C0045A5C
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001000 (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbdHubArmBusForWake(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbx
  __int64 result; // rax

  v4 = FdoExt(a1, a2, a3, a4);
  result = 0LL;
  if ( *((_QWORD *)v4 + 552) )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0xAu,
        (__int64)&WPP_8d36cf52eaaf9aa8dffc4ee2e11132d2_Traceguids);
    result = (*((__int64 (__fastcall **)(_QWORD, __int64))v4 + 552))(*((_QWORD *)v4 + 529), 1LL);
    v4[640] |= 0x40000u;
  }
  return result;
}

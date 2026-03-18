/*
 * XREFs of UsbhDisablePortIndicators @ 0x1C003DC6C
 * Callers:
 *     UsbhBusPnpStop_Action @ 0x1C003F500 (UsbhBusPnpStop_Action.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C001B570 (UsbhGetPortData.c)
 *     UsbhDispatch_PindicatorEvent @ 0x1C0028BD0 (UsbhDispatch_PindicatorEvent.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 */

_DWORD *__fastcall UsbhDisablePortIndicators(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int16 i; // bx
  _DWORD *result; // rax
  __int64 PortData; // rsi
  _DWORD *v11; // rax

  FdoExt(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xEu,
      (__int64)&WPP_71d4df441bc53643947fc1224878c183_Traceguids);
  for ( i = 1; ; ++i )
  {
    result = FdoExt(a1, v5, v6, v7);
    if ( i > *((unsigned __int8 *)result + 2938) )
      break;
    PortData = UsbhGetPortData(a1, i);
    if ( PortData )
    {
      v11 = FdoExt(a1, v5, v6, v7);
      UsbhDispatch_PindicatorEvent(a1, PortData, 2, (__int64)(v11 + 346));
    }
  }
  return result;
}

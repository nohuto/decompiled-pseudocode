/*
 * XREFs of UsbhEnablePortIndicators @ 0x1C0021F14
 * Callers:
 *     UsbhFinishStart @ 0x1C0021D90 (UsbhFinishStart.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000AEF0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhDispatch_PindicatorEvent @ 0x1C0029550 (UsbhDispatch_PindicatorEvent.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 */

_DWORD *__fastcall UsbhEnablePortIndicators(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rbx
  unsigned __int16 i; // bx
  __int64 PortData; // rsi
  _DWORD *v12; // rax

  result = FdoExt(a1, a2, a3, a4);
  v9 = result;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    result = (_DWORD *)WPP_RECORDER_SF_(
                         WPP_GLOBAL_Control->DeviceExtension,
                         0,
                         1,
                         13,
                         (__int64)&WPP_2b88037d15597a26bc3d8f7fc80400b3_Traceguids);
  if ( *((_BYTE *)v9 + 3008) )
  {
    for ( i = 1; ; ++i )
    {
      result = FdoExt(a1, v6, v7, v8);
      if ( i > *((unsigned __int8 *)result + 2938) )
        break;
      PortData = UsbhGetPortData(a1, i);
      if ( PortData )
      {
        v12 = FdoExt(a1, v6, v7, v8);
        UsbhDispatch_PindicatorEvent(a1, PortData, 5LL, v12 + 346);
      }
    }
  }
  return result;
}

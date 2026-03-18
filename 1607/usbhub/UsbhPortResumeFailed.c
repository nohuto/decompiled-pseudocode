/*
 * XREFs of UsbhPortResumeFailed @ 0x1C0051140
 * Callers:
 *     <none>
 * Callees:
 *     UsbhWait @ 0x1C0009D88 (UsbhWait.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     UsbhSS_SignalPdoWake @ 0x1C002561C (UsbhSS_SignalPdoWake.c)
 *     UsbhSignalResumeEvent @ 0x1C00256AC (UsbhSignalResumeEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

__int64 __fastcall UsbhPortResumeFailed(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  int v9; // [rsp+28h] [rbp-30h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v9 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x26u,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      v9);
  }
  Log(a1, 1024, 1884443425, a2, 0LL);
  UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 129LL, 0LL, 0, 0, 0, usbfile_busfunc_c, 2448, 0);
  UsbhWait(a1, 10);
  UsbhSignalResumeEvent(a1, a2);
  UsbhSS_SignalPdoWake(a1, a3, v6, v7);
  return 0LL;
}

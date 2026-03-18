/*
 * XREFs of UsbhPortResumeFailed @ 0x1C0050AA0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhWait @ 0x1C001E700 (UsbhWait.c)
 *     UsbhSS_SignalPdoWake @ 0x1C001F72C (UsbhSS_SignalPdoWake.c)
 *     UsbhSignalResumeEvent @ 0x1C001F7BC (UsbhSignalResumeEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
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
      (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids,
      v9);
  }
  Log(a1, 1024, 1884443425, a2, 0LL);
  UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 129LL, 0LL, 0, 0, 0, usbfile_busfunc_c, 2433, 0);
  UsbhWait(a1, 0xAu);
  UsbhSignalResumeEvent(a1, a2);
  UsbhSS_SignalPdoWake(a1, a3, v6, v7);
  return 0LL;
}

/*
 * XREFs of UsbhPortResumeComplete @ 0x1C0025570
 * Callers:
 *     <none>
 * Callees:
 *     UsbhWait @ 0x1C0009D88 (UsbhWait.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhSS_SignalPdoWake @ 0x1C002561C (UsbhSS_SignalPdoWake.c)
 *     UsbhSignalResumeEvent @ 0x1C00256AC (UsbhSignalResumeEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPortResumeComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // ebx
  _DWORD *v8; // rax

  v7 = 10;
  v8 = PdoExt(a3, a2, a3, a4);
  if ( (v8[700] & 0x80u) != 0 )
    v7 = *(unsigned __int8 *)(*((_QWORD *)v8 + 354) + 4LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      37,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      *(_WORD *)(a2 + 4));
  Log(a1, 1024, 1884443469, a2, 0LL);
  UsbhWait(a1, v7);
  UsbhSignalResumeEvent(a1, a2);
  UsbhSS_SignalPdoWake(a1, a3);
  return 0LL;
}

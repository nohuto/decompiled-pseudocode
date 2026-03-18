/*
 * XREFs of UsbhPortResumeComplete @ 0x1C0024F80
 * Callers:
 *     <none>
 * Callees:
 *     UsbhWait @ 0x1C000946C (UsbhWait.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhSS_SignalPdoWake @ 0x1C002502C (UsbhSS_SignalPdoWake.c)
 *     UsbhSignalResumeEvent @ 0x1C00250BC (UsbhSignalResumeEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPortResumeComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // ebx
  _DWORD *v8; // rax

  v7 = 10;
  v8 = PdoExt(a3, a2, a3, a4);
  if ( *((char *)v8 + 2792) < 0 )
    v7 = *(unsigned __int8 *)(*((_QWORD *)v8 + 353) + 4LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      37,
      (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids,
      *(_WORD *)(a2 + 4));
  Log(a1, 1024, 1884443469, a2, 0LL);
  UsbhWait(a1, v7);
  UsbhSignalResumeEvent(a1, a2);
  UsbhSS_SignalPdoWake(a1, a3);
  return 0LL;
}

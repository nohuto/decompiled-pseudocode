/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0004F28
 * Callers:
 *     MouseClassClose @ 0x1C0001000 (MouseClassClose.c)
 *     MouseClassCreate @ 0x1C0001110 (MouseClassCreate.c)
 *     MouseClassCleanup @ 0x1C00012B0 (MouseClassCleanup.c)
 *     MouseClassServiceCallback @ 0x1C0001670 (MouseClassServiceCallback.c)
 *     MouInitializeDataQueue @ 0x1C0002420 (MouInitializeDataQueue.c)
 *     MouseClassRead @ 0x1C00027F0 (MouseClassRead.c)
 *     MouseClassFlush @ 0x1C0004440 (MouseClassFlush.c)
 *     MouEnableDisablePort @ 0x1C000B000 (MouEnableDisablePort.c)
 *     MouseClassFindMorePorts @ 0x1C000B120 (MouseClassFindMorePorts.c)
 *     MouseClassDeviceControl @ 0x1C000B510 (MouseClassDeviceControl.c)
 *     MouDeterminePortsServiced @ 0x1C000B670 (MouDeterminePortsServiced.c)
 *     MouSendConnectRequest @ 0x1C000B780 (MouSendConnectRequest.c)
 *     MouCreateClassObject @ 0x1C000B850 (MouCreateClassObject.c)
 *     DriverEntry @ 0x1C000E350 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002AC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4)
{
  unsigned __int64 v7; // rdi
  int v9; // eax
  int v11; // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+30h] [rbp-18h]
  __int64 v13; // [rsp+38h] [rbp-10h]

  v7 = (unsigned __int64)a3 >> 16;
  v9 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v9, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, void *, _QWORD, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      &WPP_d47a8789a59c909c2434250cabe99dc1_Traceguids,
      a4,
      0LL);
  LOWORD(v11) = a4;
  return WppAutoLogTrace(a1, a2, a3, &WPP_d47a8789a59c909c2434250cabe99dc1_Traceguids, v11, 0LL, v12, v13);
}

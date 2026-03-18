/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C0010BF0
 * Callers:
 *     rimDereferenceDev @ 0x1C0010B64 (rimDereferenceDev.c)
 *     rimInputApc @ 0x1C007C160 (rimInputApc.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C007E814 (rimFindPausedDeviceAndCompleteRead.c)
 *     RIMOnPowerNotification @ 0x1C0085F40 (RIMOnPowerNotification.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0086A90 (rimProcessDeviceBufferAndStartRead.c)
 *     rimSignalReadComplete @ 0x1C0086B48 (rimSignalReadComplete.c)
 *     RIMOnPnpNotification @ 0x1C00C2F90 (RIMOnPnpNotification.c)
 *     RIMGetPnpActionBitsFromGuid @ 0x1C00CA65C (RIMGetPnpActionBitsFromGuid.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qq(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rbx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v12 = va_arg(va1, _QWORD);
  v8 = (unsigned __int64)a3 >> 16;
  v9 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v9, (a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= 3u )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      8LL,
      va1,
      8LL,
      0LL);
  LOWORD(v11) = a4;
  return WppAutoLogTrace(a1, 3LL, a3, a5, v11, (__int64 *)va, 8LL, va1);
}

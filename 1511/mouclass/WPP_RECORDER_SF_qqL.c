/*
 * XREFs of WPP_RECORDER_SF_qqL @ 0x1C0002120
 * Callers:
 *     MouseClassReadCopyData @ 0x1C00046A0 (MouseClassReadCopyData.c)
 *     MouseClassDeviceControl @ 0x1C000B510 (MouseClassDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002AC0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qqL(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, int a5, ...)
{
  unsigned __int64 v9; // rdi
  unsigned __int16 v10; // r8
  int v11; // eax
  char *v13; // rcx
  int v14; // [rsp+20h] [rbp-48h]
  __int64 v15; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v17; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  v9 = (unsigned __int64)a3 >> 16;
  v10 = a3 - 1;
  v11 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v9 + (v10 >> 5) + 1);
  if ( _bittest(&v11, v10 & 0x1F) )
  {
    v13 = (char *)WPP_GLOBAL_Control + 80 * v9;
    if ( (unsigned __int8)v13[41] >= a2 )
      ((void (__fastcall *)(_QWORD, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
        *((_QWORD *)v13 + 3),
        43LL,
        &WPP_d47a8789a59c909c2434250cabe99dc1_Traceguids,
        a4,
        (__int64 *)va,
        8LL,
        (__int64 *)va1,
        8LL,
        va2,
        4LL,
        0LL);
  }
  LOWORD(v14) = a4;
  return WppAutoLogTrace(
           a1,
           a2,
           a3,
           &WPP_d47a8789a59c909c2434250cabe99dc1_Traceguids,
           v14,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           va2,
           4LL,
           0LL);
}

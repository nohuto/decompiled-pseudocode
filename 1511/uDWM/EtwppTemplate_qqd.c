/*
 * XREFs of EtwppTemplate_qqd @ 0x18008219C
 * Callers:
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18001E3D0 (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 * Callees:
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 EtwppTemplate_qqd(__int64 a1, __int64 a2, ...)
{
  _QWORD v3[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v4; // [rsp+90h] [rbp+20h] BYREF
  va_list va; // [rsp+90h] [rbp+20h]
  __int64 v6; // [rsp+98h] [rbp+28h] BYREF
  va_list va1; // [rsp+98h] [rbp+28h]
  va_list va2; // [rsp+A0h] [rbp+30h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  va_copy((va_list)v3, va);
  v3[1] = 8LL;
  va_copy((va_list)&v3[2], va1);
  v3[3] = 8LL;
  va_copy((va_list)&v3[4], va2);
  v3[5] = 4LL;
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, &EtwTraceInfo_9002, 3LL, v3);
}

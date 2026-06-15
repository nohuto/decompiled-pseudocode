/*
 * XREFs of Template_pxx @ 0x18009CD94
 * Callers:
 *     ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x18009B1CC (-ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 *     ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x18009B688 (-ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 */

__int64 Template_pxx(__int64 a1, __int64 a2, ...)
{
  _QWORD v3[6]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v4; // [rsp+80h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+20h]
  __int64 v6; // [rsp+88h] [rbp+28h] BYREF
  va_list va1; // [rsp+88h] [rbp+28h]
  va_list va2; // [rsp+90h] [rbp+30h] BYREF

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
  v3[5] = 8LL;
  return ((__int64 (__fastcall *)(REGHANDLE, __int64, __int64, _QWORD *))EtwEventWrite)(
           Microsoft_Windows_AudioHandle,
           a2,
           3LL,
           v3);
}

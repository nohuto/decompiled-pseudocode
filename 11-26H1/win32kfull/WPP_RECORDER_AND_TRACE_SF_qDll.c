/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qDll @ 0x14022487C
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_qDll(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ...)
{
  _UNKNOWN **result; // rax
  int v11; // [rsp+20h] [rbp-68h]
  _DWORD v12[4]; // [rsp+70h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  __int64 v14; // [rsp+D0h] [rbp+48h] BYREF
  va_list va; // [rsp+D0h] [rbp+48h]
  __int64 v16; // [rsp+D8h] [rbp+50h]
  __int64 v17; // [rsp+E0h] [rbp+58h] BYREF
  va_list va1; // [rsp+E0h] [rbp+58h]
  va_list va2; // [rsp+E8h] [rbp+60h] BYREF

  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v14 = va_arg(va1, _QWORD);
  v16 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  result = &retaddr;
  v12[0] = 129;
  if ( a2 )
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, _DWORD *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_9e26a4bd73fc3626a41521304b4f7ca8_Traceguids,
                            10LL,
                            (__int64 *)va,
                            8LL,
                            v12,
                            4LL,
                            (__int64 *)va1,
                            4LL,
                            va2,
                            4LL,
                            0LL);
  if ( a3 )
  {
    LOWORD(v11) = 10;
    return (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, __int64, void *, int, __int64 *, __int64, _DWORD *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WppAutoLogTrace)(
                          a4,
                          4LL,
                          9LL,
                          &WPP_9e26a4bd73fc3626a41521304b4f7ca8_Traceguids,
                          v11,
                          (__int64 *)va,
                          8LL,
                          v12,
                          4LL,
                          (__int64 *)va1,
                          4LL,
                          va2,
                          4LL,
                          0LL);
  }
  return result;
}

/*
 * XREFs of LdrpLogEtwEventEx @ 0x1800CA0FC
 * Callers:
 *     LdrpLogDllStateEx2 @ 0x18002FABC (LdrpLogDllStateEx2.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     LdrpEventAddUnicodeString @ 0x1800C9CAC (LdrpEventAddUnicodeString.c)
 */

_WORD *__fastcall LdrpLogEtwEventEx(
        __int16 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *a5,
        unsigned __int16 *a6)
{
  unsigned int v8; // edi
  _WORD *result; // rax
  unsigned int v10; // [rsp+20h] [rbp-50h] BYREF
  __int16 v11; // [rsp+2Eh] [rbp-42h]
  __int64 v12; // [rsp+48h] [rbp-28h]
  __int16 v13; // [rsp+50h] [rbp-20h]
  _WORD *v14; // [rsp+58h] [rbp-18h]

  v14 = 0LL;
  v8 = *a6 + 4 + *a5;
  result = (_WORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
  v14 = result;
  if ( result )
  {
    v11 = a1;
    if ( a2 != -1 )
    {
      v12 = a2;
      v13 = 0;
      LdrpEventAddUnicodeString((__int64)a5, result, v8, &v10);
      LdrpEventAddUnicodeString((__int64)a6, &v14[(unsigned __int64)v10 >> 1], v8 - v10, &v10);
      NtTraceEvent();
      return (_WORD *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v14);
    }
  }
  return result;
}

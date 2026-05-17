/*
 * XREFs of RtlpInitializeStackTraceDatabase @ 0x1800F29C0
 * Callers:
 *     RtlControlStackTraceDataBase @ 0x1800F251C (RtlControlStackTraceDataBase.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x18004E4CC (RtlpEnumProcessHeaps.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     RtlStdDeleteStackDatabase @ 0x1800F25D0 (RtlStdDeleteStackDatabase.c)
 *     RtlStdInitializeStackDatabase @ 0x1800F2610 (RtlStdInitializeStackDatabase.c)
 */

__int64 __fastcall RtlpInitializeStackTraceDatabase(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v4; // ebx
  signed __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v6[4]; // [rsp+28h] [rbp-20h] BYREF

  if ( RtlpStackTraceDatabase )
    return 3221225994LL;
  v4 = RtlStdInitializeStackDatabase(a1, a2, a3, &v5);
  if ( v4 >= 0 )
  {
    if ( _InterlockedCompareExchange64(&RtlpStackTraceDatabase, v5, 0LL) )
    {
      RtlStdDeleteStackDatabase();
      return 3221225994LL;
    }
    if ( LdrInitState == 3 )
    {
      v6[0] = 1;
      v6[1] = 0x8000000;
      v6[2] = 0x8000000;
      RtlpEnumProcessHeaps((__int64)RtlpStackTraceDatabaseHeapEnum, (__int64)v6, 0);
    }
  }
  return (unsigned int)v4;
}

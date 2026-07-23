/*
 * XREFs of RtlpInitializeStackTraceDatabase @ 0x1800E4B50
 * Callers:
 *     RtlControlStackTraceDataBase @ 0x1800E46B0 (RtlControlStackTraceDataBase.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x180008524 (RtlpEnumProcessHeaps.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     RtlStdDeleteStackDatabase @ 0x1800E4760 (RtlStdDeleteStackDatabase.c)
 *     RtlStdInitializeStackDatabase @ 0x1800E47A0 (RtlStdInitializeStackDatabase.c)
 */

__int64 __fastcall RtlpInitializeStackTraceDatabase(void *a1, ULONG_PTR a2, ULONG_PTR a3)
{
  NTSTATUS v4; // ebx
  _QWORD *v5; // [rsp+20h] [rbp-28h] BYREF
  __m256i v6; // [rsp+28h] [rbp-20h] BYREF

  if ( RtlpStackTraceDatabase )
    return 3221225994LL;
  v4 = RtlStdInitializeStackDatabase(a1, a2, a3, &v5);
  if ( v4 >= 0 )
  {
    if ( _InterlockedCompareExchange64(&RtlpStackTraceDatabase, (signed __int64)v5, 0LL) )
    {
      RtlStdDeleteStackDatabase(v5);
      return 3221225994LL;
    }
    if ( LdrInitState == 3 )
    {
      v6.m256i_i64[0] = 0x800000000000001LL;
      v6.m256i_i32[2] = 0x8000000;
      RtlpEnumProcessHeaps(
        (PRTL_DYNAMIC_HASH_TABLE)RtlpStackTraceDatabaseHeapEnum,
        (_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *)&v6,
        0);
    }
  }
  return (unsigned int)v4;
}

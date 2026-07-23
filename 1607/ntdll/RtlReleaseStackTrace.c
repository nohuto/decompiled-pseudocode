/*
 * XREFs of RtlReleaseStackTrace @ 0x1800F25A0
 * Callers:
 *     RtlDeleteCriticalSection @ 0x1800523A0 (RtlDeleteCriticalSection.c)
 * Callees:
 *     RtlStdReleaseStackTrace @ 0x1800F28B0 (RtlStdReleaseStackTrace.c)
 */

__int64 __fastcall RtlReleaseStackTrace(__int64 a1)
{
  __int64 result; // rax

  if ( RtlpStackTraceDatabase )
    return RtlStdReleaseStackTrace(RtlpStackTraceDatabase, a1);
  return result;
}

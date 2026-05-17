/*
 * XREFs of RtlReleaseStackTrace @ 0x1800E9290
 * Callers:
 *     RtlDeleteCriticalSection @ 0x180059D20 (RtlDeleteCriticalSection.c)
 * Callees:
 *     RtlStdReleaseStackTrace @ 0x1800E95A0 (RtlStdReleaseStackTrace.c)
 */

__int64 __fastcall RtlReleaseStackTrace(__int64 a1)
{
  __int64 result; // rax

  if ( RtlpStackTraceDatabase )
    return RtlStdReleaseStackTrace(RtlpStackTraceDatabase, a1);
  return result;
}

/*
 * XREFs of RtlIdnToAscii @ 0x18005D910
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNameprepAsciiWorker @ 0x18005E190 (RtlpNameprepAsciiWorker.c)
 */

__int64 __fastcall RtlIdnToAscii(__int64 a1, __int64 a2)
{
  return RtlpNameprepAsciiWorker(a1, a2);
}

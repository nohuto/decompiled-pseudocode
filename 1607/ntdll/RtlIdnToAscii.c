/*
 * XREFs of RtlIdnToAscii @ 0x180055E60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNameprepAsciiWorker @ 0x180055E84 (RtlpNameprepAsciiWorker.c)
 */

__int64 __fastcall RtlIdnToAscii(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v6; // [rsp+28h] [rbp-10h]

  v6 = 1;
  return RtlpNameprepAsciiWorker(a1, a2, a3, a4, a5, v6);
}

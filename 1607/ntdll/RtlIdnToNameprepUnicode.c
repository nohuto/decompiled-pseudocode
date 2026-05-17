/*
 * XREFs of RtlIdnToNameprepUnicode @ 0x1800F0530
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNameprepAsciiWorker @ 0x180055E84 (RtlpNameprepAsciiWorker.c)
 */

__int64 __fastcall RtlIdnToNameprepUnicode(int a1, wchar_t *a2, __int64 a3, void *a4, int *a5)
{
  return RtlpNameprepAsciiWorker(a1, a2, a3, a4, a5, 0);
}

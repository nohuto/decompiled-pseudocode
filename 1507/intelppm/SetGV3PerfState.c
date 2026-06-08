/*
 * XREFs of SetGV3PerfState @ 0x1C0002730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SetGV3PerfState(__int64 a1, __int16 a2)
{
  unsigned __int64 v3; // [rsp+10h] [rbp+10h]

  v3 = __readmsr(0x199u);
  LOWORD(v3) = a2;
  __writemsr(0x199u, v3);
  return 0LL;
}

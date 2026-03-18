/*
 * XREFs of RIMIsPointInPenDeadzone @ 0x1C00D1E50
 * Callers:
 *     <none>
 * Callees:
 *     rimAbIsPointInPenDeadzone @ 0x1C00D0B1C (rimAbIsPointInPenDeadzone.c)
 */

__int64 __fastcall RIMIsPointInPenDeadzone(__int128 *a1, __int64 a2, __int64 a3)
{
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  return rimAbIsPointInPenDeadzone(&v4, a2, a3);
}

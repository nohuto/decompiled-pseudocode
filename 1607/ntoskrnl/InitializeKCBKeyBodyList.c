/*
 * XREFs of InitializeKCBKeyBodyList @ 0x1405FF9C8
 * Callers:
 *     CmpCloneToUnbackedKcb @ 0x1401B484C (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializeKCBKeyBodyList(_QWORD *a1)
{
  __int64 result; // rax

  a1[15] = a1 + 14;
  a1[14] = a1 + 14;
  result = 0LL;
  a1[16] = 0LL;
  a1[17] = 0LL;
  a1[18] = 0LL;
  a1[19] = 0LL;
  return result;
}

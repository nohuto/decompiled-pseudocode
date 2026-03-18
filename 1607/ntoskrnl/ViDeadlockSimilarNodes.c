/*
 * XREFs of ViDeadlockSimilarNodes @ 0x140715D58
 * Callers:
 *     ViDeadlockCheckDuplicatesAmongChildren @ 0x140714FA8 (ViDeadlockCheckDuplicatesAmongChildren.c)
 *     ViDeadlockCheckDuplicatesAmongRoots @ 0x140715024 (ViDeadlockCheckDuplicatesAmongRoots.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ViDeadlockSimilarNodes(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(a1 + 56) == *(_QWORD *)(a2 + 56) && ((*(_BYTE *)(a2 + 72) ^ *(_BYTE *)(a1 + 72)) & 2) == 0;
}

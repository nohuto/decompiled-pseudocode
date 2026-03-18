/*
 * XREFs of FilterEval @ 0x14043E8D8
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x14043E724 (PiDqQueryEvaluateFilter.c)
 *     ValidFilter @ 0x1404D8FD8 (ValidFilter.c)
 *     ConstraintEval @ 0x140547464 (ConstraintEval.c)
 * Callees:
 *     FilterEvalStrict @ 0x14043F314 (FilterEvalStrict.c)
 *     FilterEvalImpliedAnd @ 0x1404405B4 (FilterEvalImpliedAnd.c)
 */

__int64 __fastcall FilterEval(int a1, int a2, int a3, _DWORD *a4, __int64 a5)
{
  if ( !a3 )
    return 3221225485LL;
  if ( (*a4 & 0xFF00000) != 0 )
    return FilterEvalStrict(a1, a2, a3, (_DWORD)a4, a5);
  return FilterEvalImpliedAnd(a1, a2, a3, (_DWORD)a4, a5);
}

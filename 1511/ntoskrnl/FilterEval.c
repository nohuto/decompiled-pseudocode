/*
 * XREFs of FilterEval @ 0x140441C20
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x140441A6C (PiDqQueryEvaluateFilter.c)
 *     ValidFilter @ 0x14045C870 (ValidFilter.c)
 *     ConstraintEval @ 0x14045F6D0 (ConstraintEval.c)
 * Callees:
 *     FilterEvalStrict @ 0x140440EDC (FilterEvalStrict.c)
 *     FilterEvalImpliedAnd @ 0x1404B2E74 (FilterEvalImpliedAnd.c)
 */

__int64 __fastcall FilterEval(
        __int64 (__fastcall *a1)(__int64, unsigned int *, unsigned int *, unsigned int *, __int64 *),
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        _DWORD *a5)
{
  if ( !a3 )
    return 3221225485LL;
  if ( (*a4 & 0xFF00000) != 0 )
    return FilterEvalStrict(a1, a2, a3, a4, a5);
  return FilterEvalImpliedAnd((_DWORD)a1, a2, a3, (_DWORD)a4, (__int64)a5);
}

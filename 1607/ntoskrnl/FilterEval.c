/*
 * XREFs of FilterEval @ 0x1404E5754
 * Callers:
 *     ConstraintEval @ 0x140489ED0 (ConstraintEval.c)
 *     PiDqQueryEvaluateFilter @ 0x1404E55A4 (PiDqQueryEvaluateFilter.c)
 *     ValidFilter @ 0x140511A74 (ValidFilter.c)
 * Callees:
 *     FilterEvalStrict @ 0x1404E4F24 (FilterEvalStrict.c)
 *     FilterEvalImpliedAnd @ 0x1404E8884 (FilterEvalImpliedAnd.c)
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

/*
 * XREFs of PoFxQueryCurrentComponentPerfState @ 0x140202078
 * Callers:
 *     <none>
 * Callees:
 *     PopFxQueryCurrentComponentPerfState @ 0x140203278 (PopFxQueryCurrentComponentPerfState.c)
 */

__int64 __fastcall PoFxQueryCurrentComponentPerfState(__int64 a1, int a2, unsigned int a3, int a4, __int64 a5)
{
  __int64 v6; // rdx

  if ( a2 )
    return 3221225485LL;
  if ( a3 >= *(_DWORD *)(a1 + 620) )
    return 3221225485LL;
  _mm_lfence();
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8LL * a3);
  if ( !*(_QWORD *)(v6 + 248) )
    return 3221225485LL;
  PopFxQueryCurrentComponentPerfState(a1, v6, a4, 0, a5, 0LL);
  return 0LL;
}

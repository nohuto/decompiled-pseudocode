/*
 * XREFs of ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C0063454
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00634F0 (xxxEndDeferWindowPosEx.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0066D0C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C00836EC (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 * Callees:
 *     <none>
 */

struct tagWINDOWPOS *__fastcall FindValidWindowPos(struct tagSMWP *a1)
{
  __int64 v1; // r8
  int v2; // eax
  _QWORD *v3; // r9
  __int64 v4; // rdx
  _QWORD *i; // rcx

  v1 = *((int *)a1 + 7);
  v2 = 0;
  if ( (int)v1 <= 0 )
    return 0LL;
  v3 = (_QWORD *)*((_QWORD *)a1 + 5);
  v4 = 0LL;
  for ( i = v3; !*i; i += 21 )
  {
    ++v2;
    if ( ++v4 >= v1 )
      return 0LL;
  }
  return (struct tagWINDOWPOS *)&v3[21 * v2];
}

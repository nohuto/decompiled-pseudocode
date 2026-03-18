/*
 * XREFs of ?FindById@?$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z @ 0x1C000D168
 * Callers:
 *     ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x1C00C48B8 (-AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z.c)
 *     DmmSetViewState @ 0x1C00C50C0 (DmmSetViewState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IndexedSet<DMMVIDEOPRESENTSOURCE>::FindById(__int64 a1, int a2)
{
  _QWORD *v2; // rax
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = (_QWORD *)(a1 + 24);
  if ( (_QWORD *)*v2 == v2 )
    return 0LL;
  for ( result = *v2 - 8LL; result; result = v5 == a1 + 24 ? 0LL : v5 - 8 )
  {
    if ( *(_DWORD *)(result + 24) == a2 )
      break;
    v5 = *(_QWORD *)(result + 8);
  }
  return result;
}

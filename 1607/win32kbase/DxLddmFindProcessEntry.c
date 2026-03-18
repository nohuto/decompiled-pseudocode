/*
 * XREFs of DxLddmFindProcessEntry @ 0x1C0065B50
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00659E0 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DxLddmFindProcessEntry(_QWORD *a1, int a2)
{
  _QWORD *result; // rax

  result = a1;
  if ( (_QWORD *)*a1 == a1 )
    return 0LL;
  while ( 1 )
  {
    result = (_QWORD *)*result;
    if ( *((_DWORD *)result + 4) == a2 )
      break;
    if ( (_QWORD *)*result == a1 )
      return 0LL;
  }
  return result;
}

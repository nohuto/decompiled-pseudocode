/*
 * XREFs of RIMInsertInListByRank @ 0x1C00C4DE4
 * Callers:
 *     RIMAddToActiveDevices @ 0x1C00C49C4 (RIMAddToActiveDevices.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RIMInsertInListByRank(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *result; // rax

  v2 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 == a1 )
  {
LABEL_4:
    result = (_QWORD *)a1[1];
    *a2 = a1;
    a2[1] = result;
    if ( (_QWORD *)*result != a1 )
      __fastfail(3u);
    *result = a2;
    a1[1] = a2;
  }
  else
  {
    while ( *(_DWORD *)(*(v2 - 1) + 1492LL) > *(_DWORD *)(*(a2 - 1) + 1492LL) )
    {
      v2 = (_QWORD *)*v2;
      if ( v2 == a1 )
        goto LABEL_4;
    }
    *a2 = v2;
    *(_QWORD *)v2[1] = a2;
    result = (_QWORD *)v2[1];
    a2[1] = result;
    v2[1] = a2;
  }
  return result;
}

/*
 * XREFs of RtlEndEnumerationHashTable @ 0x180086340
 * Callers:
 *     RtlEndWeakEnumerationHashTable @ 0x1800EB3C0 (RtlEndWeakEnumerationHashTable.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlEndEnumerationHashTable(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // r8

  --*(_DWORD *)(a1 + 28);
  result = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 != a2 )
  {
    v3 = *(_QWORD **)(a2 + 8);
    if ( result[1] != a2 || *v3 != a2 )
      __fastfail(3u);
    *v3 = result;
    result[1] = v3;
    result = *(_QWORD **)(a2 + 24);
    if ( (_QWORD *)*result == result )
      --*(_DWORD *)(a1 + 24);
  }
  *(_QWORD *)(a2 + 24) = 0LL;
  return result;
}

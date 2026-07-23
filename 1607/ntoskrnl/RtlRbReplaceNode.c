/*
 * XREFs of RtlRbReplaceNode @ 0x1400A5B3C
 * Callers:
 *     KiAbEntryRemoveFromTree @ 0x140030BB0 (KiAbEntryRemoveFromTree.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlRbReplaceNode(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rcx
  _QWORD *result; // rax

  *(_OWORD *)a3 = *(_OWORD *)a2;
  *(_QWORD *)(a3 + 16) = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)a3 )
  {
    *(_QWORD *)(*(_QWORD *)a3 + 16LL) = a3 | *(_DWORD *)(*(_QWORD *)a3 + 16LL) & 3;
  }
  else if ( a1[1] == a2 )
  {
    a1[1] = a3;
  }
  v4 = *(_QWORD *)(a3 + 8);
  if ( v4 )
    *(_QWORD *)(v4 + 16) = a3 | *(_DWORD *)(v4 + 16) & 3;
  result = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFFCuLL);
  if ( result )
  {
    if ( *result == a2 )
      *result = a3;
    else
      result[1] = a3;
  }
  else
  {
    *a1 = a3;
  }
  return result;
}

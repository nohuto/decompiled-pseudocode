/*
 * XREFs of RtlGetNextEntryHashTable @ 0x180083690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlGetNextEntryHashTable(__int64 a1, __int64 a2)
{
  __int64 *v2; // r8
  _QWORD *result; // rax

  v2 = **(__int64 ***)(a2 + 8);
  result = (_QWORD *)*v2;
  if ( *v2 == *(_QWORD *)a2 )
    return 0LL;
  if ( *(_DWORD *)(a1 + 28) )
  {
    do
    {
      result = (_QWORD *)*v2;
      if ( *(_QWORD *)(*v2 + 16) )
        break;
      v2 = (__int64 *)*v2;
    }
    while ( *result != *(_QWORD *)a2 );
  }
  if ( result[2] != *(_QWORD *)(a2 + 16) )
    return 0LL;
  *(_QWORD *)(a2 + 8) = v2;
  return result;
}

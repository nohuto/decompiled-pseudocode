/*
 * XREFs of KeFirstGroupAffinityEx @ 0x1402012C8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFirstGroupAffinityEx(_QWORD *a1, _WORD *a2)
{
  unsigned __int16 v2; // r8
  __int64 result; // rax

  v2 = 0;
  if ( !*a2 )
    return 3221226021LL;
  while ( !*(_QWORD *)&a2[4 * v2 + 4] )
  {
    if ( ++v2 >= *a2 )
      return 3221226021LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  *((_WORD *)a1 + 4) = v2;
  result = 0LL;
  *a1 = *(_QWORD *)&a2[4 * v2 + 4];
  return result;
}

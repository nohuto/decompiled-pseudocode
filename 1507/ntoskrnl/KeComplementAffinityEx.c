/*
 * XREFs of KeComplementAffinityEx @ 0x1402011C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeComplementAffinityEx(__int64 a1, unsigned __int16 *a2)
{
  unsigned int i; // r9d
  __int64 v3; // r8
  __int64 result; // rax

  for ( i = 0; i < *a2; *(_QWORD *)(a1 + 8 * v3 + 8) = ~*(_QWORD *)&a2[4 * v3 + 4] )
    v3 = i++;
  while ( i < a2[1] )
    *(_QWORD *)(a1 + 8LL * i++ + 8) = -1LL;
  *(_DWORD *)(a1 + 4) = 0;
  *(_WORD *)a1 = a2[1];
  result = a2[1];
  *(_WORD *)(a1 + 2) = result;
  return result;
}

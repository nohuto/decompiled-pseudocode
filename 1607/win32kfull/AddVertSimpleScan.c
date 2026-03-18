/*
 * XREFs of AddVertSimpleScan @ 0x1C00C0E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AddVertSimpleScan(int a1, int a2)
{
  __int16 v2; // r9
  __int64 v3; // rdx
  unsigned __int64 v4; // r10
  __int16 *v5; // r8
  __int16 *i; // rax

  v2 = a2;
  if ( a1 < dword_1C0329308 )
    return 4866LL;
  if ( a1 >= dword_1C032930C )
    return 4866LL;
  if ( a2 < dword_1C0329314 )
    return 4866LL;
  if ( a2 > dword_1C0329310 )
    return 4866LL;
  v3 = a1 - dword_1C0329308;
  v4 = *(_QWORD *)(qword_1C03293A0 + 8 * v3);
  v5 = *(__int16 **)(qword_1C03293A8 + 8 * v3);
  *(_QWORD *)(qword_1C03293A8 + 8 * v3) = v5 + 1;
  if ( (unsigned __int64)(v5 + 1) > *(_QWORD *)(qword_1C03293B0 + 8 * v3) )
    return 4866LL;
  for ( i = v5 - 1; (unsigned __int64)i >= v4 && *i > v2; --i )
    *v5-- = *i;
  *v5 = v2;
  return 0LL;
}

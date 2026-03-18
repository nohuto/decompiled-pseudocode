/*
 * XREFs of AddVertSimpleScan @ 0x1C00D8CD0
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
  if ( a1 < dword_1C0322EE8 )
    return 4866LL;
  if ( a1 >= dword_1C0322EEC )
    return 4866LL;
  if ( a2 < dword_1C0322EF4 )
    return 4866LL;
  if ( a2 > dword_1C0322EF0 )
    return 4866LL;
  v3 = a1 - dword_1C0322EE8;
  v4 = *(_QWORD *)(qword_1C0322F80 + 8 * v3);
  v5 = *(__int16 **)(qword_1C0322F88 + 8 * v3);
  *(_QWORD *)(qword_1C0322F88 + 8 * v3) = v5 + 1;
  if ( (unsigned __int64)(v5 + 1) > *(_QWORD *)(qword_1C0322F90 + 8 * v3) )
    return 4866LL;
  for ( i = v5 - 1; (unsigned __int64)i >= v4 && *i > v2; --i )
    *v5-- = *i;
  *v5 = v2;
  return 0LL;
}

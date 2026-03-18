/*
 * XREFs of AddVertSmartScan @ 0x1C00D9A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AddVertSmartScan(int a1, int a2)
{
  __int16 v2; // r9
  __int64 v3; // rdx
  unsigned __int64 v4; // r10
  __int64 v5; // r8
  _DWORD *i; // rcx
  __int16 v7; // ax

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
  v5 = *(_QWORD *)(qword_1C0322F88 + 8 * v3);
  *(_QWORD *)(qword_1C0322F88 + 8 * v3) = v5 + 4;
  if ( (unsigned __int64)(v5 + 4) > *(_QWORD *)(qword_1C0322F90 + 8 * v3) )
    return 4866LL;
  for ( i = (_DWORD *)(v5 - 4); (unsigned __int64)i >= v4 && *(__int16 *)i > v2; --i )
  {
    *(_DWORD *)v5 = *i;
    v5 -= 4LL;
  }
  v7 = word_1C0322FF0;
  *(_WORD *)v5 = v2;
  *(_WORD *)(v5 + 2) = v7;
  return 0LL;
}

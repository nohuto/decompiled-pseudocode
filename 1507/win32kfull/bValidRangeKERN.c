/*
 * XREFs of bValidRangeKERN @ 0x1C015985C
 * Callers:
 *     vFill_IFIMETRICS @ 0x1C0157904 (vFill_IFIMETRICS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bValidRangeKERN(__int64 a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // r9d
  unsigned int v5; // r11d
  __int64 v6; // r10
  __int16 v7; // dx
  unsigned __int16 v8; // cx
  unsigned __int16 v10; // cx

  v3 = 0;
  v5 = 4;
  *a3 = 0;
  if ( a2 < 4 )
    return 0LL;
  v6 = a1 + 4;
  v7 = __ROR2__(*(_WORD *)(a1 + 2), 8);
  if ( !v7 )
    return 0LL;
  while ( (unsigned __int64)v5 + 4 <= a2 )
  {
    if ( !*(_BYTE *)(v6 + 4) )
      goto LABEL_5;
    v10 = __ROR2__(*(_WORD *)(v6 + 2), 8);
    v6 += v10;
    v5 += v10;
    if ( !--v7 )
      return 0LL;
  }
  v7 = 0;
LABEL_5:
  if ( !v7 || (unsigned __int64)v5 + 14 > a2 )
    return 0LL;
  v8 = __ROR2__(*(_WORD *)(v6 + 6), 8);
  *a3 = v8;
  LOBYTE(v3) = v5 + 2 * ((unsigned __int64)(2 * (unsigned int)v8) + 8) <= a2;
  return v3;
}

/*
 * XREFs of ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C0204A88
 * Callers:
 *     xxxArrangeWindow @ 0x1C020B504 (xxxArrangeWindow.c)
 *     xxxEndSetWindowArrangement @ 0x1C020BEC4 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ArrangeActionCompatibleWithStyle(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  bool v4; // zf

  v2 = 1;
  if ( *(char *)(a1 + 48) < 0 )
    return 0LL;
  if ( a2 )
  {
    if ( a2 != 1 )
    {
      if ( a2 == 2 )
      {
        if ( (*(_BYTE *)(a1 + 55) & 1) == 0 || (*(_BYTE *)(a1 + 54) & 4) != 0 )
          return v2;
      }
      else if ( a2 <= 2
             || a2 > 5
             || (*(_BYTE *)(a1 + 54) & 4) != 0 && *(_WORD *)(*(_QWORD *)(a1 + 152) + 8LL) != *(_WORD *)(gpsi + 884LL) )
      {
        return v2;
      }
      return 0;
    }
    if ( (*(_BYTE *)(a1 + 54) & 2) == 0 )
      return 0;
    v4 = (*(_BYTE *)(a1 + 55) & 0x20) == 0;
  }
  else
  {
    if ( *(_WORD *)(*(_QWORD *)(a1 + 152) + 8LL) == *(_WORD *)(gpsi + 884LL) || (*(_BYTE *)(a1 + 54) & 1) == 0 )
      return 0;
    v4 = (*(_BYTE *)(a1 + 55) & 1) == 0;
  }
  if ( !v4 )
    return 0;
  return v2;
}

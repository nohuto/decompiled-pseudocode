/*
 * XREFs of ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C0204E08
 * Callers:
 *     xxxArrangeWindow @ 0x1C020BBA4 (xxxArrangeWindow.c)
 *     xxxEndSetWindowArrangement @ 0x1C020C568 (xxxEndSetWindowArrangement.c)
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
  switch ( a2 )
  {
    case 0:
      if ( *(_WORD *)(*(_QWORD *)(a1 + 152) + 8LL) == *(_WORD *)(gpsi + 884LL) || (*(_BYTE *)(a1 + 54) & 1) == 0 )
        return 0;
      v4 = (*(_BYTE *)(a1 + 55) & 1) == 0;
      goto LABEL_21;
    case 1:
      if ( (*(_BYTE *)(a1 + 54) & 2) == 0 )
        return 0;
      v4 = (*(_BYTE *)(a1 + 55) & 0x20) == 0;
LABEL_21:
      if ( v4 )
        return v2;
      return 0;
    case 2:
      if ( (*(_BYTE *)(a1 + 55) & 1) == 0 || (*(_BYTE *)(a1 + 54) & 4) != 0 )
        return v2;
      return 0;
  }
  if ( a2 > 2 )
  {
    if ( a2 > 5 )
    {
      if ( a2 <= 7 )
        return *(_WORD *)(*(_QWORD *)(a1 + 152) + 8LL) != *(_WORD *)(gpsi + 884LL);
      return v2;
    }
    if ( (*(_BYTE *)(a1 + 54) & 4) != 0 && *(_WORD *)(*(_QWORD *)(a1 + 152) + 8LL) != *(_WORD *)(gpsi + 884LL) )
      return v2;
    return 0;
  }
  return v2;
}

/*
 * XREFs of MNFindNextValidItem @ 0x1C023D958
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxMNKeyDown @ 0x1C0216CA8 (xxxMNKeyDown.c)
 *     MNFindItemInColumn @ 0x1C023D864 (MNFindItemInColumn.c)
 *     xxxMNFindChar @ 0x1C023D9FC (xxxMNFindChar.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MNFindNextValidItem(__int64 a1, int a2, int a3, char a4)
{
  int v4; // r10d
  int v6; // r11d
  __int64 v7; // rcx

  v4 = *(_DWORD *)(a1 + 52);
  if ( a2 >= 0 || a3 <= 0 )
  {
    if ( a2 < v4 || a3 >= 0 )
    {
      v6 = a2;
    }
    else
    {
      v6 = -1;
      a2 = -1;
    }
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 52);
    a2 = v6;
  }
  if ( !v4 )
    return 0xFFFFFFFFLL;
  if ( a2 || v4 != 1 || a3 <= 0 )
  {
LABEL_15:
    while ( 1 )
    {
      a2 += a3;
      if ( a2 == v6 || !a3 )
        return 0xFFFFFFFFLL;
      if ( a2 < v4 )
      {
        if ( a2 >= 0 )
          goto LABEL_13;
        a2 = v4;
      }
      else
      {
        a2 = -1;
      }
    }
  }
  a3 = 0;
LABEL_13:
  v7 = *(_QWORD *)(a1 + 80) + 152LL * a2;
  if ( (*(_DWORD *)v7 & 0x800) != 0 )
  {
    if ( (a4 & 1) == 0 )
      goto LABEL_15;
  }
  else if ( (unsigned __int64)(*(_QWORD *)(v7 + 104) - 2LL) <= 5 )
  {
    goto LABEL_15;
  }
  return (unsigned int)a2;
}

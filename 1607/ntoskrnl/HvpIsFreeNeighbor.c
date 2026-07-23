/*
 * XREFs of HvpIsFreeNeighbor @ 0x14040078C
 * Callers:
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 * Callees:
 *     HvpDelistFreeCell @ 0x140400838 (HvpDelistFreeCell.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 */

char __fastcall HvpIsFreeNeighbor(ULONG_PTR BugCheckParameter2, _DWORD *a2, int *a3, int **a4, int a5)
{
  __int64 v5; // rbx
  int *i; // rbx
  __int64 v9; // rax

  v5 = *a3;
  *a4 = 0LL;
  i = (int *)((char *)a3 + v5);
  if ( (unsigned int)((_DWORD)i - (_DWORD)a2) < a2[2] && *i > 0 )
  {
    *a4 = i;
  }
  else
  {
    for ( i = a2 + 8; ; i = (int *)((char *)i + v9) )
    {
      while ( 1 )
      {
        if ( i >= a3 )
          return 0;
        v9 = *i;
        if ( (int)v9 > 0 )
          break;
        i = (int *)((char *)i - v9);
      }
      if ( (int *)((char *)i + v9) == a3 )
        break;
    }
    *a4 = i;
    if ( a5 != 1
      && !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, (unsigned int)((_DWORD)i + a2[1] - (_DWORD)a2)) )
    {
      return 0;
    }
  }
  HvpDelistFreeCell(BugCheckParameter2, (unsigned int)((_DWORD)i + (a5 << 31) + a2[1] - (_DWORD)a2));
  return 1;
}

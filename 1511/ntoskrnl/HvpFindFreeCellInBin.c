/*
 * XREFs of HvpFindFreeCellInBin @ 0x140479C10
 * Callers:
 *     HvpFindFreeCell @ 0x140479CB0 (HvpFindFreeCell.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     HvpGetHCell @ 0x140479BEC (HvpGetHCell.c)
 */

__int64 __fastcall HvpFindFreeCellInBin(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        int a3,
        _DWORD *a4,
        unsigned int *a5,
        __int64 *a6)
{
  unsigned int *v6; // r10
  unsigned __int64 v7; // r11
  unsigned int v9; // eax
  unsigned int v11; // ebx

  v6 = a4 + 8;
  v7 = (unsigned __int64)a4 + (unsigned int)a4[2];
  if ( (unsigned __int64)(a4 + 8) >= v7 )
    return 3221226021LL;
  while ( 1 )
  {
    v9 = *v6;
    if ( (*v6 & 0x80000000) == 0 )
      break;
    v9 = -v9;
LABEL_4:
    v6 = (unsigned int *)((char *)v6 + v9);
    if ( (unsigned __int64)v6 >= v7 )
      return 3221226021LL;
  }
  v11 = a4[1] + (_DWORD)v6 + (a3 << 31) - (_DWORD)a4;
  if ( a2 > v9 )
    goto LABEL_4;
  if ( !HvpMarkCellDirty(BugCheckParameter2, v11, 1) )
    return 3221225853LL;
  *a6 = HvpGetHCell(BugCheckParameter2);
  *a5 = v11;
  return 0LL;
}

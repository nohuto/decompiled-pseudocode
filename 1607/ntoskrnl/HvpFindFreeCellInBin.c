/*
 * XREFs of HvpFindFreeCellInBin @ 0x140401050
 * Callers:
 *     HvpFindFreeCell @ 0x140400E10 (HvpFindFreeCell.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     HvpGetHCell @ 0x1404F85D0 (HvpGetHCell.c)
 */

__int64 __fastcall HvpFindFreeCellInBin(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        int a3,
        _DWORD *a4,
        unsigned int *a5,
        _QWORD *a6,
        __int64 a7)
{
  unsigned int *i; // r10
  __int64 v9; // rax
  unsigned int v10; // ebx

  for ( i = a4 + 8; ; i = (unsigned int *)((char *)i + v9) )
  {
    if ( i >= (_DWORD *)((char *)a4 + (unsigned int)a4[2]) )
      return 3221226021LL;
    v9 = *i;
    if ( (int)v9 < 0 )
    {
      v9 = (unsigned int)-(int)v9;
      continue;
    }
    v10 = a4[1] + (_DWORD)i + (a3 << 31) - (_DWORD)a4;
    if ( a2 <= (unsigned int)v9 )
      break;
  }
  if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, v10) )
    return 3221225853LL;
  *a6 = HvpGetHCell(BugCheckParameter2, v10, a7);
  *a5 = v10;
  return 0LL;
}

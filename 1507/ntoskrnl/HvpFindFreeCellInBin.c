/*
 * XREFs of HvpFindFreeCellInBin @ 0x14049FB90
 * Callers:
 *     HvpFindFreeCell @ 0x14049EF7C (HvpFindFreeCell.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     HvpGetHCell @ 0x14049FC30 (HvpGetHCell.c)
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
  unsigned int *v7; // r10
  unsigned __int64 v8; // r11
  unsigned int v10; // eax
  unsigned int v12; // ebx

  v7 = a4 + 8;
  v8 = (unsigned __int64)a4 + (unsigned int)a4[2];
  if ( (unsigned __int64)(a4 + 8) >= v8 )
    return 3221226021LL;
  while ( 1 )
  {
    v10 = *v7;
    if ( (*v7 & 0x80000000) == 0 )
      break;
    v10 = -v10;
LABEL_4:
    v7 = (unsigned int *)((char *)v7 + v10);
    if ( (unsigned __int64)v7 >= v8 )
      return 3221226021LL;
  }
  v12 = a4[1] + (_DWORD)v7 + (a3 << 31) - (_DWORD)a4;
  if ( a2 > v10 )
    goto LABEL_4;
  if ( !HvpMarkCellDirty(BugCheckParameter2, v12, 1, 0LL) )
    return 3221225853LL;
  *a6 = HvpGetHCell(BugCheckParameter2, v12, a7);
  *a5 = v12;
  return 0LL;
}

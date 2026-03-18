/*
 * XREFs of ClrFTrueVis @ 0x1C008101C
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     ClrFTrueVis @ 0x1C008101C (ClrFTrueVis.c)
 *     SetVisible @ 0x1C0081FA0 (SetVisible.c)
 * Callees:
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     ClrFTrueVis @ 0x1C008101C (ClrFTrueVis.c)
 *     DecPaintCount @ 0x1C00EB508 (DecPaintCount.c)
 */

__int64 __fastcall ClrFTrueVis(__int64 a1)
{
  __int64 v2; // rcx
  __int64 i; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 160);
  if ( v2 || (*(_BYTE *)(a1 + 41) & 0x10) != 0 )
  {
    DeleteMaybeSpecialRgn(v2);
    SetOrClrWF(0, (_DWORD *)a1, 0x110u, 1);
    *(_QWORD *)(a1 + 160) = 0LL;
    result = DecPaintCount(a1);
  }
  for ( i = *(_QWORD *)(a1 + 96); i; i = *(_QWORD *)(i + 72) )
  {
    if ( (*(_BYTE *)(i + 55) & 0x10) != 0 )
      result = ClrFTrueVis(i);
  }
  return result;
}

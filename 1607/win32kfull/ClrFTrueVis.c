/*
 * XREFs of ClrFTrueVis @ 0x1C0118F3C
 * Callers:
 *     SetVisible @ 0x1C00A0D80 (SetVisible.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     ClrFTrueVis @ 0x1C0118F3C (ClrFTrueVis.c)
 * Callees:
 *     DecPaintCount @ 0x1C005CB80 (DecPaintCount.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     ClrFTrueVis @ 0x1C0118F3C (ClrFTrueVis.c)
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

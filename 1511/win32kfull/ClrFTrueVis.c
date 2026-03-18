/*
 * XREFs of ClrFTrueVis @ 0x1C007D45C
 * Callers:
 *     SetVisible @ 0x1C007A120 (SetVisible.c)
 *     ClrFTrueVis @ 0x1C007D45C (ClrFTrueVis.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 * Callees:
 *     ClrFTrueVis @ 0x1C007D45C (ClrFTrueVis.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     DecPaintCount @ 0x1C00F15F4 (DecPaintCount.c)
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
    SetOrClrWF(0LL, a1, 272LL, 1LL);
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

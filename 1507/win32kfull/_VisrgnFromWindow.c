/*
 * XREFs of _VisrgnFromWindow @ 0x1C01E7970
 * Callers:
 *     UserVisrgnFromHwnd @ 0x1C01E78A4 (UserVisrgnFromHwnd.c)
 * Callees:
 *     CalcVisRgn @ 0x1C005D6D0 (CalcVisRgn.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     _GhostWindowFromHungWindow @ 0x1C00873C0 (_GhostWindowFromHungWindow.c)
 */

__int64 __fastcall VisrgnFromWindow(__int64 a1, int a2, HRGN *a3)
{
  unsigned __int8 Prop; // al
  unsigned __int8 v7; // r8
  unsigned int v9; // r9d

  if ( (*(_DWORD *)(a1 + 288) & 0x20) != 0 && !GhostWindowFromHungWindow(a1) )
  {
    Prop = GetProp(a1, (unsigned __int16)atomDispAffinity, 1LL);
    if ( (Prop & v7) == 0 )
      goto LABEL_4;
  }
  if ( (*(_BYTE *)(a1 + 50) & 0x20) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 55) & 0x10) != 0 )
    {
LABEL_4:
      SetRectRgnIndirect(*a3, a1 + 112);
      return 1LL;
    }
    return 0LL;
  }
  else
  {
    v9 = a2 != 0 ? 17409 : 134218753;
    if ( (*(_BYTE *)(a1 + 55) & 4) != 0 )
      v9 |= 0x10u;
    return CalcVisRgn(a3, a1, (struct tagWND *)a1, v9);
  }
}

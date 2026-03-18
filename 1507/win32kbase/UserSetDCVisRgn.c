/*
 * XREFs of UserSetDCVisRgn @ 0x1C0044440
 * Callers:
 *     <none>
 * Callees:
 *     IsCalcVisRgnSupported_0 @ 0x1C0002420 (IsCalcVisRgnSupported_0.c)
 *     CalcVisRgn_0 @ 0x1C0002428 (CalcVisRgn_0.c)
 *     IsGetStyleWindowSupported_0 @ 0x1C0002430 (IsGetStyleWindowSupported_0.c)
 *     GetStyleWindow_0 @ 0x1C0002438 (GetStyleWindow_0.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     SetRectRgnIndirect @ 0x1C0041D40 (SetRectRgnIndirect.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00433D0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreDeleteObject @ 0x1C00446F0 (GreDeleteObject.c)
 *     CreateEmptyRgnPublic @ 0x1C0045250 (CreateEmptyRgnPublic.c)
 *     GreOffsetRgn @ 0x1C0054700 (GreOffsetRgn.c)
 */

void __fastcall UserSetDCVisRgn(struct tagDCE *a1)
{
  __int64 v2; // r9
  struct HOBJ__ *EmptyRgnPublic; // rdi
  int v4; // esi
  int v5; // eax
  int v6; // r9d

  if ( (int)IsCalcVisRgnSupported_0() >= 0 && (unsigned int)CalcVisRgn_0() )
    *((_DWORD *)a1 + 16) &= ~0x10000000u;
  else
    *((_DWORD *)a1 + 16) |= 0x10000000u;
  if ( *((_QWORD *)a1 + 6) > 2uLL && (int)IsGetStyleWindowSupported_0() >= 0 && GetStyleWindow_0() )
  {
    EmptyRgnPublic = (struct HOBJ__ *)CreateEmptyRgnPublic();
    GreCombineRgn((HRGN)EmptyRgnPublic, *((HRGN *)a1 + 6), 0LL, 5);
    GreOffsetRgn((HRGN)EmptyRgnPublic);
    v4 = 1;
  }
  else
  {
    EmptyRgnPublic = (struct HOBJ__ *)*((_QWORD *)a1 + 6);
    v4 = 0;
  }
  v5 = *((_DWORD *)a1 + 16);
  if ( (v5 & 0x80u) != 0 )
  {
    if ( EmptyRgnPublic )
    {
      v6 = 1;
LABEL_13:
      GreCombineRgn(0LL, 0LL, (HRGN)EmptyRgnPublic, v6);
      goto LABEL_8;
    }
  }
  else
  {
    if ( (v5 & 0x40) == 0 )
      goto LABEL_8;
    if ( EmptyRgnPublic != (struct HOBJ__ *)1 )
    {
      v6 = 4;
      goto LABEL_13;
    }
  }
  SetRectRgnIndirect(0LL, (LONG *)&gZero);
LABEL_8:
  ResetOrg(0LL, a1, 1LL, v2);
  if ( v4 )
    GreDeleteObject(EmptyRgnPublic);
}

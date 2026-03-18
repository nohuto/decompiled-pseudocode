/*
 * XREFs of UserSetDCVisRgn @ 0x1C0036CE0
 * Callers:
 *     <none>
 * Callees:
 *     IsCalcVisRgnSupported_0 @ 0x1C0002428 (IsCalcVisRgnSupported_0.c)
 *     CalcVisRgn_0 @ 0x1C0002430 (CalcVisRgn_0.c)
 *     IsGetStyleWindowSupported_0 @ 0x1C0002438 (IsGetStyleWindowSupported_0.c)
 *     GetStyleWindow_0 @ 0x1C0002440 (GetStyleWindow_0.c)
 *     SetRectRgnIndirect @ 0x1C002F110 (SetRectRgnIndirect.c)
 *     GreCombineRgn @ 0x1C002FB30 (GreCombineRgn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0034760 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreOffsetRgn @ 0x1C0036A90 (GreOffsetRgn.c)
 *     GreDeleteObject @ 0x1C003A290 (GreDeleteObject.c)
 *     CreateEmptyRgnPublic @ 0x1C0057880 (CreateEmptyRgnPublic.c)
 */

void __fastcall UserSetDCVisRgn(struct tagDCE *a1)
{
  struct HOBJ__ *EmptyRgnPublic; // rdi
  int v3; // esi
  int v4; // eax
  int v5; // r9d
  __int64 StyleWindow_0; // rsi

  if ( (int)IsCalcVisRgnSupported_0() >= 0 && (unsigned int)CalcVisRgn_0() )
    *((_DWORD *)a1 + 16) &= ~0x10000000u;
  else
    *((_DWORD *)a1 + 16) |= 0x10000000u;
  if ( *((_QWORD *)a1 + 6) > 2uLL
    && (int)IsGetStyleWindowSupported_0() >= 0
    && (StyleWindow_0 = GetStyleWindow_0()) != 0 )
  {
    EmptyRgnPublic = (struct HOBJ__ *)CreateEmptyRgnPublic();
    GreCombineRgn((HRGN)EmptyRgnPublic, *((HRGN *)a1 + 6), 0LL, 5);
    GreOffsetRgn((HRGN)EmptyRgnPublic, *(_DWORD *)(StyleWindow_0 + 112), *(_DWORD *)(StyleWindow_0 + 116));
    v3 = 1;
  }
  else
  {
    EmptyRgnPublic = (struct HOBJ__ *)*((_QWORD *)a1 + 6);
    v3 = 0;
  }
  v4 = *((_DWORD *)a1 + 16);
  if ( (v4 & 0x80u) != 0 )
  {
    if ( EmptyRgnPublic )
    {
      v5 = 1;
LABEL_13:
      GreCombineRgn(0LL, 0LL, (HRGN)EmptyRgnPublic, v5);
      goto LABEL_8;
    }
  }
  else
  {
    if ( (v4 & 0x40) == 0 )
      goto LABEL_8;
    if ( EmptyRgnPublic != (struct HOBJ__ *)1 )
    {
      v5 = 4;
      goto LABEL_13;
    }
  }
  SetRectRgnIndirect(0LL, (LONG *)&gZero);
LABEL_8:
  ResetOrg(0LL, a1, 1);
  if ( v3 )
    GreDeleteObject(EmptyRgnPublic);
}

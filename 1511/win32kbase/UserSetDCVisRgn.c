/*
 * XREFs of UserSetDCVisRgn @ 0x1C0023820
 * Callers:
 *     <none>
 * Callees:
 *     IsCalcVisRgnSupported_0 @ 0x1C0002450 (IsCalcVisRgnSupported_0.c)
 *     CalcVisRgn_0 @ 0x1C0002458 (CalcVisRgn_0.c)
 *     IsGetStyleWindowSupported_0 @ 0x1C0002460 (IsGetStyleWindowSupported_0.c)
 *     GetStyleWindow_0 @ 0x1C0002468 (GetStyleWindow_0.c)
 *     CreateEmptyRgnPublic @ 0x1C0022340 (CreateEmptyRgnPublic.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0024220 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     SetRectRgnIndirect @ 0x1C0026D20 (SetRectRgnIndirect.c)
 *     GreCombineRgn @ 0x1C0026E40 (GreCombineRgn.c)
 *     GreDeleteObject @ 0x1C00377D0 (GreDeleteObject.c)
 *     GreOffsetRgn @ 0x1C00441E0 (GreOffsetRgn.c)
 */

void __fastcall UserSetDCVisRgn(struct tagDCE *a1)
{
  HBRUSH EmptyRgnPublic; // rdi
  int v3; // esi
  int v4; // eax

  if ( (int)IsCalcVisRgnSupported_0() >= 0 && (unsigned int)CalcVisRgn_0() )
    *((_DWORD *)a1 + 16) &= ~0x10000000u;
  else
    *((_DWORD *)a1 + 16) |= 0x10000000u;
  if ( *((_QWORD *)a1 + 6) > 2uLL && (int)IsGetStyleWindowSupported_0() >= 0 && GetStyleWindow_0() )
  {
    EmptyRgnPublic = (HBRUSH)CreateEmptyRgnPublic();
    GreCombineRgn((HRGN)EmptyRgnPublic, *((HRGN *)a1 + 6), 0LL);
    GreOffsetRgn((HRGN)EmptyRgnPublic);
    v3 = 1;
  }
  else
  {
    EmptyRgnPublic = (HBRUSH)*((_QWORD *)a1 + 6);
    v3 = 0;
  }
  v4 = *((_DWORD *)a1 + 16);
  if ( (v4 & 0x80u) != 0 )
  {
    if ( EmptyRgnPublic )
    {
LABEL_12:
      GreCombineRgn(0LL, 0LL, (HRGN)EmptyRgnPublic);
      goto LABEL_8;
    }
  }
  else
  {
    if ( (v4 & 0x40) == 0 )
      goto LABEL_8;
    if ( EmptyRgnPublic != (HBRUSH)1 )
      goto LABEL_12;
  }
  SetRectRgnIndirect(0LL);
LABEL_8:
  ResetOrg(0LL, a1, 1);
  if ( v3 )
    GreDeleteObject(EmptyRgnPublic);
}

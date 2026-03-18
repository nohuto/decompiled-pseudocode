/*
 * XREFs of ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0032CFC
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0021A60 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C0032C68 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     GreGradientFill @ 0x1C0033608 (GreGradientFill.c)
 *     ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C009EE54 (-Trg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C009EFF4 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     GreGetAppClipBox @ 0x1C00D7294 (GreGetAppClipBox.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00E6364 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GreGetBoundsRect @ 0x1C00F45F0 (GreGetBoundsRect.c)
 *     GreSetBoundsRect @ 0x1C00F64F8 (GreSetBoundsRect.c)
 *     NtGdiExtFloodFill @ 0x1C0103240 (NtGdiExtFloodFill.c)
 *     ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0286A24 (-Msk@BLTRECORD@@QEAAHHHHH@Z.c)
 *     NtGdiPtVisible @ 0x1C0291ED0 (NtGdiPtVisible.c)
 *     XFORMOBJ_bApplyXform @ 0x1C02B74C0 (XFORMOBJ_bApplyXform.c)
 * Callees:
 *     bCvtPts1 @ 0x1C00979C4 (bCvtPts1.c)
 */

__int64 __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, struct _POINTL *a2, __int64 a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ecx
  int v6; // eax

  v3 = *(_QWORD *)this;
  if ( (*(_BYTE *)(v3 + 32) & 0x43) == 0x43 )
    return 1;
  v6 = bCvtPts1(v3, a2, a3);
  v4 = 0;
  if ( v6 )
    return 1;
  return v4;
}

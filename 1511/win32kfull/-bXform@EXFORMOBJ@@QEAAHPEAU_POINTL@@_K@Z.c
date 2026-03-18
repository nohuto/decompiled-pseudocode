/*
 * XREFs of ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0019C8C
 * Callers:
 *     GreGradientFill @ 0x1C0019264 (GreGradientFill.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C0019BFC (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002E0E0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0047DA8 (-Trg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0047F48 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     GreGetAppClipBox @ 0x1C00DD344 (GreGetAppClipBox.c)
 *     GreGetBoundsRect @ 0x1C00FCBE0 (GreGetBoundsRect.c)
 *     GreSetBoundsRect @ 0x1C00FDB28 (GreSetBoundsRect.c)
 *     NtGdiExtFloodFill @ 0x1C012E0C0 (NtGdiExtFloodFill.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C013BD04 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0286B18 (-Msk@BLTRECORD@@QEAAHHHHH@Z.c)
 *     NtGdiPtVisible @ 0x1C0291A20 (NtGdiPtVisible.c)
 *     XFORMOBJ_bApplyXform @ 0x1C02B68D0 (XFORMOBJ_bApplyXform.c)
 * Callees:
 *     bCvtPts1 @ 0x1C0041E4C (bCvtPts1.c)
 */

__int64 __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, struct _POINTL *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ecx
  int v5; // eax

  v2 = *(_QWORD *)this;
  if ( (*(_BYTE *)(v2 + 32) & 0x43) == 0x43 )
    return 1;
  v5 = bCvtPts1(v2, a2);
  v3 = 0;
  if ( v5 )
    return 1;
  return v3;
}

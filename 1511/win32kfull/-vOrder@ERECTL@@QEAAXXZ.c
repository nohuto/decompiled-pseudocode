/*
 * XREFs of ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0041DE4
 * Callers:
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C0003E90 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C000B2B8 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C000B448 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GreUnlockDisplayArea @ 0x1C000CC58 (GreUnlockDisplayArea.c)
 *     GreLockDisplayArea @ 0x1C000CCF8 (GreLockDisplayArea.c)
 *     ??0EBOX@@QEAA@AEAVERECTL@@H@Z @ 0x1C00167DC (--0EBOX@@QEAA@AEAVERECTL@@H@Z.c)
 *     GreExcludeClipRect @ 0x1C00178E8 (GreExcludeClipRect.c)
 *     ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x1C0028120 (-bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0028490 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002E0E0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     NtGdiFlushUserBatch @ 0x1C0030EB0 (NtGdiFlushUserBatch.c)
 *     NtGdiPolyPatBlt @ 0x1C003CC00 (NtGdiPolyPatBlt.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C003FDF8 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     NtGdiPatBlt @ 0x1C00412C0 (NtGdiPatBlt.c)
 *     GreStretchBltInternal @ 0x1C0046C60 (GreStretchBltInternal.c)
 *     EngStretchBltROP @ 0x1C00EF920 (EngStretchBltROP.c)
 *     NtGdiTransparentBlt @ 0x1C00F0040 (NtGdiTransparentBlt.c)
 *     GreMaskBlt @ 0x1C00F0648 (GreMaskBlt.c)
 *     GreRectangle @ 0x1C00FC0C4 (GreRectangle.c)
 *     ?SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0147A10 (-SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POIN.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C0261A78 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     ?SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C026D960 (-SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?PanLockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C0288720 (-PanLockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     ?PanUnlockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C02892F0 (-PanUnlockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     ?bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0289600 (-bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0289D18 (-vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vLockShadowW@MULTIPANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0289F44 (-vLockShadowW@MULTIPANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     GreAngleArc @ 0x1C02925A8 (GreAngleArc.c)
 * Callees:
 *     <none>
 */

void __fastcall ERECTL::vOrder(ERECTL *this)
{
  int v1; // edx
  int v2; // eax
  int v3; // edx
  int v4; // eax

  v1 = *(_DWORD *)this;
  v2 = *((_DWORD *)this + 2);
  if ( *(_DWORD *)this > v2 )
  {
    *(_DWORD *)this = v2;
    *((_DWORD *)this + 2) = v1;
  }
  v3 = *((_DWORD *)this + 1);
  v4 = *((_DWORD *)this + 3);
  if ( v3 > v4 )
  {
    *((_DWORD *)this + 1) = v4;
    *((_DWORD *)this + 3) = v3;
  }
}

/*
 * XREFs of MNIsUAHMenu @ 0x1C00707A8
 * Callers:
 *     xxxPaintMenuBar @ 0x1C000FE34 (xxxPaintMenuBar.c)
 *     xxxMenuDraw @ 0x1C0014214 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C00144C0 (xxxDrawMenuItem.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0014734 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z.c)
 *     ?MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0014A44 (-MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxMNCompute @ 0x1C0015858 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C006BFBC (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     MNIsOwnerDrawItem @ 0x1C006E6E0 (MNIsOwnerDrawItem.c)
 *     xxxInsertMenuItem @ 0x1C006E9E0 (xxxInsertMenuItem.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C006F270 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     ?xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C00C6670 (-xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C0133768 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxMNDrawFullNC @ 0x1C02418A0 (xxxMNDrawFullNC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MNIsUAHMenu(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( gihmodUserApiHook >= 0 )
    return (*(_DWORD *)(a1 + 40) & 0x800) != 0;
  return v1;
}

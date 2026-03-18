/*
 * XREFs of MNIsUAHMenu @ 0x1C005E724
 * Callers:
 *     xxxMenuDraw @ 0x1C0050108 (xxxMenuDraw.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0051984 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z.c)
 *     ?MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0051CA4 (-MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxDrawMenuItem @ 0x1C0051CE0 (xxxDrawMenuItem.c)
 *     xxxMNCompute @ 0x1C0052F0C (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0053F14 (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     ?xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C0055CD8 (-xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z.c)
 *     MNIsOwnerDrawItem @ 0x1C0055E1C (MNIsOwnerDrawItem.c)
 *     xxxPaintMenuBar @ 0x1C00F6114 (xxxPaintMenuBar.c)
 *     xxxMNOpenHierarchy @ 0x1C01066B8 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     xxxMNDrawFullNC @ 0x1C0241710 (xxxMNDrawFullNC.c)
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

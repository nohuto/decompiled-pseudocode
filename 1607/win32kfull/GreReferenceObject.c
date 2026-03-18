/*
 * XREFs of GreReferenceObject @ 0x1C011FAC8
 * Callers:
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C0052140 (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C00637B4 (CreateOrGetRedirectionBitmap.c)
 *     _SetCursorIconData @ 0x1C009FF18 (_SetCursorIconData.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004998C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C00499E8 (-bValid@DWMSPRITEREF@@QEAAHXZ.c)
 *     ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1C01BF508 (-vKeepIt@SURFREF@@QEAAXXZ.c)
 */

__int64 __fastcall GreReferenceObject(HSURF a1)
{
  unsigned int v1; // ebx
  _BYTE v3[56]; // [rsp+20h] [rbp-38h] BYREF

  SURFREF::SURFREF((SURFREF *)v3, a1);
  v1 = 0;
  if ( DWMSPRITEREF::bValid((DWMSPRITEREF *)v3) )
    SURFREF::vKeepIt((SURFREF *)v3);
  else
    v1 = -1073741816;
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v3);
  return v1;
}

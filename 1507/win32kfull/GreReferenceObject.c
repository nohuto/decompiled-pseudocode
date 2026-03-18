/*
 * XREFs of GreReferenceObject @ 0x1C000BE2C
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C000DDF8 (CreateOrGetRedirectionBitmap.c)
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C0011870 (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 *     _SetCursorIconData @ 0x1C0091DB4 (_SetCursorIconData.c)
 * Callees:
 *     ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C0010394 (-bValid@DWMSPRITEREF@@QEAAHXZ.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0016BE8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1C01C1380 (-vKeepIt@SURFREF@@QEAAXXZ.c)
 */

__int64 __fastcall GreReferenceObject(HSURF a1)
{
  unsigned int v1; // ebx
  _BYTE v3[56]; // [rsp+20h] [rbp-38h] BYREF

  SURFREF::SURFREF((SURFREF *)v3, a1);
  v1 = 0;
  if ( (unsigned int)DWMSPRITEREF::bValid((DWMSPRITEREF *)v3) )
    SURFREF::vKeepIt((SURFREF *)v3);
  else
    v1 = -1073741816;
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v3);
  return v1;
}

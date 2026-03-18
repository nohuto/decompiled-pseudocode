/*
 * XREFs of GreDereferenceObject @ 0x1C00D7D48
 * Callers:
 *     NtGdiGetPixel @ 0x1C0040650 (NtGdiGetPixel.c)
 *     NtGdiAlphaBlend @ 0x1C00423F0 (NtGdiAlphaBlend.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0046AA0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00493C0 (-UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C0052108 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C00637B4 (CreateOrGetRedirectionBitmap.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C00900A0 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     _SetCursorIconData @ 0x1C009FF18 (_SetCursorIconData.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00D7CB8 (DeleteOrSetRedirectionBitmap.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004998C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C00499E8 (-bValid@DWMSPRITEREF@@QEAAHXZ.c)
 *     ?vUnlock@SURFREF@@QEAAXXZ @ 0x1C01BF514 (-vUnlock@SURFREF@@QEAAXXZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C027D33C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall GreDereferenceObject(HSURF a1, unsigned int a2)
{
  unsigned int v4; // ebx
  char v6; // [rsp+20h] [rbp-48h]
  _BYTE v7[56]; // [rsp+30h] [rbp-38h] BYREF

  SURFREF::SURFREF((SURFREF *)v7, a1);
  v4 = 0;
  if ( DWMSPRITEREF::bValid((DWMSPRITEREF *)v7) )
  {
    if ( ((unsigned int)a1 & 0x800000) != 0 )
    {
      SURFREF::vUnlock((SURFREF *)v7);
    }
    else
    {
      v6 = 5;
      if ( !HmgShareUnlockRemoveObject(a1, 0LL, 1LL, a2, v6) || !(unsigned int)SURFREF::bDeleteSurface(v7, 0LL, 1LL) )
        v4 = -1073741823;
    }
  }
  else
  {
    v4 = -1073741816;
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v7);
  return v4;
}

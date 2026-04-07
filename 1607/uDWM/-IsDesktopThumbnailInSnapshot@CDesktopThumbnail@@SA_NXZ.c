/*
 * XREFs of ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x180041CFC
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002E70 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x18001A854 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E970 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008E680 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z @ 0x180096F64 (-FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

bool CDesktopThumbnail::IsDesktopThumbnailInSnapshot(void)
{
  bool result; // al

  result = 0;
  if ( CDesktopThumbnail::s_pThumbnailNoRef )
    return *((_BYTE *)CDesktopThumbnail::s_pThumbnailNoRef + 336);
  return result;
}

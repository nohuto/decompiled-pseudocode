/*
 * XREFs of ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x180020590
 * Callers:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180015FA0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetParent@CVisual@@UEAAJPEAV1@@Z @ 0x1800207A0 (-SetParent@CVisual@@UEAAJPEAV1@@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180020D60 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?OnGlobalTimeUpdated@CTopLevelWindow3D@@UEAAJXZ @ 0x180029110 (-OnGlobalTimeUpdated@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E5D0 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180032E10 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::SetDirtyChildren(CVisual *this)
{
  *((_DWORD *)this + 20) |= 1u;
}

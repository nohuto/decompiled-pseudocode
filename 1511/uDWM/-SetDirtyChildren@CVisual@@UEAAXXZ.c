/*
 * XREFs of ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x180023690
 * Callers:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x1800189B0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180021E88 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetParent@CVisual@@UEAAJPEAV1@@Z @ 0x1800238D0 (-SetParent@CVisual@@UEAAJPEAV1@@Z.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E470 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180033010 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?OnGlobalTimeUpdated@CTopLevelWindow3D@@UEAAJXZ @ 0x180034990 (-OnGlobalTimeUpdated@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::SetDirtyChildren(CVisual *this)
{
  *((_DWORD *)this + 20) |= 1u;
}

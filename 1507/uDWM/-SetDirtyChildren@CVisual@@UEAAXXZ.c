/*
 * XREFs of ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x18001E280
 * Callers:
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x18001A7C0 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18001CA30 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetParent@CVisual@@UEAAJPEAV1@@Z @ 0x18001E4C0 (-SetParent@CVisual@@UEAAJPEAV1@@Z.c)
 *     ?OnGlobalTimeUpdated@CTopLevelWindow3D@@UEAAJXZ @ 0x180026640 (-OnGlobalTimeUpdated@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180027100 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180030510 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::SetDirtyChildren(CVisual *this)
{
  *((_DWORD *)this + 20) |= 1u;
}

/*
 * XREFs of ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x180075214
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180014204 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180070EA8 (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180012F30 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180013080 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z @ 0x1800719A0 (-OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z.c)
 */

void __fastcall CThumbnailVisual::OnRepresentationTypeUpdated(CThumbnailVisual *this)
{
  __int64 v2; // rax
  CImmersiveWindowIconic *v3; // rcx

  if ( CThumbnailVisual::_IsImmersiveIconic(this) )
  {
    CThumbnailVisual::SetDirtyFlags(this, 4096);
    CThumbnailVisual::SetDirtyFlags(this, 0x8000);
    CThumbnailVisual::SetDirtyFlags(this, 0x10000);
  }
  v2 = *((_QWORD *)this + 45);
  if ( v2 )
  {
    v3 = *(CImmersiveWindowIconic **)(v2 + 512);
    if ( v3 )
      CImmersiveWindowIconic::OnRepresentationTypeUpdated(v3, *(_DWORD *)(v2 + 164));
  }
}

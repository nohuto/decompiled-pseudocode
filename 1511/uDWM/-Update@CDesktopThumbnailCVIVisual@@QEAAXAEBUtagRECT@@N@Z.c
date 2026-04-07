/*
 * XREFs of ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x18009AA20
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x18003FFD0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x18007FB70 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x18007FF10 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800224E8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180022540 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CDesktopThumbnailCVIVisual::Update(
        CDesktopThumbnailCVIVisual *this,
        const struct tagRECT *a2,
        double a3)
{
  LONG v5; // edx
  LONG v6; // eax
  struct tagPOINT v7; // [rsp+30h] [rbp+8h] BYREF

  CVisual::SetOpacity(this, a3);
  v7.x = a2->left;
  v7.y = a2->top;
  CVisual::SetOffset((struct tagPOINT *)this, &v7);
  v5 = a2->bottom - a2->top;
  if ( v5 < 0 )
    v5 = 0;
  v6 = a2->right - a2->left;
  v7.y = v5;
  if ( v6 < 0 )
    v6 = 0;
  v7.x = v6;
  (*(void (__fastcall **)(CDesktopThumbnailCVIVisual *, struct tagPOINT *))(*(_QWORD *)this + 80LL))(this, &v7);
  *((_BYTE *)this + 320) = 1;
  CDesktopThumbnailCVIVisual::SetDirtyFlags(this, 4096);
}

/*
 * XREFs of ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18002BD18
 * Callers:
 *     ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z @ 0x1800111D8 (-SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z.c)
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x180011210 (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 *     ?DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x18001EB18 (-DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001ED00 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?UpdateOffset@CButton@@MEAAJXZ @ 0x18001F110 (-UpdateOffset@CButton@@MEAAJXZ.c)
 *     ?UpdateLayout@CButton@@UEAAJXZ @ 0x18001F200 (-UpdateLayout@CButton@@UEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180028AC0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetHiddenMargins@CAtlasedImage@@QEAAXU?$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z @ 0x18002BDC0 (-SetHiddenMargins@CAtlasedImage@@QEAAXU-$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z.c)
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x18002C348 (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 *     ?SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x18006FFA4 (-SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CAtlasedImage::SetDirtyFlags(CAtlasedImage *this, int a2, unsigned int a3)
{
  __int64 v3; // rbx
  void (__fastcall *v4)(CVisual *, int); // rdi

  *((_DWORD *)this + 24) |= a2;
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    v4 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v3 + 24LL);
    if ( v4 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(*((CVisual **)this + 10), a3);
    else
      v4(*((CVisual **)this + 10), a3);
  }
}

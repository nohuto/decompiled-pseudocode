/*
 * XREFs of ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ @ 0x18008FE5C
 * Callers:
 *     ?Initialize@CIndirectTouchVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18008F590 (-Initialize@CIndirectTouchVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18008F7B4 (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18008F938 (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18008FAB4 (-StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x18008FEA0 (-UpdateTransition@CIndirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001D130 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 */

void __fastcall CIndirectTouchVisual::UpdateOpacityAndSource(CImage **this)
{
  CVisual::SetOpacity((CVisual *)this, *((float *)this + 81));
  CImage::SetBitmapSource(this[45], *((struct CBitmapSource **)this[46] + *((unsigned int *)this + 82)));
}

/*
 * XREFs of ?ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z @ 0x180025274
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001FD20 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x1800167A0 (-SetBackgroundColor@CText@@QEAAXK@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001CF70 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(CTopLevelWindow *this, int a2)
{
  unsigned int v3; // ebx
  CText *v4; // rcx
  int v5; // eax

  v3 = 0;
  v4 = (CText *)*((_QWORD *)this + 67);
  if ( v4 )
  {
    CText::SetBackgroundColor(v4, a2);
    v5 = CVisual::RenderRecursive(*((CVisual **)this + 67));
    v3 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x13A4u);
  }
  return v3;
}

/*
 * XREFs of ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x1800167A0
 * Callers:
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z @ 0x180015EA0 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001FD20 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z @ 0x180025274 (-ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CText::SetBackgroundColor(CText *this, int a2)
{
  int v2; // edx
  __int64 v3; // rax
  void (__fastcall *v4)(CVisual *__hidden, unsigned int); // rdi

  v2 = a2 & 0xFFFFFF;
  if ( *((_DWORD *)this + 99) != v2 )
  {
    v3 = *(_QWORD *)this;
    *((_DWORD *)this + 99) = v2;
    v4 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(v3 + 24);
    if ( v4 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 0x1000u);
    else
      v4(this, 4096u);
  }
}

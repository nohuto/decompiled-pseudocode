/*
 * XREFs of ?SetColor@CText@@QEAAXK@Z @ 0x18001B688
 * Callers:
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001AD60 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CText::SetColor(CText *this, int a2)
{
  int v2; // edx
  __int64 v3; // rax
  void (__fastcall *v4)(CVisual *__hidden, unsigned int); // rdi

  v2 = a2 & 0xFFFFFF;
  if ( v2 != *((_DWORD *)this + 98) )
  {
    v3 = *(_QWORD *)this;
    *((_DWORD *)this + 98) = v2;
    v4 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(v3 + 24);
    if ( v4 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 0x1000u);
    else
      v4(this, 4096u);
  }
}

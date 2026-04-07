/*
 * XREFs of ?SetScalingFactor@CText@@QEAAXN@Z @ 0x18001B784
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180028AC0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CText::SetScalingFactor(CText *this, double a2)
{
  double v2; // rax
  void (__fastcall *v3)(CVisual *__hidden, unsigned int); // rdi

  if ( *((double *)this + 50) != a2 )
  {
    v2 = *(double *)this;
    *((double *)this + 50) = a2;
    v3 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)&v2 + 24LL);
    if ( v3 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 0x1000u);
    else
      v3(this, 4096u);
  }
}

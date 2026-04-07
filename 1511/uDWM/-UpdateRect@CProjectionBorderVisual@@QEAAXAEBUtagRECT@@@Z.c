/*
 * XREFs of ?UpdateRect@CProjectionBorderVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18007C704
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJ_NAEBU_LUID@@I@Z @ 0x18007C020 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJ_NAEBU_LUID@@I@Z.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CProjectionBorderVisual::UpdateRect(CProjectionBorderVisual *this, const struct tagRECT *a2)
{
  struct tagRECT *v3; // rsi
  __int64 v5; // rax

  v3 = (struct tagRECT *)((char *)this + 264);
  if ( !EqualRect(a2, (const RECT *)((char *)this + 264)) )
  {
    v5 = *(_QWORD *)this;
    *v3 = *a2;
    (*(void (__fastcall **)(CProjectionBorderVisual *, __int64))(v5 + 24))(this, 0x4000LL);
  }
}

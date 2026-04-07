/*
 * XREFs of ?UpdateLayout@CAtlasedRectsVisual@@UEAAJXZ @ 0x180020820
 * Callers:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800236A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateLayout@CCanvas@@UEAAJXZ @ 0x18001F9A0 (-UpdateLayout@CCanvas@@UEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAtlasedRectsVisual::UpdateLayout(CAtlasedRectsVisual *this)
{
  int updated; // eax
  unsigned int v3; // edi
  void (__fastcall *v4)(CVisual *__hidden, unsigned int); // rsi

  updated = CCanvas::UpdateLayout(this);
  v3 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0xCAu);
  }
  else
  {
    v4 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v4 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 0x1000u);
    else
      v4(this, 4096u);
  }
  return v3;
}

/*
 * XREFs of ?GetBrushRealizationNoRef@CLegacyMilBrush@@QEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18005D748
 * Callers:
 *     ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x18005D460 (-EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PE.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetBrushRealizationInternal@CImageLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18005A250 (-GetBrushRealizationInternal@CImageLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBr.c)
 *     ?HasRealizationContextChanged@CImageLegacyMilBrush@@UEBAHPEBULegacyMilBrushContext@@@Z @ 0x18005A2E0 (-HasRealizationContextChanged@CImageLegacyMilBrush@@UEBAHPEBULegacyMilBrushContext@@@Z.c)
 *     ?ObviouslyHasZeroAlpha@CMILBrushBitmap@@UEBA_NXZ @ 0x180089950 (-ObviouslyHasZeroAlpha@CMILBrushBitmap@@UEBA_NXZ.c)
 *     ?ObviouslyHasZeroAlpha@CMILBrushSolid@@UEBA_NXZ @ 0x18008A420 (-ObviouslyHasZeroAlpha@CMILBrushSolid@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CLegacyMilBrush::GetBrushRealizationNoRef(
        struct CMILBrush **this,
        const struct LegacyMilBrushContext *a2,
        struct CMILBrush **a3)
{
  int v3; // edi
  __int64 (__fastcall *v7)(CImageLegacyMilBrush *, const struct LegacyMilBrushContext *); // rsi
  int HasRealizationContextChanged; // eax
  struct CMILBrush *v9; // rsi
  bool (__fastcall *v10)(CMILBrushSolid *__hidden); // r14
  bool HasZeroAlpha; // al
  struct CMILBrush *v12; // rax
  __int64 (__fastcall *v14)(CImageLegacyMilBrush *, const struct LegacyMilBrushContext *, struct CMILBrush **); // rdi
  int BrushRealizationInternal; // eax

  v3 = 0;
  if ( ((_BYTE)this[4] & 1) != 0
    || ((v7 = (__int64 (__fastcall *)(CImageLegacyMilBrush *, const struct LegacyMilBrushContext *))*((_QWORD *)*this + 16),
         v7 == CImageLegacyMilBrush::HasRealizationContextChanged)
      ? (HasRealizationContextChanged = CImageLegacyMilBrush::HasRealizationContextChanged(
                                          (CImageLegacyMilBrush *)this,
                                          a2))
      : (HasRealizationContextChanged = v7((CImageLegacyMilBrush *)this, a2)),
        HasRealizationContextChanged) )
  {
    v14 = (__int64 (__fastcall *)(CImageLegacyMilBrush *, const struct LegacyMilBrushContext *, struct CMILBrush **))*((_QWORD *)*this + 20);
    if ( v14 == CImageLegacyMilBrush::GetBrushRealizationInternal )
      BrushRealizationInternal = CImageLegacyMilBrush::GetBrushRealizationInternal(
                                   (CImageLegacyMilBrush *)this,
                                   a2,
                                   this + 6);
    else
      BrushRealizationInternal = v14((CImageLegacyMilBrush *)this, a2, this + 6);
    v3 = BrushRealizationInternal;
    if ( BrushRealizationInternal < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BrushRealizationInternal, 0x60u);
      goto LABEL_11;
    }
    *((_DWORD *)this + 8) &= ~1u;
  }
  v9 = this[6];
  if ( v9
    && (*((_DWORD *)a2 + 51)
     || ((v10 = *(bool (__fastcall **)(CMILBrushSolid *__hidden))(*(_QWORD *)v9 + 32LL),
          v10 != CMILBrushSolid::ObviouslyHasZeroAlpha)
       ? (v10 != CMILBrushBitmap::ObviouslyHasZeroAlpha
        ? (HasZeroAlpha = v10(this[6]))
        : (HasZeroAlpha = CMILBrushBitmap::ObviouslyHasZeroAlpha(this[6])))
       : (HasZeroAlpha = CMILBrushSolid::ObviouslyHasZeroAlpha(this[6])),
         !HasZeroAlpha)) )
  {
    v12 = this[6];
    *(_OWORD *)((char *)v12 + 8) = *((_OWORD *)a2 + 13);
    *((_QWORD *)v12 + 3) = *((_QWORD *)a2 + 28);
    *a3 = this[6];
  }
  else
  {
    *a3 = 0LL;
  }
LABEL_11:
  if ( v3 < 0 )
  {
    *a3 = 0LL;
    *((_DWORD *)this + 8) |= 1u;
  }
  return (unsigned int)v3;
}

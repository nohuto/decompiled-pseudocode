/*
 * XREFs of ?GetBrushRealizationNoRef@CLegacyMilBrush@@QEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18002EF68
 * Callers:
 *     ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x18002ECB0 (-EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PE.c)
 * Callees:
 *     ?GetBrushRealizationInternal@CImageLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x1800327D0 (-GetBrushRealizationInternal@CImageLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBr.c)
 *     ?HasRealizationContextChanged@CImageLegacyMilBrush@@UEBAHPEBULegacyMilBrushContext@@@Z @ 0x180032830 (-HasRealizationContextChanged@CImageLegacyMilBrush@@UEBAHPEBULegacyMilBrushContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ObviouslyHasZeroAlpha@CMILBrushSolid@@UEBA_NXZ @ 0x1800836D0 (-ObviouslyHasZeroAlpha@CMILBrushSolid@@UEBA_NXZ.c)
 *     ?ObviouslyHasZeroAlpha@CMILBrushBitmap@@UEBA_NXZ @ 0x180084860 (-ObviouslyHasZeroAlpha@CMILBrushBitmap@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyMilBrush::GetBrushRealizationNoRef(
        CMILBrushBitmap **this,
        const struct LegacyMilBrushContext *a2,
        struct CMILBrush **a3)
{
  int v3; // edi
  __int64 (__fastcall *v7)(CImageLegacyMilBrush *__hidden, const struct LegacyMilBrushContext *); // rax
  int HasRealizationContextChanged; // eax
  CMILBrushBitmap *v9; // rcx
  bool (__fastcall *v10)(CMILBrushSolid *__hidden); // rax
  char HasZeroAlpha; // al
  CMILBrushBitmap *v12; // rax
  struct CMILBrush **v14; // r8
  __int64 (__fastcall *v15)(CImageLegacyMilBrush *__hidden, const struct LegacyMilBrushContext *, struct CMILBrush **); // rax
  int BrushRealizationInternal; // eax

  v3 = 0;
  if ( ((_BYTE)this[4] & 1) != 0
    || ((v7 = (__int64 (__fastcall *)(CImageLegacyMilBrush *__hidden, const struct LegacyMilBrushContext *))*((_QWORD *)*this + 17),
         v7 == CImageLegacyMilBrush::HasRealizationContextChanged)
      ? (HasRealizationContextChanged = CImageLegacyMilBrush::HasRealizationContextChanged(
                                          (CImageLegacyMilBrush *)this,
                                          a2))
      : (HasRealizationContextChanged = ((__int64 (*)(void))v7)()),
        HasRealizationContextChanged) )
  {
    v14 = this + 15;
    v15 = (__int64 (__fastcall *)(CImageLegacyMilBrush *__hidden, const struct LegacyMilBrushContext *, struct CMILBrush **))*((_QWORD *)*this + 21);
    if ( v15 == CImageLegacyMilBrush::GetBrushRealizationInternal )
      BrushRealizationInternal = CImageLegacyMilBrush::GetBrushRealizationInternal(
                                   (CImageLegacyMilBrush *)this,
                                   a2,
                                   v14);
    else
      BrushRealizationInternal = v15((CImageLegacyMilBrush *)this, a2, v14);
    v3 = BrushRealizationInternal;
    if ( BrushRealizationInternal < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BrushRealizationInternal, 0x60u);
      goto LABEL_11;
    }
    *((_DWORD *)this + 8) &= ~1u;
  }
  v9 = this[15];
  if ( v9
    && (*((_DWORD *)a2 + 53)
     || ((v10 = *(bool (__fastcall **)(CMILBrushSolid *__hidden))(*(_QWORD *)v9 + 32LL),
          v10 != CMILBrushSolid::ObviouslyHasZeroAlpha)
       ? (v10 != CMILBrushBitmap::ObviouslyHasZeroAlpha
        ? (HasZeroAlpha = ((__int64 (*)(void))v10)())
        : (HasZeroAlpha = CMILBrushBitmap::ObviouslyHasZeroAlpha(v9)))
       : (HasZeroAlpha = CMILBrushSolid::ObviouslyHasZeroAlpha(v9)),
         !HasZeroAlpha)) )
  {
    v12 = this[15];
    *(_OWORD *)((char *)v12 + 8) = *(_OWORD *)((char *)a2 + 216);
    *((_QWORD *)v12 + 3) = *((_QWORD *)a2 + 29);
    *a3 = this[15];
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

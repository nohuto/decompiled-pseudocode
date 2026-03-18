/*
 * XREFs of ?GetBrushRealizationNoRef@CBrush@@QEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x1800837D8
 * Callers:
 *     ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAUBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x180083520 (-EnsureRealization@CBrushResourceRealizer@@UEAAJPEAUBrushContext@@PEBUCContextState@@PEBUPixelFo.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ObviouslyHasZeroAlpha@CMILBrushBitmap@@UEBA_NXZ @ 0x1800810D0 (-ObviouslyHasZeroAlpha@CMILBrushBitmap@@UEBA_NXZ.c)
 *     ?ObviouslyHasZeroAlpha@CMILBrushSolid@@UEBA_NXZ @ 0x180081690 (-ObviouslyHasZeroAlpha@CMILBrushSolid@@UEBA_NXZ.c)
 *     ?HasRealizationContextChanged@CImageBrush@@UEBAHPEBUBrushContext@@@Z @ 0x1800859F0 (-HasRealizationContextChanged@CImageBrush@@UEBAHPEBUBrushContext@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CBrush::GetBrushRealizationNoRef(CBrush *this, const struct BrushContext *a2, struct CMILBrush **a3)
{
  int v3; // edi
  __int64 (__fastcall *v7)(CImageBrush *__hidden, const struct BrushContext *); // rbx
  int HasRealizationContextChanged; // eax
  __int64 v9; // rbx
  bool (__fastcall *v10)(CMILBrushSolid *); // r14
  bool HasZeroAlpha; // al
  __int64 v12; // rax
  int v14; // eax

  v3 = 0;
  if ( (*((_BYTE *)this + 32) & 1) != 0
    || ((v7 = *(__int64 (__fastcall **)(CImageBrush *__hidden, const struct BrushContext *))(*(_QWORD *)this + 120LL),
         v7 == CImageBrush::HasRealizationContextChanged)
      ? (HasRealizationContextChanged = CImageBrush::HasRealizationContextChanged(this, a2))
      : (HasRealizationContextChanged = v7(this, a2)),
        HasRealizationContextChanged) )
  {
    v14 = (*(__int64 (__fastcall **)(CBrush *, const struct BrushContext *, char *))(*(_QWORD *)this + 152LL))(
            this,
            a2,
            (char *)this + 48);
    v3 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x60u);
      goto LABEL_11;
    }
    *((_DWORD *)this + 8) &= ~1u;
  }
  v9 = *((_QWORD *)this + 6);
  if ( v9
    && (*((_DWORD *)a2 + 51)
     || ((v10 = *(bool (__fastcall **)(CMILBrushSolid *))(*(_QWORD *)v9 + 32LL),
          v10 != CMILBrushSolid::ObviouslyHasZeroAlpha)
       ? ((char *)v10 != (char *)CMILBrushBitmap::ObviouslyHasZeroAlpha
        ? (HasZeroAlpha = v10(*((CMILBrushSolid **)this + 6)))
        : (HasZeroAlpha = CMILBrushBitmap::ObviouslyHasZeroAlpha(*((CMILBrushBitmap **)this + 6))))
       : (HasZeroAlpha = CMILBrushSolid::ObviouslyHasZeroAlpha(*((CMILBrushSolid **)this + 6))),
         !HasZeroAlpha)) )
  {
    v12 = *((_QWORD *)this + 6);
    *(_OWORD *)(v12 + 8) = *((_OWORD *)a2 + 13);
    *(_QWORD *)(v12 + 24) = *((_QWORD *)a2 + 28);
    *a3 = (struct CMILBrush *)*((_QWORD *)this + 6);
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

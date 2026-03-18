/*
 * XREFs of ??0CLinearGradientLegacyMilBrush@@IEAA@PEAVCComposition@@@Z @ 0x180013948
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CMILBrushGradient@@IEAA@PEAVCMILFactory@@@Z @ 0x180014D20 (--0CMILBrushGradient@@IEAA@PEAVCMILFactory@@@Z.c)
 *     ??0?$DynArray@PEAVCRenderTarget@@$00@@QEAA@XZ @ 0x1800A18A4 (--0-$DynArray@PEAVCRenderTarget@@$00@@QEAA@XZ.c)
 */

CLinearGradientLegacyMilBrush *__fastcall CLinearGradientLegacyMilBrush::CLinearGradientLegacyMilBrush(
        CLinearGradientLegacyMilBrush *this,
        struct CComposition *a2)
{
  struct CMILFactory *v3; // rdx
  _QWORD *v4; // r11

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CLinearGradientLegacyMilBrush::`vftable';
  DynArray<CRenderTarget *,1>::DynArray<CRenderTarget *,1>((char *)this + 128);
  CMILBrushGradient::CMILBrushGradient((CLinearGradientLegacyMilBrush *)((char *)this + 192), v3);
  *v4 = &LocalMILObject<CMILBrushLinearGradient>::`vftable'{for `CMILObject'};
  v4[3] = &LocalMILObject<CMILBrushLinearGradient>::`vftable'{for `CMILBrush'};
  v4[7] = &LocalMILObject<CMILBrushLinearGradient>::`vftable'{for `CMILResourceCache'};
  v4[15] = &LocalMILObject<CMILBrushLinearGradient>::`vftable'{for `IMILBrushGradient'};
  v4[29] = &LocalMILObject<CMILBrushLinearGradient>::`vftable';
  *((_DWORD *)this + 110) = 0;
  *((_QWORD *)this + 56) = 0LL;
  *((_DWORD *)this + 116) = 0;
  *((_QWORD *)this + 60) = 0LL;
  *((_DWORD *)this + 117) = 3;
  *((_DWORD *)this + 118) = 1;
  *((_QWORD *)this + 54) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `CMILObject'};
  *((_QWORD *)this + 57) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `CMILBrush'};
  *((_QWORD *)this + 61) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `IMILBrushSolid'};
  return this;
}

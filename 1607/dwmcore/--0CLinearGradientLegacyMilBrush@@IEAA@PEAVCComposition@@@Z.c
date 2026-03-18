/*
 * XREFs of ??0CLinearGradientLegacyMilBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800175DC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CMILBrushGradient@@IEAA@PEAVCMILFactory@@@Z @ 0x180018060 (--0CMILBrushGradient@@IEAA@PEAVCMILFactory@@@Z.c)
 *     ??0CLegacyMilBrush@@IEAA@PEAVCComposition@@@Z @ 0x18002EF3C (--0CLegacyMilBrush@@IEAA@PEAVCComposition@@@Z.c)
 */

CLinearGradientLegacyMilBrush *__fastcall CLinearGradientLegacyMilBrush::CLinearGradientLegacyMilBrush(
        CLinearGradientLegacyMilBrush *this,
        struct CComposition *a2)
{
  struct CMILFactory *v3; // rdx
  _QWORD *v4; // r11

  CLegacyMilBrush::CLegacyMilBrush(this, a2);
  *(_QWORD *)this = &CLinearGradientLegacyMilBrush::`vftable';
  CMILBrushGradient::CMILBrushGradient((CLinearGradientLegacyMilBrush *)((char *)this + 232), v3);
  *v4 = &LocalMILObject<CMILBrushLinearGradient>::`vftable'{for `CMILObject'};
  v4[3] = &LocalMILObject<CMILBrushLinearGradient>::`vftable'{for `CMILBrush'};
  v4[7] = &LocalMILObject<CMILBrushLinearGradient>::`vftable'{for `CMILResourceCache'};
  v4[15] = &LocalMILObject<CMILBrushLinearGradient>::`vftable'{for `IMILBrushGradient'};
  v4[29] = &LocalMILObject<CMILBrushLinearGradient>::`vftable';
  *((_DWORD *)this + 120) = 0;
  *((_QWORD *)this + 61) = 0LL;
  *((_DWORD *)this + 126) = 0;
  *((_DWORD *)this + 127) = 3;
  *((_DWORD *)this + 128) = 1;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 59) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `CMILObject'};
  *((_QWORD *)this + 62) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `CMILBrush'};
  *((_QWORD *)this + 66) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `IMILBrushSolid'};
  return this;
}

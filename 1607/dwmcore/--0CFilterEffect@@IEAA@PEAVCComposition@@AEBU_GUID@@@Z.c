/*
 * XREFs of ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180014E8C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CAffineTransform2DEffect@@IEAA@PEAVCComposition@@@Z @ 0x18012AC1C (--0CAffineTransform2DEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CArithmeticCompositeEffect@@IEAA@PEAVCComposition@@@Z @ 0x18012AC78 (--0CArithmeticCompositeEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CBrightnessEffect@@IEAA@PEAVCComposition@@@Z @ 0x18012ACC0 (--0CBrightnessEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CColorMatrixEffect@@IEAA@PEAVCComposition@@@Z @ 0x18012AD38 (--0CColorMatrixEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CFloodEffect@@IEAA@PEAVCComposition@@@Z @ 0x18012AE00 (--0CFloodEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CSaturationEffect@@IEAA@PEAVCComposition@@@Z @ 0x18012B098 (--0CSaturationEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CShadowEffect@@IEAA@PEAVCComposition@@@Z @ 0x18012B11C (--0CShadowEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x18014CDA4 (--0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CTurbulenceEffect@@IEAA@PEAVCComposition@@@Z @ 0x18015633C (--0CTurbulenceEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CLinearTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x180156948 (--0CLinearTransferEffect@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CEffect@@IEAA@PEAVCComposition@@@Z @ 0x18002355C (--0CEffect@@IEAA@PEAVCComposition@@@Z.c)
 */

CFilterEffect *__fastcall CFilterEffect::CFilterEffect(
        CFilterEffect *this,
        struct CComposition *a2,
        const struct _GUID *a3)
{
  CFilterEffect *result; // rax

  CEffect::CEffect(this, a2);
  *(_QWORD *)this = &CFilterEffect::`vftable';
  *((_QWORD *)this + 17) = &CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::`vftable';
  *((_QWORD *)this + 18) = this;
  *((_QWORD *)this + 19) = (char *)this + 184;
  *((_QWORD *)this + 20) = (char *)this + 184;
  *((_DWORD *)this + 42) = 2;
  *(_QWORD *)((char *)this + 172) = 2LL;
  *(GUID *)((char *)this + 200) = GUID_NULL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 58) = 0;
  result = this;
  *((struct _GUID *)this + 15) = *a3;
  return result;
}

/*
 * XREFs of ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180002CCC
 * Callers:
 *     ??0CGaussianBlurEffect@@IEAA@PEAVCComposition@@@Z @ 0x1800021A8 (--0CGaussianBlurEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 *     ??0CAffineTransform2DEffect@@IEAA@PEAVCComposition@@@Z @ 0x1800F85F0 (--0CAffineTransform2DEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CArithmeticCompositeEffect@@IEAA@PEAVCComposition@@@Z @ 0x1800F8648 (--0CArithmeticCompositeEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CBrightnessEffect@@IEAA@PEAVCComposition@@@Z @ 0x1800F868C (--0CBrightnessEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CColorMatrixEffect@@IEAA@PEAVCComposition@@@Z @ 0x1800F86D4 (--0CColorMatrixEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CFloodEffect@@IEAA@PEAVCComposition@@@Z @ 0x1800F8830 (--0CFloodEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CShadowEffect@@IEAA@PEAVCComposition@@@Z @ 0x1800F8AC4 (--0CShadowEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x180113BB4 (--0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CTurbulenceEffect@@IEAA@PEAVCComposition@@@Z @ 0x18011D1F0 (--0CTurbulenceEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CLinearTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x18011D818 (--0CLinearTransferEffect@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

CFilterEffect *__fastcall CFilterEffect::CFilterEffect(
        CFilterEffect *this,
        struct CComposition *a2,
        const struct _GUID *a3)
{
  CFilterEffect *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CFilterEffect::`vftable';
  *((_QWORD *)this + 5) = &CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::`vftable';
  *((_QWORD *)this + 6) = this;
  *((_QWORD *)this + 7) = (char *)this + 88;
  *((_QWORD *)this + 8) = (char *)this + 88;
  *((_DWORD *)this + 18) = 2;
  *(_QWORD *)((char *)this + 76) = 2LL;
  result = this;
  *(GUID *)((char *)this + 104) = GUID_NULL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((struct _GUID *)this + 9) = *a3;
  return result;
}

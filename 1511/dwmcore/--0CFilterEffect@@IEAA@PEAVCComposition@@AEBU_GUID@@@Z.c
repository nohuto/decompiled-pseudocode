/*
 * XREFs of ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x18001A8C8
 * Callers:
 *     ??0CGaussianBlurEffect@@IEAA@PEAVCComposition@@@Z @ 0x18001A008 (--0CGaussianBlurEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 *     ??0CAffineTransform2DEffect@@IEAA@PEAVCComposition@@@Z @ 0x1801128D0 (--0CAffineTransform2DEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CArithmeticCompositeEffect@@IEAA@PEAVCComposition@@@Z @ 0x180112928 (--0CArithmeticCompositeEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CBrightnessEffect@@IEAA@PEAVCComposition@@@Z @ 0x18011296C (--0CBrightnessEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CColorMatrixEffect@@IEAA@PEAVCComposition@@@Z @ 0x1801129B4 (--0CColorMatrixEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CFloodEffect@@IEAA@PEAVCComposition@@@Z @ 0x180112A94 (--0CFloodEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CShadowEffect@@IEAA@PEAVCComposition@@@Z @ 0x180112C40 (--0CShadowEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x18012CE84 (--0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CTurbulenceEffect@@IEAA@PEAVCComposition@@@Z @ 0x180133C30 (--0CTurbulenceEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CLinearTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x180134268 (--0CLinearTransferEffect@@IEAA@PEAVCComposition@@@Z.c)
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
  *((_QWORD *)this + 7) = &CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::`vftable';
  *((_QWORD *)this + 8) = this;
  *((_QWORD *)this + 9) = (char *)this + 104;
  *((_QWORD *)this + 10) = (char *)this + 104;
  *((_DWORD *)this + 22) = 2;
  *(_QWORD *)((char *)this + 92) = 2LL;
  result = this;
  *(GUID *)((char *)this + 120) = DirectX::g_XMZero;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((struct _GUID *)this + 10) = *a3;
  return result;
}

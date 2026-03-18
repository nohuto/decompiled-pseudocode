/*
 * XREFs of ??0CImageLegacyMilBrush@@IEAA@PEAVCComposition@@@Z @ 0x180059CD0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z @ 0x18008983C (--0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z.c)
 */

CImageLegacyMilBrush *__fastcall CImageLegacyMilBrush::CImageLegacyMilBrush(
        CImageLegacyMilBrush *this,
        struct CComposition *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CTileLegacyMilBrush::`vftable';
  *(_QWORD *)((char *)this + 76) = 0LL;
  *((_DWORD *)this + 21) = 0;
  *((_BYTE *)this + 88) = 0;
  *((_DWORD *)this + 14) = 1065353216;
  *((_DWORD *)this + 15) = 1065353216;
  *((_DWORD *)this + 16) = 1065353216;
  *(_QWORD *)((char *)this + 68) = 1065353216LL;
  *((_DWORD *)this + 23) = 0;
  CMILBrushBitmap::CMILBrushBitmap((CImageLegacyMilBrush *)((char *)this + 96), a2);
  *((_QWORD *)this + 12) = &LocalMILObject<CMILBrushBitmap>::`vftable';
  *((_QWORD *)this + 15) = &LocalMILObject<CMILBrushBitmap>::`vftable'{for `CMILBrush'};
  *((_QWORD *)this + 19) = &LocalMILObject<CMILBrushLinearGradient>::`vftable'{for `CMILResourceCache'};
  *(_QWORD *)this = &CImageLegacyMilBrush::`vftable';
  return this;
}

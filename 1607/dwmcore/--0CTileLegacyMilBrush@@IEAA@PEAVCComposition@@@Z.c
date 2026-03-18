/*
 * XREFs of ??0CTileLegacyMilBrush@@IEAA@PEAVCComposition@@@Z @ 0x180024BA4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CLegacyMilBrush@@IEAA@PEAVCComposition@@@Z @ 0x18002EF3C (--0CLegacyMilBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z @ 0x180084750 (--0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z.c)
 */

CTileLegacyMilBrush *__fastcall CTileLegacyMilBrush::CTileLegacyMilBrush(
        CTileLegacyMilBrush *this,
        struct CComposition *a2)
{
  struct CMILFactory *v3; // rdx
  _QWORD *v4; // r11

  CLegacyMilBrush::CLegacyMilBrush(this, a2);
  *(_QWORD *)this = &CTileLegacyMilBrush::`vftable';
  *((_DWORD *)this + 32) = 1065353216;
  *((_DWORD *)this + 33) = 1065353216;
  *((_DWORD *)this + 34) = 1065353216;
  *(_QWORD *)((char *)this + 140) = 1065353216LL;
  *(_QWORD *)((char *)this + 148) = 0LL;
  *((_DWORD *)this + 39) = 0;
  *((_BYTE *)this + 160) = 0;
  *((_DWORD *)this + 41) = 0;
  CMILBrushBitmap::CMILBrushBitmap((CTileLegacyMilBrush *)((char *)this + 168), v3);
  *v4 = &LocalMILObject<CMILBrushBitmap>::`vftable';
  v4[3] = &LocalMILObject<CMILBrushBitmap>::`vftable'{for `CMILBrush'};
  v4[7] = &LocalMILObject<CMILBrushBitmap>::`vftable'{for `CMILResourceCache'};
  return this;
}

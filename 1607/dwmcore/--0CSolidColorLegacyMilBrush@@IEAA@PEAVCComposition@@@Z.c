/*
 * XREFs of ??0CSolidColorLegacyMilBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800318B4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEAU_D3DCOLORVALUE@@@Z @ 0x180121BD0 (-CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEAU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ??0CLegacyMilBrush@@IEAA@PEAVCComposition@@@Z @ 0x18002EF3C (--0CLegacyMilBrush@@IEAA@PEAVCComposition@@@Z.c)
 */

CSolidColorLegacyMilBrush *__fastcall CSolidColorLegacyMilBrush::CSolidColorLegacyMilBrush(
        CSolidColorLegacyMilBrush *this,
        struct CComposition *a2)
{
  CSolidColorLegacyMilBrush *result; // rax

  CLegacyMilBrush::CLegacyMilBrush(this, a2);
  *(_QWORD *)this = &CSolidColorLegacyMilBrush::`vftable';
  *((_DWORD *)this + 46) = 0;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 53) = 3;
  *((_DWORD *)this + 54) = 1;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 22) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `CMILObject'};
  *((_QWORD *)this + 25) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `CMILBrush'};
  *((_QWORD *)this + 29) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `IMILBrushSolid'};
  result = this;
  *((_DWORD *)this + 8) |= 1u;
  return result;
}

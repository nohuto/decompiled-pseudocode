/*
 * XREFs of ??0CSolidColorLegacyMilBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800589EC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 *     ?CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEAU_D3DCOLORVALUE@@@Z @ 0x18010B8B4 (-CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEAU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     <none>
 */

CSolidColorLegacyMilBrush *__fastcall CSolidColorLegacyMilBrush::CSolidColorLegacyMilBrush(
        CSolidColorLegacyMilBrush *this,
        struct CComposition *a2)
{
  CSolidColorLegacyMilBrush *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CSolidColorLegacyMilBrush::`vftable';
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 35) = 3;
  *((_DWORD *)this + 36) = 1;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 13) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `CMILObject'};
  *((_QWORD *)this + 16) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `CMILBrush'};
  *((_QWORD *)this + 20) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `IMILBrushSolid'};
  result = this;
  *((_DWORD *)this + 8) |= 1u;
  return result;
}

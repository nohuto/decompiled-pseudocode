/*
 * XREFs of ??0CSolidColorBrush@@IEAA@PEAVCComposition@@@Z @ 0x180083C88
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 *     ?CreateFromColor@CSolidColorBrush@@SAJPEAPEAV1@PEAVCComposition@@AEAU_D3DCOLORVALUE@@@Z @ 0x1800F19A4 (-CreateFromColor@CSolidColorBrush@@SAJPEAPEAV1@PEAVCComposition@@AEAU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     <none>
 */

CSolidColorBrush *__fastcall CSolidColorBrush::CSolidColorBrush(CSolidColorBrush *this, struct CComposition *a2)
{
  CSolidColorBrush *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CSolidColorBrush::`vftable';
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

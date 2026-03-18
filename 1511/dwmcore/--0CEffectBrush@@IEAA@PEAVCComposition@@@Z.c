/*
 * XREFs of ??0CEffectBrush@@IEAA@PEAVCComposition@@@Z @ 0x1801224BC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     <none>
 */

CEffectBrush *__fastcall CEffectBrush::CEffectBrush(CEffectBrush *this, struct CComposition *a2)
{
  CEffectBrush *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CEffectBrush::`vftable'{for `CSpriteVisualContent'};
  *((_QWORD *)this + 6) = &CEffectBrush::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 7) = &CEffectBrush::`vftable'{for `IVisualListenerInfoProvider'};
  *((_QWORD *)this + 8) = &CEffectBrush::`vftable'{for `CPropertyBag::IValueChangeListener'};
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = &CDeviceResourceTable<CD3DConstantBuffer,CEffectBrush,CD3DDeviceLevel1>::`vftable';
  *((_QWORD *)this + 13) = this;
  *((_QWORD *)this + 14) = (char *)this + 144;
  *((_QWORD *)this + 15) = (char *)this + 144;
  *((_DWORD *)this + 32) = 2;
  *(_QWORD *)((char *)this + 132) = 2LL;
  *((GUID *)this + 10) = DirectX::g_XMZero;
  *((_QWORD *)this + 23) = (char *)this + 216;
  *((_QWORD *)this + 24) = (char *)this + 216;
  result = this;
  *((_DWORD *)this + 50) = 2;
  *(_QWORD *)((char *)this + 204) = 2LL;
  return result;
}

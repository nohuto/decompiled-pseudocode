/*
 * XREFs of ??0CEffectBrush@@IEAA@PEAVCComposition@@@Z @ 0x18013AF24
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CEffectBrush *__fastcall CEffectBrush::CEffectBrush(CEffectBrush *this, struct CComposition *a2)
{
  CEffectBrush *result; // rax

  CResource::CResource(this, a2);
  *(_QWORD *)this = &CEffectBrush::`vftable'{for `CSpriteVisualContent'};
  *((_QWORD *)this + 15) = &CEffectBrush::`vftable'{for `IVisualListenerInfoProvider'};
  *((_QWORD *)this + 16) = &CEffectBrush::`vftable'{for `CPropertyBag::IValueChangeListener'};
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = &CDeviceResourceTable<CD3DConstantBuffer,CEffectBrush,CD3DDeviceLevel1>::`vftable';
  *((_QWORD *)this + 21) = this;
  *((_QWORD *)this + 22) = (char *)this + 208;
  *((_QWORD *)this + 23) = (char *)this + 208;
  *((_DWORD *)this + 48) = 2;
  *(_QWORD *)((char *)this + 196) = 2LL;
  *((GUID *)this + 14) = GUID_NULL;
  *((_QWORD *)this + 31) = (char *)this + 280;
  *((_QWORD *)this + 32) = (char *)this + 280;
  *((_DWORD *)this + 66) = 2;
  *(_QWORD *)((char *)this + 268) = 2LL;
  *((_QWORD *)this + 37) = (char *)this + 328;
  *((_QWORD *)this + 38) = (char *)this + 328;
  result = this;
  *((_DWORD *)this + 78) = 2;
  *(_QWORD *)((char *)this + 316) = 2LL;
  return result;
}

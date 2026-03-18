/*
 * XREFs of ??0CCompiledEffect@@IEAA@PEAVCComposition@@@Z @ 0x180112220
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     <none>
 */

CCompiledEffect *__fastcall CCompiledEffect::CCompiledEffect(CCompiledEffect *this, struct CComposition *a2)
{
  CCompiledEffect *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CCompiledEffect::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CCompiledEffect::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 6) = &CCompiledEffect::`vftable'{for `CPropertyBag::IValueChangeListener'};
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = &CDeviceResourceTable<CD3DConstantBuffer,CCompiledEffect,CD3DDeviceLevel1>::`vftable';
  *((_QWORD *)this + 11) = this;
  *((_QWORD *)this + 12) = (char *)this + 128;
  *((_QWORD *)this + 13) = (char *)this + 128;
  *((_DWORD *)this + 28) = 2;
  *(_QWORD *)((char *)this + 116) = 2LL;
  result = this;
  *((GUID *)this + 9) = GUID_NULL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  return result;
}

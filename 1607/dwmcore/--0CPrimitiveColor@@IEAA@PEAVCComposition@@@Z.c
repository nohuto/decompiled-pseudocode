/*
 * XREFs of ??0CPrimitiveColor@@IEAA@PEAVCComposition@@@Z @ 0x18001BE18
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CPrimitiveColor *__fastcall CPrimitiveColor::CPrimitiveColor(CPrimitiveColor *this, struct CComposition *a2)
{
  CResource::CResource((CPrimitiveColor *)((char *)this + 8), a2);
  *(_QWORD *)this = &CPrimitiveColor::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 1) = &CPrimitiveColor::`vftable'{for `CResource'};
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 15) = (char *)this + 152;
  *((_QWORD *)this + 16) = (char *)this + 152;
  *((_DWORD *)this + 34) = 2;
  *((_DWORD *)this + 35) = 2;
  return this;
}

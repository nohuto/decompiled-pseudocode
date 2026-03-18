/*
 * XREFs of ??0CPrimitiveGroup@@IEAA@PEAVCComposition@@@Z @ 0x18004D3D8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CPrimitiveGroupLayerClip@@IEAA@PEAVCComposition@@@Z @ 0x1800AD82C (--0CPrimitiveGroupLayerClip@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CPrimitiveGroup *__fastcall CPrimitiveGroup::CPrimitiveGroup(CPrimitiveGroup *this, struct CComposition *a2)
{
  CResource::CResource(this, a2);
  *(_QWORD *)this = &CPrimitiveGroup::`vftable'{for `CContent'};
  *((_QWORD *)this + 14) = &CPrimitiveGroupLayerClip::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 15) = &CPrimitiveGroupLayerClip::`vftable'{for `IDirtyRectSource'};
  *((_QWORD *)this + 21) = (char *)this + 200;
  *((_QWORD *)this + 22) = (char *)this + 200;
  *((_DWORD *)this + 46) = 2;
  *(_QWORD *)((char *)this + 188) = 2LL;
  *((_QWORD *)this + 28) = (char *)this + 256;
  *((_QWORD *)this + 29) = (char *)this + 256;
  *((_DWORD *)this + 60) = 4;
  *(_QWORD *)((char *)this + 244) = 4LL;
  *((_QWORD *)this + 36) = (char *)this + 320;
  *((_QWORD *)this + 37) = (char *)this + 320;
  *((_DWORD *)this + 76) = 4;
  *(_QWORD *)((char *)this + 308) = 4LL;
  *((_QWORD *)this + 64) = (char *)this + 520;
  *((_DWORD *)this + 130) = 0;
  return this;
}

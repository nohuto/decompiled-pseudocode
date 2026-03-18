/*
 * XREFs of ??0CPrimitiveGroupLayerClip@@IEAA@PEAVCComposition@@@Z @ 0x1800AD82C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CPrimitiveGroup@@IEAA@PEAVCComposition@@@Z @ 0x18004D3D8 (--0CPrimitiveGroup@@IEAA@PEAVCComposition@@@Z.c)
 */

CPrimitiveGroupLayerClip *__fastcall CPrimitiveGroupLayerClip::CPrimitiveGroupLayerClip(
        CPrimitiveGroupLayerClip *this,
        struct CComposition *a2)
{
  CPrimitiveGroup::CPrimitiveGroup(this, a2);
  *(_QWORD *)this = &CPrimitiveGroupLayerClip::`vftable'{for `CContent'};
  *((_QWORD *)this + 14) = &CPrimitiveGroupLayerClip::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 15) = &CPrimitiveGroupLayerClip::`vftable'{for `IDirtyRectSource'};
  return this;
}

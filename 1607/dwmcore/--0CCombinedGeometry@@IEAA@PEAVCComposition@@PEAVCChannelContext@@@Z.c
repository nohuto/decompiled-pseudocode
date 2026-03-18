/*
 * XREFs of ??0CCombinedGeometry@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x1800201E4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CGeometry@@IEAA@PEAVCComposition@@@Z @ 0x18002CB90 (--0CGeometry@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z @ 0x18009EEA8 (--0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z.c)
 */

CCombinedGeometry *__fastcall CCombinedGeometry::CCombinedGeometry(
        CCombinedGeometry *this,
        struct CComposition *a2,
        struct CResourceTable **a3)
{
  _QWORD *v5; // r9
  CCombinedGeometry *result; // rax

  CGeometry::CGeometry(this, a2);
  CCyclicResourceListEntry::CCyclicResourceListEntry((CCombinedGeometry *)((char *)this + 176), a3[3]);
  *v5 = &CCombinedGeometry::`vftable'{for `CCyclicResourceListEntry'};
  result = this;
  *(_QWORD *)this = &CCombinedGeometry::`vftable'{for `CGeometry'};
  return result;
}

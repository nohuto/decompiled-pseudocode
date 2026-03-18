/*
 * XREFs of ??0CManipulation@@IEAA@PEAVCComposition@@@Z @ 0x180145940
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Reset@ManipulationData@@QEAAXXZ @ 0x180145C68 (-Reset@ManipulationData@@QEAAXXZ.c)
 */

CManipulation *__fastcall CManipulation::CManipulation(CManipulation *this, struct CComposition *a2)
{
  CResource::CResource((CManipulation *)((char *)this + 8), a2);
  *(_QWORD *)this = &CManipulation::`vftable'{for `IManipulationResource'};
  *((_QWORD *)this + 1) = &CManipulation::`vftable'{for `CResource'};
  ManipulationData::Reset((CManipulation *)((char *)this + 120));
  ManipulationData::Reset((CManipulation *)((char *)this + 268));
  `vector constructor iterator'(
    (CManipulation *)((char *)this + 428),
    1LL,
    3LL,
    (void (__fastcall *)(TemporaryConfiguration *))CManipulation::ScrollingConfiguration::ScrollingConfiguration);
  return this;
}

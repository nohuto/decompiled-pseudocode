/*
 * XREFs of ??0CPropertyBag@@IEAA@PEAVCComposition@@@Z @ 0x18008CC88
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CPropertyBag *__fastcall CPropertyBag::CPropertyBag(CPropertyBag *this, struct CComposition *a2)
{
  CResource::CResource(this, a2);
  *(_QWORD *)this = &CPropertyBag::`vftable';
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 120),
    CGenericTableMap<unsigned long,CLegacySurfaceManager::TokenToWindowRecord>::CompareTableData,
    CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::AllocTableData,
    CGenericTableMap<unsigned int,PropertyMapEntry>::FreeTableData,
    0LL);
  return this;
}

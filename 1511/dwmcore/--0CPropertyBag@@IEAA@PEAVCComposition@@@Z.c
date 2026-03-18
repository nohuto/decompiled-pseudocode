/*
 * XREFs of ??0CPropertyBag@@IEAA@PEAVCComposition@@@Z @ 0x180135C04
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     <none>
 */

CPropertyBag *__fastcall CPropertyBag::CPropertyBag(CPropertyBag *this, struct CComposition *a2)
{
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CPropertyBag::`vftable';
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 48),
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<unsigned long,CLegacySurfaceManager::TokenToWindowRecord>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FreeTableData,
    0LL);
  return this;
}

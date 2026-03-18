/*
 * XREFs of ??0FxIoResList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxIoResReqList@@@Z @ 0x1C0009BAC
 * Callers:
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C0009924 (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 *     imp_WdfIoResourceListCreate @ 0x1C007E8E0 (imp_WdfIoResourceListCreate.c)
 * Callees:
 *     ??0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z @ 0x1C001EB08 (--0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z.c)
 */

void __fastcall FxIoResList::FxIoResList(
        FxIoResList *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxIoResReqList *RequirementsList)
{
  FxResourceCollection::FxResourceCollection(this, FxDriverGlobals, 0x1035u, 0xA0u, 0);
  this->m_OwningList = RequirementsList;
  this->__vftable = (FxIoResList_vtbl *)&FxObject::`vftable'.WdfVerifierAllocateFailCount;
  this->m_AccessFlags = RequirementsList->m_AccessFlags;
}

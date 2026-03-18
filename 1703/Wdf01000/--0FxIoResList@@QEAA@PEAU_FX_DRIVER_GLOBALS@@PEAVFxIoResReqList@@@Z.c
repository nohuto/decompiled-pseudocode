/*
 * XREFs of ??0FxIoResList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxIoResReqList@@@Z @ 0x1C002FDD0
 * Callers:
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C0032EC4 (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 *     imp_WdfIoResourceListCreate @ 0x1C00830F0 (imp_WdfIoResourceListCreate.c)
 * Callees:
 *     ??0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z @ 0x1C0018F88 (--0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z.c)
 */

void __fastcall FxIoResList::FxIoResList(
        FxIoResList *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxIoResReqList *RequirementsList)
{
  FxResourceCollection::FxResourceCollection(this, FxDriverGlobals, 0x1035u, 0xA0u, 0);
  this->m_OwningList = RequirementsList;
  this->__vftable = (FxIoResList_vtbl *)FxIoResList::`vftable';
  this->m_AccessFlags = RequirementsList->m_AccessFlags;
}

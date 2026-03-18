/*
 * XREFs of ??0FxIoResReqList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0009D88
 * Callers:
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C0009924 (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 *     ?_CreateAndInit@FxIoResReqList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C00A2E3C (-_CreateAndInit@FxIoResReqList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 * Callees:
 *     ??0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z @ 0x1C001EB08 (--0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z.c)
 */

void __fastcall FxIoResReqList::FxIoResReqList(FxIoResReqList *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxResourceCollection::FxResourceCollection(this, FxDriverGlobals, 0x1037u, 0xA0u, 3u);
  this->m_SlotNumber = 0;
  this->m_InterfaceType = Internal;
  this->__vftable = (FxIoResReqList_vtbl *)&FxObject::`vftable'.WdfVerifierAllocateFailCount;
  this->m_AccessFlags = 3;
}

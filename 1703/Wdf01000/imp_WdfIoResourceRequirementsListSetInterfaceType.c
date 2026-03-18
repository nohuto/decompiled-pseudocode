/*
 * XREFs of imp_WdfIoResourceRequirementsListSetInterfaceType @ 0x1C0083520
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

void __fastcall imp_WdfIoResourceRequirementsListSetInterfaceType(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        _INTERFACE_TYPE InterfaceType)
{
  FxIoResReqList *v4; // rax
  FxIoResReqList *pIoResReqList; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)RequirementsList,
    0x1037u,
    (void **)&pIoResReqList);
  v4 = pIoResReqList;
  if ( pIoResReqList->m_InterfaceType != InterfaceType )
  {
    pIoResReqList->m_Changed = 1;
    v4 = pIoResReqList;
  }
  v4->m_InterfaceType = InterfaceType;
}

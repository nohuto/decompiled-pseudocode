/*
 * XREFs of imp_WdfIoResourceRequirementsListSetInterfaceType @ 0x1C007EF60
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfIoResourceRequirementsListSetInterfaceType(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 RequirementsList,
        _INTERFACE_TYPE InterfaceType)
{
  __int64 Offset; // r10
  FxIoResReqList *v5; // rcx
  FxIoResReqList *pIoResReqList; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  if ( !RequirementsList )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1037uLL);
  v5 = (FxIoResReqList *)(~RequirementsList & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (RequirementsList & 1) != 0 )
  {
    Offset = LOWORD(v5->__vftable);
    v5 = (FxIoResReqList *)((char *)v5 - Offset);
  }
  if ( v5->m_Type == 4151 )
  {
    pIoResReqList = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pIoResReqList, (void *)RequirementsList, 0x1037u, Offset);
    v5 = pIoResReqList;
  }
  if ( v5->m_InterfaceType != InterfaceType )
  {
    v5->m_Changed = 1;
    v5 = pIoResReqList;
  }
  v5->m_InterfaceType = InterfaceType;
}

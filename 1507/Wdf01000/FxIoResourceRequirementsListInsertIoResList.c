/*
 * XREFs of FxIoResourceRequirementsListInsertIoResList @ 0x1C007E484
 * Callers:
 *     imp_WdfIoResourceRequirementsListAppendIoResList @ 0x1C007EC20 (imp_WdfIoResourceRequirementsListAppendIoResList.c)
 *     imp_WdfIoResourceRequirementsListInsertIoResList @ 0x1C007EC30 (imp_WdfIoResourceRequirementsListInsertIoResList.c)
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x1C0080E1C (-AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z.c)
 */

int __fastcall FxIoResourceRequirementsListInsertIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 RequirementsList,
        unsigned __int64 IoResList,
        unsigned int Index)
{
  FxIoResReqList *v6; // r10
  __int64 Offset; // rcx
  FxIoResList *v8; // rcx
  __int64 v9; // rdx
  int result; // eax
  FxIoResList *pIoResList; // [rsp+30h] [rbp-18h] BYREF
  FxIoResReqList *pIoResReqList; // [rsp+58h] [rbp+10h] BYREF

  if ( !RequirementsList )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1037uLL);
  v6 = (FxIoResReqList *)(~RequirementsList & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (RequirementsList & 1) != 0 )
  {
    Offset = LOWORD(v6->__vftable);
    v6 = (FxIoResReqList *)((char *)v6 - Offset);
  }
  if ( v6->m_Type == 4151 )
  {
    pIoResReqList = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&pIoResReqList, (void *)RequirementsList, 0x1037u, Offset);
    v6 = pIoResReqList;
  }
  if ( !IoResList )
    FxVerifierBugCheckWorker(v6->m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1035uLL);
  v8 = (FxIoResList *)(~IoResList & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v9) = 0;
  if ( (IoResList & 1) != 0 )
  {
    v9 = LOWORD(v8->__vftable);
    v8 = (FxIoResList *)((char *)v8 - v9);
  }
  if ( v8->m_Type == 4149 )
  {
    pIoResList = v8;
  }
  else
  {
    FxObjectHandleGetPtrQI(v8, (void **)&pIoResList, (void *)IoResList, 0x1035u, v9);
    v6 = pIoResReqList;
    v8 = pIoResList;
  }
  if ( v8->m_OwningList != v6 )
    return -1073741808;
  result = FxResourceCollection::AddAt(v6, Index, v8);
  if ( result >= 0 )
  {
    pIoResList->m_AccessFlags = pIoResReqList->m_AccessFlags;
    pIoResList->m_OwningList = pIoResReqList;
  }
  return result;
}

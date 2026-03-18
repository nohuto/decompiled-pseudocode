/*
 * XREFs of imp_WdfIoResourceListCreate @ 0x1C007E8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0FxIoResList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxIoResReqList@@@Z @ 0x1C0009BAC (--0FxIoResList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxIoResReqList@@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfIoResourceListCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 RequirementsList,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFIORESLIST__ **ResourceList)
{
  FxIoResReqList *v6; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  FxIoResList *v10; // rax
  FxObject *v11; // rax
  FxObject *v12; // rbx
  int v13; // edi
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]
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
  m_Globals = v6->m_Globals;
  if ( !ResourceList )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *ResourceList = 0LL;
  result = FxValidateObjectAttributes(m_Globals, Attributes, 1, (unsigned __int16)ResourceList);
  if ( (int)result >= 0 )
  {
    v10 = (FxIoResList *)FxObjectHandleAlloc(
                           m_Globals,
                           ExDefaultNonPagedPoolType,
                           0xA0uLL,
                           0,
                           Attributes,
                           0,
                           FxObjectTypeExternal);
    if ( v10 )
    {
      FxIoResList::FxIoResList(v10, m_Globals, pIoResReqList);
      v12 = v11;
    }
    else
    {
      v12 = 0LL;
    }
    if ( v12 )
    {
      v13 = FxObject::Commit(v12, Attributes, (void **)ResourceList, pIoResReqList, 1u);
      if ( v13 < 0 )
        FxObject::DeleteFromFailedCreate(v12);
      return (unsigned int)v13;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}

/*
 * XREFs of FxCmResourceListInsertDescriptor @ 0x1C007E790
 * Callers:
 *     imp_WdfCmResourceListAppendDescriptor @ 0x1C007EA60 (imp_WdfCmResourceListAppendDescriptor.c)
 *     imp_WdfCmResourceListInsertDescriptor @ 0x1C007EA70 (imp_WdfCmResourceListInsertDescriptor.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00108C0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C001C300 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ??0FxResourceCm@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C0063D68 (--0FxResourceCm@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x1C00818B0 (-AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z.c)
 */

int __fastcall FxCmResourceListInsertDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *Descriptor,
        unsigned int Index)
{
  _FX_DRIVER_GLOBALS *v4; // rbx
  _FX_DRIVER_GLOBALS *v7; // rcx
  FxResourceCm *v8; // rax
  FxObject *v9; // rax
  FxObject *v10; // rbx
  int v12; // edi
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]
  FxCmResList *pList; // [rsp+50h] [rbp+8h] BYREF

  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  v7 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  if ( !Descriptor )
    FxVerifierNullBugCheck(v7, retaddr);
  FxObjectHandleGetPtr(v7, (unsigned __int64)List, 0x1036u, (void **)&pList);
  v8 = (FxResourceCm *)FxObjectHandleAlloc(v4, ExDefaultNonPagedPoolType, 0x90uLL, 0, 0LL, 0, FxObjectTypeInternal);
  if ( v8 )
  {
    FxResourceCm::FxResourceCm(v8, v4, Descriptor);
    v10 = v9;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
    return -1073741670;
  v12 = FxObject::AssignParentObject(v10, pList);
  if ( v12 >= 0 )
    return FxResourceCollection::AddAt(pList, Index, v10);
  v10->DeleteObject(v10);
  return v12;
}

/*
 * XREFs of FxCmResourceListInsertDescriptor @ 0x1C007E184
 * Callers:
 *     imp_WdfCmResourceListAppendDescriptor @ 0x1C007E5D0 (imp_WdfCmResourceListAppendDescriptor.c)
 *     imp_WdfCmResourceListInsertDescriptor @ 0x1C007E5E0 (imp_WdfCmResourceListInsertDescriptor.c)
 * Callees:
 *     ??0FxResourceCm@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C000A06C (--0FxResourceCm@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0015E00 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x1C0080E1C (-AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z.c)
 */

int __fastcall FxCmResourceListInsertDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 List,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *Descriptor,
        unsigned int Index)
{
  _FX_DRIVER_GLOBALS *v4; // rbx
  FxCmResList *v7; // rcx
  __int64 Offset; // r8
  FxResourceCm *v9; // rax
  FxObject *v10; // rax
  FxObject *v11; // rbx
  int v13; // edi
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]
  FxCmResList *pList; // [rsp+50h] [rbp+8h] BYREF

  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  if ( !Descriptor )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  if ( !List )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1036uLL);
  v7 = (FxCmResList *)(~List & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (List & 1) != 0 )
  {
    Offset = LOWORD(v7->__vftable);
    v7 = (FxCmResList *)((char *)v7 - Offset);
  }
  if ( v7->m_Type == 4150 )
    pList = v7;
  else
    FxObjectHandleGetPtrQI(v7, (void **)&pList, (void *)List, 0x1036u, Offset);
  v9 = (FxResourceCm *)FxObjectHandleAlloc(v4, ExDefaultNonPagedPoolType, 0x90uLL, 0, 0LL, 0, FxObjectTypeInternal);
  if ( v9 )
  {
    FxResourceCm::FxResourceCm(v9, v4, Descriptor);
    v11 = v10;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
    return -1073741670;
  v13 = FxObject::AssignParentObject(v11, pList);
  if ( v13 >= 0 )
    return FxResourceCollection::AddAt(pList, Index, v11);
  v11->DeleteObject(v11);
  return v13;
}

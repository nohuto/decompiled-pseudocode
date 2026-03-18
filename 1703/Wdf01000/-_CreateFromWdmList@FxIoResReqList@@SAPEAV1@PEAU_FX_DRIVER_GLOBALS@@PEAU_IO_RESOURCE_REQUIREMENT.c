/*
 * XREFs of ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C0032EC4
 * Callers:
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C002914C (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ??0FxIoResReqList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0016E64 (--0FxIoResReqList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C001CFE0 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x1C002FCD4 (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 *     ??0FxIoResList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxIoResReqList@@@Z @ 0x1C002FDD0 (--0FxIoResList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxIoResReqList@@@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00348B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 */

FxIoResReqList *__fastcall FxIoResReqList::_CreateFromWdmList(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _IO_RESOURCE_REQUIREMENTS_LIST *WdmRequirementsList,
        unsigned __int8 a3)
{
  FxIoResReqList *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // ebp
  FxIoResList *v9; // rax
  FxIoResList *v10; // rax
  FxIoResList *v11; // rsi
  int v12; // eax
  _IO_RESOURCE_LIST *pWdmResourceList; // [rsp+78h] [rbp+20h] BYREF

  v5 = (FxIoResReqList *)FxObjectHandleAlloc(
                           FxDriverGlobals,
                           ExDefaultNonPagedPoolType,
                           0xA0uLL,
                           0,
                           0LL,
                           0,
                           FxObjectTypeExternal);
  if ( v5 )
  {
    FxIoResReqList::FxIoResReqList(v5, FxDriverGlobals);
    v7 = v6;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    if ( WdmRequirementsList )
    {
      v8 = 0;
      pWdmResourceList = WdmRequirementsList->List;
      *(_DWORD *)(v7 + 156) = WdmRequirementsList->InterfaceType;
      *(_DWORD *)(v7 + 152) = WdmRequirementsList->SlotNumber;
      if ( WdmRequirementsList->AlternativeLists )
      {
        while ( 1 )
        {
          v9 = (FxIoResList *)FxObjectHandleAlloc(
                                FxDriverGlobals,
                                ExDefaultNonPagedPoolType,
                                0xA0uLL,
                                0,
                                0LL,
                                0,
                                FxObjectTypeExternal);
          if ( v9 )
          {
            FxIoResList::FxIoResList(v9, FxDriverGlobals, (FxIoResReqList *)v7);
            v11 = v10;
          }
          else
          {
            v11 = 0LL;
          }
          if ( v11 )
          {
            FxObject::AssignParentObject(v11, (FxObject *)v7);
            v12 = FxIoResList::BuildFromWdmList(v11, (_IO_RESOURCE_DESCRIPTOR **)&pWdmResourceList);
          }
          else
          {
            v12 = -1073741670;
          }
          if ( v12 < 0 )
            break;
          if ( ++v8 >= WdmRequirementsList->AlternativeLists )
            return (FxIoResReqList *)v7;
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
        return 0LL;
      }
    }
  }
  return (FxIoResReqList *)v7;
}

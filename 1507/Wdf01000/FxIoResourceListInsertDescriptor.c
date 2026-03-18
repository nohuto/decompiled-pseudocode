/*
 * XREFs of FxIoResourceListInsertDescriptor @ 0x1C007E2B8
 * Callers:
 *     imp_WdfIoResourceListAppendDescriptor @ 0x1C007E8D0 (imp_WdfIoResourceListAppendDescriptor.c)
 *     imp_WdfIoResourceListInsertDescriptor @ 0x1C007EA30 (imp_WdfIoResourceListInsertDescriptor.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0015E00 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ??0FxResourceIo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_DESCRIPTOR@@@Z @ 0x1C005CBB4 (--0FxResourceIo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x1C0080E1C (-AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z.c)
 */

int __fastcall FxIoResourceListInsertDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 ResourceList,
        _IO_RESOURCE_DESCRIPTOR *Descriptor,
        unsigned int Index)
{
  WDFIORESLIST__ *_a1; // rdi
  FxIoResList *v7; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int result; // eax
  FxResourceIo *v10; // rax
  FxObject *v11; // rax
  FxObject *v12; // rbx
  int v13; // edi
  FxIoResList *pList; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]

  _a1 = (WDFIORESLIST__ *)ResourceList;
  if ( !ResourceList )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1035uLL);
  v7 = (FxIoResList *)(~ResourceList & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(ResourceList) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    ResourceList = LOWORD(v7->__vftable);
    v7 = (FxIoResList *)((char *)v7 - ResourceList);
  }
  if ( v7->m_Type == 4149 )
  {
    pList = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pList, _a1, 0x1035u, ResourceList);
    v7 = pList;
  }
  m_Globals = v7->m_Globals;
  if ( !Descriptor )
    FxVerifierNullBugCheck(v7->m_Globals, retaddr);
  if ( (v7->m_OwningList->m_AccessFlags & 1) != 0 )
  {
    v10 = (FxResourceIo *)FxObjectHandleAlloc(
                            m_Globals,
                            ExDefaultNonPagedPoolType,
                            0xA8uLL,
                            0,
                            0LL,
                            0,
                            FxObjectTypeInternal);
    if ( v10 )
    {
      FxResourceIo::FxResourceIo(v10, m_Globals, Descriptor);
      v12 = v11;
    }
    else
    {
      v12 = 0LL;
    }
    if ( v12 )
    {
      v13 = FxObject::AssignParentObject(v12, pList);
      if ( v13 >= 0 )
      {
        result = FxResourceCollection::AddAt(pList, Index, v12);
        if ( result >= 0 )
          pList->m_OwningList->m_Changed = 1;
      }
      else
      {
        v12->DeleteObject(v12);
        return v13;
      }
    }
    else
    {
      return -1073741670;
    }
  }
  else
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0xCu, WPP_FxResourceAPI_cpp_Traceguids, _a1);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return -1073741790;
  }
  return result;
}

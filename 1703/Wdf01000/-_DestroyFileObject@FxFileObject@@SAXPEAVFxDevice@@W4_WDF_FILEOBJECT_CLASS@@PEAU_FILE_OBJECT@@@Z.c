/*
 * XREFs of ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x1C007DEE4
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009E80 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?_CreateCompletionRoutine@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0039BB0 (-_CreateCompletionRoutine@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0006760 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxFileObject::_DestroyFileObject(
        FxDevice *pDevice,
        _WDF_FILEOBJECT_CLASS FileObjectClass,
        _FILE_OBJECT *pWdmFileObject)
{
  __int32 v3; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  _QWORD *FsContext; // rbx
  int FileObjectFromWdm; // eax
  unsigned __int8 v9; // r8
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  FxFileObject *pfo; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+58h] [rbp+10h] BYREF

  pfo = 0LL;
  v3 = FileObjectClass & 0x7FFFFFFF;
  m_Globals = pDevice->m_Globals;
  if ( v3 == 1 )
    return;
  if ( !pWdmFileObject && v3 != 4 )
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_(pDevice->m_Globals, 5u, 0xDu, 0xBu, WPP_FxFileObject_cpp_Traceguids);
    FxVerifierDbgBreakPoint(pDevice->m_Globals);
    return;
  }
  if ( v3 == 2 )
  {
    FsContext = pWdmFileObject->FsContext;
    pWdmFileObject->FsContext = 0LL;
    goto LABEL_15;
  }
  if ( v3 == 3 )
  {
    FsContext = pWdmFileObject->FsContext2;
    pWdmFileObject->FsContext2 = 0LL;
    goto LABEL_15;
  }
  FileObjectFromWdm = FxFileObject::_GetFileObjectFromWdm(
                        pDevice,
                        WdfFileObjectWdfCannotUseFsContexts,
                        pWdmFileObject,
                        &pfo);
  FsContext = &pfo->FxNonPagedObject::FxObject::__vftable;
  if ( FileObjectFromWdm < 0 || !pfo )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xCu, WPP_FxFileObject_cpp_Traceguids, pWdmFileObject);
    WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xDu, WPP_FxFileObject_cpp_Traceguids);
    FxVerifierDbgBreakPoint(pDevice->m_Globals);
LABEL_15:
    if ( !FsContext )
      return;
  }
  FxNonPagedObject::Lock(pDevice, &irql, (unsigned __int8)pWdmFileObject);
  v10 = FsContext[18];
  v11 = (_QWORD *)FsContext[19];
  if ( *(_QWORD **)(v10 + 8) != FsContext + 18 || (_QWORD *)*v11 != FsContext + 18 )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  FxNonPagedObject::Unlock(pDevice, irql, v9);
  (*(void (__fastcall **)(_QWORD *))(*FsContext + 48LL))(FsContext);
}

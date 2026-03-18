/*
 * XREFs of ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x1C0076DFC
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003F30 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?_CreateCompletionRoutine@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C002E570 (-_CreateCompletionRoutine@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0002290 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall FxFileObject::_DestroyFileObject(
        FxDevice *pDevice,
        _WDF_FILEOBJECT_CLASS FileObjectClass,
        _FILE_OBJECT *pWdmFileObject)
{
  __int32 v3; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  __int64 v7; // rax
  _QWORD *FsContext; // rbx
  int FileObjectFromWdm; // eax
  __int64 v10; // rax
  unsigned __int8 v11; // r8
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  FxVerifierLock *v14; // rcx
  FxFileObject *pfo; // [rsp+50h] [rbp+20h] BYREF
  int irql; // [rsp+58h] [rbp+28h] BYREF

  pfo = 0LL;
  v3 = FileObjectClass & 0x7FFFFFFF;
  m_Globals = pDevice->m_Globals;
  if ( v3 == 1 )
    return;
  if ( !pWdmFileObject && v3 != 4 )
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_(pDevice->m_Globals, 5u, 0xDu, 0xBu, WPP_FxFileObject_cpp_Traceguids);
    irql = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( *(_BYTE *)(v7 + 318) )
      DbgBreakPoint();
    return;
  }
  if ( v3 == 2 )
  {
    FsContext = pWdmFileObject->FsContext;
    pWdmFileObject->FsContext = 0LL;
    goto LABEL_17;
  }
  if ( v3 == 3 )
  {
    FsContext = pWdmFileObject->FsContext2;
    pWdmFileObject->FsContext2 = 0LL;
    goto LABEL_17;
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
    irql = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( *(_BYTE *)(v10 + 318) )
      DbgBreakPoint();
LABEL_17:
    if ( !FsContext )
      return;
  }
  FxNonPagedObject::Lock(pDevice, (unsigned __int8 *)&irql, (unsigned __int8)pWdmFileObject);
  v12 = FsContext[18];
  v13 = (_QWORD *)FsContext[19];
  if ( *(_QWORD **)(v12 + 8) != FsContext + 18 || (_QWORD *)*v13 != FsContext + 18 )
    __fastfail(3u);
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  if ( SLOBYTE(pDevice->m_ObjectFlags) < 0
    && (v14 = (FxVerifierLock *)*((_QWORD *)&pDevice[-1].m_PkgDefault + 1)) != 0LL )
  {
    FxVerifierLock::Unlock(v14, irql, v11);
  }
  else
  {
    KeReleaseSpinLock(&pDevice->m_NPLock.m_Lock, irql);
  }
  (*(void (__fastcall **)(_QWORD *))(*FsContext + 48LL))(FsContext);
}

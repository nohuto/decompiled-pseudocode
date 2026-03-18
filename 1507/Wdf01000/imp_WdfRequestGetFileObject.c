/*
 * XREFs of imp_WdfRequestGetFileObject @ 0x1C0002190
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0002290 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D1058 (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D1360 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

WDFFILEOBJECT__ *__fastcall imp_WdfRequestGetFileObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int8 a3)
{
  FxRequest *v3; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxDevice *m_Device; // rbp
  _FX_DRIVER_GLOBALS *v7; // rdi
  _FILE_OBJECT *FileObject; // r8
  unsigned __int8 v10; // r8
  int IsDriverOwned; // ebx
  unsigned __int8 v12; // r8
  int _a1; // edi
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  unsigned __int8 irql; // [rsp+68h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+70h] [rbp+18h] BYREF
  FxFileObject *ppFxFileObject; // [rsp+78h] [rbp+20h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1008uLL);
  v3 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxRequest *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4104 )
  {
    pRequest = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v3 = pRequest;
  }
  m_Globals = v3->m_Globals;
  if ( m_Globals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v3->m_Globals, Request, 9u) || m_Globals->FxVerifyDownlevel) )
  {
    FxNonPagedObject::Lock(v3, &irql, a3);
    if ( m_Globals->FxVerifierOn )
      IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(pRequest, m_Globals);
    else
      IsDriverOwned = 0;
    if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 && pRequest[-1].m_ForwardProgressQueue )
      FxVerifierLock::Unlock((FxVerifierLock *)pRequest[-1].m_ForwardProgressQueue, irql, v10);
    else
      KeReleaseSpinLock(&pRequest->m_NPLock.m_Lock, irql);
    if ( IsDriverOwned < 0 )
      return 0LL;
    v3 = pRequest;
  }
  m_Device = v3->m_Device;
  v7 = v3->m_Globals;
  ppFxFileObject = 0LL;
  if ( v7->FxVerifierIO )
  {
    FxNonPagedObject::Lock(v3, &irql, a3);
    _a1 = v7->FxVerifierOn ? FxRequest::Vf_VerifyRequestIsNotCompleted(v3, v7) : 0;
    if ( SLOBYTE(v3->m_ObjectFlags) < 0
      && (m_ForwardProgressQueue = (FxVerifierLock *)v3[-1].m_ForwardProgressQueue) != 0LL )
    {
      FxVerifierLock::Unlock(m_ForwardProgressQueue, irql, v12);
    }
    else
    {
      KeReleaseSpinLock(&v3->m_NPLock.m_Lock, irql);
    }
    if ( _a1 < 0 )
      goto LABEL_42;
  }
  FileObject = v3->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
  if ( !FileObject && v3->m_IrpAllocation == 2 )
    return 0LL;
  if ( FxFileObject::_GetFileObjectFromWdm(m_Device, m_Device->m_FileObjectClass, FileObject, &ppFxFileObject) < 0 )
  {
LABEL_41:
    _a1 = -1073741808;
LABEL_42:
    WPP_IFR_SF_d(m_Globals, 2u, 0x10u, 0x3Fu, WPP_FxRequestApi_cpp_Traceguids, _a1);
    return 0LL;
  }
  if ( !ppFxFileObject )
  {
    if ( m_Device->m_FileObjectClass < WdfFileObjectInvalid )
      return 0LL;
    goto LABEL_41;
  }
  if ( ppFxFileObject->m_ObjectSize )
    return (WDFFILEOBJECT__ *)((unsigned __int64)ppFxFileObject ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    return 0LL;
}

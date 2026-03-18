/*
 * XREFs of ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00023C0
 * Callers:
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0003100 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0002290 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0004690 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0031E08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

__int64 __fastcall FxPkgGeneral::OnClose(FxPkgGeneral *this, FxIrp *FxIrp)
{
  _IRP *m_Irp; // r13
  char v4; // r14
  _FILE_OBJECT *FileObject; // r8
  unsigned __int8 v7; // r8
  int FileObjectFromWdm; // r15d
  _LIST_ENTRY *m_PkgContext; // rsi
  _LIST_ENTRY *Flink; // rsi
  unsigned __int64 v11; // r14
  _LIST_ENTRY *v12; // rcx
  _LIST_ENTRY *v13; // rcx
  _IRP *v14; // rax
  FxDeviceBase *m_DeviceBase; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int v17; // eax
  _FILE_OBJECT *_a1; // r12
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int v20; // eax
  FxFileObject *v21; // r12
  KIRQL v22; // r9
  _LIST_ENTRY *v23; // r8
  _LIST_ENTRY *Blink; // rdx
  char v25; // si
  FxDeviceBase *v26; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  NTSTATUS _a2; // eax
  _IRP *v30; // rax
  _FX_DRIVER_GLOBALS *v31; // rax
  __int64 v32; // rax
  _FX_DRIVER_GLOBALS *v33; // rax
  __int64 v34; // rax
  FxVerifierLock *m_CallbackLockObjectPtr; // rcx
  FxVerifierLock *v36; // rcx
  _FX_DRIVER_GLOBALS *v37; // r12
  unsigned int v38; // edx
  FxDeviceBase *v39; // rcx
  int v40; // [rsp+40h] [rbp-20h] BYREF
  int v41; // [rsp+44h] [rbp-1Ch] BYREF
  FxFileObject *ppFxFileObject; // [rsp+48h] [rbp-18h] BYREF
  FxFileObject *pFxFO; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v44; // [rsp+A8h] [rbp+48h] BYREF
  FxFileObject *PreviousIrql; // [rsp+B0h] [rbp+50h] BYREF
  _FX_DRIVER_GLOBALS *globals; // [rsp+B8h] [rbp+58h] BYREF

  m_Irp = FxIrp->m_Irp;
  v4 = 0;
  pFxFO = 0LL;
  v44 = 0LL;
  FileObject = m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
  if ( !FileObject || (FileObject->Flags & 0x100) == 0 )
  {
    FileObjectFromWdm = FxFileObject::_GetFileObjectFromWdm(
                          this->m_Device,
                          (_WDF_FILEOBJECT_CLASS)LODWORD(this->m_DeviceBase[1].m_DisposeSingleEntry.Next),
                          FileObject,
                          &pFxFO);
    if ( pFxFO )
    {
      if ( FileObjectFromWdm >= 0 )
      {
        if ( pFxFO->m_ObjectSize )
          v44 = (unsigned __int64)pFxFO ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v44 = 0LL;
      }
      m_PkgContext = (_LIST_ENTRY *)pFxFO->m_PkgContext;
      if ( !m_PkgContext )
        m_PkgContext = &this->m_FileObjectInfoHeadList;
    }
    else
    {
      m_PkgContext = this->m_FileObjectInfoHeadList.Blink;
      if ( m_PkgContext != &this->m_FileObjectInfoHeadList )
      {
        while ( LODWORD(m_PkgContext[9].Flink) || !m_PkgContext[2].Blink )
        {
          m_PkgContext = m_PkgContext->Blink;
          if ( m_PkgContext == &this->m_FileObjectInfoHeadList )
            goto LABEL_9;
        }
        m_PkgContext = m_PkgContext->Blink;
      }
    }
LABEL_9:
    Flink = m_PkgContext->Flink;
    if ( Flink != &this->m_FileObjectInfoHeadList )
    {
      v11 = v44;
      do
      {
        if ( Flink[4].Blink )
        {
          v12 = Flink[4].Flink;
          LOBYTE(v44) = 0;
          if ( v12 )
            ((void (__fastcall *)(_LIST_ENTRY *, unsigned __int64 *))v12->Flink[1].Flink)(v12, &v44);
          ((void (__fastcall *)(unsigned __int64))Flink[4].Blink)(v11);
          v13 = Flink[4].Flink;
          if ( v13 )
            ((void (__fastcall *)(_LIST_ENTRY *, _QWORD))v13->Flink[1].Blink)(v13, (unsigned __int8)v44);
        }
        Flink = Flink->Flink;
      }
      while ( Flink != &this->m_FileObjectInfoHeadList );
      v4 = 0;
    }
    v14 = FxIrp->m_Irp;
    m_DeviceBase = this->m_DeviceBase;
    ppFxFileObject = 0LL;
    CurrentStackLocation = v14->Tail.Overlay.CurrentStackLocation;
    v17 = (__int64)m_DeviceBase[1].m_DisposeSingleEntry.Next & 0x7FFFFFFF;
    _a1 = CurrentStackLocation->FileObject;
    m_Globals = m_DeviceBase->m_Globals;
    globals = m_Globals;
    if ( v17 == 1 )
      goto LABEL_32;
    if ( !_a1 && v17 != 4 )
    {
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_(m_Globals, 5u, 0xDu, 0xBu, WPP_FxFileObject_cpp_Traceguids);
      v31 = m_DeviceBase->m_Globals;
      LODWORD(globals) = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        v31->Public.DriverName,
        (const char *)&globals,
        v31->Public.DriverName,
        (const char *)&globals);
      if ( *(_BYTE *)(v32 + 318) )
        DbgBreakPoint();
      goto LABEL_32;
    }
    if ( v17 == 2 )
    {
      PreviousIrql = (FxFileObject *)_a1->FsContext;
      ppFxFileObject = PreviousIrql;
      _a1->FsContext = 0LL;
    }
    else if ( v17 == 3 )
    {
      PreviousIrql = (FxFileObject *)_a1->FsContext2;
      ppFxFileObject = PreviousIrql;
      _a1->FsContext2 = 0LL;
    }
    else
    {
      v20 = FxFileObject::_GetFileObjectFromWdm(
              (FxDevice *)m_DeviceBase,
              WdfFileObjectWdfCannotUseFsContexts,
              _a1,
              &ppFxFileObject);
      PreviousIrql = ppFxFileObject;
      if ( v20 >= 0 && ppFxFileObject )
      {
        v21 = ppFxFileObject;
        goto LABEL_25;
      }
      WPP_IFR_SF_q(globals, 2u, 0x12u, 0xCu, WPP_FxFileObject_cpp_Traceguids, _a1);
      WPP_IFR_SF_(globals, 2u, 0x12u, 0xDu, WPP_FxFileObject_cpp_Traceguids);
      v33 = m_DeviceBase->m_Globals;
      v40 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        v33->Public.DriverName,
        (const char *)&v40,
        v33->Public.DriverName,
        (const char *)&v40);
      if ( *(_BYTE *)(v34 + 318) )
        DbgBreakPoint();
    }
    v21 = PreviousIrql;
    if ( !PreviousIrql )
    {
LABEL_32:
      v25 = 0;
      goto $Passthru;
    }
LABEL_25:
    if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
      && (m_CallbackLockObjectPtr = (FxVerifierLock *)m_DeviceBase[-1].m_CallbackLockObjectPtr) != 0LL )
    {
      FxVerifierLock::Lock(m_CallbackLockObjectPtr, (unsigned __int8 *)&PreviousIrql, v7);
      v22 = (unsigned __int8)PreviousIrql;
    }
    else
    {
      v22 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_NPLock.m_Lock);
      LOBYTE(PreviousIrql) = v22;
    }
    v23 = v21->m_Link.Flink;
    Blink = v21->m_Link.Blink;
    if ( v23->Blink != &v21->m_Link || Blink->Flink != &v21->m_Link )
      __fastfail(3u);
    Blink->Flink = v23;
    v23->Blink = Blink;
    if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
      && (v36 = (FxVerifierLock *)m_DeviceBase[-1].m_CallbackLockObjectPtr) != 0LL )
    {
      FxVerifierLock::Unlock(v36, v22, (unsigned __int8)v23);
    }
    else
    {
      KeReleaseSpinLock(&m_DeviceBase->m_NPLock.m_Lock, v22);
    }
    v21->DeleteObject(v21);
    goto LABEL_32;
  }
  v25 = 1;
  FileObjectFromWdm = 0;
$Passthru:
  v26 = this->m_DeviceBase;
  if ( BYTE1(v26[1].m_ChildEntry.Blink) )
  {
    v30 = FxIrp->m_Irp;
    ++v30->CurrentLocation;
    ++v30->Tail.Overlay.CurrentStackLocation;
    FileObjectFromWdm = IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, FxIrp->m_Irp);
  }
  else
  {
    m_DeviceObject = v26->m_DeviceObject.m_DeviceObject;
    v4 = 0;
    if ( *(_QWORD *)&v26[3].m_SpinLock.m_DbgFlagIsInitialized && ((__int64)m_DeviceObject[1].CurrentIrp & 1) == 0 )
    {
      _a2 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&m_DeviceObject[1], FxIrp->m_Irp, &a5, 1u, 0x20u);
      if ( _a2 < 0 )
      {
        v37 = this->m_Globals;
        WPP_IFR_SF_qd(v37, 2u, 0xDu, 0x1Eu, WPP_FxPkgGeneral_cpp_Traceguids, FxIrp->m_Irp, _a2);
        if ( v37->FxVerifierOn
          && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v37, v38, 9u) || v37->FxVerifyDownlevel) )
        {
          v41 = 7567731;
          Mx::MxDbgPrint(
            "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
            v37->Public.DriverName,
            (const char *)&v41,
            v37->Public.DriverName,
            (const char *)&v41);
          if ( v37->FxVerifierDbgBreakOnError )
            DbgBreakPoint();
        }
      }
      else
      {
        v4 = 1;
      }
    }
    FxIrp->m_Irp->IoStatus.Status = FileObjectFromWdm;
    FxIrp->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(FxIrp->m_Irp, 0);
    FxIrp->m_Irp = 0LL;
  }
  if ( !v25 && _InterlockedExchangeAdd(&this->m_OpenHandleCount, 0xFFFFFFFF) == 1 )
  {
    v39 = this->m_DeviceBase;
    if ( BYTE5(v39[1].m_Globals) )
      FxObject::DeleteObject(v39);
  }
  if ( v4 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
  return (unsigned int)FileObjectFromWdm;
}

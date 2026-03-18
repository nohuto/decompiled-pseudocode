/*
 * XREFs of ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0008030
 * Callers:
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0006A40 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0007930 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0006760 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C000B600 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C001ABB8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003F450 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003F608 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall FxPkgGeneral::OnClose(FxPkgGeneral *this, FxIrp *FxIrp)
{
  _QWORD *p_Type; // rbx
  char v3; // r15
  unsigned __int64 v6; // rbp
  _FILE_OBJECT *v7; // r8
  int FileObjectFromWdm; // eax
  unsigned __int8 v9; // r8
  unsigned int v10; // r12d
  _LIST_ENTRY *m_PkgContext; // rbx
  _LIST_ENTRY *i; // rbx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v14; // rcx
  _IRP *m_Irp; // rax
  FxDeviceBase *m_DeviceBase; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  int v19; // eax
  _FILE_OBJECT *_a1; // rbp
  int v21; // eax
  FxFileObject *FsContext; // r14
  unsigned __int8 v23; // r9
  _LIST_ENTRY *v24; // r8
  _LIST_ENTRY *Blink; // rdx
  char v26; // bp
  FxDeviceBase *v27; // rax
  _DEVICE_OBJECT *v28; // rcx
  NTSTATUS _a2; // eax
  _IRP *v31; // rax
  FxVerifierLock *m_DeviceObject; // rcx
  FxVerifierLock *v33; // rcx
  _FX_DRIVER_GLOBALS *v34; // rbx
  unsigned int v35; // edx
  FxDeviceBase *v36; // rcx
  FxFileObject *ppFxFileObject; // [rsp+40h] [rbp-48h] BYREF
  FxFileObject *pFxFO; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int8 v39; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+A0h] [rbp+18h] BYREF
  PVOID Tag; // [rsp+A8h] [rbp+20h]

  p_Type = &FxIrp->m_Irp->Type;
  v3 = 0;
  pFxFO = 0LL;
  Tag = p_Type;
  v6 = 0LL;
  v7 = *(_FILE_OBJECT **)(p_Type[23] + 48LL);
  if ( !v7 || (v7->Flags & 0x100) == 0 )
  {
    FileObjectFromWdm = FxFileObject::_GetFileObjectFromWdm(
                          this->m_Device,
                          (_WDF_FILEOBJECT_CLASS)LODWORD(this->m_DeviceBase[1].m_DisposeSingleEntry.Next),
                          v7,
                          &pFxFO);
    v10 = FileObjectFromWdm;
    if ( pFxFO )
    {
      if ( FileObjectFromWdm >= 0 && pFxFO->m_ObjectSize )
        v6 = (unsigned __int64)pFxFO ^ 0xFFFFFFFFFFFFFFF8uLL;
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
    for ( i = m_PkgContext->Flink; i != &this->m_FileObjectInfoHeadList; i = i->Flink )
    {
      if ( i[4].Blink )
      {
        Flink = i[4].Flink;
        v39 = 0;
        if ( Flink )
          ((void (__fastcall *)(_LIST_ENTRY *, unsigned __int8 *))Flink->Flink[1].Flink)(Flink, &v39);
        ((void (__fastcall *)(unsigned __int64))i[4].Blink)(v6);
        v14 = i[4].Flink;
        if ( v14 )
          ((void (__fastcall *)(_LIST_ENTRY *, _QWORD))v14->Flink[1].Blink)(v14, v39);
      }
    }
    m_Irp = FxIrp->m_Irp;
    m_DeviceBase = this->m_DeviceBase;
    ppFxFileObject = 0LL;
    CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
    m_Globals = m_DeviceBase->m_Globals;
    v19 = (__int64)m_DeviceBase[1].m_DisposeSingleEntry.Next & 0x7FFFFFFF;
    _a1 = CurrentStackLocation->FileObject;
    if ( v19 == 1 )
      goto LABEL_44;
    if ( !_a1 && v19 != 4 )
    {
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_(m_Globals, 5u, 0xDu, 0xBu, WPP_FxFileObject_cpp_Traceguids);
      FxVerifierDbgBreakPoint(m_DeviceBase->m_Globals);
LABEL_44:
      v26 = 0;
      goto LABEL_30;
    }
    if ( v19 == 2 )
    {
      FsContext = (FxFileObject *)_a1->FsContext;
      ppFxFileObject = FsContext;
      _a1->FsContext = 0LL;
    }
    else if ( v19 == 3 )
    {
      FsContext = (FxFileObject *)_a1->FsContext2;
      ppFxFileObject = FsContext;
      _a1->FsContext2 = 0LL;
    }
    else
    {
      v21 = FxFileObject::_GetFileObjectFromWdm(
              (FxDevice *)m_DeviceBase,
              WdfFileObjectWdfCannotUseFsContexts,
              CurrentStackLocation->FileObject,
              &ppFxFileObject);
      FsContext = ppFxFileObject;
      if ( v21 >= 0 && ppFxFileObject )
        goto LABEL_22;
      WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xCu, WPP_FxFileObject_cpp_Traceguids, _a1);
      WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xDu, WPP_FxFileObject_cpp_Traceguids);
      FxVerifierDbgBreakPoint(m_DeviceBase->m_Globals);
    }
    if ( !FsContext )
    {
LABEL_29:
      v26 = 0;
LABEL_30:
      p_Type = Tag;
      goto $Passthru;
    }
LABEL_22:
    if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
      && (m_DeviceObject = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
    {
      FxVerifierLock::Lock(m_DeviceObject, &PreviousIrql, v9);
      v23 = PreviousIrql;
    }
    else
    {
      v23 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_NPLock.m_Lock);
      PreviousIrql = v23;
    }
    v24 = FsContext->m_Link.Flink;
    Blink = FsContext->m_Link.Blink;
    if ( v24->Blink != &FsContext->m_Link || Blink->Flink != &FsContext->m_Link )
      __fastfail(3u);
    Blink->Flink = v24;
    v24->Blink = Blink;
    if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
      && (v33 = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
    {
      FxVerifierLock::Unlock(v33, v23, (unsigned __int8)v24);
    }
    else
    {
      KeReleaseSpinLock(&m_DeviceBase->m_NPLock.m_Lock, v23);
    }
    FsContext->DeleteObject(FsContext);
    goto LABEL_29;
  }
  v26 = 1;
  v10 = 0;
$Passthru:
  v27 = this->m_DeviceBase;
  if ( BYTE1(v27[1].m_ChildEntry.Blink) )
  {
    v31 = FxIrp->m_Irp;
    ++v31->CurrentLocation;
    ++v31->Tail.Overlay.CurrentStackLocation;
    v10 = IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, FxIrp->m_Irp);
  }
  else
  {
    v28 = v27->m_DeviceObject.m_DeviceObject;
    v3 = 0;
    if ( *(_QWORD *)&v27[3].m_SpinLock.m_DbgFlagIsInitialized && ((__int64)v28[1].CurrentIrp & 1) == 0 )
    {
      _a2 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&v28[1], FxIrp->m_Irp, a5, 1u, 0x20u);
      if ( _a2 < 0 )
      {
        v34 = this->m_Globals;
        WPP_IFR_SF_qd(v34, 2u, 0xDu, 0x1Eu, WPP_FxPkgGeneral_cpp_Traceguids, FxIrp->m_Irp, _a2);
        if ( v34->FxVerifierOn
          && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v34, v35, 9u) || v34->FxVerifyDownlevel) )
        {
          FxVerifierDbgBreakPoint(v34);
        }
        p_Type = Tag;
      }
      else
      {
        v3 = 1;
      }
    }
    FxIrp->m_Irp->IoStatus.Status = v10;
    FxIrp->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(FxIrp->m_Irp, 0);
    FxIrp->m_Irp = 0LL;
  }
  if ( !v26 && _InterlockedExchangeAdd(&this->m_OpenHandleCount, 0xFFFFFFFF) == 1 )
  {
    v36 = this->m_DeviceBase;
    if ( BYTE5(v36[1].m_Globals) )
      FxObject::DeleteObject(v36);
  }
  if ( v3 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], p_Type, 0x20u);
  return v10;
}

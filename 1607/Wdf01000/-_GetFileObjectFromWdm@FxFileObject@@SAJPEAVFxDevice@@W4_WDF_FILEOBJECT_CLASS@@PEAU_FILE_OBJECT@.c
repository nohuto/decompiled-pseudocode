/*
 * XREFs of ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0002FB0
 * Callers:
 *     imp_WdfRequestGetFileObject @ 0x1C0002EA0 (imp_WdfRequestGetFileObject.c)
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00033A0 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0004280 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004990 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfDeviceGetFileObject @ 0x1C00743A0 (imp_WdfDeviceGetFileObject.c)
 *     ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x1C007A28C (-_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0018048 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003B900 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003BAB8 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall FxFileObject::_GetFileObjectFromWdm(
        FxDevice *pDevice,
        _WDF_FILEOBJECT_CLASS FileObjectClass,
        _FILE_OBJECT *pWdmFileObject,
        FxFileObject **ppFxFileObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  __int32 v5; // eax
  _FILE_OBJECT *m_FileObject; // rbp
  FxFileObject *FsContext; // rdi
  unsigned __int8 v12; // r15
  _LIST_ENTRY *p_m_FileObjectListHead; // rdx
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *v15; // rcx
  FxVerifierLock *v17; // rcx
  FxVerifierLock *v18; // rcx
  unsigned int v19; // edx
  _FILE_OBJECT *_a2; // [rsp+30h] [rbp-48h]
  _FX_DRIVER_GLOBALS *globals; // [rsp+80h] [rbp+8h]
  unsigned __int8 irql; // [rsp+88h] [rbp+10h] BYREF

  m_Globals = pDevice->m_Globals;
  v5 = FileObjectClass & 0x7FFFFFFF;
  globals = m_Globals;
  if ( (FileObjectClass & 0x7FFFFFFF) == 1 )
  {
    *ppFxFileObject = 0LL;
    return 0LL;
  }
  if ( pWdmFileObject || pDevice->m_Exclusive && v5 == 4 )
  {
    if ( v5 == 2 )
    {
      FsContext = (FxFileObject *)pWdmFileObject->FsContext;
      goto LABEL_15;
    }
    if ( v5 == 3 )
    {
      FsContext = (FxFileObject *)pWdmFileObject->FsContext2;
      goto LABEL_15;
    }
    m_FileObject = 0LL;
    FsContext = 0LL;
    if ( SLOBYTE(pDevice->m_ObjectFlags) < 0
      && (v17 = (FxVerifierLock *)*((_QWORD *)&pDevice[-1].m_PkgDefault + 1)) != 0LL )
    {
      FxVerifierLock::Lock(v17, &irql, (unsigned __int8)pWdmFileObject);
      v12 = irql;
    }
    else
    {
      v12 = KeAcquireSpinLockRaiseToDpc(&pDevice->m_NPLock.m_Lock);
    }
    p_m_FileObjectListHead = &pDevice->m_FileObjectListHead;
    Flink = pDevice->m_FileObjectListHead.Flink;
    v15 = Flink;
    if ( pWdmFileObject )
    {
      if ( Flink == p_m_FileObjectListHead )
      {
LABEL_33:
        if ( pDevice->m_Exclusive
          && pDevice->m_DeviceObject.m_DeviceObject->DeviceType == 27
          && Flink != p_m_FileObjectListHead )
        {
          FsContext = (FxFileObject *)&Flink[-9];
          if ( Flink != (_LIST_ENTRY *)144 )
            m_FileObject = FsContext->m_FileObject.m_FileObject;
          _a2 = m_FileObject;
          m_Globals = globals;
          WPP_IFR_SF_qq(globals, 3u, 0x12u, 0xFu, WPP_FxFileObject_cpp_Traceguids, pWdmFileObject, _a2);
          WPP_IFR_SF_(globals, 3u, 0x12u, 0x10u, WPP_FxFileObject_cpp_Traceguids);
          goto LABEL_13;
        }
LABEL_12:
        m_Globals = globals;
LABEL_13:
        if ( SLOBYTE(pDevice->m_ObjectFlags) < 0
          && (v18 = (FxVerifierLock *)*((_QWORD *)&pDevice[-1].m_PkgDefault + 1)) != 0LL )
        {
          FxVerifierLock::Unlock(v18, v12, (unsigned __int8)Flink);
        }
        else
        {
          KeReleaseSpinLock(&pDevice->m_NPLock.m_Lock, v12);
        }
LABEL_15:
        if ( !FsContext && FileObjectClass >= WdfFileObjectInvalid )
        {
          WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x11u, WPP_FxFileObject_cpp_Traceguids, pWdmFileObject);
          WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0x12u, WPP_FxFileObject_cpp_Traceguids);
          if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v19, 9u) )
            FxVerifierDbgBreakPoint(pDevice->m_Globals);
        }
        *ppFxFileObject = FsContext;
        return 0LL;
      }
      while ( (_FILE_OBJECT *)v15[-1].Flink != pWdmFileObject )
      {
        v15 = v15->Flink;
        if ( v15 == p_m_FileObjectListHead )
          goto LABEL_33;
      }
      FsContext = (FxFileObject *)&v15[-9];
    }
    else
    {
      FsContext = (FxFileObject *)&Flink[-9];
    }
    if ( FsContext )
      goto LABEL_12;
    goto LABEL_33;
  }
  if ( FileObjectClass >= WdfFileObjectInvalid )
  {
    WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xEu, WPP_FxFileObject_cpp_Traceguids);
    FxVerifierDbgBreakPoint(pDevice->m_Globals);
    return 3221225473LL;
  }
  *ppFxFileObject = 0LL;
  return 0LL;
}

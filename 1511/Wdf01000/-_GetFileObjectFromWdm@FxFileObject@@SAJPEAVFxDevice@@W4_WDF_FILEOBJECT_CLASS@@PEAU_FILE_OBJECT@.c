/*
 * XREFs of ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C000D120
 * Callers:
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C000BDA0 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C000CB70 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     imp_WdfRequestGetFileObject @ 0x1C000D010 (imp_WdfRequestGetFileObject.c)
 *     imp_WdfDeviceGetFileObject @ 0x1C0064560 (imp_WdfDeviceGetFileObject.c)
 *     ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x1C006B90C (-_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0020B68 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00211D8 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006F418 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006F710 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall FxFileObject::_GetFileObjectFromWdm(
        FxDevice *pDevice,
        _WDF_FILEOBJECT_CLASS FileObjectClass,
        _FILE_OBJECT *pWdmFileObject,
        FxFileObject **ppFxFileObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  __int32 v5; // eax
  _FILE_OBJECT *_a2; // r15
  FxFileObject *FsContext; // rbp
  unsigned __int8 v12; // r13
  _LIST_ENTRY *p_m_FileObjectListHead; // rdx
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *v15; // rcx
  FxVerifierLock *v17; // rcx
  FxVerifierLock *v18; // rcx
  unsigned int v19; // edx
  unsigned __int8 irql; // [rsp+78h] [rbp+10h] BYREF

  m_Globals = pDevice->m_Globals;
  v5 = FileObjectClass & 0x7FFFFFFF;
  if ( (FileObjectClass & 0x7FFFFFFF) == 1 )
    goto LABEL_19;
  if ( pWdmFileObject || pDevice->m_Exclusive && v5 == 4 )
  {
    if ( v5 == 2 )
    {
      FsContext = (FxFileObject *)pWdmFileObject->FsContext;
      goto LABEL_14;
    }
    if ( v5 == 3 )
    {
      FsContext = (FxFileObject *)pWdmFileObject->FsContext2;
      goto LABEL_14;
    }
    _a2 = 0LL;
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
        goto LABEL_30;
      while ( (_FILE_OBJECT *)v15[-1].Flink != pWdmFileObject )
      {
        v15 = v15->Flink;
        if ( v15 == p_m_FileObjectListHead )
          goto LABEL_30;
      }
      FsContext = (FxFileObject *)&v15[-9];
    }
    else
    {
      FsContext = (FxFileObject *)&Flink[-9];
    }
    if ( FsContext )
    {
LABEL_12:
      if ( SLOBYTE(pDevice->m_ObjectFlags) < 0
        && (v18 = (FxVerifierLock *)*((_QWORD *)&pDevice[-1].m_PkgDefault + 1)) != 0LL )
      {
        FxVerifierLock::Unlock(v18, v12, (unsigned __int8)Flink);
      }
      else
      {
        KeReleaseSpinLock(&pDevice->m_NPLock.m_Lock, v12);
      }
LABEL_14:
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
LABEL_30:
    if ( pDevice->m_Exclusive
      && pDevice->m_DeviceObject.m_DeviceObject->DeviceType == 27
      && Flink != p_m_FileObjectListHead )
    {
      FsContext = (FxFileObject *)&Flink[-9];
      if ( Flink != (_LIST_ENTRY *)144 )
        _a2 = FsContext->m_FileObject.m_FileObject;
      WPP_IFR_SF_qq(m_Globals, 3u, 0x12u, 0xFu, WPP_FxFileObject_cpp_Traceguids, pWdmFileObject, _a2);
      WPP_IFR_SF_(m_Globals, 3u, 0x12u, 0x10u, WPP_FxFileObject_cpp_Traceguids);
    }
    goto LABEL_12;
  }
  if ( FileObjectClass < WdfFileObjectInvalid )
  {
LABEL_19:
    *ppFxFileObject = 0LL;
    return 0LL;
  }
  WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xEu, WPP_FxFileObject_cpp_Traceguids);
  FxVerifierDbgBreakPoint(pDevice->m_Globals);
  return 3221225473LL;
}

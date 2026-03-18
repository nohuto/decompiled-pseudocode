/*
 * XREFs of ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0002290
 * Callers:
 *     imp_WdfRequestGetFileObject @ 0x1C0002190 (imp_WdfRequestGetFileObject.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00023C0 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0003100 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     imp_WdfDeviceGetFileObject @ 0x1C006C9B0 (imp_WdfDeviceGetFileObject.c)
 *     ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x1C0076DFC (-_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0031E08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
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
  KIRQL v12; // r15
  _LIST_ENTRY *p_m_FileObjectListHead; // rdx
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *v15; // rcx
  _FX_DRIVER_GLOBALS *v17; // rax
  __int64 v18; // rax
  FxVerifierLock *v19; // rcx
  FxVerifierLock *v20; // rcx
  unsigned int v21; // edx
  _FX_DRIVER_GLOBALS *v22; // rax
  __int64 v23; // rax
  _FILE_OBJECT *_a2; // [rsp+30h] [rbp-48h]
  _FX_DRIVER_GLOBALS *globals; // [rsp+80h] [rbp+8h]
  int irql; // [rsp+88h] [rbp+10h] BYREF

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
    }
    else
    {
      if ( v5 != 3 )
      {
        m_FileObject = 0LL;
        FsContext = 0LL;
        if ( SLOBYTE(pDevice->m_ObjectFlags) < 0
          && (v19 = (FxVerifierLock *)*((_QWORD *)&pDevice[-1].m_PkgDefault + 1)) != 0LL )
        {
          FxVerifierLock::Lock(v19, (unsigned __int8 *)&irql, (unsigned __int8)pWdmFileObject);
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
LABEL_34:
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
              && (v20 = (FxVerifierLock *)*((_QWORD *)&pDevice[-1].m_PkgDefault + 1)) != 0LL )
            {
              FxVerifierLock::Unlock(v20, v12, (unsigned __int8)Flink);
            }
            else
            {
              KeReleaseSpinLock(&pDevice->m_NPLock.m_Lock, v12);
            }
            goto LABEL_15;
          }
          while ( (_FILE_OBJECT *)v15[-1].Flink != pWdmFileObject )
          {
            v15 = v15->Flink;
            if ( v15 == p_m_FileObjectListHead )
              goto LABEL_34;
          }
          FsContext = (FxFileObject *)&v15[-9];
        }
        else
        {
          FsContext = (FxFileObject *)&Flink[-9];
        }
        if ( FsContext )
          goto LABEL_12;
        goto LABEL_34;
      }
      FsContext = (FxFileObject *)pWdmFileObject->FsContext2;
    }
LABEL_15:
    if ( !FsContext && FileObjectClass >= WdfFileObjectInvalid )
    {
      WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x11u, WPP_FxFileObject_cpp_Traceguids, pWdmFileObject);
      WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0x12u, WPP_FxFileObject_cpp_Traceguids);
      if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v21, 9u) )
      {
        v22 = pDevice->m_Globals;
        irql = 7567731;
        Mx::MxDbgPrint(
          "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
          v22->Public.DriverName,
          (const char *)&irql,
          v22->Public.DriverName,
          (const char *)&irql);
        if ( *(_BYTE *)(v23 + 318) )
          DbgBreakPoint();
      }
    }
    *ppFxFileObject = FsContext;
    return 0LL;
  }
  if ( FileObjectClass < WdfFileObjectInvalid )
  {
    *ppFxFileObject = 0LL;
    return 0LL;
  }
  WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xEu, WPP_FxFileObject_cpp_Traceguids);
  v17 = pDevice->m_Globals;
  irql = 7567731;
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
    v17->Public.DriverName,
    (const char *)&irql,
    v17->Public.DriverName,
    (const char *)&irql);
  if ( *(_BYTE *)(v18 + 318) )
    DbgBreakPoint();
  return 3221225473LL;
}

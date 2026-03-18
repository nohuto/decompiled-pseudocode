/*
 * XREFs of ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C00086B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C0004440 (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C00090B0 (--1FxObject@@UEAA@XZ.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C0057374 (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C0059930 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C0069DBC (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C00708CC (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

void __fastcall FxRequestFromLookaside::SelfDestruct(FxRequestFromLookaside *this, unsigned int a2)
{
  FxDeviceBase *m_DeviceBase; // rdi
  FxRequestFromLookaside *v3; // rbx
  _MDL *m_AllocatedMdl; // rcx
  FxRequestContext *m_RequestContext; // rcx
  _IRP *m_Irp; // rsi
  FxRequestTimer *m_Timer; // rcx
  __int64 v8; // rax
  _SLIST_ENTRY *v9; // rsi
  _SLIST_ENTRY *v10; // rdx
  _SLIST_HEADER *p_m_SpinLock; // rcx
  _SLIST_ENTRY *m_InternalContext; // rbx
  FxRequestContext *v13; // rcx
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  FX_POOL_TRACKER **v15; // rax

  m_DeviceBase = this->m_DeviceBase;
  this->__vftable = (FxRequestFromLookaside_vtbl *)&FxRequestBase::`vftable';
  v3 = this;
  m_AllocatedMdl = this->m_AllocatedMdl;
  if ( m_AllocatedMdl )
  {
    if ( v3->m_Globals->FxVerifierOn )
      FxMdlFreeDebug(v3->m_Globals, m_AllocatedMdl);
    else
      IoFreeMdl(m_AllocatedMdl);
  }
  m_RequestContext = v3->m_RequestContext;
  m_Irp = v3->m_Irp.m_Irp;
  if ( m_RequestContext )
  {
    if ( m_Irp )
      m_RequestContext->ReleaseAndRestore(m_RequestContext, v3);
    v13 = v3->m_RequestContext;
    if ( v13 )
      ((void (__fastcall *)(FxRequestContext *, __int64))v13->~FxRequestContext)(v13, 1LL);
  }
  if ( m_Irp && v3->m_IrpAllocation == 1 )
    IoFreeIrp(v3->m_Irp.m_Irp);
  m_Timer = v3->m_Timer;
  if ( m_Timer )
    FxRequestTimer::`scalar deleting destructor'(m_Timer, a2);
  v3->__vftable = (FxRequestFromLookaside_vtbl *)&FxNonPagedObject::`vftable';
  if ( SLOBYTE(v3->m_ObjectFlags) < 0 )
  {
    m_ForwardProgressQueue = (FxVerifierLock *)v3[-1].m_ForwardProgressQueue;
    if ( m_ForwardProgressQueue )
    {
      FxVerifierLock::`scalar deleting destructor'(m_ForwardProgressQueue, a2);
      v3[-1].m_ForwardProgressQueue = 0LL;
    }
  }
  v3->m_NPLock.m_DbgFlagIsInitialized = 0;
  FxObject::~FxObject(v3);
  if ( v3->m_ForwardRequestToParent )
  {
    v15 = FxObject::_CleanupPointer(v3->m_Globals, v3);
    ExFreePoolWithTag(*v15, 0);
  }
  else
  {
    if ( SLOBYTE(v3->m_ObjectFlags) < 0 )
      v3 = (FxRequestFromLookaside *)((char *)v3 - 32);
    if ( m_DeviceBase->m_Globals->FxPoolTrackingOn )
      FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v3[-1].m_InternalContext);
    v8 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
    if ( v8 && *(_WORD *)(v8 + 8) == 4354 && *(_BYTE *)(v8 + 1451) )
    {
      m_InternalContext = (_SLIST_ENTRY *)v3[-1].m_InternalContext;
      if ( ExQueryDepthSList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock) < LOWORD(m_DeviceBase[2].m_ParentObject) )
      {
        v10 = m_InternalContext;
        p_m_SpinLock = (_SLIST_HEADER *)&m_DeviceBase[2].m_SpinLock;
        goto LABEL_16;
      }
      (*(void (__fastcall **)(_SLIST_ENTRY *))&m_DeviceBase[2].m_NPLock.m_DbgFlagIsInitialized)(m_InternalContext);
    }
    else
    {
      v9 = (_SLIST_ENTRY *)v3[-1].m_InternalContext;
      ++HIDWORD(m_DeviceBase[2].m_ChildEntry.Flink);
      if ( ExQueryDepthSList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock) < LOWORD(m_DeviceBase[2].m_ParentObject) )
      {
        v10 = v9;
        p_m_SpinLock = (_SLIST_HEADER *)&m_DeviceBase[2].m_SpinLock;
LABEL_16:
        ExpInterlockedPushEntrySList(p_m_SpinLock, v10);
        return;
      }
      ++LODWORD(m_DeviceBase[2].m_ChildEntry.Blink);
      (*(void (__fastcall **)(_SLIST_ENTRY *))&m_DeviceBase[2].m_NPLock.m_DbgFlagIsInitialized)(v9);
    }
  }
}

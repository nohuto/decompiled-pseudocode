/*
 * XREFs of ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C001DE30
 * Callers:
 *     ?PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001D014 (-PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     imp_WdfIoQueueCreate @ 0x1C001D870 (imp_WdfIoQueueCreate.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C0004D30 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0009460 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqqd @ 0x1C0010A2C (WPP_IFR_SF_qqqd.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C001EB28 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x1C001EDF0 (-Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@.c)
 *     ??0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z @ 0x1C001F0C0 (--0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C0024438 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006F418 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006F710 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall FxPkgIo::CreateQueue(
        FxPkgIo *this,
        _WDF_IO_QUEUE_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *QueueAttributes,
        FxDriver *Caller,
        FxObject **ppQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxObject *v6; // rdi
  WDFDRIVER__ *Driver; // rdx
  unsigned __int8 m_PowerStateOn; // r12
  unsigned __int64 ContextSizeOverride; // r9
  _POOL_TYPE v13; // esi
  ULONG Tag; // r15d
  void *v15; // rax
  FxIoQueue *v16; // rax
  FxIoQueue *v17; // rsi
  FxIoQueue *v18; // rax
  FxObject *v19; // rsi
  int _a1; // eax
  int v21; // r15d
  int v22; // ebp
  unsigned __int8 v23; // r8
  __int64 v24; // rax
  _LIST_ENTRY *p_m_IoQueueListHead; // rsi
  char v26; // r15
  unsigned __int8 v27; // r8
  unsigned __int8 v28; // r14
  _LIST_ENTRY *i; // rcx
  _LIST_ENTRY *v30; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  void *ParentObject; // rdx
  FxDeviceBase *v34; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v37; // rax
  _LIST_ENTRY *v38; // rax
  unsigned __int64 ContextSize; // r8
  const void *_a3; // rax
  const void *_a2; // rcx
  _WDF_EXECUTION_LEVEL *p_m_ExecutionLevel; // rdx
  _WDF_EXECUTION_LEVEL *v43; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v45; // rcx
  FxDriver *pDriver; // [rsp+50h] [rbp-48h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  unsigned __int64 Size; // [rsp+A0h] [rbp+8h] BYREF
  FxObject *pParent; // [rsp+B0h] [rbp+18h] BYREF
  FxDriver *v50; // [rsp+B8h] [rbp+20h]

  v50 = Caller;
  m_Globals = this->m_Globals;
  v6 = 0LL;
  pParent = 0LL;
  pDriver = 0LL;
  if ( QueueAttributes && (ParentObject = QueueAttributes->ParentObject) != 0LL )
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
    v34 = FxDeviceBase::_SearchForDevice(pParent, 0LL);
    if ( !v34 )
    {
      WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x1Bu, WPP_FxPkgIo_cpp_Traceguids, QueueAttributes->ParentObject, -1073741808);
      return 3221225488LL;
    }
    m_DeviceBase = this->m_DeviceBase;
    if ( v34 != m_DeviceBase )
    {
      if ( m_DeviceBase->m_ObjectSize )
        _a3 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a3 = 0LL;
      if ( v34->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)v34 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a2 = 0LL;
      WPP_IFR_SF_qqqd(
        m_Globals,
        2u,
        0xDu,
        0x1Cu,
        WPP_FxPkgIo_cpp_Traceguids,
        QueueAttributes->ParentObject,
        _a2,
        _a3,
        -1073741808);
      return 3221225488LL;
    }
  }
  else
  {
    pParent = this;
  }
  if ( Config->Size > 0x58 )
  {
    Driver = Config->Driver;
    if ( Driver )
      FxObjectHandleGetPtr(this->m_Globals, (unsigned __int64)Driver, 0x1001u, (void **)&pDriver);
  }
  m_PowerStateOn = this->m_PowerStateOn;
  ContextSizeOverride = 0LL;
  v13 = ExDefaultNonPagedPoolType;
  Tag = m_Globals->Tag;
  if ( QueueAttributes )
  {
    ContextTypeInfo = QueueAttributes->ContextTypeInfo;
    if ( ContextTypeInfo )
    {
      ContextSizeOverride = QueueAttributes->ContextSizeOverride;
      if ( !ContextSizeOverride )
        ContextSizeOverride = ContextTypeInfo->ContextSize;
    }
  }
  if ( (int)FxCalculateObjectTotalSize2(m_Globals, 0x3A8u, 0, ContextSizeOverride, &Size) < 0 )
    goto LABEL_79;
  if ( m_Globals->FxPoolTrackingOn )
    v15 = retaddr;
  else
    v15 = 0LL;
  v16 = (FxIoQueue *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, v13, Size, Tag, v15);
  v17 = v16;
  if ( v16 )
  {
    if ( m_Globals->FxVerifierHandle )
    {
      memset(v16, 0, 0x20uLL);
      *(_DWORD *)(&v17->m_ObjectState + 1) = 1146058822;
      v17 = (FxIoQueue *)((char *)v17 + 32);
    }
    memset(&v17[1].FxNonPagedObject::FxObject::m_Type, 0, 0x30uLL);
    *(_QWORD *)&v17[1].FxNonPagedObject::FxObject::m_Type = v17;
    if ( QueueAttributes )
    {
      v37 = QueueAttributes->ContextTypeInfo;
      if ( v37 )
      {
        ContextSize = QueueAttributes->ContextSizeOverride;
        if ( !ContextSize )
          ContextSize = v37->ContextSize;
        memset(&v17[1].m_SpinLock.m_Lock, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      v17[1].m_ChildListHead.Blink = (_LIST_ENTRY *)QueueAttributes->ContextTypeInfo;
    }
  }
  if ( !v17 || (FxIoQueue::FxIoQueue(v17, m_Globals, this), (v19 = v18) == 0LL) )
  {
LABEL_79:
    v21 = -1073741670;
    WPP_IFR_SF_d(m_Globals, 2u, 0xDu, 0xAu, (const _GUID *)&FxObject::`vftable'.DebugExtension, -1073741670);
    return (unsigned int)v21;
  }
  _a1 = FxIoQueue::Initialize(v18, Config, QueueAttributes, v50, m_PowerStateOn);
  v21 = _a1;
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0xDu, 0xBu, (const _GUID *)&FxObject::`vftable'.DebugExtension, _a1);
    FxObject::DeleteFromFailedCreate(v19);
  }
  else
  {
    v6 = v19;
  }
  if ( v21 < 0 )
    return (unsigned int)v21;
  if ( pDriver )
  {
    p_m_ExecutionLevel = &this->m_DeviceBase[1].m_ExecutionLevel;
    v43 = *(_WDF_EXECUTION_LEVEL **)p_m_ExecutionLevel;
    if ( *(_WDF_EXECUTION_LEVEL **)p_m_ExecutionLevel == p_m_ExecutionLevel )
    {
LABEL_66:
      v43 = 0LL;
    }
    else
    {
      while ( *((FxDriver **)v43 + 2) != pDriver )
      {
        v43 = *(_WDF_EXECUTION_LEVEL **)v43;
        if ( v43 == p_m_ExecutionLevel )
          goto LABEL_66;
      }
    }
    *(_QWORD *)&v6[3].m_SpinLock.m_DbgFlagIsInitialized = v43;
  }
  v22 = FxObject::Commit(v6, QueueAttributes, 0LL, pParent, 1u);
  if ( v22 < 0 )
  {
    FxObject::DeleteFromFailedCreate(v6);
    return (unsigned int)v22;
  }
  else
  {
    v24 = *(_QWORD *)&v6[3].m_SpinLock.m_DbgFlagIsInitialized;
    p_m_IoQueueListHead = &this->m_IoQueueListHead;
    if ( v24 )
      v26 = *(_BYTE *)(v24 + 88);
    else
      v26 = 0;
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (Flink = this[-1].m_DynamicDispatchInfoListHead.Flink) != 0LL )
    {
      FxVerifierLock::Lock((FxVerifierLock *)Flink, (unsigned __int8 *)&Size, v23);
      v28 = Size;
    }
    else
    {
      v28 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
    for ( i = this->m_IoQueueListHead.Blink; i != p_m_IoQueueListHead; i = i->Blink )
    {
      if ( LODWORD(i[1].Flink) == 1 )
      {
        v38 = i[-34].Flink;
        if ( v38 )
          LOBYTE(v38) = v38[5].Blink;
        if ( (_BYTE)v38 == v26 || (char)v38 < v26 )
          break;
      }
    }
    v30 = i->Flink;
    p_m_ChildEntry = &v6[8].m_ChildEntry;
    v6[8].m_ChildEntry.Flink = i->Flink;
    v6[8].m_ChildEntry.Blink = i;
    if ( v30->Blink != i )
      __fastfail(3u);
    v30->Blink = p_m_ChildEntry;
    i->Flink = p_m_ChildEntry;
    if ( this->m_PowerStateOn )
    {
      if ( BYTE2(v6[1].m_ChildListHead.Flink) )
        LODWORD(v6[1].m_ChildEntry.Flink) = 1;
    }
    else
    {
      if ( BYTE2(v6[1].m_ChildListHead.Flink) )
        LODWORD(v6[1].m_ChildEntry.Flink) = 2;
      if ( this->m_QueuesAreShuttingDown )
        FxIoQueue::SetState((FxIoQueue *)v6, FxIoQueueSetShutdown|0x2);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v45 = this[-1].m_DynamicDispatchInfoListHead.Flink) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)v45, v28, v27);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v28);
    *ppQueue = v6;
    return (unsigned int)v22;
  }
}

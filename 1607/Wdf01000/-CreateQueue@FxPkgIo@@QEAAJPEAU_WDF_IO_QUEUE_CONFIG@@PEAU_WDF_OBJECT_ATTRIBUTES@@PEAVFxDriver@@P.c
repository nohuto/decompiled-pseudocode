/*
 * XREFs of ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C001CCA0
 * Callers:
 *     imp_WdfIoQueueCreate @ 0x1C001C5E0 (imp_WdfIoQueueCreate.c)
 *     ?PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0020924 (-PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C0002960 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0008B90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00132CC (WPP_IFR_SF_qqqd.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C001AE18 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z @ 0x1C001C800 (-AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z.c)
 *     ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x1C001DCD0 (-Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@.c)
 *     ??0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z @ 0x1C001DFA0 (--0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0063E54 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgIo::CreateQueue(
        FxPkgIo *this,
        _WDF_IO_QUEUE_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *QueueAttributes,
        FxDriver *Caller,
        FxIoQueue **ppQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  WDFDRIVER__ *Driver; // rdx
  unsigned __int8 m_PowerStateOn; // r12
  unsigned __int64 ContextSizeOverride; // r9
  ULONG Tag; // r15d
  FxIoQueue *v13; // rbp
  _POOL_TYPE v14; // ebx
  void *v15; // rax
  FxIoQueue *v16; // rax
  FxIoQueue *v17; // rbx
  FxIoQueue *v18; // rax
  FxObject *v19; // rbx
  int _a1; // eax
  int v21; // r15d
  int v22; // ebx
  unsigned __int8 v23; // r8
  void *ParentObject; // rdx
  FxDeviceBase *v26; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v29; // rax
  unsigned __int64 ContextSize; // r8
  const void *_a3; // rax
  const void *_a2; // rcx
  _WDF_EXECUTION_LEVEL *p_m_ExecutionLevel; // rdx
  FxCxDeviceInfo *Flink; // rax
  unsigned __int64 Size; // [rsp+50h] [rbp-48h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  FxObject *pParent; // [rsp+A0h] [rbp+8h] BYREF
  FxDriver *pDriver; // [rsp+B0h] [rbp+18h] BYREF
  FxDriver *v39; // [rsp+B8h] [rbp+20h]

  v39 = Caller;
  m_Globals = this->m_Globals;
  pParent = 0LL;
  pDriver = 0LL;
  if ( QueueAttributes && (ParentObject = QueueAttributes->ParentObject) != 0LL )
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
    v26 = FxDeviceBase::_SearchForDevice((unsigned __int64)pParent, 0LL);
    if ( !v26 )
    {
      WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x1Bu, WPP_FxPkgIo_cpp_Traceguids, QueueAttributes->ParentObject, -1073741808);
      return 3221225488LL;
    }
    m_DeviceBase = this->m_DeviceBase;
    if ( v26 != m_DeviceBase )
    {
      if ( m_DeviceBase->m_ObjectSize )
        _a3 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a3 = 0LL;
      if ( v26->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)v26 ^ 0xFFFFFFFFFFFFFFF8uLL);
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
  Tag = m_Globals->Tag;
  v13 = 0LL;
  v14 = ExDefaultNonPagedPoolType;
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
    goto LABEL_51;
  if ( m_Globals->FxPoolTrackingOn )
    v15 = retaddr;
  else
    v15 = 0LL;
  v16 = (FxIoQueue *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, v14, Size, Tag, v15);
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
      v29 = QueueAttributes->ContextTypeInfo;
      if ( v29 )
      {
        ContextSize = QueueAttributes->ContextSizeOverride;
        if ( !ContextSize )
          ContextSize = v29->ContextSize;
        memset(&v17[1].m_SpinLock.m_Lock, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      v17[1].m_ChildListHead.Blink = (_LIST_ENTRY *)QueueAttributes->ContextTypeInfo;
    }
  }
  if ( !v17 || (FxIoQueue::FxIoQueue(v17, m_Globals, this), (v19 = v18) == 0LL) )
  {
LABEL_51:
    v21 = -1073741670;
    WPP_IFR_SF_d(m_Globals, 2u, 0xDu, 0xAu, WPP_FxIoQueue_cpp_Traceguids, -1073741670);
    return (unsigned int)v21;
  }
  _a1 = FxIoQueue::Initialize(v18, Config, QueueAttributes, v39, m_PowerStateOn);
  v21 = _a1;
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0xDu, 0xBu, WPP_FxIoQueue_cpp_Traceguids, _a1);
    FxObject::DeleteFromFailedCreate(v19);
  }
  else
  {
    v13 = (FxIoQueue *)v19;
  }
  if ( v21 < 0 )
    return (unsigned int)v21;
  if ( pDriver )
  {
    p_m_ExecutionLevel = &this->m_DeviceBase[1].m_ExecutionLevel;
    Flink = *(FxCxDeviceInfo **)p_m_ExecutionLevel;
    if ( *(_WDF_EXECUTION_LEVEL **)p_m_ExecutionLevel == p_m_ExecutionLevel )
    {
LABEL_48:
      Flink = 0LL;
    }
    else
    {
      while ( Flink->Driver != pDriver )
      {
        Flink = (FxCxDeviceInfo *)Flink->ListEntry.Flink;
        if ( Flink == (FxCxDeviceInfo *)p_m_ExecutionLevel )
          goto LABEL_48;
      }
    }
    v13->m_CxDeviceInfo = Flink;
  }
  v22 = FxObject::Commit(v13, QueueAttributes, 0LL, pParent, 1u);
  if ( v22 < 0 )
  {
    FxObject::DeleteFromFailedCreate(v13);
  }
  else
  {
    FxPkgIo::AddIoQueue(this, v13, v23);
    *ppQueue = v13;
  }
  return (unsigned int)v22;
}

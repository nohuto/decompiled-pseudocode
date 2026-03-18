/*
 * XREFs of ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C000B290
 * Callers:
 *     imp_WdfIoQueueCreate @ 0x1C000AB00 (imp_WdfIoQueueCreate.c)
 *     ?PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C000F848 (-PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00069AC (WPP_IFR_SF_qqqd.c)
 *     ?AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z @ 0x1C000AE00 (-AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z.c)
 *     ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x1C000C1A4 (-Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@.c)
 *     ??0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z @ 0x1C000C430 (--0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C0016050 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C001F9E0 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     memset @ 0x1C00333C0 (memset.c)
 */

__int64 __fastcall FxPkgIo::CreateQueue(
        FxPkgIo *this,
        _WDF_IO_QUEUE_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *QueueAttributes,
        FxDriver *Caller,
        FxIoQueue **ppQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  WDFDRIVER__ *Driver; // r8
  unsigned __int8 m_PowerStateOn; // r12
  unsigned __int64 ContextSizeOverride; // r9
  ULONG Tag; // r15d
  FxIoQueue *v13; // rbp
  _POOL_TYPE v14; // ebx
  _LIST_ENTRY *v15; // rax
  FxIoQueue *v16; // rax
  FxIoQueue *v17; // rbx
  FxIoQueue *v18; // rax
  FxObject *v19; // rbx
  int _a1; // eax
  int v21; // r15d
  int v22; // ebx
  unsigned __int8 v23; // r8
  unsigned __int64 ParentObject; // r8
  FxObject *v26; // rcx
  __int64 v27; // rdx
  FxDeviceBase *v28; // rax
  FxDeviceBase *m_DeviceBase; // rcx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v31; // rax
  unsigned __int64 ContextSize; // r8
  const void *_a3; // rcx
  const void *_a2; // rax
  FxDriver *v35; // rcx
  __int64 v36; // rdx
  _WDF_EXECUTION_LEVEL *p_m_ExecutionLevel; // rdx
  FxCxDeviceInfo *Flink; // rax
  unsigned __int64 Size; // [rsp+50h] [rbp-48h] BYREF
  _LIST_ENTRY *retaddr; // [rsp+98h] [rbp+0h]
  FxObject *pParent; // [rsp+A0h] [rbp+8h] BYREF
  FxDriver *pDriver; // [rsp+B0h] [rbp+18h] BYREF
  FxDriver *v43; // [rsp+B8h] [rbp+20h]

  v43 = Caller;
  m_Globals = this->m_Globals;
  pParent = 0LL;
  pDriver = 0LL;
  if ( QueueAttributes && (ParentObject = (unsigned __int64)QueueAttributes->ParentObject) != 0 )
  {
    v26 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(v27) = 0;
    if ( (ParentObject & 1) != 0 )
    {
      v27 = LOWORD(v26->__vftable);
      v26 = (FxObject *)((char *)v26 - v27);
    }
    if ( v26->m_Type == 4096 )
    {
      pParent = v26;
    }
    else
    {
      FxObjectHandleGetPtrQI(v26, (void **)&pParent, (void *)ParentObject, 0x1000u, v27);
      v26 = pParent;
    }
    v28 = FxDeviceBase::_SearchForDevice(v26, 0LL);
    if ( !v28 )
    {
      WPP_IFR_SF_qd(
        m_Globals,
        2u,
        0xDu,
        0x1Bu,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
        QueueAttributes->ParentObject,
        -1073741808);
      return 3221225488LL;
    }
    m_DeviceBase = this->m_DeviceBase;
    if ( v28 != m_DeviceBase )
    {
      if ( m_DeviceBase->m_ObjectSize )
        _a3 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a3 = 0LL;
      if ( v28->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)v28 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a2 = 0LL;
      WPP_IFR_SF_qqqd(
        m_Globals,
        2u,
        0xDu,
        0x1Cu,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
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
    {
      v35 = (FxDriver *)(~(unsigned __int64)Driver & 0xFFFFFFFFFFFFFFF8uLL);
      LOWORD(v36) = 0;
      if ( ((unsigned __int8)Driver & 1) != 0 )
      {
        v36 = LOWORD(v35->FxNonPagedObject::FxObject::__vftable);
        v35 = (FxDriver *)((char *)v35 - v36);
      }
      if ( v35->m_Type == 4097 )
        pDriver = v35;
      else
        FxObjectHandleGetPtrQI(v35, (void **)&pDriver, Driver, 0x1001u, v36);
    }
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
  if ( FxCalculateObjectTotalSize2(m_Globals, 0x3A8u, 0, ContextSizeOverride, &Size) < 0 )
    goto LABEL_60;
  if ( m_Globals->FxPoolTrackingOn )
    v15 = retaddr;
  else
    v15 = 0LL;
  v16 = (FxIoQueue *)FxPoolAllocator(m_Globals, (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks, v14, Size, Tag, v15);
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
      v31 = QueueAttributes->ContextTypeInfo;
      if ( v31 )
      {
        ContextSize = QueueAttributes->ContextSizeOverride;
        if ( !ContextSize )
          ContextSize = v31->ContextSize;
        memset(&v17[1].m_SpinLock.m_Lock, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      v17[1].m_ChildListHead.Blink = (_LIST_ENTRY *)QueueAttributes->ContextTypeInfo;
    }
  }
  if ( !v17 || (FxIoQueue::FxIoQueue(v17, m_Globals, this), (v19 = v18) == 0LL) )
  {
LABEL_60:
    v21 = -1073741670;
    WPP_IFR_SF_d(
      m_Globals,
      2u,
      0xDu,
      0xAu,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
      -1073741670);
    return (unsigned int)v21;
  }
  _a1 = FxIoQueue::Initialize(v18, Config, QueueAttributes, v43, m_PowerStateOn);
  v21 = _a1;
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_d(
      m_Globals,
      2u,
      0xDu,
      0xBu,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
      _a1);
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
LABEL_57:
      Flink = 0LL;
    }
    else
    {
      while ( Flink->Driver != pDriver )
      {
        Flink = (FxCxDeviceInfo *)Flink->ListEntry.Flink;
        if ( Flink == (FxCxDeviceInfo *)p_m_ExecutionLevel )
          goto LABEL_57;
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

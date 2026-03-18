/*
 * XREFs of ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001F040
 * Callers:
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0021950 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 * Callees:
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0001D80 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?ConfigureAutoForwardCleanupClose@FxDevice@@QEAAXPEAUWDFDEVICE_INIT@@@Z @ 0x1C001EDF0 (-ConfigureAutoForwardCleanupClose@FxDevice@@QEAAXPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0021038 (-ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003F3E8 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003FAE4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C006A220 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     WPP_IFR_SF_DDxd @ 0x1C007FDD4 (WPP_IFR_SF_DDxd.c)
 *     ?_InitializeContext@FxPrePostCallback@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFCXDEVICE_INIT@@PEAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x1C009DD2C (-_InitializeContext@FxPrePostCallback@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFCXDEVICE_INIT@@PEAPEAVF.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D4A70 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

int __fastcall FxDevice::Initialize(
        FxDevice *this,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *DeviceAttributes)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  int result; // eax
  unsigned __int64 v7; // r9
  ULONG v8; // ecx
  unsigned __int64 flags; // r15
  void *Caller; // rax
  _FX_DRIVER_GLOBALS *v11; // rdx
  FxDefaultIrpHandler *v12; // rbx
  _FX_DRIVER_GLOBALS *v13; // rax
  unsigned int v14; // edx
  KIRQL v15; // r13
  KIRQL v16; // r12
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rcx
  unsigned __int64 m_RequestLookasideListElementSize; // rdx
  unsigned int v20; // r8d
  unsigned __int16 v21; // r9
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rcx
  _LIST_ENTRY *i; // r12
  int id; // ebx
  __int64 v25; // rdi
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r8
  ULONG v29; // ecx
  unsigned __int64 v30; // r9
  void *v31; // rax
  FX_POOL *p_FxPoolFrameworks; // r15
  FxObject *v33; // rax
  _FX_DRIVER_GLOBALS *v34; // rdx
  FxObject *v35; // rbx
  _FX_DRIVER_GLOBALS *v36; // rax
  unsigned int v37; // edx
  KIRQL v38; // al
  KIRQL v39; // r13
  KIRQL v40; // r12
  _LIST_ENTRY *v41; // rdx
  _LIST_ENTRY *v42; // rcx
  ULONG v43; // ecx
  FxVerifierLock *v44; // r9
  bool v45; // zf
  void *v46; // rax
  FxWmiIrpHandler *v47; // rax
  _FX_DRIVER_GLOBALS *v48; // rdx
  FxWmiIrpHandler *v49; // rdi
  _FX_DRIVER_GLOBALS *v50; // rax
  unsigned int v51; // edx
  KIRQL v52; // r13
  KIRQL v53; // r12
  _LIST_ENTRY *v54; // rdx
  _LIST_ENTRY *v55; // rcx
  ULONG v56; // ecx
  unsigned __int64 v57; // r9
  void *v58; // rax
  FxPkgIo *v59; // rax
  _FX_DRIVER_GLOBALS *v60; // rdx
  FxPkgIo *v61; // rbx
  _FX_DRIVER_GLOBALS *v62; // rax
  unsigned int v63; // edx
  KIRQL v64; // r15
  KIRQL v65; // r12
  _LIST_ENTRY *v66; // rdx
  _LIST_ENTRY *v67; // rcx
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rax
  _FX_DRIVER_GLOBALS *v70; // rdx
  FxTagTracker *Flink; // rcx
  _LIST_ENTRY **v72; // rax
  _LIST_ENTRY **v73; // r13
  _LIST_ENTRY *v74; // rdx
  _WDF_OBJECT_ATTRIBUTES *v75; // rcx
  __int64 v76; // rbx
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rax
  _FX_DRIVER_GLOBALS *v80; // rdx
  FxTagTracker *m_Lock; // rcx
  _FX_DRIVER_GLOBALS *v82; // rdx
  FxTagTracker *v83; // rcx
  _FX_DRIVER_GLOBALS *v84; // rdx
  FxTagTracker *v85; // rcx
  const _GUID *Tag; // [rsp+20h] [rbp-98h]
  FxVerifierLock *v87; // [rsp+50h] [rbp-68h] BYREF
  FxVerifierLock *v88[5]; // [rsp+58h] [rbp-60h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]
  char v90; // [rsp+C0h] [rbp+8h]
  FxVerifierLock *VerifierLock; // [rsp+C8h] [rbp+10h] BYREF
  FxVerifierLock *v92; // [rsp+D8h] [rbp+20h] BYREF

  m_Globals = this->m_Globals;
  this->m_Exclusive = DeviceInit->Exclusive;
  v90 = 0;
  this->m_ObjectFlags |= 0x800u;
  result = FxDeviceBase::ConfigureConstraints(this, DeviceAttributes);
  if ( result < 0 )
    return result;
  v7 = 120LL;
  v8 = m_Globals->Tag;
  if ( m_Globals->FxVerifierHandle )
    v7 = 168LL;
  flags = 0LL;
  v88[4] = (FxVerifierLock *)v7;
  if ( m_Globals->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v12 = (FxDefaultIrpHandler *)FxPoolAllocator(
                                 m_Globals,
                                 &m_Globals->FxPoolFrameworks,
                                 ExDefaultNonPagedPoolType,
                                 v7,
                                 v8,
                                 Caller);
  if ( !v12 )
    goto LABEL_114;
  if ( m_Globals->FxVerifierHandle )
  {
    memset(v12, 0, 0x30uLL);
    LODWORD(v12->m_ChildListHead.Flink) = 1146058822;
    v12 = (FxDefaultIrpHandler *)((char *)v12 + 48);
  }
  if ( v12 )
  {
    v12->__vftable = (FxDefaultIrpHandler_vtbl *)&FxObject::`vftable';
    v12->m_Globals = m_Globals;
    *(_DWORD *)&v12->m_Type = 4357;
    v12->m_SpinLock.m_Lock = 0LL;
    v12->m_SpinLock.m_DbgFlagIsInitialized = 1;
    v12->m_Refcnt = 1;
    *(_DWORD *)&v12->m_ObjectFlags = 0x10000;
    v12->m_ParentObject = 0LL;
    v12->m_ChildListHead.Blink = &v12->m_ChildListHead;
    v12->m_ChildListHead.Flink = &v12->m_ChildListHead;
    v12->m_ChildEntry.Blink = &v12->m_ChildEntry;
    v12->m_ChildEntry.Flink = &v12->m_ChildEntry;
    v13 = v12->m_Globals;
    v12->m_DisposeSingleEntry.Next = 0LL;
    v12->m_DeviceBase = 0LL;
    if ( v13->FxVerifierOn )
      FxObject::Vf_VerifyConstruct(v12, v11, 0);
    v12->__vftable = (FxDefaultIrpHandler_vtbl *)FxNonPagedObject::`vftable';
    v12->m_NPLock.m_Lock = 0LL;
    v12->m_NPLock.m_DbgFlagIsInitialized = 1;
    if ( SLOBYTE(v12->m_ObjectFlags) < 0 )
    {
      v70 = v12->m_Globals;
      if ( v70->FxVerifierLock )
      {
        VerifierLock = 0LL;
        FxVerifierLock::CreateAndInitialize(&VerifierLock, v70, v12);
        v12[-1].m_ChildEntry.Blink = (_LIST_ENTRY *)VerifierLock;
      }
    }
    v12->m_DeviceBase = this;
    v12->__vftable = (FxDefaultIrpHandler_vtbl *)FxDefaultIrpHandler::`vftable';
  }
  else
  {
LABEL_114:
    v12 = 0LL;
  }
  this->m_PkgDefault = v12;
  if ( !v12 )
    return -1073741670;
  v14 = _InterlockedIncrement(&v12->m_Refcnt);
  if ( SLOBYTE(v12->m_ObjectFlags) < 0 )
  {
    Flink = (FxTagTracker *)v12[-1].m_ChildEntry.Flink;
    if ( Flink )
      FxTagTracker::UpdateTagHistory(Flink, 0LL, 0, 0LL, TagAddRef, v14);
  }
  v15 = KeAcquireSpinLockRaiseToDpc(&v12->m_SpinLock.m_Lock);
  if ( v12->m_ObjectState == 1 )
  {
    if ( !v12->m_ParentObject )
    {
      v16 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
      if ( this->m_ObjectState == 1 )
      {
        Blink = this->m_ChildListHead.Blink;
        p_m_ChildEntry = &v12->m_ChildEntry;
        if ( Blink->Flink != &this->m_ChildListHead )
          __fastfail(3u);
        p_m_ChildEntry->Flink = &this->m_ChildListHead;
        v12->m_ChildEntry.Blink = Blink;
        Blink->Flink = p_m_ChildEntry;
        this->m_ChildListHead.Blink = p_m_ChildEntry;
        if ( !v12->m_DeviceBase )
          v12->m_DeviceBase = this->m_DeviceBase;
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v16);
        v12->m_ParentObject = this;
      }
      else
      {
        FxObject::TraceDroppedEvent(this, FxObjectDroppedEventAddChildObjectInternal);
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v16);
      }
    }
  }
  else
  {
    FxObject::TraceDroppedEvent(v12, FxObjectDroppedEventAssignParentObject);
  }
  KeReleaseSpinLock(&v12->m_SpinLock.m_Lock, v15);
  if ( DeviceInit->InitType == FxDeviceInitTypeControlDevice )
    this->m_Legacy = 1;
  if ( DeviceInit->RequestAttributes.Size )
  {
    *(_OWORD *)&this->m_RequestAttributes.Size = *(_OWORD *)&DeviceInit->RequestAttributes.Size;
    *(_OWORD *)&this->m_RequestAttributes.EvtDestroyCallback = *(_OWORD *)&DeviceInit->RequestAttributes.EvtDestroyCallback;
    *(_OWORD *)&this->m_RequestAttributes.ParentObject = *(_OWORD *)&DeviceInit->RequestAttributes.ParentObject;
    this->m_RequestAttributes.ContextTypeInfo = DeviceInit->RequestAttributes.ContextTypeInfo;
  }
  if ( this != (FxDevice *)-584LL )
  {
    ContextTypeInfo = this->m_RequestAttributes.ContextTypeInfo;
    if ( ContextTypeInfo )
    {
      flags = this->m_RequestAttributes.ContextSizeOverride;
      if ( !flags )
        flags = ContextTypeInfo->ContextSize;
    }
  }
  for ( i = DeviceInit->CxDeviceInitListHead.Flink; i != &DeviceInit->CxDeviceInitListHead; i = i->Flink )
  {
    v72 = (_LIST_ENTRY **)FxPoolAllocator(
                            m_Globals,
                            &m_Globals->FxPoolFrameworks,
                            ExDefaultNonPagedPoolType,
                            0xB0uLL,
                            m_Globals->Tag,
                            retaddr);
    v73 = v72;
    if ( !v72 )
      return -1073741670;
    v72[2] = 0LL;
    v72[3] = 0LL;
    *((_BYTE *)v72 + 88) = 0;
    v72[1] = (_LIST_ENTRY *)v72;
    *v72 = (_LIST_ENTRY *)v72;
    memset(v72 + 4, 0, 0x38uLL);
    memset(v73 + 12, 0, 0x50uLL);
    *((_BYTE *)v73 + 88) = ++v90;
    v73[2] = i[1].Blink[4].Blink;
    v73[3] = i[2].Blink;
    *((_LIST_ENTRY *)v73 + 2) = i[3];
    *((_LIST_ENTRY *)v73 + 3) = i[4];
    *((_LIST_ENTRY *)v73 + 4) = i[5];
    v73[10] = i[6].Flink;
    v74 = this->m_CxDeviceInfoListHead.Blink;
    if ( v74->Flink != &this->m_CxDeviceInfoListHead )
      __fastfail(3u);
    *v73 = &this->m_CxDeviceInfoListHead;
    v73[1] = v74;
    v74->Flink = (_LIST_ENTRY *)v73;
    this->m_CxDeviceInfoListHead.Blink = (_LIST_ENTRY *)v73;
    i[26].Blink = (_LIST_ENTRY *)v73;
    if ( FxGetContextSize((_WDF_OBJECT_ATTRIBUTES *)&i[3]) > flags )
      flags = FxGetContextSize(v75);
    if ( LOBYTE(i[26].Flink) == 1 )
    {
      v76 = 0LL;
      do
      {
        result = FxPrePostCallback::_InitializeContext(
                   this->m_Globals,
                   (WDFCXDEVICE_INIT *)i,
                   (FxCxPnpPowerCallbackContext **)&v73[v76 + 12],
                   (FxCxCallbackType)v76);
        if ( result < 0 )
          return result;
        v76 = (unsigned int)(v76 + 1);
      }
      while ( (unsigned int)v76 < 0xA );
    }
  }
  this->m_RequestLookasideListElementSize = 416LL;
  id = 0;
  if ( flags )
  {
    v68 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v68 < flags )
      return -1073741675;
    v69 = v68 + 416;
    if ( v69 < 0x1A0 )
    {
      id = -1073741675;
      this->m_RequestLookasideListElementSize = -1LL;
LABEL_133:
      WPP_IFR_SF_DDxd(m_Globals, m_RequestLookasideListElementSize, v20, v21, Tag, 0x168u, 0, flags, id);
      return id;
    }
    this->m_RequestLookasideListElementSize = v69;
  }
  v25 = -1LL;
  if ( m_Globals->FxVerifierHandle )
  {
    m_RequestLookasideListElementSize = this->m_RequestLookasideListElementSize;
    v77 = -1LL;
    if ( m_RequestLookasideListElementSize + 48 >= m_RequestLookasideListElementSize )
      v77 = m_RequestLookasideListElementSize + 48;
    id = m_RequestLookasideListElementSize + 48 < m_RequestLookasideListElementSize ? 0xC0000095 : 0;
    this->m_RequestLookasideListElementSize = v77;
  }
  if ( id < 0 )
    goto LABEL_133;
  v26 = this->m_RequestLookasideListElementSize;
  v27 = v26 + 16;
  if ( v26 + 16 < v26 )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xAu, WPP_FxPoolInlines_hpp_Traceguids, -1073741675);
    return -1073741675;
  }
  v28 = v26 + 16;
  if ( !m_Globals->FxPoolTrackingOn )
    goto LABEL_35;
  v78 = v26 + 80;
  v79 = v26 + 16;
  if ( v27 + 64 >= v27 )
    v25 = v27 + 64;
  v27 = v25;
  id = v78 < v79 ? 0xC0000095 : 0;
  if ( v78 < v28 )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xBu, WPP_FxPoolInlines_hpp_Traceguids, v78 < v79 ? 0xC0000095 : 0);
    if ( id < 0 )
      return id;
  }
  else
  {
LABEL_35:
    this->m_RequestLookasideListElementSize = v27;
  }
  ExInitializeNPagedLookasideList(
    &this->m_RequestLookasideList,
    0LL,
    0LL,
    ExDefaultNonPagedPoolType,
    this->m_RequestLookasideListElementSize,
    m_Globals->Tag,
    0);
  FxDevice::ConfigureAutoForwardCleanupClose(this, DeviceInit);
  v29 = m_Globals->Tag;
  if ( m_Globals->FxVerifierHandle )
    v30 = 248LL;
  else
    v30 = 200LL;
  v88[1] = (FxVerifierLock *)v30;
  if ( m_Globals->FxPoolTrackingOn )
    v31 = retaddr;
  else
    v31 = 0LL;
  p_FxPoolFrameworks = &m_Globals->FxPoolFrameworks;
  v33 = (FxObject *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, ExDefaultNonPagedPoolType, v30, v29, v31);
  v35 = v33;
  if ( !v33 )
    goto LABEL_146;
  if ( m_Globals->FxVerifierHandle )
  {
    memset(v33, 0, 0x30uLL);
    LODWORD(v35->m_ChildListHead.Flink) = 1146058822;
    v35 = (FxObject *)((char *)v35 + 48);
  }
  if ( v35 )
  {
    v35->m_Globals = m_Globals;
    v35->__vftable = (FxObject_vtbl *)&FxObject::`vftable';
    *(_DWORD *)&v35->m_Type = 4356;
    v35->m_SpinLock.m_Lock = 0LL;
    v35->m_SpinLock.m_DbgFlagIsInitialized = 1;
    v35->m_Refcnt = 1;
    *(_DWORD *)&v35->m_ObjectFlags = 0x10000;
    v35->m_ParentObject = 0LL;
    v35->m_ChildListHead.Blink = &v35->m_ChildListHead;
    v35->m_ChildListHead.Flink = &v35->m_ChildListHead;
    v35->m_ChildEntry.Blink = &v35->m_ChildEntry;
    v35->m_ChildEntry.Flink = &v35->m_ChildEntry;
    v36 = v35->m_Globals;
    v35->m_DisposeSingleEntry.Next = 0LL;
    v35->m_DeviceBase = 0LL;
    if ( v36->FxVerifierOn )
      FxObject::Vf_VerifyConstruct(v35, v34, 0);
    v35->__vftable = (FxObject_vtbl *)FxNonPagedObject::`vftable';
    *(_QWORD *)&v35[1].m_Type = 0LL;
    LOBYTE(v35[1].__vftable) = 1;
    if ( SLOBYTE(v35->m_ObjectFlags) < 0 )
    {
      v80 = v35->m_Globals;
      if ( v80->FxVerifierLock )
      {
        v92 = 0LL;
        FxVerifierLock::CreateAndInitialize(&v92, v80, v35);
        v35[-1].m_ParentObject = (FxObject *)v92;
      }
    }
    v35->m_DeviceBase = this;
    v35->__vftable = (FxObject_vtbl *)FxPkgGeneral::`vftable';
    v35[1].m_DisposeSingleEntry.Next = 0LL;
    LODWORD(v35[1].m_Globals) = 1;
    v35[1].m_ChildListHead.Flink = (_LIST_ENTRY *)&v35[1].24;
    *(_QWORD *)&v35[1].m_ObjectFlags = (char *)v35 + 128;
    LODWORD(v35[1].m_SpinLock.m_Lock) = 0;
    HIDWORD(v35[1].m_SpinLock.m_Lock) = 1;
    LODWORD(v35[1].m_ParentObject) = 1;
    v35[1].m_ChildEntry.Flink = 0LL;
    v35[1].m_ChildEntry.Blink = 0LL;
    *(_QWORD *)&v35[1].m_SpinLock.m_DbgFlagIsInitialized = 0LL;
    v35[1].m_ChildListHead.Blink = 0LL;
  }
  else
  {
LABEL_146:
    v35 = 0LL;
  }
  this->m_PkgGeneral = (FxPkgGeneral *)v35;
  if ( !v35 )
    return -1073741670;
  v37 = _InterlockedIncrement(&v35->m_Refcnt);
  if ( SLOBYTE(v35->m_ObjectFlags) < 0 )
  {
    m_Lock = (FxTagTracker *)v35[-1].m_SpinLock.m_Lock;
    if ( m_Lock )
      FxTagTracker::UpdateTagHistory(m_Lock, 0LL, 0, 0LL, TagAddRef, v37);
  }
  v38 = KeAcquireSpinLockRaiseToDpc(&v35->m_SpinLock.m_Lock);
  v39 = v38;
  if ( v35->m_ObjectState == 1 )
  {
    if ( v35->m_ParentObject )
    {
      KeReleaseSpinLock(&v35->m_SpinLock.m_Lock, v38);
    }
    else
    {
      v40 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
      if ( this->m_ObjectState == 1 )
      {
        v41 = this->m_ChildListHead.Blink;
        v42 = &v35->m_ChildEntry;
        if ( v41->Flink != &this->m_ChildListHead )
          __fastfail(3u);
        v42->Flink = &this->m_ChildListHead;
        v35->m_ChildEntry.Blink = v41;
        v41->Flink = v42;
        this->m_ChildListHead.Blink = v42;
        if ( !v35->m_DeviceBase )
          v35->m_DeviceBase = this->m_DeviceBase;
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v40);
        v35->m_ParentObject = this;
      }
      else
      {
        FxObject::TraceDroppedEvent(this, FxObjectDroppedEventAddChildObjectInternal);
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v40);
      }
      KeReleaseSpinLock(&v35->m_SpinLock.m_Lock, v39);
      p_FxPoolFrameworks = &m_Globals->FxPoolFrameworks;
    }
  }
  else
  {
    FxObject::TraceDroppedEvent(v35, FxObjectDroppedEventAssignParentObject);
    KeReleaseSpinLock(&v35->m_SpinLock.m_Lock, v39);
  }
  v43 = m_Globals->Tag;
  v44 = (FxVerifierLock *)(m_Globals->FxVerifierHandle ? 256LL : 208LL);
  v45 = m_Globals->FxPoolTrackingOn == 0;
  v88[2] = v44;
  v46 = v45 ? 0LL : retaddr;
  v47 = (FxWmiIrpHandler *)FxPoolAllocator(
                             m_Globals,
                             p_FxPoolFrameworks,
                             ExDefaultNonPagedPoolType,
                             (unsigned __int64)v44,
                             v43,
                             v46);
  v49 = v47;
  if ( !v47 )
    goto LABEL_157;
  if ( m_Globals->FxVerifierHandle )
  {
    memset(v47, 0, 0x30uLL);
    LODWORD(v49->m_ChildListHead.Flink) = 1146058822;
    v49 = (FxWmiIrpHandler *)((char *)v49 + 48);
  }
  if ( v49 )
  {
    v49->m_Globals = m_Globals;
    v49->__vftable = (FxWmiIrpHandler_vtbl *)&FxObject::`vftable';
    *(_DWORD *)&v49->m_Type = 4355;
    v49->m_SpinLock.m_Lock = 0LL;
    v49->m_SpinLock.m_DbgFlagIsInitialized = 1;
    v49->m_Refcnt = 1;
    *(_DWORD *)&v49->m_ObjectFlags = 0x10000;
    v49->m_ParentObject = 0LL;
    v49->m_ChildListHead.Blink = &v49->m_ChildListHead;
    v49->m_ChildListHead.Flink = &v49->m_ChildListHead;
    v49->m_ChildEntry.Blink = &v49->m_ChildEntry;
    v49->m_ChildEntry.Flink = &v49->m_ChildEntry;
    v50 = v49->m_Globals;
    v49->m_DisposeSingleEntry.Next = 0LL;
    v49->m_DeviceBase = 0LL;
    if ( v50->FxVerifierOn )
      FxObject::Vf_VerifyConstruct(v49, v48, 0);
    v49->__vftable = (FxWmiIrpHandler_vtbl *)FxNonPagedObject::`vftable';
    v49->m_NPLock.m_Lock = 0LL;
    v49->m_NPLock.m_DbgFlagIsInitialized = 1;
    if ( SLOBYTE(v49->m_ObjectFlags) < 0 )
    {
      v82 = v49->m_Globals;
      if ( v82->FxVerifierLock )
      {
        v87 = 0LL;
        FxVerifierLock::CreateAndInitialize(&v87, v82, v49);
        v49[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink = (_LIST_ENTRY *)v87;
      }
    }
    v49->m_DeviceBase = this;
    v49->__vftable = (FxWmiIrpHandler_vtbl *)FxWmiIrpHandler::`vftable';
    *(_QWORD *)&v49->m_NumProviders = 0LL;
    v49->m_WorkItem = 0LL;
    v49->m_UpdateCount = 1;
    v49->m_UpdateEvent.m_Event.m_DbgFlagIsInitialized = 0;
    KeInitializeEvent(&v49->m_UpdateEvent.m_Event.m_Event, SynchronizationEvent, 0);
    v49->m_UpdateEvent.m_Event.m_DbgFlagIsInitialized = 1;
    v49->m_WorkItemEvent = 0LL;
    v49->m_WorkItemQueued = 0;
    v49->m_ProvidersListHead.Blink = &v49->m_ProvidersListHead;
    v49->m_ProvidersListHead.Flink = &v49->m_ProvidersListHead;
  }
  else
  {
LABEL_157:
    v49 = 0LL;
  }
  this->m_PkgWmi = v49;
  if ( !v49 )
    return -1073741670;
  v51 = _InterlockedIncrement(&v49->m_Refcnt);
  if ( SLOBYTE(v49->m_ObjectFlags) < 0 )
  {
    v83 = *(FxTagTracker **)&v49[-1].m_UpdateEvent.m_Event.m_Event.Header.Lock;
    if ( v83 )
      FxTagTracker::UpdateTagHistory(v83, 0LL, 0, 0LL, TagAddRef, v51);
  }
  v52 = KeAcquireSpinLockRaiseToDpc(&v49->m_SpinLock.m_Lock);
  if ( v49->m_ObjectState != 1 )
  {
    FxObject::TraceDroppedEvent(v49, FxObjectDroppedEventAssignParentObject);
    goto LABEL_161;
  }
  if ( v49->m_ParentObject )
  {
LABEL_161:
    KeReleaseSpinLock(&v49->m_SpinLock.m_Lock, v52);
    goto LABEL_80;
  }
  v53 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  if ( this->m_ObjectState == 1 )
  {
    v54 = this->m_ChildListHead.Blink;
    v55 = &v49->m_ChildEntry;
    if ( v54->Flink != &this->m_ChildListHead )
      __fastfail(3u);
    v55->Flink = &this->m_ChildListHead;
    v49->m_ChildEntry.Blink = v54;
    v54->Flink = v55;
    this->m_ChildListHead.Blink = v55;
    if ( !v49->m_DeviceBase )
      v49->m_DeviceBase = this->m_DeviceBase;
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v53);
    v49->m_ParentObject = this;
  }
  else
  {
    FxObject::TraceDroppedEvent(this, FxObjectDroppedEventAddChildObjectInternal);
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v53);
  }
  KeReleaseSpinLock(&v49->m_SpinLock.m_Lock, v52);
  p_FxPoolFrameworks = &m_Globals->FxPoolFrameworks;
LABEL_80:
  v56 = m_Globals->Tag;
  if ( m_Globals->FxVerifierHandle )
    v57 = 448LL;
  else
    v57 = 400LL;
  v45 = m_Globals->FxPoolTrackingOn == 0;
  v88[3] = (FxVerifierLock *)v57;
  if ( v45 )
    v58 = 0LL;
  else
    v58 = retaddr;
  v59 = (FxPkgIo *)FxPoolAllocator(m_Globals, p_FxPoolFrameworks, ExDefaultNonPagedPoolType, v57, v56, v58);
  v61 = v59;
  if ( !v59 )
    goto LABEL_168;
  if ( m_Globals->FxVerifierHandle )
  {
    memset(v59, 0, 0x30uLL);
    LODWORD(v61->m_ChildListHead.Flink) = 1146058822;
    v61 = (FxPkgIo *)((char *)v61 + 48);
  }
  if ( v61 )
  {
    v61->m_Globals = m_Globals;
    v61->__vftable = (FxPkgIo_vtbl *)&FxObject::`vftable';
    *(_DWORD *)&v61->m_Type = 4352;
    v61->m_SpinLock.m_Lock = 0LL;
    v61->m_SpinLock.m_DbgFlagIsInitialized = 1;
    v61->m_Refcnt = 1;
    *(_DWORD *)&v61->m_ObjectFlags = 0x10000;
    v61->m_ParentObject = 0LL;
    v61->m_ChildListHead.Blink = &v61->m_ChildListHead;
    v61->m_ChildListHead.Flink = &v61->m_ChildListHead;
    v61->m_ChildEntry.Blink = &v61->m_ChildEntry;
    v61->m_ChildEntry.Flink = &v61->m_ChildEntry;
    v62 = v61->m_Globals;
    v61->m_DisposeSingleEntry.Next = 0LL;
    v61->m_DeviceBase = 0LL;
    if ( v62->FxVerifierOn )
      FxObject::Vf_VerifyConstruct(v61, v60, 0);
    v61->__vftable = (FxPkgIo_vtbl *)FxNonPagedObject::`vftable';
    v61->m_NPLock.m_Lock = 0LL;
    v61->m_NPLock.m_DbgFlagIsInitialized = 1;
    if ( SLOBYTE(v61->m_ObjectFlags) < 0 )
    {
      v84 = v61->m_Globals;
      if ( v84->FxVerifierLock )
      {
        v88[0] = 0LL;
        FxVerifierLock::CreateAndInitialize(v88, v84, v61);
        v61[-1].m_DispatchTable[27] = (FxIoQueue *)v88[0];
      }
    }
    v61->__vftable = (FxPkgIo_vtbl *)FxPkgIo::`vftable';
    v61->m_InCallerContextCallback.m_Method = 0LL;
    v61->m_DeviceBase = this;
    v61->m_DefaultQueue = 0LL;
    memset(v61->m_DispatchTable, 0, sizeof(v61->m_DispatchTable));
    *(_WORD *)&v61->m_Filter = 0;
    v61->m_QueuesAreShuttingDown = 0;
    v61->m_IoQueueListHead.Blink = &v61->m_IoQueueListHead;
    v61->m_IoQueueListHead.Flink = &v61->m_IoQueueListHead;
    v61->m_DynamicDispatchInfoListHead.Blink = &v61->m_DynamicDispatchInfoListHead;
    v61->m_DynamicDispatchInfoListHead.Flink = &v61->m_DynamicDispatchInfoListHead;
    v61->m_RandomSeed = MEMORY[0xFFFFF78000000320];
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0xAu, WPP_FxPkgIo_cpp_Traceguids, v61);
  }
  else
  {
LABEL_168:
    v61 = 0LL;
  }
  this->m_PkgIo = v61;
  if ( !v61 )
    return -1073741670;
  v63 = _InterlockedIncrement(&v61->m_Refcnt);
  if ( SLOBYTE(v61->m_ObjectFlags) < 0 )
  {
    v85 = (FxTagTracker *)v61[-1].m_DispatchTable[26];
    if ( v85 )
      FxTagTracker::UpdateTagHistory(v85, 0LL, 0, 0LL, TagAddRef, v63);
  }
  v64 = KeAcquireSpinLockRaiseToDpc(&v61->m_SpinLock.m_Lock);
  if ( v61->m_ObjectState == 1 )
  {
    if ( !v61->m_ParentObject )
    {
      v65 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
      if ( this->m_ObjectState == 1 )
      {
        v66 = this->m_ChildListHead.Blink;
        v67 = &v61->m_ChildEntry;
        if ( v66->Flink != &this->m_ChildListHead )
          __fastfail(3u);
        v67->Flink = &this->m_ChildListHead;
        v61->m_ChildEntry.Blink = v66;
        v66->Flink = v67;
        this->m_ChildListHead.Blink = v67;
        if ( !v61->m_DeviceBase )
          v61->m_DeviceBase = this->m_DeviceBase;
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v65);
        v61->m_ParentObject = this;
      }
      else
      {
        FxObject::TraceDroppedEvent(this, FxObjectDroppedEventAddChildObjectInternal);
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v65);
      }
    }
  }
  else
  {
    FxObject::TraceDroppedEvent(v61, FxObjectDroppedEventAssignParentObject);
  }
  KeReleaseSpinLock(&v61->m_SpinLock.m_Lock, v64);
  this->m_PkgIo->m_InCallerContextCallback.m_Method = DeviceInit->IoInCallerContextCallback;
  if ( DeviceInit->RequiresSelfIoTarget )
    this->m_SelfIoTargetNeeded = 1;
  return 0;
}

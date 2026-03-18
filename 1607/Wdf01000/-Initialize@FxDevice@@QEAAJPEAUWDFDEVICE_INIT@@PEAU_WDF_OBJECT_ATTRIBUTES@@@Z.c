/*
 * XREFs of ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001E9D0
 * Callers:
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0022EA0 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001BD68 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?ConfigureAutoForwardCleanupClose@FxDevice@@QEAAXPEAUWDFDEVICE_INIT@@@Z @ 0x1C001E88C (-ConfigureAutoForwardCleanupClose@FxDevice@@QEAAXPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FxPoolAddHeaderSize@@YAJPEAU_FX_DRIVER_GLOBALS@@_KPEA_K@Z @ 0x1C0020A38 (-FxPoolAddHeaderSize@@YAJPEAU_FX_DRIVER_GLOBALS@@_KPEA_K@Z.c)
 *     ?ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0020C94 (-ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003B8A0 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0066A4C (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     WPP_IFR_SF_DDxd @ 0x1C007BC28 (WPP_IFR_SF_DDxd.c)
 *     ?_InitializeContext@FxPrePostCallback@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFCXDEVICE_INIT@@PEAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x1C0099350 (-_InitializeContext@FxPrePostCallback@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFCXDEVICE_INIT@@PEAPEAVF.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C9490 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

int __fastcall FxDevice::Initialize(
        FxDevice *this,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *DeviceAttributes)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  int result; // eax
  SIZE_T v7; // r9
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
  unsigned __int8 v19; // dl
  unsigned int v20; // r8d
  unsigned __int16 v21; // r9
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rcx
  _LIST_ENTRY *i; // r12
  unsigned __int64 *p_m_RequestLookasideListElementSize; // rbx
  int id; // edi
  ULONG v26; // ecx
  SIZE_T v27; // r9
  void *v28; // rax
  FX_POOL *p_FxPoolFrameworks; // r15
  FxObject *v30; // rax
  _FX_DRIVER_GLOBALS *v31; // rdx
  FxObject *v32; // rbx
  _FX_DRIVER_GLOBALS *v33; // rax
  unsigned int v34; // edx
  KIRQL v35; // al
  KIRQL v36; // r13
  KIRQL v37; // r12
  _LIST_ENTRY *v38; // rdx
  _LIST_ENTRY *v39; // rcx
  ULONG v40; // ecx
  FxVerifierLock *v41; // r9
  bool v42; // zf
  void *v43; // rax
  FxWmiIrpHandler *v44; // rax
  _FX_DRIVER_GLOBALS *v45; // rdx
  FxWmiIrpHandler *v46; // rdi
  _FX_DRIVER_GLOBALS *v47; // rax
  unsigned int v48; // edx
  KIRQL v49; // r13
  KIRQL v50; // r12
  _LIST_ENTRY *v51; // rdx
  _LIST_ENTRY *v52; // rcx
  ULONG v53; // ecx
  SIZE_T v54; // r9
  void *v55; // rax
  FxPkgIo *v56; // rax
  _FX_DRIVER_GLOBALS *v57; // rdx
  FxPkgIo *v58; // rbx
  _FX_DRIVER_GLOBALS *v59; // rax
  unsigned int v60; // edx
  KIRQL v61; // r15
  KIRQL v62; // r12
  _LIST_ENTRY *v63; // rdx
  _LIST_ENTRY *v64; // rcx
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rax
  _FX_DRIVER_GLOBALS *v67; // rdx
  FxTagTracker *Next; // rcx
  _LIST_ENTRY **v69; // rax
  _LIST_ENTRY **v70; // r13
  _LIST_ENTRY *v71; // rdx
  _WDF_OBJECT_ATTRIBUTES *v72; // rcx
  __int64 v73; // rbx
  unsigned __int64 v74; // rcx
  _FX_DRIVER_GLOBALS *v75; // rdx
  FxTagTracker *Flink; // rcx
  _FX_DRIVER_GLOBALS *v77; // rdx
  FxTagTracker *v78; // rcx
  _FX_DRIVER_GLOBALS *v79; // rdx
  FxTagTracker *v80; // rcx
  const _GUID *Tag; // [rsp+20h] [rbp-98h]
  FxVerifierLock *v82; // [rsp+50h] [rbp-68h] BYREF
  FxVerifierLock *v83[5]; // [rsp+58h] [rbp-60h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]
  char v85; // [rsp+C0h] [rbp+8h]
  FxVerifierLock *VerifierLock; // [rsp+C8h] [rbp+10h] BYREF
  FxVerifierLock *v87; // [rsp+D8h] [rbp+20h] BYREF

  m_Globals = this->m_Globals;
  this->m_Exclusive = DeviceInit->Exclusive;
  v85 = 0;
  this->m_ObjectFlags |= 0x800u;
  result = FxDeviceBase::ConfigureConstraints(this, DeviceAttributes);
  if ( result < 0 )
    return result;
  v7 = 120LL;
  v8 = m_Globals->Tag;
  if ( m_Globals->FxVerifierHandle )
    v7 = 152LL;
  flags = 0LL;
  v83[4] = (FxVerifierLock *)v7;
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
    goto LABEL_112;
  if ( m_Globals->FxVerifierHandle )
  {
    memset(v12, 0, 0x20uLL);
    *(_DWORD *)(&v12->m_ObjectState + 1) = 1146058822;
    v12 = (FxDefaultIrpHandler *)((char *)v12 + 32);
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
    v12->__vftable = (FxDefaultIrpHandler_vtbl *)&FxNonPagedObject::`vftable';
    v12->m_NPLock.m_Lock = 0LL;
    v12->m_NPLock.m_DbgFlagIsInitialized = 1;
    if ( SLOBYTE(v12->m_ObjectFlags) < 0 )
    {
      v67 = v12->m_Globals;
      if ( v67->FxVerifierLock )
      {
        VerifierLock = 0LL;
        FxVerifierLock::CreateAndInitialize(&VerifierLock, v67, v12);
        v12[-1].m_DeviceBase = (FxDeviceBase *)VerifierLock;
      }
    }
    v12->m_DeviceBase = this;
    v12->__vftable = (FxDefaultIrpHandler_vtbl *)&FxDefaultIrpHandler::`vftable';
  }
  else
  {
LABEL_112:
    v12 = 0LL;
  }
  this->m_PkgDefault = v12;
  if ( !v12 )
    return -1073741670;
  v14 = _InterlockedIncrement(&v12->m_Refcnt);
  if ( SLOBYTE(v12->m_ObjectFlags) < 0 )
  {
    Next = (FxTagTracker *)v12[-1].m_DisposeSingleEntry.Next;
    if ( Next )
      FxTagTracker::UpdateTagHistory(Next, 0LL, 0, 0LL, TagAddRef, v14);
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
    v69 = (_LIST_ENTRY **)FxPoolAllocator(
                            m_Globals,
                            &m_Globals->FxPoolFrameworks,
                            ExDefaultNonPagedPoolType,
                            0xB0uLL,
                            m_Globals->Tag,
                            retaddr);
    v70 = v69;
    if ( !v69 )
      return -1073741670;
    v69[2] = 0LL;
    v69[3] = 0LL;
    *((_BYTE *)v69 + 88) = 0;
    v69[1] = (_LIST_ENTRY *)v69;
    *v69 = (_LIST_ENTRY *)v69;
    memset(v69 + 4, 0, 0x38uLL);
    memset(v70 + 12, 0, 0x50uLL);
    *((_BYTE *)v70 + 88) = ++v85;
    v70[2] = i[1].Blink[4].Blink;
    v70[3] = i[2].Blink;
    *((_LIST_ENTRY *)v70 + 2) = i[3];
    *((_LIST_ENTRY *)v70 + 3) = i[4];
    *((_LIST_ENTRY *)v70 + 4) = i[5];
    v70[10] = i[6].Flink;
    v71 = this->m_CxDeviceInfoListHead.Blink;
    if ( v71->Flink != &this->m_CxDeviceInfoListHead )
      __fastfail(3u);
    *v70 = &this->m_CxDeviceInfoListHead;
    v70[1] = v71;
    v71->Flink = (_LIST_ENTRY *)v70;
    this->m_CxDeviceInfoListHead.Blink = (_LIST_ENTRY *)v70;
    i[26].Blink = (_LIST_ENTRY *)v70;
    if ( FxGetContextSize((_WDF_OBJECT_ATTRIBUTES *)&i[3]) > flags )
      flags = FxGetContextSize(v72);
    if ( LOBYTE(i[26].Flink) == 1 )
    {
      v73 = 0LL;
      do
      {
        result = FxPrePostCallback::_InitializeContext(
                   this->m_Globals,
                   (WDFCXDEVICE_INIT *)i,
                   (FxCxPnpPowerCallbackContext **)&v70[v73 + 12],
                   (FxCxCallbackType)v73);
        if ( result < 0 )
          return result;
        v73 = (unsigned int)(v73 + 1);
      }
      while ( (unsigned int)v73 < 0xA );
    }
  }
  p_m_RequestLookasideListElementSize = &this->m_RequestLookasideListElementSize;
  this->m_RequestLookasideListElementSize = 416LL;
  id = 0;
  if ( flags )
  {
    v65 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v65 < flags )
      return -1073741675;
    v66 = v65 + 416;
    if ( v66 < 0x1A0 )
    {
      *p_m_RequestLookasideListElementSize = -1LL;
      id = -1073741675;
LABEL_132:
      WPP_IFR_SF_DDxd(m_Globals, v19, v20, v21, Tag, 0x168u, 0, flags, id);
      return id;
    }
    *p_m_RequestLookasideListElementSize = v66;
  }
  if ( m_Globals->FxVerifierHandle )
  {
    v74 = *p_m_RequestLookasideListElementSize + 32;
    if ( v74 < *p_m_RequestLookasideListElementSize )
    {
      *p_m_RequestLookasideListElementSize = -1LL;
      id = -1073741675;
    }
    else
    {
      *p_m_RequestLookasideListElementSize = v74;
      id = 0;
    }
  }
  if ( id < 0 )
    goto LABEL_132;
  result = FxPoolAddHeaderSize(
             m_Globals,
             *p_m_RequestLookasideListElementSize,
             &this->m_RequestLookasideListElementSize);
  if ( result < 0 )
    return result;
  ExInitializeNPagedLookasideList(
    &this->m_RequestLookasideList,
    0LL,
    0LL,
    ExDefaultNonPagedPoolType,
    *p_m_RequestLookasideListElementSize,
    m_Globals->Tag,
    0);
  FxDevice::ConfigureAutoForwardCleanupClose(this, DeviceInit);
  v26 = m_Globals->Tag;
  if ( m_Globals->FxVerifierHandle )
    v27 = 232LL;
  else
    v27 = 200LL;
  v83[1] = (FxVerifierLock *)v27;
  if ( m_Globals->FxPoolTrackingOn )
    v28 = retaddr;
  else
    v28 = 0LL;
  p_FxPoolFrameworks = &m_Globals->FxPoolFrameworks;
  v30 = (FxObject *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, ExDefaultNonPagedPoolType, v27, v26, v28);
  v32 = v30;
  if ( !v30 )
    goto LABEL_141;
  if ( m_Globals->FxVerifierHandle )
  {
    memset(v30, 0, 0x20uLL);
    *(_DWORD *)(&v32->m_ObjectState + 1) = 1146058822;
    v32 = (FxObject *)((char *)v32 + 32);
  }
  if ( v32 )
  {
    v32->m_Globals = m_Globals;
    v32->__vftable = (FxObject_vtbl *)&FxObject::`vftable';
    *(_DWORD *)&v32->m_Type = 4356;
    v32->m_SpinLock.m_Lock = 0LL;
    v32->m_SpinLock.m_DbgFlagIsInitialized = 1;
    v32->m_Refcnt = 1;
    *(_DWORD *)&v32->m_ObjectFlags = 0x10000;
    v32->m_ParentObject = 0LL;
    v32->m_ChildListHead.Blink = &v32->m_ChildListHead;
    v32->m_ChildListHead.Flink = &v32->m_ChildListHead;
    v32->m_ChildEntry.Blink = &v32->m_ChildEntry;
    v32->m_ChildEntry.Flink = &v32->m_ChildEntry;
    v33 = v32->m_Globals;
    v32->m_DisposeSingleEntry.Next = 0LL;
    v32->m_DeviceBase = 0LL;
    if ( v33->FxVerifierOn )
      FxObject::Vf_VerifyConstruct(v32, v31, 0);
    v32->__vftable = (FxObject_vtbl *)&FxNonPagedObject::`vftable';
    *(_QWORD *)&v32[1].m_Type = 0LL;
    LOBYTE(v32[1].__vftable) = 1;
    if ( SLOBYTE(v32->m_ObjectFlags) < 0 )
    {
      v75 = v32->m_Globals;
      if ( v75->FxVerifierLock )
      {
        v87 = 0LL;
        FxVerifierLock::CreateAndInitialize(&v87, v75, v32);
        v32[-1].m_ChildEntry.Blink = (_LIST_ENTRY *)v87;
      }
    }
    v32->m_DeviceBase = this;
    v32->__vftable = (FxObject_vtbl *)&FxPkgGeneral::`vftable';
    v32[1].m_DisposeSingleEntry.Next = 0LL;
    LODWORD(v32[1].m_Globals) = 1;
    v32[1].m_ChildListHead.Flink = (_LIST_ENTRY *)&v32[1].24;
    *(_QWORD *)&v32[1].m_ObjectFlags = (char *)v32 + 128;
    LODWORD(v32[1].m_SpinLock.m_Lock) = 0;
    HIDWORD(v32[1].m_SpinLock.m_Lock) = 1;
    LODWORD(v32[1].m_ParentObject) = 1;
    v32[1].m_ChildEntry.Flink = 0LL;
    v32[1].m_ChildEntry.Blink = 0LL;
    *(_QWORD *)&v32[1].m_SpinLock.m_DbgFlagIsInitialized = 0LL;
    v32[1].m_ChildListHead.Blink = 0LL;
  }
  else
  {
LABEL_141:
    v32 = 0LL;
  }
  this->m_PkgGeneral = (FxPkgGeneral *)v32;
  if ( !v32 )
    return -1073741670;
  v34 = _InterlockedIncrement(&v32->m_Refcnt);
  if ( SLOBYTE(v32->m_ObjectFlags) < 0 )
  {
    Flink = (FxTagTracker *)v32[-1].m_ChildEntry.Flink;
    if ( Flink )
      FxTagTracker::UpdateTagHistory(Flink, 0LL, 0, 0LL, TagAddRef, v34);
  }
  v35 = KeAcquireSpinLockRaiseToDpc(&v32->m_SpinLock.m_Lock);
  v36 = v35;
  if ( v32->m_ObjectState == 1 )
  {
    if ( v32->m_ParentObject )
    {
      KeReleaseSpinLock(&v32->m_SpinLock.m_Lock, v35);
    }
    else
    {
      v37 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
      if ( this->m_ObjectState == 1 )
      {
        v38 = this->m_ChildListHead.Blink;
        v39 = &v32->m_ChildEntry;
        if ( v38->Flink != &this->m_ChildListHead )
          __fastfail(3u);
        v39->Flink = &this->m_ChildListHead;
        v32->m_ChildEntry.Blink = v38;
        v38->Flink = v39;
        this->m_ChildListHead.Blink = v39;
        if ( !v32->m_DeviceBase )
          v32->m_DeviceBase = this->m_DeviceBase;
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v37);
        v32->m_ParentObject = this;
      }
      else
      {
        FxObject::TraceDroppedEvent(this, FxObjectDroppedEventAddChildObjectInternal);
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v37);
      }
      KeReleaseSpinLock(&v32->m_SpinLock.m_Lock, v36);
      p_FxPoolFrameworks = &m_Globals->FxPoolFrameworks;
    }
  }
  else
  {
    FxObject::TraceDroppedEvent(v32, FxObjectDroppedEventAssignParentObject);
    KeReleaseSpinLock(&v32->m_SpinLock.m_Lock, v36);
  }
  v40 = m_Globals->Tag;
  v41 = (FxVerifierLock *)(m_Globals->FxVerifierHandle ? 240LL : 208LL);
  v42 = m_Globals->FxPoolTrackingOn == 0;
  v83[2] = v41;
  v43 = v42 ? 0LL : retaddr;
  v44 = (FxWmiIrpHandler *)FxPoolAllocator(
                             m_Globals,
                             p_FxPoolFrameworks,
                             ExDefaultNonPagedPoolType,
                             (SIZE_T)v41,
                             v40,
                             v43);
  v46 = v44;
  if ( !v44 )
    goto LABEL_152;
  if ( m_Globals->FxVerifierHandle )
  {
    memset(v44, 0, 0x20uLL);
    *(_DWORD *)(&v46->m_ObjectState + 1) = 1146058822;
    v46 = (FxWmiIrpHandler *)((char *)v46 + 32);
  }
  if ( v46 )
  {
    v46->m_Globals = m_Globals;
    v46->__vftable = (FxWmiIrpHandler_vtbl *)&FxObject::`vftable';
    *(_DWORD *)&v46->m_Type = 4355;
    v46->m_SpinLock.m_Lock = 0LL;
    v46->m_SpinLock.m_DbgFlagIsInitialized = 1;
    v46->m_Refcnt = 1;
    *(_DWORD *)&v46->m_ObjectFlags = 0x10000;
    v46->m_ParentObject = 0LL;
    v46->m_ChildListHead.Blink = &v46->m_ChildListHead;
    v46->m_ChildListHead.Flink = &v46->m_ChildListHead;
    v46->m_ChildEntry.Blink = &v46->m_ChildEntry;
    v46->m_ChildEntry.Flink = &v46->m_ChildEntry;
    v47 = v46->m_Globals;
    v46->m_DisposeSingleEntry.Next = 0LL;
    v46->m_DeviceBase = 0LL;
    if ( v47->FxVerifierOn )
      FxObject::Vf_VerifyConstruct(v46, v45, 0);
    v46->__vftable = (FxWmiIrpHandler_vtbl *)&FxNonPagedObject::`vftable';
    v46->m_NPLock.m_Lock = 0LL;
    v46->m_NPLock.m_DbgFlagIsInitialized = 1;
    if ( SLOBYTE(v46->m_ObjectFlags) < 0 )
    {
      v77 = v46->m_Globals;
      if ( v77->FxVerifierLock )
      {
        v82 = 0LL;
        FxVerifierLock::CreateAndInitialize(&v82, v77, v46);
        *(_QWORD *)&v46[-1].m_UpdateEvent.m_Event.m_DbgFlagIsInitialized = v82;
      }
    }
    v46->m_DeviceBase = this;
    v46->__vftable = (FxWmiIrpHandler_vtbl *)&FxWmiIrpHandler::`vftable';
    *(_QWORD *)&v46->m_NumProviders = 0LL;
    v46->m_WorkItem = 0LL;
    v46->m_UpdateCount = 1;
    v46->m_UpdateEvent.m_Event.m_DbgFlagIsInitialized = 0;
    KeInitializeEvent(&v46->m_UpdateEvent.m_Event.m_Event, SynchronizationEvent, 0);
    v46->m_UpdateEvent.m_Event.m_DbgFlagIsInitialized = 1;
    v46->m_WorkItemEvent = 0LL;
    v46->m_WorkItemQueued = 0;
    v46->m_ProvidersListHead.Blink = &v46->m_ProvidersListHead;
    v46->m_ProvidersListHead.Flink = &v46->m_ProvidersListHead;
  }
  else
  {
LABEL_152:
    v46 = 0LL;
  }
  this->m_PkgWmi = v46;
  if ( !v46 )
    return -1073741670;
  v48 = _InterlockedIncrement(&v46->m_Refcnt);
  if ( SLOBYTE(v46->m_ObjectFlags) < 0 )
  {
    v78 = (FxTagTracker *)v46[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Blink;
    if ( v78 )
      FxTagTracker::UpdateTagHistory(v78, 0LL, 0, 0LL, TagAddRef, v48);
  }
  v49 = KeAcquireSpinLockRaiseToDpc(&v46->m_SpinLock.m_Lock);
  if ( v46->m_ObjectState != 1 )
  {
    FxObject::TraceDroppedEvent(v46, FxObjectDroppedEventAssignParentObject);
    goto LABEL_156;
  }
  if ( v46->m_ParentObject )
  {
LABEL_156:
    KeReleaseSpinLock(&v46->m_SpinLock.m_Lock, v49);
    goto LABEL_78;
  }
  v50 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  if ( this->m_ObjectState == 1 )
  {
    v51 = this->m_ChildListHead.Blink;
    v52 = &v46->m_ChildEntry;
    if ( v51->Flink != &this->m_ChildListHead )
      __fastfail(3u);
    v52->Flink = &this->m_ChildListHead;
    v46->m_ChildEntry.Blink = v51;
    v51->Flink = v52;
    this->m_ChildListHead.Blink = v52;
    if ( !v46->m_DeviceBase )
      v46->m_DeviceBase = this->m_DeviceBase;
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v50);
    v46->m_ParentObject = this;
  }
  else
  {
    FxObject::TraceDroppedEvent(this, FxObjectDroppedEventAddChildObjectInternal);
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v50);
  }
  KeReleaseSpinLock(&v46->m_SpinLock.m_Lock, v49);
  p_FxPoolFrameworks = &m_Globals->FxPoolFrameworks;
LABEL_78:
  v53 = m_Globals->Tag;
  if ( m_Globals->FxVerifierHandle )
    v54 = 432LL;
  else
    v54 = 400LL;
  v42 = m_Globals->FxPoolTrackingOn == 0;
  v83[3] = (FxVerifierLock *)v54;
  if ( v42 )
    v55 = 0LL;
  else
    v55 = retaddr;
  v56 = (FxPkgIo *)FxPoolAllocator(m_Globals, p_FxPoolFrameworks, ExDefaultNonPagedPoolType, v54, v53, v55);
  v58 = v56;
  if ( !v56 )
    goto LABEL_163;
  if ( m_Globals->FxVerifierHandle )
  {
    memset(v56, 0, 0x20uLL);
    *(_DWORD *)(&v58->m_ObjectState + 1) = 1146058822;
    v58 = (FxPkgIo *)((char *)v58 + 32);
  }
  if ( v58 )
  {
    v58->m_Globals = m_Globals;
    v58->__vftable = (FxPkgIo_vtbl *)&FxObject::`vftable';
    *(_DWORD *)&v58->m_Type = 4352;
    v58->m_SpinLock.m_Lock = 0LL;
    v58->m_SpinLock.m_DbgFlagIsInitialized = 1;
    v58->m_Refcnt = 1;
    *(_DWORD *)&v58->m_ObjectFlags = 0x10000;
    v58->m_ParentObject = 0LL;
    v58->m_ChildListHead.Blink = &v58->m_ChildListHead;
    v58->m_ChildListHead.Flink = &v58->m_ChildListHead;
    v58->m_ChildEntry.Blink = &v58->m_ChildEntry;
    v58->m_ChildEntry.Flink = &v58->m_ChildEntry;
    v59 = v58->m_Globals;
    v58->m_DisposeSingleEntry.Next = 0LL;
    v58->m_DeviceBase = 0LL;
    if ( v59->FxVerifierOn )
      FxObject::Vf_VerifyConstruct(v58, v57, 0);
    v58->__vftable = (FxPkgIo_vtbl *)&FxNonPagedObject::`vftable';
    v58->m_NPLock.m_Lock = 0LL;
    v58->m_NPLock.m_DbgFlagIsInitialized = 1;
    if ( SLOBYTE(v58->m_ObjectFlags) < 0 )
    {
      v79 = v58->m_Globals;
      if ( v79->FxVerifierLock )
      {
        v83[0] = 0LL;
        FxVerifierLock::CreateAndInitialize(v83, v79, v58);
        v58[-1].m_DynamicDispatchInfoListHead.Flink = (_LIST_ENTRY *)v83[0];
      }
    }
    v58->__vftable = (FxPkgIo_vtbl *)&FxPkgIo::`vftable';
    v58->m_InCallerContextCallback.m_Method = 0LL;
    v58->m_DeviceBase = this;
    v58->m_DefaultQueue = 0LL;
    memset(v58->m_DispatchTable, 0, sizeof(v58->m_DispatchTable));
    *(_WORD *)&v58->m_Filter = 0;
    v58->m_QueuesAreShuttingDown = 0;
    v58->m_IoQueueListHead.Blink = &v58->m_IoQueueListHead;
    v58->m_IoQueueListHead.Flink = &v58->m_IoQueueListHead;
    v58->m_DynamicDispatchInfoListHead.Blink = &v58->m_DynamicDispatchInfoListHead;
    v58->m_DynamicDispatchInfoListHead.Flink = &v58->m_DynamicDispatchInfoListHead;
    v58->m_RandomSeed = MEMORY[0xFFFFF78000000320];
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0xAu, WPP_FxPkgIo_cpp_Traceguids, v58);
  }
  else
  {
LABEL_163:
    v58 = 0LL;
  }
  this->m_PkgIo = v58;
  if ( !v58 )
    return -1073741670;
  v60 = _InterlockedIncrement(&v58->m_Refcnt);
  if ( SLOBYTE(v58->m_ObjectFlags) < 0 )
  {
    v80 = *(FxTagTracker **)&v58[-1].m_RandomSeed;
    if ( v80 )
      FxTagTracker::UpdateTagHistory(v80, 0LL, 0, 0LL, TagAddRef, v60);
  }
  v61 = KeAcquireSpinLockRaiseToDpc(&v58->m_SpinLock.m_Lock);
  if ( v58->m_ObjectState == 1 )
  {
    if ( !v58->m_ParentObject )
    {
      v62 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
      if ( this->m_ObjectState == 1 )
      {
        v63 = this->m_ChildListHead.Blink;
        v64 = &v58->m_ChildEntry;
        if ( v63->Flink != &this->m_ChildListHead )
          __fastfail(3u);
        v64->Flink = &this->m_ChildListHead;
        v58->m_ChildEntry.Blink = v63;
        v63->Flink = v64;
        this->m_ChildListHead.Blink = v64;
        if ( !v58->m_DeviceBase )
          v58->m_DeviceBase = this->m_DeviceBase;
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v62);
        v58->m_ParentObject = this;
      }
      else
      {
        FxObject::TraceDroppedEvent(this, FxObjectDroppedEventAddChildObjectInternal);
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v62);
      }
    }
  }
  else
  {
    FxObject::TraceDroppedEvent(v58, FxObjectDroppedEventAssignParentObject);
  }
  KeReleaseSpinLock(&v58->m_SpinLock.m_Lock, v61);
  this->m_PkgIo->m_InCallerContextCallback.m_Method = DeviceInit->IoInCallerContextCallback;
  if ( DeviceInit->RequiresSelfIoTarget )
    this->m_SelfIoTargetNeeded = 1;
  return 0;
}

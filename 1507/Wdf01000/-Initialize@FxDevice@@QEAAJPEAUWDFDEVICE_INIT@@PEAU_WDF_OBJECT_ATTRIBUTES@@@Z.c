/*
 * XREFs of ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C000D780
 * Callers:
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C000CE70 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?ConfigureAutoForwardCleanupClose@FxDevice@@QEAAXPEAUWDFDEVICE_INIT@@@Z @ 0x1C000D714 (-ConfigureAutoForwardCleanupClose@FxDevice@@QEAAXPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C000F93C (-ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001F204 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0031BDC (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     WPP_IFR_SF_DDxd @ 0x1C0079714 (WPP_IFR_SF_DDxd.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D1734 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

int __fastcall FxDevice::Initialize(
        FxDevice *this,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *DeviceAttributes)
{
  WDFDEVICE_INIT *v3; // r12
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  int result; // eax
  SIZE_T v7; // r9
  const void *v8; // rdi
  _LIST_ENTRY *Caller; // rax
  _FX_DRIVER_GLOBALS *v10; // rdx
  unsigned __int64 v11; // rbx
  _FX_DRIVER_GLOBALS *v12; // rax
  unsigned int v13; // edx
  KIRQL v14; // al
  unsigned __int16 v15; // dx
  KIRQL v16; // r13
  KIRQL v17; // al
  unsigned __int16 m_ObjectState; // dx
  KIRQL v19; // r12
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *v21; // rax
  unsigned __int8 v22; // dl
  unsigned int v23; // r8d
  unsigned __int16 v24; // r9
  unsigned __int64 ContextSizeOverride; // r13
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rcx
  _LIST_ENTRY *i; // r15
  int v28; // ebx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  ULONG v31; // r9d
  SIZE_T v32; // r9
  _LIST_ENTRY *v33; // rax
  _LIST_ENTRY *p_FxPoolFrameworks; // r12
  _QWORD *v35; // rax
  _FX_DRIVER_GLOBALS *v36; // rdx
  unsigned __int64 v37; // rbx
  __int64 v38; // rax
  unsigned int v39; // edx
  KIRQL v40; // al
  unsigned __int16 v41; // dx
  KIRQL v42; // r13
  KIRQL v43; // al
  unsigned __int16 v44; // dx
  KIRQL v45; // r12
  _LIST_ENTRY *v46; // rdx
  _LIST_ENTRY *v47; // rax
  SIZE_T v48; // r9
  _LIST_ENTRY *v49; // rax
  FxWmiIrpHandler *v50; // rax
  _FX_DRIVER_GLOBALS *v51; // rdx
  FxWmiIrpHandler *v52; // rsi
  _FX_DRIVER_GLOBALS *v53; // rax
  unsigned int v54; // edx
  KIRQL v55; // al
  unsigned __int16 v56; // dx
  KIRQL v57; // r13
  KIRQL v58; // al
  unsigned __int16 v59; // dx
  KIRQL v60; // r12
  _LIST_ENTRY *v61; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  SIZE_T v63; // r9
  _LIST_ENTRY *v64; // rax
  FxPkgIo *v65; // rax
  _FX_DRIVER_GLOBALS *v66; // rdx
  FxPkgIo *v67; // rbx
  _FX_DRIVER_GLOBALS *v68; // rax
  unsigned int v69; // edx
  KIRQL v70; // r12
  unsigned __int16 v71; // ax
  KIRQL v72; // r15
  unsigned __int16 v73; // ax
  _LIST_ENTRY *v74; // rdx
  _LIST_ENTRY *v75; // rax
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rax
  _FX_DRIVER_GLOBALS *v78; // r15
  FxDeviceBase *v79; // r13
  FxVerifierLock *v80; // rax
  __int64 v81; // rax
  __int64 v82; // rsi
  FxTagTracker *v83; // rcx
  const void *v84; // rcx
  const void *v85; // rcx
  _LIST_ENTRY *v86; // rax
  _LIST_ENTRY *v87; // rbx
  _LIST_ENTRY *v88; // r8
  _WDF_OBJECT_ATTRIBUTES *v89; // rcx
  unsigned __int64 m_RequestLookasideListElementSize; // rax
  unsigned __int16 v91; // r9
  __int64 v92; // r15
  __int64 v93; // r12
  FxVerifierLock *v94; // rax
  __int64 v95; // rax
  __int64 v96; // rsi
  FxTagTracker *v97; // rcx
  const void *v98; // rcx
  const void *v99; // rcx
  _FX_DRIVER_GLOBALS *v100; // r15
  __int64 v101; // r12
  FxVerifierLock *v102; // rax
  __int64 v103; // rax
  __int64 v104; // rbx
  FxTagTracker *v105; // rcx
  const void *v106; // rcx
  const void *v107; // rcx
  _FX_DRIVER_GLOBALS *v108; // r15
  _LIST_ENTRY *v109; // r12
  FxVerifierLock *v110; // rax
  _LIST_ENTRY *v111; // rax
  _LIST_ENTRY *v112; // rsi
  FxTagTracker *v113; // rcx
  const void *v114; // rcx
  const _GUID *Tag; // [rsp+20h] [rbp-88h]
  _LIST_ENTRY *retaddr; // [rsp+A8h] [rbp+0h]
  char v117; // [rsp+B0h] [rbp+8h]
  _LIST_ENTRY **p_Flink; // [rsp+C8h] [rbp+20h]

  v3 = DeviceInit;
  m_Globals = this->m_Globals;
  this->m_Exclusive = DeviceInit->Exclusive;
  v117 = 0;
  this->m_ObjectFlags |= 0x800u;
  result = FxDeviceBase::ConfigureConstraints(this, DeviceAttributes);
  if ( result < 0 )
    return result;
  v7 = 120LL;
  if ( m_Globals->FxVerifierHandle )
    v7 = 152LL;
  v8 = 0LL;
  if ( m_Globals->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v11 = (unsigned __int64)FxPoolAllocator(
                            m_Globals,
                            (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
                            ExDefaultNonPagedPoolType,
                            v7,
                            m_Globals->Tag,
                            Caller);
  if ( !v11 )
    goto LABEL_121;
  if ( m_Globals->FxVerifierHandle )
  {
    memset((void *)v11, 0, 0x20uLL);
    *(_DWORD *)(v11 + 28) = 1146058822;
    v11 += 32LL;
  }
  if ( v11 )
  {
    *(_QWORD *)v11 = &FxObject::`vftable';
    *(_QWORD *)(v11 + 16) = m_Globals;
    *(_DWORD *)(v11 + 8) = 4357;
    *(_QWORD *)(v11 + 56) = 0LL;
    *(_BYTE *)(v11 + 48) = 1;
    *(_DWORD *)(v11 + 12) = 1;
    *(_DWORD *)(v11 + 24) = 0x10000;
    *(_QWORD *)(v11 + 64) = 0LL;
    *(_QWORD *)(v11 + 40) = v11 + 32;
    *(_QWORD *)(v11 + 32) = v11 + 32;
    *(_QWORD *)(v11 + 80) = v11 + 72;
    *(_QWORD *)(v11 + 72) = v11 + 72;
    v12 = *(_FX_DRIVER_GLOBALS **)(v11 + 16);
    *(_QWORD *)(v11 + 88) = 0LL;
    *(_QWORD *)(v11 + 96) = 0LL;
    if ( v12->FxVerifierOn )
      FxObject::Vf_VerifyConstruct((FxObject *)v11, v10, 0);
    *(_QWORD *)v11 = &FxNonPagedObject::`vftable';
    *(_QWORD *)(v11 + 112) = 0LL;
    *(_BYTE *)(v11 + 104) = 1;
    if ( *(char *)(v11 + 24) < 0 )
    {
      v78 = *(_FX_DRIVER_GLOBALS **)(v11 + 16);
      if ( v78->FxVerifierLock )
      {
        v79 = 0LL;
        v80 = (FxVerifierLock *)FxPoolAllocator(
                                  v78,
                                  (_LIST_ENTRY *)&v78->FxPoolFrameworks,
                                  ExDefaultNonPagedPoolType,
                                  0xB0uLL,
                                  v78->Tag,
                                  retaddr);
        if ( v80 && (FxVerifierLock::FxVerifierLock(v80, v78, (FxObject *)v11), (v82 = v81) != 0) )
        {
          if ( *(_BYTE *)(v81 + 122) )
          {
            *(_DWORD *)(v81 + 48) = 1;
            *(_QWORD *)(v81 + 56) = 0LL;
            *(_DWORD *)(v81 + 64) = 0;
            KeInitializeEvent((PRKEVENT)(v81 + 72), SynchronizationEvent, 0);
            *(_BYTE *)(v82 + 40) = 1;
          }
          v79 = (FxDeviceBase *)v82;
        }
        else
        {
          WPP_IFR_SF_d(v78, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_hpp_Traceguids, -1073741670);
        }
        *(_QWORD *)(v11 - 24) = v79;
      }
    }
    *(_QWORD *)(v11 + 96) = this;
    *(_QWORD *)v11 = &FxDefaultIrpHandler::`vftable';
  }
  else
  {
LABEL_121:
    v11 = 0LL;
  }
  this->m_PkgDefault = (FxDefaultIrpHandler *)v11;
  if ( !v11 )
    return -1073741670;
  v13 = _InterlockedIncrement((volatile signed __int32 *)(v11 + 12));
  if ( *(char *)(v11 + 24) < 0 )
  {
    v83 = *(FxTagTracker **)(v11 - 32);
    if ( v83 )
      FxTagTracker::UpdateTagHistory(v83, 0LL, 0, 0LL, TagAddRef, v13);
  }
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 56));
  v15 = *(_WORD *)(v11 + 26);
  v16 = v14;
  if ( v15 != 1 )
  {
    if ( (*(_WORD *)(v11 + 24) & 0x200) != 0 )
    {
      if ( *(_WORD *)(v11 + 10) )
        v84 = (const void *)(v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v84 = 0LL;
      WPP_IFR_SF_qqLL(
        *(_FX_DRIVER_GLOBALS **)(v11 + 16),
        4u,
        0x14u,
        0xBu,
        WPP_FxObject_hpp_Traceguids,
        (const void *)v11,
        v84,
        v15,
        0);
    }
    goto LABEL_129;
  }
  if ( *(_QWORD *)(v11 + 64) )
  {
LABEL_129:
    KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 56), v16);
    goto LABEL_24;
  }
  v17 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  m_ObjectState = this->m_ObjectState;
  v19 = v17;
  if ( m_ObjectState == 1 )
  {
    Blink = this->m_ChildListHead.Blink;
    v21 = (_LIST_ENTRY *)(v11 + 72);
    *(_QWORD *)(v11 + 72) = &this->m_ChildListHead;
    *(_QWORD *)(v11 + 80) = Blink;
    if ( Blink->Flink != &this->m_ChildListHead )
      __fastfail(3u);
    Blink->Flink = v21;
    this->m_ChildListHead.Blink = v21;
    if ( !*(_QWORD *)(v11 + 96) )
      *(_QWORD *)(v11 + 96) = this->m_DeviceBase;
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v19);
    *(_QWORD *)(v11 + 64) = this;
  }
  else
  {
    if ( (this->m_ObjectFlags & 0x200) != 0 )
    {
      if ( this->m_ObjectSize )
        v85 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v85 = 0LL;
      WPP_IFR_SF_qqLL(this->m_Globals, 4u, 0x14u, 0xBu, WPP_FxObject_hpp_Traceguids, this, v85, m_ObjectState, 1u);
    }
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v19);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 56), v16);
  v3 = DeviceInit;
LABEL_24:
  if ( v3->InitType == FxDeviceInitTypeControlDevice )
    this->m_Legacy = 1;
  if ( v3->RequestAttributes.Size )
  {
    *(_OWORD *)&this->m_RequestAttributes.Size = *(_OWORD *)&v3->RequestAttributes.Size;
    *(_OWORD *)&this->m_RequestAttributes.EvtDestroyCallback = *(_OWORD *)&v3->RequestAttributes.EvtDestroyCallback;
    *(_OWORD *)&this->m_RequestAttributes.ParentObject = *(_OWORD *)&v3->RequestAttributes.ParentObject;
    this->m_RequestAttributes.ContextTypeInfo = v3->RequestAttributes.ContextTypeInfo;
  }
  ContextSizeOverride = 0LL;
  if ( this != (FxDevice *)-584LL )
  {
    ContextTypeInfo = this->m_RequestAttributes.ContextTypeInfo;
    if ( ContextTypeInfo )
    {
      ContextSizeOverride = this->m_RequestAttributes.ContextSizeOverride;
      if ( !ContextSizeOverride )
        ContextSizeOverride = ContextTypeInfo->ContextSize;
    }
  }
  for ( i = v3->CxDeviceInitListHead.Flink; i != &v3->CxDeviceInitListHead; i = i->Flink )
  {
    v86 = (_LIST_ENTRY *)FxPoolAllocator(
                           m_Globals,
                           (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
                           ExDefaultNonPagedPoolType,
                           0x60uLL,
                           m_Globals->Tag,
                           retaddr);
    p_Flink = &v86->Flink;
    if ( !v86 )
      return -1073741670;
    v86[1].Flink = 0LL;
    v87 = v86 + 2;
    v86[1].Blink = 0LL;
    LOBYTE(v86[5].Blink) = 0;
    v86->Blink = v86;
    v86->Flink = v86;
    memset(&v86[2], 0, 0x38uLL);
    *((_BYTE *)p_Flink + 88) = ++v117;
    p_Flink[2] = i[1].Blink[4].Blink;
    p_Flink[3] = i[2].Blink;
    *v87 = i[3];
    v87[1] = i[4];
    v87[2] = i[5];
    v87[3].Flink = i[6].Flink;
    v88 = this->m_CxDeviceInfoListHead.Blink;
    *p_Flink = &this->m_CxDeviceInfoListHead;
    p_Flink[1] = v88;
    if ( v88->Flink != &this->m_CxDeviceInfoListHead )
      __fastfail(3u);
    v88->Flink = (_LIST_ENTRY *)p_Flink;
    this->m_CxDeviceInfoListHead.Blink = (_LIST_ENTRY *)p_Flink;
    i[13].Blink = (_LIST_ENTRY *)p_Flink;
    if ( FxGetContextSize((_WDF_OBJECT_ATTRIBUTES *)&i[3]) > ContextSizeOverride )
      ContextSizeOverride = FxGetContextSize(v89);
  }
  this->m_RequestLookasideListElementSize = 416LL;
  v28 = 0;
  if ( ContextSizeOverride )
  {
    v76 = (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v76 < ContextSizeOverride )
      return -1073741675;
    v77 = v76 + 416;
    if ( v77 < 0x1A0 )
    {
      this->m_RequestLookasideListElementSize = -1LL;
      v28 = -1073741675;
LABEL_147:
      WPP_IFR_SF_DDxd(m_Globals, v22, v23, v24, Tag, 0x168u, 0, ContextSizeOverride, v28);
      return v28;
    }
    this->m_RequestLookasideListElementSize = v77;
  }
  if ( m_Globals->FxVerifierHandle )
  {
    m_RequestLookasideListElementSize = this->m_RequestLookasideListElementSize;
    if ( m_RequestLookasideListElementSize + 32 < m_RequestLookasideListElementSize )
    {
      this->m_RequestLookasideListElementSize = -1LL;
      v28 = -1073741675;
    }
    else
    {
      this->m_RequestLookasideListElementSize = m_RequestLookasideListElementSize + 32;
      v28 = 0;
    }
  }
  if ( v28 < 0 )
    goto LABEL_147;
  v29 = this->m_RequestLookasideListElementSize;
  v30 = v29 + 16;
  if ( v29 + 16 < v29 )
  {
    v91 = 10;
    goto LABEL_234;
  }
  if ( m_Globals->FxPoolTrackingOn )
  {
    if ( v29 + 80 >= v29 + 16 )
    {
      v30 = v29 + 80;
      goto LABEL_36;
    }
    v91 = 11;
LABEL_234:
    WPP_IFR_SF_d(m_Globals, 2u, 0x12u, v91, WPP_FxPoolInlines_hpp_Traceguids, -1073741675);
    return -1073741675;
  }
LABEL_36:
  v31 = ExDefaultNonPagedPoolType;
  this->m_RequestLookasideListElementSize = v30;
  ExInitializeNPagedLookasideList(&this->m_RequestLookasideList, 0LL, 0LL, v31, v30, m_Globals->Tag, 0);
  FxDevice::ConfigureAutoForwardCleanupClose(this, v3);
  if ( m_Globals->FxVerifierHandle )
    v32 = 232LL;
  else
    v32 = 200LL;
  if ( m_Globals->FxPoolTrackingOn )
    v33 = retaddr;
  else
    v33 = 0LL;
  p_FxPoolFrameworks = (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks;
  v35 = FxPoolAllocator(
          m_Globals,
          (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
          ExDefaultNonPagedPoolType,
          v32,
          m_Globals->Tag,
          v33);
  v37 = (unsigned __int64)v35;
  if ( !v35 )
    goto LABEL_165;
  if ( m_Globals->FxVerifierHandle )
  {
    memset(v35, 0, 0x20uLL);
    *(_DWORD *)(v37 + 28) = 1146058822;
    v37 += 32LL;
  }
  if ( v37 )
  {
    *(_QWORD *)(v37 + 16) = m_Globals;
    *(_QWORD *)v37 = &FxObject::`vftable';
    *(_DWORD *)(v37 + 8) = 4356;
    *(_QWORD *)(v37 + 56) = 0LL;
    *(_BYTE *)(v37 + 48) = 1;
    *(_DWORD *)(v37 + 12) = 1;
    *(_DWORD *)(v37 + 24) = 0x10000;
    *(_QWORD *)(v37 + 64) = 0LL;
    *(_QWORD *)(v37 + 40) = v37 + 32;
    *(_QWORD *)(v37 + 32) = v37 + 32;
    *(_QWORD *)(v37 + 80) = v37 + 72;
    *(_QWORD *)(v37 + 72) = v37 + 72;
    v38 = *(_QWORD *)(v37 + 16);
    *(_QWORD *)(v37 + 88) = 0LL;
    *(_QWORD *)(v37 + 96) = 0LL;
    if ( *(_BYTE *)(v38 + 316) )
      FxObject::Vf_VerifyConstruct((FxObject *)v37, v36, 0);
    *(_QWORD *)v37 = &FxNonPagedObject::`vftable';
    *(_QWORD *)(v37 + 112) = 0LL;
    *(_BYTE *)(v37 + 104) = 1;
    if ( *(char *)(v37 + 24) < 0 )
    {
      v92 = *(_QWORD *)(v37 + 16);
      if ( *(_BYTE *)(v92 + 322) )
      {
        v93 = 0LL;
        v94 = (FxVerifierLock *)FxPoolAllocator(
                                  (_FX_DRIVER_GLOBALS *)v92,
                                  (_LIST_ENTRY *)(v92 + 104),
                                  ExDefaultNonPagedPoolType,
                                  0xB0uLL,
                                  *(_DWORD *)(v92 + 68),
                                  retaddr);
        if ( v94 && (FxVerifierLock::FxVerifierLock(v94, (_FX_DRIVER_GLOBALS *)v92, (FxObject *)v37), (v96 = v95) != 0) )
        {
          if ( *(_BYTE *)(v95 + 122) )
          {
            *(_DWORD *)(v95 + 48) = 1;
            *(_QWORD *)(v95 + 56) = 0LL;
            *(_DWORD *)(v95 + 64) = 0;
            KeInitializeEvent((PRKEVENT)(v95 + 72), SynchronizationEvent, 0);
            *(_BYTE *)(v96 + 40) = 1;
          }
          v93 = v96;
        }
        else
        {
          WPP_IFR_SF_d((_FX_DRIVER_GLOBALS *)v92, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_hpp_Traceguids, -1073741670);
        }
        *(_QWORD *)(v37 - 24) = v93;
        p_FxPoolFrameworks = (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks;
      }
    }
    *(_QWORD *)(v37 + 96) = this;
    *(_QWORD *)v37 = &FxPkgGeneral::`vftable';
    *(_QWORD *)(v37 + 192) = 0LL;
    *(_DWORD *)(v37 + 120) = 1;
    *(_QWORD *)(v37 + 136) = v37 + 128;
    *(_QWORD *)(v37 + 128) = v37 + 128;
    *(_DWORD *)(v37 + 160) = 0;
    *(_DWORD *)(v37 + 164) = 1;
    *(_DWORD *)(v37 + 168) = 1;
    *(_QWORD *)(v37 + 176) = 0LL;
    *(_QWORD *)(v37 + 184) = 0LL;
    *(_QWORD *)(v37 + 152) = 0LL;
    *(_QWORD *)(v37 + 144) = 0LL;
  }
  else
  {
LABEL_165:
    v37 = 0LL;
  }
  this->m_PkgGeneral = (FxPkgGeneral *)v37;
  if ( !v37 )
    return -1073741670;
  v39 = _InterlockedIncrement((volatile signed __int32 *)(v37 + 12));
  if ( *(char *)(v37 + 24) < 0 )
  {
    v97 = *(FxTagTracker **)(v37 - 32);
    if ( v97 )
      FxTagTracker::UpdateTagHistory(v97, 0LL, 0, 0LL, TagAddRef, v39);
  }
  v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v37 + 56));
  v41 = *(_WORD *)(v37 + 26);
  v42 = v40;
  if ( v41 == 1 )
  {
    if ( *(_QWORD *)(v37 + 64) )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v37 + 56), v40);
    }
    else
    {
      v43 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
      v44 = this->m_ObjectState;
      v45 = v43;
      if ( v44 == 1 )
      {
        v46 = this->m_ChildListHead.Blink;
        v47 = (_LIST_ENTRY *)(v37 + 72);
        *(_QWORD *)(v37 + 72) = &this->m_ChildListHead;
        *(_QWORD *)(v37 + 80) = v46;
        if ( v46->Flink != &this->m_ChildListHead )
          __fastfail(3u);
        v46->Flink = v47;
        this->m_ChildListHead.Blink = v47;
        if ( !*(_QWORD *)(v37 + 96) )
          *(_QWORD *)(v37 + 96) = this->m_DeviceBase;
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v45);
        *(_QWORD *)(v37 + 64) = this;
      }
      else
      {
        if ( (this->m_ObjectFlags & 0x200) != 0 )
        {
          if ( this->m_ObjectSize )
            v99 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v99 = 0LL;
          WPP_IFR_SF_qqLL(this->m_Globals, 4u, 0x14u, 0xBu, WPP_FxObject_hpp_Traceguids, this, v99, v44, 1u);
        }
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v45);
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v37 + 56), v42);
      p_FxPoolFrameworks = (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks;
    }
  }
  else
  {
    if ( (*(_WORD *)(v37 + 24) & 0x200) != 0 )
    {
      if ( *(_WORD *)(v37 + 10) )
        v98 = (const void *)(v37 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v98 = 0LL;
      WPP_IFR_SF_qqLL(
        *(_FX_DRIVER_GLOBALS **)(v37 + 16),
        4u,
        0x14u,
        0xBu,
        WPP_FxObject_hpp_Traceguids,
        (const void *)v37,
        v98,
        v41,
        0);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v37 + 56), v42);
  }
  v48 = m_Globals->FxVerifierHandle ? 240LL : 208LL;
  v49 = m_Globals->FxPoolTrackingOn ? retaddr : 0LL;
  v50 = (FxWmiIrpHandler *)FxPoolAllocator(
                             m_Globals,
                             p_FxPoolFrameworks,
                             ExDefaultNonPagedPoolType,
                             v48,
                             m_Globals->Tag,
                             v49);
  v52 = v50;
  if ( !v50 )
    goto LABEL_192;
  if ( m_Globals->FxVerifierHandle )
  {
    memset(v50, 0, 0x20uLL);
    *(_DWORD *)(&v52->m_ObjectState + 1) = 1146058822;
    v52 = (FxWmiIrpHandler *)((char *)v52 + 32);
  }
  if ( v52 )
  {
    v52->m_Globals = m_Globals;
    v52->__vftable = (FxWmiIrpHandler_vtbl *)&FxObject::`vftable';
    *(_DWORD *)&v52->m_Type = 4355;
    v52->m_SpinLock.m_Lock = 0LL;
    v52->m_SpinLock.m_DbgFlagIsInitialized = 1;
    v52->m_Refcnt = 1;
    *(_DWORD *)&v52->m_ObjectFlags = 0x10000;
    v52->m_ParentObject = 0LL;
    v52->m_ChildListHead.Blink = &v52->m_ChildListHead;
    v52->m_ChildListHead.Flink = &v52->m_ChildListHead;
    v52->m_ChildEntry.Blink = &v52->m_ChildEntry;
    v52->m_ChildEntry.Flink = &v52->m_ChildEntry;
    v53 = v52->m_Globals;
    v52->m_DisposeSingleEntry.Next = 0LL;
    v52->m_DeviceBase = 0LL;
    if ( v53->FxVerifierOn )
      FxObject::Vf_VerifyConstruct(v52, v51, 0);
    v52->__vftable = (FxWmiIrpHandler_vtbl *)&FxNonPagedObject::`vftable';
    v52->m_NPLock.m_Lock = 0LL;
    v52->m_NPLock.m_DbgFlagIsInitialized = 1;
    if ( SLOBYTE(v52->m_ObjectFlags) < 0 )
    {
      v100 = v52->m_Globals;
      if ( v100->FxVerifierLock )
      {
        v101 = 0LL;
        v102 = (FxVerifierLock *)FxPoolAllocator(
                                   v100,
                                   (_LIST_ENTRY *)&v100->FxPoolFrameworks,
                                   ExDefaultNonPagedPoolType,
                                   0xB0uLL,
                                   v100->Tag,
                                   retaddr);
        if ( v102 && (FxVerifierLock::FxVerifierLock(v102, v100, v52), (v104 = v103) != 0) )
        {
          if ( *(_BYTE *)(v103 + 122) )
          {
            *(_DWORD *)(v103 + 48) = 1;
            *(_QWORD *)(v103 + 56) = 0LL;
            *(_DWORD *)(v103 + 64) = 0;
            KeInitializeEvent((PRKEVENT)(v103 + 72), SynchronizationEvent, 0);
            *(_BYTE *)(v104 + 40) = 1;
          }
          v101 = v104;
        }
        else
        {
          WPP_IFR_SF_d(v100, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_hpp_Traceguids, -1073741670);
        }
        *(_QWORD *)&v52[-1].m_UpdateEvent.m_Event.m_DbgFlagIsInitialized = v101;
        p_FxPoolFrameworks = (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks;
      }
    }
    v52->m_DeviceBase = this;
    v52->__vftable = (FxWmiIrpHandler_vtbl *)&FxWmiIrpHandler::`vftable';
    *(_QWORD *)&v52->m_NumProviders = 0LL;
    v52->m_WorkItem = 0LL;
    v52->m_UpdateCount = 1;
    v52->m_UpdateEvent.m_Event.m_DbgFlagIsInitialized = 0;
    KeInitializeEvent(&v52->m_UpdateEvent.m_Event.m_Event, SynchronizationEvent, 0);
    v52->m_UpdateEvent.m_Event.m_DbgFlagIsInitialized = 1;
    v52->m_WorkItemEvent = 0LL;
    v52->m_WorkItemQueued = 0;
    v52->m_ProvidersListHead.Blink = &v52->m_ProvidersListHead;
    v52->m_ProvidersListHead.Flink = &v52->m_ProvidersListHead;
  }
  else
  {
LABEL_192:
    v52 = 0LL;
  }
  this->m_PkgWmi = v52;
  if ( !v52 )
    return -1073741670;
  v54 = _InterlockedIncrement(&v52->m_Refcnt);
  if ( SLOBYTE(v52->m_ObjectFlags) < 0 )
  {
    v105 = (FxTagTracker *)v52[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Blink;
    if ( v105 )
      FxTagTracker::UpdateTagHistory(v105, 0LL, 0, 0LL, TagAddRef, v54);
  }
  v55 = KeAcquireSpinLockRaiseToDpc(&v52->m_SpinLock.m_Lock);
  v56 = v52->m_ObjectState;
  v57 = v55;
  if ( v56 != 1 )
  {
    if ( (v52->m_ObjectFlags & 0x200) != 0 )
    {
      if ( v52->m_ObjectSize )
        v106 = (const void *)((unsigned __int64)v52 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v106 = 0LL;
      WPP_IFR_SF_qqLL(v52->m_Globals, 4u, 0x14u, 0xBu, WPP_FxObject_hpp_Traceguids, v52, v106, v56, 0);
    }
    goto LABEL_200;
  }
  if ( v52->m_ParentObject )
  {
LABEL_200:
    KeReleaseSpinLock(&v52->m_SpinLock.m_Lock, v57);
    goto LABEL_80;
  }
  v58 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  v59 = this->m_ObjectState;
  v60 = v58;
  if ( v59 == 1 )
  {
    v61 = this->m_ChildListHead.Blink;
    p_m_ChildEntry = &v52->m_ChildEntry;
    v52->m_ChildEntry.Flink = &this->m_ChildListHead;
    v52->m_ChildEntry.Blink = v61;
    if ( v61->Flink != &this->m_ChildListHead )
      __fastfail(3u);
    v61->Flink = p_m_ChildEntry;
    this->m_ChildListHead.Blink = p_m_ChildEntry;
    if ( !v52->m_DeviceBase )
      v52->m_DeviceBase = this->m_DeviceBase;
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v60);
    v52->m_ParentObject = this;
  }
  else
  {
    if ( (this->m_ObjectFlags & 0x200) != 0 )
    {
      if ( this->m_ObjectSize )
        v107 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v107 = 0LL;
      WPP_IFR_SF_qqLL(this->m_Globals, 4u, 0x14u, 0xBu, WPP_FxObject_hpp_Traceguids, this, v107, v59, 1u);
    }
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v60);
  }
  KeReleaseSpinLock(&v52->m_SpinLock.m_Lock, v57);
  p_FxPoolFrameworks = (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks;
LABEL_80:
  if ( m_Globals->FxVerifierHandle )
    v63 = 432LL;
  else
    v63 = 400LL;
  if ( m_Globals->FxPoolTrackingOn )
    v64 = retaddr;
  else
    v64 = 0LL;
  v65 = (FxPkgIo *)FxPoolAllocator(m_Globals, p_FxPoolFrameworks, ExDefaultNonPagedPoolType, v63, m_Globals->Tag, v64);
  v67 = v65;
  if ( !v65 )
    goto LABEL_218;
  if ( m_Globals->FxVerifierHandle )
  {
    memset(v65, 0, 0x20uLL);
    *(_DWORD *)(&v67->m_ObjectState + 1) = 1146058822;
    v67 = (FxPkgIo *)((char *)v67 + 32);
  }
  if ( v67 )
  {
    v67->m_Globals = m_Globals;
    v67->__vftable = (FxPkgIo_vtbl *)&FxObject::`vftable';
    *(_DWORD *)&v67->m_Type = 4352;
    v67->m_SpinLock.m_Lock = 0LL;
    v67->m_SpinLock.m_DbgFlagIsInitialized = 1;
    v67->m_Refcnt = 1;
    *(_DWORD *)&v67->m_ObjectFlags = 0x10000;
    v67->m_ParentObject = 0LL;
    v67->m_ChildListHead.Blink = &v67->m_ChildListHead;
    v67->m_ChildListHead.Flink = &v67->m_ChildListHead;
    v67->m_ChildEntry.Blink = &v67->m_ChildEntry;
    v67->m_ChildEntry.Flink = &v67->m_ChildEntry;
    v68 = v67->m_Globals;
    v67->m_DisposeSingleEntry.Next = 0LL;
    v67->m_DeviceBase = 0LL;
    if ( v68->FxVerifierOn )
      FxObject::Vf_VerifyConstruct(v67, v66, 0);
    v67->__vftable = (FxPkgIo_vtbl *)&FxNonPagedObject::`vftable';
    v67->m_NPLock.m_Lock = 0LL;
    v67->m_NPLock.m_DbgFlagIsInitialized = 1;
    if ( SLOBYTE(v67->m_ObjectFlags) < 0 )
    {
      v108 = v67->m_Globals;
      if ( v108->FxVerifierLock )
      {
        v109 = 0LL;
        v110 = (FxVerifierLock *)FxPoolAllocator(
                                   v108,
                                   (_LIST_ENTRY *)&v108->FxPoolFrameworks,
                                   ExDefaultNonPagedPoolType,
                                   0xB0uLL,
                                   v108->Tag,
                                   retaddr);
        if ( v110 && (FxVerifierLock::FxVerifierLock(v110, v108, v67), (v112 = v111) != 0LL) )
        {
          if ( BYTE2(v111[7].Blink) )
          {
            v111[3].Blink = 0LL;
            LODWORD(v111[3].Flink) = 1;
            LODWORD(v111[4].Flink) = 0;
            KeInitializeEvent((PRKEVENT)&v111[4].Blink, SynchronizationEvent, 0);
            LOBYTE(v112[2].Blink) = 1;
          }
          v109 = v112;
        }
        else
        {
          WPP_IFR_SF_d(v108, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_hpp_Traceguids, -1073741670);
        }
        v67[-1].m_DynamicDispatchInfoListHead.Flink = v109;
      }
    }
    v67->__vftable = (FxPkgIo_vtbl *)&FxPkgIo::`vftable';
    v67->m_InCallerContextCallback.m_Method = 0LL;
    v67->m_DeviceBase = this;
    v67->m_DefaultQueue = 0LL;
    memset(v67->m_DispatchTable, 0, sizeof(v67->m_DispatchTable));
    *(_WORD *)&v67->m_Filter = 0;
    v67->m_QueuesAreShuttingDown = 0;
    v67->m_IoQueueListHead.Blink = &v67->m_IoQueueListHead;
    v67->m_IoQueueListHead.Flink = &v67->m_IoQueueListHead;
    v67->m_DynamicDispatchInfoListHead.Blink = &v67->m_DynamicDispatchInfoListHead;
    v67->m_DynamicDispatchInfoListHead.Flink = &v67->m_DynamicDispatchInfoListHead;
    v67->m_RandomSeed = MEMORY[0xFFFFF78000000320];
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_q(
        m_Globals,
        5u,
        0xDu,
        0xAu,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
        v67);
  }
  else
  {
LABEL_218:
    v67 = 0LL;
  }
  this->m_PkgIo = v67;
  if ( !v67 )
    return -1073741670;
  v69 = _InterlockedIncrement(&v67->m_Refcnt);
  if ( SLOBYTE(v67->m_ObjectFlags) < 0 )
  {
    v113 = *(FxTagTracker **)&v67[-1].m_RandomSeed;
    if ( v113 )
      FxTagTracker::UpdateTagHistory(v113, 0LL, 0, 0LL, TagAddRef, v69);
  }
  v70 = KeAcquireSpinLockRaiseToDpc(&v67->m_SpinLock.m_Lock);
  v71 = v67->m_ObjectState;
  if ( v71 == 1 )
  {
    if ( !v67->m_ParentObject )
    {
      v72 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
      v73 = this->m_ObjectState;
      if ( v73 == 1 )
      {
        v74 = this->m_ChildListHead.Blink;
        v75 = &v67->m_ChildEntry;
        v67->m_ChildEntry.Flink = &this->m_ChildListHead;
        v67->m_ChildEntry.Blink = v74;
        if ( v74->Flink != &this->m_ChildListHead )
          __fastfail(3u);
        v74->Flink = v75;
        this->m_ChildListHead.Blink = v75;
        if ( !v67->m_DeviceBase )
          v67->m_DeviceBase = this->m_DeviceBase;
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v72);
        v67->m_ParentObject = this;
      }
      else
      {
        if ( (this->m_ObjectFlags & 0x200) != 0 )
        {
          if ( this->m_ObjectSize )
            v8 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          WPP_IFR_SF_qqLL(this->m_Globals, 4u, 0x14u, 0xBu, WPP_FxObject_hpp_Traceguids, this, v8, v73, 1u);
        }
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v72);
      }
    }
  }
  else if ( (v67->m_ObjectFlags & 0x200) != 0 )
  {
    if ( v67->m_ObjectSize )
      v114 = (const void *)((unsigned __int64)v67 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v114 = 0LL;
    WPP_IFR_SF_qqLL(v67->m_Globals, 4u, 0x14u, 0xBu, WPP_FxObject_hpp_Traceguids, v67, v114, v71, 0);
  }
  KeReleaseSpinLock(&v67->m_SpinLock.m_Lock, v70);
  this->m_PkgIo->m_InCallerContextCallback.m_Method = DeviceInit->IoInCallerContextCallback;
  if ( DeviceInit->RequiresSelfIoTarget )
    this->m_SelfIoTargetNeeded = 1;
  return 0;
}

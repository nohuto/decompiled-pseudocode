/*
 * XREFs of ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A48A8
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00A4810 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C001515C (-ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C001532C (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00154DC (-ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_I.c)
 *     ndisMBeginNormalMode @ 0x1C0020358 (ndisMBeginNormalMode.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C009CB04 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A2D98 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00A2EE4 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00A3B24 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00A3B60 (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A3C0C (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00A3D18 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A50E8 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C00A6C50 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?GetActualBindingState@BindState@Ndis@@QEAA?AW4BINDING_ENABLED_OR_DISABLED@@XZ @ 0x1C00A6DA8 (-GetActualBindingState@BindState@Ndis@@QEAA-AW4BINDING_ENABLED_OR_DISABLED@@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A6E6C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A6E94 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ??1NDIS_RESTART_INFORMATION@@QEAA@XZ @ 0x1C00A6F30 (--1NDIS_RESTART_INFORMATION@@QEAA@XZ.c)
 *     ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A7068 (-ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A9E94 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00AA6A0 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00AF4E4 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00EA1F0 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

char __fastcall Ndis::BindEngine::Iterate(Ndis::BindEngine *this)
{
  char v1; // di
  _NDIS_MINIPORT_BLOCK *m_miniport; // r14
  _NDIS_MINIPORT_BLOCK *v4; // rbx
  unsigned int v5; // r14d
  unsigned int m_numElements; // r15d
  NDIS_BIND_PROTOCOL_LINK *p; // rcx
  NDIS_BIND_LINK_BASE *v8; // rcx
  NDIS_BIND_LINK_BASE *m_currentOperation; // rax
  struct NDIS_BIND_PROTOCOL_LINK *p_Blink; // rdx
  __int64 v11; // rbx
  unsigned __int64 v12; // r14
  __int64 v13; // rdx
  Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK> > > *p_Protocols; // r15
  unsigned int v15; // r12d
  unsigned int v16; // eax
  KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK> > *v17; // r14
  NDIS_BIND_PROTOCOL_LINK *v18; // rcx
  __int64 v19; // rbx
  unsigned __int64 v20; // r14
  NDIS_BIND_FILTER_LINK *v21; // rdx
  unsigned __int64 v22; // rbx
  NDIS_BIND_FILTER_LINK *v23; // rdx
  __int64 v24; // rdx
  _NDIS_MINIPORT_BLOCK *v25; // rbx
  unsigned int v26; // r14d
  unsigned int v27; // r15d
  NDIS_BIND_PROTOCOL_LINK *v28; // rdx
  __int64 v29; // rdx
  NDIS_BIND_LINK_BASE *v30; // rdx
  NDIS_BIND_LINK_BASE *v31; // rax
  struct NDIS_BIND_PROTOCOL_LINK *v32; // rdx
  struct _NDIS_MINIPORT_BLOCK *v34; // rdx
  unsigned __int64 v35; // rbx
  __int64 v36; // rdx
  NDIS_BIND_LINK_BASE *v37; // rdx
  NDIS_BIND_LINK_BASE *v38; // rax
  struct NDIS_BIND_FILTER_LINK *v39; // rdx
  unsigned int v40; // r14d
  Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK> > > *v41; // rbx
  unsigned int v42; // r13d
  KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK> > *v43; // r12
  NDIS_BIND_PROTOCOL_LINK *v44; // rax
  NDIS_BIND_PROTOCOL_LINK *v45; // rax
  NDIS_BIND_LINK_BASE *v46; // rax
  NDIS_BIND_LINK_BASE *v47; // rax
  struct NDIS_BIND_PROTOCOL_LINK *v48; // rdx
  NDIS_BIND_LINK_BASE *v49; // rdx
  NDIS_BIND_LINK_BASE *v50; // rax
  struct NDIS_BIND_FILTER_LINK *v51; // rdx
  _NDIS_MINIPORT_BLOCK *v52; // r14
  unsigned int v53; // edx
  struct _NDIS_MINIPORT_BLOCK *v54; // rdx
  __int64 v55; // rdx
  NDIS_BIND_LINK_BASE *v56; // rdx
  NDIS_BIND_LINK_BASE *v57; // rax
  struct NDIS_BIND_FILTER_LINK *v58; // rdx
  NDIS_BIND_LINK_BASE *v59; // rdx
  NDIS_BIND_LINK_BASE *v60; // rax
  struct NDIS_BIND_FILTER_LINK *v61; // rdx
  NDIS_BIND_PROTOCOL_LINK *v62; // rax
  NDIS_BIND_LINK_BASE *v63; // rax
  NDIS_BIND_LINK_BASE *v64; // r14
  _LIST_ENTRY **v65; // r14
  _NDIS_MINIPORT_BLOCK *v66; // r13
  struct _NDIS_MINIPORT_BLOCK *v67; // rdx
  KLockHolder v68; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v69; // [rsp+40h] [rbp-C8h]
  _QWORD v70[20]; // [rsp+48h] [rbp-C0h] BYREF
  struct NDIS_RESTART_INFORMATION v71; // [rsp+E8h] [rbp-20h] BYREF

  v1 = 0;
  *(_QWORD *)&v71.FilterInstanceBuffer.m_bufferSize = 0LL;
  v71.FilterInstanceBuffer._p = 0LL;
  memset(&v71, 0, 104);
  memset(&v71.RssCaps, 0, sizeof(v71.RssCaps));
  memset(&v71.ProtocolParameters, 0, 60);
  v68.m_State = Unlocked;
  v68.m_Region.m_Entered = 0;
  v68.m_Lock = &this->m_lock;
  KLockHolder::AcquireExclusive(&v68);
  this->m_isDirty = 0;
  KLockHolder::ReleaseExclusive(&v68);
  m_miniport = this->m_miniport;
  if ( this->m_miniport->InitMode && m_miniport->InitModeNotNeededAnymore )
  {
    ndisMBeginNormalMode((__int64)this->m_miniport);
    Ndis::BindEngine::BeginPolicyUpdates(&m_miniport->BindEngine);
    m_miniport->BindEngine.m_isDirty = 1;
    Ndis::BindEngine::EndPolicyUpdates(&m_miniport->BindEngine, v34);
  }
  KLockHolder::AcquireExclusive(&v68);
  this->m_currentOperation = 0LL;
  Ndis::BindEngine::ApplyRules(this);
  if ( this->m_isDirty )
    goto LABEL_52;
  v4 = this->m_miniport;
  v5 = 0;
  m_numElements = this->m_miniport->Bindings.Protocols.m_numElements;
  while ( v5 != m_numElements )
  {
    if ( v5 >= (unsigned __int64)v4->Bindings.Protocols.m_numElements )
      __fastfail(0xBAD0FFu);
    p = v4->Bindings.Protocols._p[v5]._p;
    if ( (p->BindState.PretendBindingActive || p->BindState.m_bindContext.m_numElements)
      && p->BindState.m_pauseReasons
      && p->BindState.m_actualPauseState == DatapathRunning )
    {
      v8 = p ? &p->NDIS_BIND_LINK_BASE : 0LL;
      this->m_currentOperation = v8;
      KLockHolder::ReleaseExclusive(&v68);
      m_currentOperation = this->m_currentOperation;
      p_Blink = (struct NDIS_BIND_PROTOCOL_LINK *)&m_currentOperation[-1].DriverLinkage.Blink;
      if ( !m_currentOperation )
        p_Blink = 0LL;
      ndisPauseProtocol(this->m_miniport, p_Blink);
      KLockHolder::AcquireExclusive(&v68);
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
        goto LABEL_52;
    }
    ++v5;
  }
  v11 = this->m_miniport->Bindings.Filters.m_numElements;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    v12 = v11 - 1;
    do
    {
      if ( v12 >= this->m_miniport->Bindings.Filters.m_numElements )
        __fastfail(0xBAD0FFu);
      if ( Ndis::BindState::GetActualBindingState(&this->m_miniport->Bindings.Filters._p[v12]._p->BindState) == BindingEnabled
        && *(_DWORD *)(v13 + 52)
        && *(_DWORD *)(v13 + 56) == 1 )
      {
        if ( v13 )
          v49 = (NDIS_BIND_LINK_BASE *)(v13 + 8);
        else
          v49 = 0LL;
        this->m_currentOperation = v49;
        KLockHolder::ReleaseExclusive(&v68);
        v50 = this->m_currentOperation;
        v51 = (struct NDIS_BIND_FILTER_LINK *)&v50[-1].DriverLinkage.Blink;
        if ( !v50 )
          v51 = 0LL;
        ndisPauseFilter(this->m_miniport, v51);
        KLockHolder::AcquireExclusive(&v68);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_52;
      }
      --v12;
    }
    while ( --v11 );
  }
  if ( this->m_miniport->Bindings.Miniport.m_pauseReasons
    && this->m_miniport->Bindings.Miniport.m_actualPauseState == DatapathRunning )
  {
    KLockHolder::ReleaseExclusive(&v68);
    v52 = this->m_miniport;
    if ( (unsigned __int8)byte_1C00895E3 >= 4u )
      WPP_SF_q(0xDu, &WPP_5f947da720a33807970d71b303d9e9f1_Traceguids, (__int64)this->m_miniport);
    ndisReferencePackage((__int64)&ndisPkgs);
    ndisMPauseMiniportInner(v52, v53);
    ndisDereferencePackage((__int64)&ndisPkgs);
    if ( (unsigned __int8)byte_1C00895E3 >= 4u )
      WPP_SF_q(0xEu, &WPP_5f947da720a33807970d71b303d9e9f1_Traceguids, (__int64)v52);
    Ndis::BindEngine::BeginPolicyUpdates(&v52->BindEngine);
    v52->Bindings.Miniport.m_actualPauseState = DatapathPaused;
    Ndis::BindEngine::EndPolicyUpdates(&v52->BindEngine, v54);
    KLockHolder::AcquireExclusive(&v68);
    this->m_currentOperation = 0LL;
    Ndis::BindEngine::ApplyRules(this);
    if ( this->m_isDirty )
      goto LABEL_52;
  }
  p_Protocols = &this->m_miniport->Bindings.Protocols;
  v15 = 0;
  v16 = this->m_miniport->Bindings.Protocols.m_numElements;
  LODWORD(v69) = v16;
  while ( v15 != v16 )
  {
    if ( v15 >= (unsigned __int64)p_Protocols->m_numElements )
      __fastfail(0xBAD0FFu);
    v17 = p_Protocols->_p;
    v18 = v17[v15]._p;
    if ( v18->BindState.m_unbindReasons
      && (v18->BindState.PretendBindingActive || v18->BindState.m_bindContext.m_numElements) )
    {
      if ( Ndis::BindState::SetSource(&v18->BindState, RemoveBindSource, UnsolicitedOpen)
        && (unsigned __int8)byte_1C00895E3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(v17[v15]._p, (struct NDIS_PNPTRACE_LOCALS *)v70);
        WPP_SF_Zq(0xAu, &WPP_82907a19a1d83e578faafd94ea8256cd_Traceguids, (unsigned __int16 *)v70[1], v70[0]);
      }
      v62 = v17[v15]._p;
      if ( v62 )
        v63 = &v62->NDIS_BIND_LINK_BASE;
      else
        v63 = 0LL;
      this->m_currentOperation = v63;
      KLockHolder::ReleaseExclusive(&v68);
      v64 = this->m_currentOperation;
      if ( v64 )
        v65 = &v64[-1].DriverLinkage.Blink;
      else
        v65 = 0LL;
      v66 = this->m_miniport;
      if ( LOBYTE(v65[13][3].Blink[3].Blink) < 6u )
      {
        Ndis::BindEngine::BeginPolicyUpdates(&v66->BindEngine);
        *((_DWORD *)v65 + 14) = 0;
        Ndis::BindEngine::EndPolicyUpdates(&v66->BindEngine, v67);
      }
      *((_BYTE *)v65 + 25) = 0;
      ndisUnbindEachProtocolOpenOnMiniport(v66, (struct NDIS_BIND_PROTOCOL_LINK *)v65);
      KLockHolder::AcquireExclusive(&v68);
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
        goto LABEL_52;
    }
    v16 = v69;
    ++v15;
  }
  v19 = this->m_miniport->Bindings.Filters.m_numElements;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    v20 = v19 - 1;
    do
    {
      if ( v20 >= this->m_miniport->Bindings.Filters.m_numElements )
        __fastfail(0xBAD0FFu);
      v21 = this->m_miniport->Bindings.Filters._p[v20]._p;
      if ( v21->BindState.m_unbindReasons && Ndis::BindState::GetActualBindingState(&v21->BindState) == BindingEnabled )
      {
        if ( v55 )
          v56 = (NDIS_BIND_LINK_BASE *)(v55 + 8);
        else
          v56 = 0LL;
        this->m_currentOperation = v56;
        KLockHolder::ReleaseExclusive(&v68);
        v57 = this->m_currentOperation;
        v58 = (struct NDIS_BIND_FILTER_LINK *)&v57[-1].DriverLinkage.Blink;
        if ( !v57 )
          v58 = 0LL;
        ndisDetachFilter(this->m_miniport, v58);
        KLockHolder::AcquireExclusive(&v68);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_52;
      }
      --v20;
    }
    while ( --v19 );
  }
  v22 = 0LL;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    do
    {
      if ( v22 >= this->m_miniport->Bindings.Filters.m_numElements )
        __fastfail(0xBAD0FFu);
      v23 = this->m_miniport->Bindings.Filters._p[v22]._p;
      if ( !v23->BindState.m_unbindReasons && Ndis::BindState::GetActualBindingState(&v23->BindState) == BindingDisabled )
      {
        if ( v24 )
          v59 = (NDIS_BIND_LINK_BASE *)(v24 + 8);
        else
          v59 = 0LL;
        this->m_currentOperation = v59;
        KLockHolder::ReleaseExclusive(&v68);
        v60 = this->m_currentOperation;
        v61 = (struct NDIS_BIND_FILTER_LINK *)&v60[-1].DriverLinkage.Blink;
        if ( !v60 )
          v61 = 0LL;
        ndisAttachFilter(this->m_miniport, v61);
        KLockHolder::AcquireExclusive(&v68);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_52;
      }
    }
    while ( ++v22 < this->m_miniport->Bindings.Filters.m_numElements );
  }
  v25 = this->m_miniport;
  v26 = 0;
  v27 = this->m_miniport->Bindings.Protocols.m_numElements;
  while ( v26 != v27 )
  {
    if ( v26 >= (unsigned __int64)v25->Bindings.Protocols.m_numElements )
      __fastfail(0xBAD0FFu);
    v28 = v25->Bindings.Protocols._p[v26]._p;
    if ( !v28->BindState.m_unbindReasons && Ndis::BindState::GetActualBindingState(&v28->BindState) == BindingDisabled )
    {
      if ( v29 )
        v30 = (NDIS_BIND_LINK_BASE *)(v29 + 8);
      else
        v30 = 0LL;
      this->m_currentOperation = v30;
      KLockHolder::ReleaseExclusive(&v68);
      v31 = this->m_currentOperation;
      v32 = (struct NDIS_BIND_PROTOCOL_LINK *)&v31[-1].DriverLinkage.Blink;
      if ( !v31 )
        v32 = 0LL;
      ndisBindProtocol(this->m_miniport, v32);
      KLockHolder::AcquireExclusive(&v68);
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
        goto LABEL_52;
    }
    ++v26;
  }
  ndisMRecalculateMiniportStackAfterBinding(this->m_miniport);
  if ( !this->m_miniport->Bindings.Miniport.m_pauseReasons
    && this->m_miniport->Bindings.Miniport.m_actualPauseState == DatapathPaused )
  {
    KLockHolder::ReleaseExclusive(&v68);
    ndisMRestartMiniport(this->m_miniport, &v71);
    KLockHolder::AcquireExclusive(&v68);
    this->m_currentOperation = 0LL;
    Ndis::BindEngine::ApplyRules(this);
    if ( this->m_isDirty )
    {
LABEL_52:
      v1 = 1;
      goto LABEL_53;
    }
  }
  ndisPostProcessRestartParametersAfterMiniport(this->m_miniport, &v71);
  v35 = 0LL;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    do
    {
      if ( v35 >= this->m_miniport->Bindings.Filters.m_numElements )
        __fastfail(0xBAD0FFu);
      if ( Ndis::BindState::GetActualBindingState(&this->m_miniport->Bindings.Filters._p[v35]._p->BindState) == BindingEnabled
        && !*(_DWORD *)(v36 + 52)
        && !*(_DWORD *)(v36 + 56) )
      {
        if ( v36 )
          v37 = (NDIS_BIND_LINK_BASE *)(v36 + 8);
        else
          v37 = 0LL;
        this->m_currentOperation = v37;
        KLockHolder::ReleaseExclusive(&v68);
        v38 = this->m_currentOperation;
        v39 = (struct NDIS_BIND_FILTER_LINK *)&v38[-1].DriverLinkage.Blink;
        if ( !v38 )
          v39 = 0LL;
        ndisRestartFilter(this->m_miniport, v39, &v71);
        KLockHolder::AcquireExclusive(&v68);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_52;
      }
    }
    while ( ++v35 < this->m_miniport->Bindings.Filters.m_numElements );
  }
  ndisPostProcessRestartParametersAfterFilters(this->m_miniport, &v71);
  v40 = 0;
  v41 = &this->m_miniport->Bindings.Protocols;
  v42 = this->m_miniport->Bindings.Protocols.m_numElements;
  while ( v40 != v42 )
  {
    if ( v40 >= (unsigned __int64)v41->m_numElements )
      __fastfail(0xBAD0FFu);
    v43 = v41->_p;
    v44 = v43[v40]._p;
    if ( (v44->BindState.PretendBindingActive || v44->BindState.m_bindContext.m_numElements)
      && !v44->BindState.m_pauseReasons
      && v44->BindState.m_actualPauseState == DatapathPaused )
    {
      if ( v44 )
        v46 = &v44->NDIS_BIND_LINK_BASE;
      else
        v46 = 0LL;
      this->m_currentOperation = v46;
      KLockHolder::ReleaseExclusive(&v68);
      v47 = this->m_currentOperation;
      v48 = (struct NDIS_BIND_PROTOCOL_LINK *)&v47[-1].DriverLinkage.Blink;
      if ( !v47 )
        v48 = 0LL;
      ndisRestartProtocol(this->m_miniport, v48, &v71);
      KLockHolder::AcquireExclusive(&v68);
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
        goto LABEL_52;
    }
    v45 = v43[v40++]._p;
    v45->BindState.m_AdditionalContext = 0LL;
  }
  ndisPostProcessRestartParametersAfterProtocols(this->m_miniport, &v71);
  ndisMRecalculateMiniportStackAfterBinding(this->m_miniport);
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)&this->m_miniport->MiniportOwner);
  KLockHolder::ReleaseExclusive(&v68);
LABEL_53:
  KLockHolder::~KLockHolder(&v68);
  NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(&v71);
  return v1;
}

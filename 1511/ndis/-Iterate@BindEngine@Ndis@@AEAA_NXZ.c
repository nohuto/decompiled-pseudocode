/*
 * XREFs of ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A2C8C
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00A2B8C (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C001E29C (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C001E448 (-ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_I.c)
 *     ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C001E500 (-ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ndisMBeginNormalMode @ 0x1C0024D90 (ndisMBeginNormalMode.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_dd @ 0x1C0040948 (WPP_SF_dd_ea_1C0040948.c)
 *     WPP_SF_Zq @ 0x1C004A150 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C0058B6C (WPP_SF_DZq.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00983AC (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C009913C (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00994E4 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C009EB00 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00A0368 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A1020 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A21D8 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A24 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A70 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A3474 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A4E98 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?GetActualBindingState@BindState@Ndis@@QEAA?AW4BINDING_ENABLED_OR_DISABLED@@XZ @ 0x1C00A4F20 (-GetActualBindingState@BindState@Ndis@@QEAA-AW4BINDING_ENABLED_OR_DISABLED@@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A52D4 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A52FC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??1NDIS_RESTART_INFORMATION@@QEAA@XZ @ 0x1C00A5398 (--1NDIS_RESTART_INFORMATION@@QEAA@XZ.c)
 *     ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A53EC (-ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00A6AD0 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00A7678 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00D7610 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00DD07C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00E0E20 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
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
  NDIS_BIND_FILTER_LINK *v13; // rcx
  Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK> > > *p_Protocols; // r13
  unsigned int v15; // r12d
  unsigned int v16; // eax
  KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK> > *v17; // r15
  NDIS_BIND_PROTOCOL_LINK *v18; // rbx
  Ndis::BindState *p_BindState; // rbx
  NDIS_BIND_LINK_BASE *v20; // rcx
  NDIS_BIND_LINK_BASE *v21; // rax
  struct NDIS_BIND_FILTER_LINK *v22; // rdx
  __int64 v23; // rbx
  unsigned __int64 v24; // r14
  NDIS_BIND_FILTER_LINK *v25; // rcx
  unsigned __int64 v26; // rbx
  NDIS_BIND_FILTER_LINK *v27; // rdx
  _NDIS_MINIPORT_BLOCK *v28; // rbx
  unsigned int v29; // r14d
  unsigned int v30; // r15d
  NDIS_BIND_PROTOCOL_LINK *v31; // rdx
  __int64 v32; // rdx
  NDIS_BIND_LINK_BASE *v33; // rdx
  NDIS_BIND_LINK_BASE *v34; // rax
  struct NDIS_BIND_FILTER_LINK *v35; // rdx
  __int64 v36; // rdx
  NDIS_BIND_LINK_BASE *v37; // rdx
  NDIS_BIND_LINK_BASE *v38; // rax
  struct NDIS_BIND_PROTOCOL_LINK *v39; // rdx
  unsigned __int64 v41; // rbx
  __int64 v42; // rdx
  unsigned int v43; // r14d
  Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK> > > *v44; // rbx
  unsigned int v45; // r13d
  KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK> > *v46; // r12
  NDIS_BIND_PROTOCOL_LINK *v47; // rax
  NDIS_BIND_PROTOCOL_LINK *v48; // rax
  NDIS_BIND_LINK_BASE *v49; // rdx
  NDIS_BIND_LINK_BASE *v50; // rax
  struct NDIS_BIND_FILTER_LINK *v51; // rdx
  NDIS_BIND_LINK_BASE *v52; // rax
  NDIS_BIND_LINK_BASE *v53; // rax
  struct NDIS_BIND_PROTOCOL_LINK *v54; // rdx
  _NDIS_MINIPORT_BLOCK *v55; // r14
  unsigned int v56; // edx
  struct _NDIS_MINIPORT_BLOCK *v57; // rdx
  struct _NDIS_MINIPORT_BLOCK *v58; // rdx
  int m_bindSources; // r8d
  char v60; // al
  NDIS_BIND_PROTOCOL_LINK *v61; // rax
  NDIS_BIND_LINK_BASE *v62; // rax
  NDIS_BIND_LINK_BASE *v63; // r14
  _LIST_ENTRY **v64; // r14
  _NDIS_MINIPORT_BLOCK *v65; // r15
  unsigned __int16 v66; // cx
  struct _NDIS_MINIPORT_BLOCK *v67; // rdx
  NDIS_BIND_LINK_BASE *v68; // rcx
  NDIS_BIND_LINK_BASE *v69; // rax
  struct NDIS_BIND_FILTER_LINK *v70; // rdx
  KLockHolder v71; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v72; // [rsp+50h] [rbp-B8h]
  _QWORD v73[20]; // [rsp+58h] [rbp-B0h] BYREF
  struct NDIS_RESTART_INFORMATION v74; // [rsp+F8h] [rbp-10h] BYREF

  v1 = 0;
  *(_QWORD *)&v74.FilterInstanceBuffer.m_bufferSize = 0LL;
  v74.FilterInstanceBuffer._p = 0LL;
  memset(&v74, 0, 104);
  memset(&v74.RssCaps, 0, sizeof(v74.RssCaps));
  memset(&v74.ProtocolParameters, 0, 60);
  v71.m_State = Unlocked;
  v71.m_Region.m_Entered = 0;
  v71.m_Lock = &this->m_lock;
  KLockHolder::AcquireExclusive(&v71);
  this->m_isDirty = 0;
  KLockHolder::ReleaseExclusive(&v71);
  m_miniport = this->m_miniport;
  if ( this->m_miniport->InitMode && m_miniport->InitModeNotNeededAnymore )
  {
    ndisMBeginNormalMode((__int64)this->m_miniport);
    Ndis::BindEngine::BeginPolicyUpdates(&m_miniport->BindEngine);
    m_miniport->BindEngine.m_isDirty = 1;
    Ndis::BindEngine::EndPolicyUpdates(&m_miniport->BindEngine, v58);
  }
  KLockHolder::AcquireExclusive(&v71);
  this->m_currentOperation = 0LL;
  Ndis::BindEngine::ApplyRules(this);
  if ( this->m_isDirty )
    goto LABEL_70;
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
      KLockHolder::ReleaseExclusive(&v71);
      m_currentOperation = this->m_currentOperation;
      p_Blink = (struct NDIS_BIND_PROTOCOL_LINK *)&m_currentOperation[-1].DriverLinkage.Blink;
      if ( !m_currentOperation )
        p_Blink = 0LL;
      ndisPauseProtocol(this->m_miniport, p_Blink);
      KLockHolder::AcquireExclusive(&v71);
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
        goto LABEL_70;
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
      v13 = this->m_miniport->Bindings.Filters._p[v12]._p;
      if ( (v13->BindState.PretendBindingActive || v13->BindState.m_bindContext.m_numElements)
        && v13->BindState.m_pauseReasons
        && v13->BindState.m_actualPauseState == DatapathRunning )
      {
        if ( v13 )
          v20 = &v13->NDIS_BIND_LINK_BASE;
        else
          v20 = 0LL;
        this->m_currentOperation = v20;
        KLockHolder::ReleaseExclusive(&v71);
        v21 = this->m_currentOperation;
        v22 = (struct NDIS_BIND_FILTER_LINK *)&v21[-1].DriverLinkage.Blink;
        if ( !v21 )
          v22 = 0LL;
        ndisPauseFilter(this->m_miniport, v22);
        KLockHolder::AcquireExclusive(&v71);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_70;
      }
      --v12;
      --v11;
    }
    while ( v11 );
  }
  if ( this->m_miniport->Bindings.Miniport.m_pauseReasons
    && this->m_miniport->Bindings.Miniport.m_actualPauseState == DatapathRunning )
  {
    KLockHolder::ReleaseExclusive(&v71);
    v55 = this->m_miniport;
    if ( (unsigned __int8)byte_1C0083723 >= 4u )
      WPP_SF_q(0xDu, &WPP_0f031f2086e21aadff9092658e664f02_Traceguids, (__int64)this->m_miniport);
    ndisReferencePackage((__int64)&ndisPkgs);
    ndisMPauseMiniportInner(v55, v56);
    ndisDereferencePackage((__int64)&ndisPkgs);
    if ( (unsigned __int8)byte_1C0083723 >= 4u )
      WPP_SF_q(0xEu, &WPP_0f031f2086e21aadff9092658e664f02_Traceguids, (__int64)v55);
    Ndis::BindEngine::BeginPolicyUpdates(&v55->BindEngine);
    v55->Bindings.Miniport.m_actualPauseState = DatapathPaused;
    Ndis::BindEngine::EndPolicyUpdates(&v55->BindEngine, v57);
    KLockHolder::AcquireExclusive(&v71);
    this->m_currentOperation = 0LL;
    Ndis::BindEngine::ApplyRules(this);
    if ( this->m_isDirty )
      goto LABEL_70;
  }
  p_Protocols = &this->m_miniport->Bindings.Protocols;
  v15 = 0;
  v16 = this->m_miniport->Bindings.Protocols.m_numElements;
  LODWORD(v72) = v16;
  while ( v15 != v16 )
  {
    if ( v15 >= (unsigned __int64)p_Protocols->m_numElements )
      __fastfail(0xBAD0FFu);
    v17 = p_Protocols->_p;
    v18 = v17[v15]._p;
    if ( !v18->BindState.m_unbindReasons )
      goto LABEL_32;
    p_BindState = &v18->BindState;
    if ( !p_BindState->PretendBindingActive && !p_BindState->m_bindContext.m_numElements )
      goto LABEL_32;
    m_bindSources = p_BindState->m_bindSources;
    p_BindState->m_bindSources = m_bindSources & 0xFFFFFFFB;
    if ( (m_bindSources != 0) != ((m_bindSources & 0xFFFFFFFB) != 0) )
    {
      if ( (unsigned __int8)byte_1C0083723 >= 5u )
        WPP_SF_dd(0xAu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, m_bindSources, m_bindSources & 0xFFFFFFFB);
      if ( p_BindState->m_bindSources )
      {
        if ( Ndis::BindState::SetBinding(p_BindState, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
          && (unsigned __int8)byte_1C0083723 >= 4u )
        {
          WPP_SF_DZq(0xBu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, p_BindState->m_bindSources, 0LL, 0LL);
        }
        if ( Ndis::BindState::SetBinding(
               p_BindState,
               BindingEnabled,
               Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
          && (unsigned __int8)byte_1C0083723 >= 4u )
        {
          v66 = 12;
          goto LABEL_138;
        }
      }
      else if ( Ndis::BindState::SetBinding(p_BindState, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
             && (unsigned __int8)byte_1C0083723 >= 4u )
      {
        v66 = 13;
LABEL_138:
        WPP_SF_Zq(v66, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, 0LL, 0LL);
      }
      p_BindState->Miniport->BindEngine.m_isDirty = 1;
      v60 = 1;
      goto LABEL_111;
    }
    v60 = 0;
LABEL_111:
    if ( v60 && (unsigned __int8)byte_1C0083723 >= 4u )
    {
      ndisGetBindLinkNameForTracing(v17[v15]._p, (struct NDIS_PNPTRACE_LOCALS *)v73);
      WPP_SF_Zq(0xAu, &WPP_ffdb515eb985fd4c5ab7dae4fdeb639d_Traceguids, (__int64 *)v73[1], v73[0]);
    }
    v61 = v17[v15]._p;
    if ( v61 )
      v62 = &v61->NDIS_BIND_LINK_BASE;
    else
      v62 = 0LL;
    this->m_currentOperation = v62;
    KLockHolder::ReleaseExclusive(&v71);
    v63 = this->m_currentOperation;
    if ( v63 )
      v64 = &v63[-1].DriverLinkage.Blink;
    else
      v64 = 0LL;
    v65 = this->m_miniport;
    if ( LOBYTE(v64[13][3].Blink[3].Blink) < 6u )
    {
      Ndis::BindEngine::BeginPolicyUpdates(&v65->BindEngine);
      *((_DWORD *)v64 + 14) = 0;
      Ndis::BindEngine::EndPolicyUpdates(&v65->BindEngine, v67);
    }
    *((_BYTE *)v64 + 25) = 0;
    ndisUnbindEachProtocolOpenOnMiniport(v65, (struct NDIS_BIND_PROTOCOL_LINK *)v64);
    KLockHolder::AcquireExclusive(&v71);
    this->m_currentOperation = 0LL;
    Ndis::BindEngine::ApplyRules(this);
    if ( this->m_isDirty )
      goto LABEL_70;
LABEL_32:
    v16 = v72;
    ++v15;
  }
  v23 = this->m_miniport->Bindings.Filters.m_numElements;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    v24 = v23 - 1;
    while ( 1 )
    {
      if ( v24 >= this->m_miniport->Bindings.Filters.m_numElements )
        __fastfail(0xBAD0FFu);
      v25 = this->m_miniport->Bindings.Filters._p[v24]._p;
      if ( v25->BindState.m_unbindReasons
        && (v25->BindState.PretendBindingActive || v25->BindState.m_bindContext.m_numElements) )
      {
        if ( v25 )
          v68 = &v25->NDIS_BIND_LINK_BASE;
        else
          v68 = 0LL;
        this->m_currentOperation = v68;
        KLockHolder::ReleaseExclusive(&v71);
        v69 = this->m_currentOperation;
        v70 = (struct NDIS_BIND_FILTER_LINK *)&v69[-1].DriverLinkage.Blink;
        if ( !v69 )
          v70 = 0LL;
        ndisDetachFilter(this->m_miniport, v70);
        KLockHolder::AcquireExclusive(&v71);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          break;
      }
      --v24;
      if ( !--v23 )
        goto LABEL_48;
    }
LABEL_70:
    v1 = 1;
  }
  else
  {
LABEL_48:
    v26 = 0LL;
    if ( this->m_miniport->Bindings.Filters.m_numElements )
    {
      do
      {
        if ( v26 >= this->m_miniport->Bindings.Filters.m_numElements )
          __fastfail(0xBAD0FFu);
        v27 = this->m_miniport->Bindings.Filters._p[v26]._p;
        if ( !v27->BindState.m_unbindReasons
          && Ndis::BindState::GetActualBindingState(&v27->BindState) == BindingDisabled )
        {
          if ( v32 )
            v33 = (NDIS_BIND_LINK_BASE *)(v32 + 8);
          else
            v33 = 0LL;
          this->m_currentOperation = v33;
          KLockHolder::ReleaseExclusive(&v71);
          v34 = this->m_currentOperation;
          v35 = (struct NDIS_BIND_FILTER_LINK *)&v34[-1].DriverLinkage.Blink;
          if ( !v34 )
            v35 = 0LL;
          ndisAttachFilter(this->m_miniport, v35);
          KLockHolder::AcquireExclusive(&v71);
          this->m_currentOperation = 0LL;
          Ndis::BindEngine::ApplyRules(this);
          if ( this->m_isDirty )
            goto LABEL_70;
        }
      }
      while ( ++v26 < this->m_miniport->Bindings.Filters.m_numElements );
    }
    v28 = this->m_miniport;
    v29 = 0;
    v30 = this->m_miniport->Bindings.Protocols.m_numElements;
    while ( v29 != v30 )
    {
      if ( v29 >= (unsigned __int64)v28->Bindings.Protocols.m_numElements )
        __fastfail(0xBAD0FFu);
      v31 = v28->Bindings.Protocols._p[v29]._p;
      if ( !v31->BindState.m_unbindReasons && Ndis::BindState::GetActualBindingState(&v31->BindState) == BindingDisabled )
      {
        if ( v36 )
          v37 = (NDIS_BIND_LINK_BASE *)(v36 + 8);
        else
          v37 = 0LL;
        this->m_currentOperation = v37;
        KLockHolder::ReleaseExclusive(&v71);
        v38 = this->m_currentOperation;
        v39 = (struct NDIS_BIND_PROTOCOL_LINK *)&v38[-1].DriverLinkage.Blink;
        if ( !v38 )
          v39 = 0LL;
        ndisBindProtocol(this->m_miniport, v39);
        KLockHolder::AcquireExclusive(&v71);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_70;
      }
      ++v29;
    }
    ndisMRecalculateMiniportStackAfterBinding(this->m_miniport);
    if ( !this->m_miniport->Bindings.Miniport.m_pauseReasons
      && this->m_miniport->Bindings.Miniport.m_actualPauseState == DatapathPaused )
    {
      KLockHolder::ReleaseExclusive(&v71);
      ndisMRestartMiniport(this->m_miniport, &v74);
      KLockHolder::AcquireExclusive(&v71);
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
        goto LABEL_70;
    }
    ndisPostProcessRestartParametersAfterMiniport(this->m_miniport, &v74);
    v41 = 0LL;
    if ( this->m_miniport->Bindings.Filters.m_numElements )
    {
      do
      {
        if ( v41 >= this->m_miniport->Bindings.Filters.m_numElements )
          __fastfail(0xBAD0FFu);
        if ( Ndis::BindState::GetActualBindingState(&this->m_miniport->Bindings.Filters._p[v41]._p->BindState) == BindingEnabled
          && !*(_DWORD *)(v42 + 52)
          && !*(_DWORD *)(v42 + 56) )
        {
          if ( v42 )
            v49 = (NDIS_BIND_LINK_BASE *)(v42 + 8);
          else
            v49 = 0LL;
          this->m_currentOperation = v49;
          KLockHolder::ReleaseExclusive(&v71);
          v50 = this->m_currentOperation;
          v51 = (struct NDIS_BIND_FILTER_LINK *)&v50[-1].DriverLinkage.Blink;
          if ( !v50 )
            v51 = 0LL;
          ndisRestartFilter(this->m_miniport, v51, &v74);
          KLockHolder::AcquireExclusive(&v71);
          this->m_currentOperation = 0LL;
          Ndis::BindEngine::ApplyRules(this);
          if ( this->m_isDirty )
            goto LABEL_70;
        }
      }
      while ( ++v41 < this->m_miniport->Bindings.Filters.m_numElements );
    }
    ndisPostProcessRestartParametersAfterFilters(this->m_miniport, &v74);
    v43 = 0;
    v44 = &this->m_miniport->Bindings.Protocols;
    v45 = this->m_miniport->Bindings.Protocols.m_numElements;
    while ( v43 != v45 )
    {
      if ( v43 >= (unsigned __int64)v44->m_numElements )
        __fastfail(0xBAD0FFu);
      v46 = v44->_p;
      v47 = v46[v43]._p;
      if ( (v47->BindState.PretendBindingActive || v47->BindState.m_bindContext.m_numElements)
        && !v47->BindState.m_pauseReasons
        && v47->BindState.m_actualPauseState == DatapathPaused )
      {
        if ( v47 )
          v52 = &v47->NDIS_BIND_LINK_BASE;
        else
          v52 = 0LL;
        this->m_currentOperation = v52;
        KLockHolder::ReleaseExclusive(&v71);
        v53 = this->m_currentOperation;
        v54 = (struct NDIS_BIND_PROTOCOL_LINK *)&v53[-1].DriverLinkage.Blink;
        if ( !v53 )
          v54 = 0LL;
        ndisRestartProtocol(this->m_miniport, v54, &v74);
        KLockHolder::AcquireExclusive(&v71);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_70;
      }
      v48 = v46[v43++]._p;
      v48->BindState.m_AdditionalContext = 0LL;
    }
    ndisPostProcessRestartParametersAfterProtocols(this->m_miniport, &v74);
    ndisMRecalculateMiniportStackAfterBinding(this->m_miniport);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(&this->m_miniport->MiniportOwner);
    KLockHolder::ReleaseExclusive(&v71);
  }
  KLockHolder::~KLockHolder(&v71);
  NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(&v74);
  return v1;
}

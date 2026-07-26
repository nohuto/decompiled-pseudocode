/*
 * XREFs of ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A222C
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A2190 (-UpdateBindings@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0019268 (-ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019438 (-ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00194B8 (-ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_I.c)
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C001956C (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ndisMBeginNormalMode @ 0x1C001FFD8 (ndisMBeginNormalMode.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C0058E7C (WPP_SF_DZq.c)
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C0097790 (ndisDereferencePackage.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C009C000 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A04E4 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00A13F4 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A1520 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C00A1638 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A177C (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A1C64 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A213C (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A2FD4 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00A35E8 (-PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A382C (-UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1C00A3AC4 (-MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z.c)
 *     ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A3CE0 (-UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A3E38 (-UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00A40C0 (-CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A4244 (-CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A4708 (-UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A4904 (-CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A49D0 (-CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A4BE8 (-ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A4D68 (-ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ndisUpdateNoPauseOnSuspend @ 0x1C00A4E98 (ndisUpdateNoPauseOnSuspend.c)
 *     ndisUpdateMinimumStackVersion @ 0x1C00A4F1C (ndisUpdateMinimumStackVersion.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00A65A4 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A6BE4 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A6C0C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ReleaseShared@KLockHolder@@QEAAXXZ @ 0x1C00A6C38 (-ReleaseShared@KLockHolder@@QEAAXXZ.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00AEB60 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00B047C (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00DDCC0 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2E2C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F48 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00EB7AC (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

char __fastcall Ndis::BindEngine::Iterate(Ndis::BindEngine *this)
{
  unsigned int v1; // r13d
  _NDIS_MINIPORT_BLOCK *m_miniport; // rbx
  char v4; // di
  KLockHolder::<unnamed_type_m_State> m_State; // r12d
  char v6; // al
  _NDIS_MINIPORT_BLOCK *v7; // r15
  struct Ndis::BindStack *v8; // rdx
  struct _NDIS_MINIPORT_BLOCK *v9; // rdx
  struct Ndis::BindStack *v10; // rdx
  struct Ndis::BindStack *v11; // rdx
  struct _NDIS_MINIPORT_BLOCK *v12; // rdx
  unsigned int m_numElements; // eax
  unsigned __int64 v14; // rdx
  KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK> > *p; // r15
  NDIS_BIND_FILTER_LINK *v16; // rbx
  struct _NDIS_MINIPORT_BLOCK *v17; // rbx
  struct Ndis::BindStack *v18; // r8
  struct Ndis::BindStack *v19; // rdx
  struct Ndis::BindStack *v20; // rdx
  struct Ndis::BindStack *v21; // rdx
  bool v22; // r8
  struct Ndis::BindStack *v23; // rdx
  struct Ndis::BindStack *v24; // r8
  int v25; // eax
  BOOL v26; // r15d
  __int64 v27; // r13
  _NDIS_MINIPORT_BLOCK *v28; // r10
  __int64 v29; // rbx
  int v30; // r8d
  unsigned int v31; // eax
  int v32; // r9d
  char v33; // al
  int v34; // eax
  __int64 v35; // r14
  _NDIS_MINIPORT_BLOCK *v36; // r10
  __int64 v37; // rbx
  int v38; // r8d
  unsigned int v39; // eax
  int v40; // r9d
  char v41; // al
  _NDIS_MINIPORT_BLOCK *v42; // rbx
  unsigned int v43; // r14d
  unsigned int v44; // r15d
  NDIS_BIND_PROTOCOL_LINK *v45; // rcx
  NDIS_BIND_LINK_BASE *v46; // rcx
  NDIS_BIND_LINK_BASE *m_currentOperation; // rax
  struct NDIS_BIND_PROTOCOL_LINK *p_Blink; // rdx
  __int64 v49; // rbx
  unsigned __int64 v50; // r14
  NDIS_BIND_FILTER_LINK *v51; // rcx
  Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK> > > *p_Protocols; // r13
  __int64 v53; // r12
  unsigned int v54; // eax
  KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK> > *v55; // r15
  NDIS_BIND_PROTOCOL_LINK *v56; // rbx
  Ndis::BindState *p_BindState; // rbx
  __int64 v58; // rbx
  unsigned __int64 v59; // r14
  NDIS_BIND_FILTER_LINK *v60; // rcx
  unsigned __int64 v61; // rbx
  NDIS_BIND_FILTER_LINK *v62; // rcx
  _NDIS_MINIPORT_BLOCK *v63; // rbx
  unsigned int v64; // r15d
  unsigned int v65; // r13d
  NDIS_BIND_PROTOCOL_LINK *v66; // rcx
  KPushLockBase *v67; // r14
  NDIS_BIND_LINK_BASE *v68; // rax
  struct NDIS_BIND_PROTOCOL_LINK *v69; // rdx
  struct _NDIS_MINIPORT_BLOCK *v70; // rdx
  bool m_isDirty; // al
  char v72; // r14
  struct _NDIS_MINIPORT_BLOCK *v73; // rcx
  KPushLockBase *m_Lock; // r15
  __int32 v75; // r12d
  int m_unbindReasons; // r8d
  char v78; // al
  _NDIS_MINIPORT_BLOCK *v79; // rbx
  unsigned __int64 v80; // rbx
  NDIS_BIND_FILTER_LINK *v81; // rcx
  NDIS_BIND_LINK_BASE *v82; // rcx
  NDIS_BIND_LINK_BASE *v83; // rax
  struct NDIS_BIND_FILTER_LINK *v84; // rdx
  struct _NDIS_MINIPORT_BLOCK *v85; // rdx
  bool v86; // al
  char v87; // r14
  struct _NDIS_MINIPORT_BLOCK *v88; // rcx
  _NDIS_MINIPORT_BLOCK *v89; // rbx
  unsigned int v90; // r15d
  unsigned int v91; // eax
  KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK> > *v92; // r13
  NDIS_BIND_PROTOCOL_LINK *v93; // rax
  NDIS_BIND_PROTOCOL_LINK *v94; // rax
  NDIS_BIND_LINK_BASE *v95; // rax
  KPushLockBase *v96; // r14
  KPushLockBase *v97; // rcx
  NDIS_BIND_LINK_BASE *v98; // rax
  struct NDIS_BIND_PROTOCOL_LINK *v99; // rdx
  struct _NDIS_MINIPORT_BLOCK *v100; // rdx
  char v101; // r14
  bool v102; // al
  struct _NDIS_MINIPORT_BLOCK *v103; // rcx
  _NDIS_MINIPORT_BLOCK *v104; // rbx
  _NDIS_MINIPORT_BLOCK *v105; // rbx
  KPushLock *p_m_lock; // rdi
  NDIS_BIND_LINK_BASE *v107; // rcx
  NDIS_BIND_LINK_BASE *v108; // rax
  struct NDIS_BIND_FILTER_LINK *v109; // rdx
  int PcwDataBlock; // eax
  __int64 v111; // r14
  int BaseMiniport; // eax
  __int64 v113; // r14
  _QWORD *MiniportAdapterContext; // r13
  __int64 v115; // rbx
  int v116; // r8d
  char v117; // al
  _QWORD *Reserved28; // r13
  __int64 v119; // rbx
  int v120; // r8d
  char v121; // al
  NDIS_BIND_LINK_BASE *v122; // rcx
  NDIS_BIND_LINK_BASE *v123; // rax
  struct NDIS_BIND_FILTER_LINK *v124; // rdx
  _NDIS_MINIPORT_BLOCK *v125; // r14
  unsigned int v126; // edx
  int m_bindSources; // r8d
  char v128; // al
  NDIS_BIND_LINK_BASE *v129; // rax
  NDIS_BIND_LINK_BASE *v130; // r14
  _NDIS_MINIPORT_BLOCK *v131; // r15
  unsigned __int16 v132; // cx
  unsigned __int16 v133; // cx
  NDIS_BIND_LINK_BASE *v134; // rcx
  NDIS_BIND_LINK_BASE *v135; // rax
  struct NDIS_BIND_FILTER_LINK *v136; // rdx
  unsigned int v137; // [rsp+38h] [rbp-D0h]
  int v138; // [rsp+38h] [rbp-D0h]
  int v139; // [rsp+38h] [rbp-D0h]
  unsigned int v140; // [rsp+38h] [rbp-D0h]
  unsigned int v141; // [rsp+38h] [rbp-D0h]
  int v142; // [rsp+38h] [rbp-D0h]
  int v143; // [rsp+38h] [rbp-D0h]
  char v144; // [rsp+3Ch] [rbp-CCh]
  BOOL v145; // [rsp+40h] [rbp-C8h]
  KLockHolder v146; // [rsp+48h] [rbp-C0h] BYREF
  _NDIS_MINIPORT_BLOCK *v147; // [rsp+60h] [rbp-A8h]
  struct _NDIS_MINIPORT_BLOCK *p_Bindings; // [rsp+68h] [rbp-A0h]
  __int64 v149; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v150; // [rsp+80h] [rbp-88h]
  struct NDIS_RESTART_INFORMATION v151; // [rsp+118h] [rbp+10h] BYREF

  v1 = 0;
  *(_QWORD *)&v151.FilterInstanceBuffer.m_bufferSize = 0LL;
  v151.FilterInstanceBuffer._p = 0LL;
  memset(&v151, 0, 104);
  memset(&v151.RssCaps, 0, sizeof(v151.RssCaps));
  memset(&v151.ProtocolParameters, 0, 60);
  v146.m_Lock = &this->m_lock;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v146.m_Lock, 0LL);
  this->m_isDirty = 0;
  ExReleasePushLockExclusiveEx(&this->m_lock, 0LL);
  KeLeaveCriticalRegion();
  m_miniport = this->m_miniport;
  v4 = 1;
  if ( this->m_miniport->InitMode && m_miniport->InitModeNotNeededAnymore )
  {
    ndisMBeginNormalMode((__int64)this->m_miniport);
    Ndis::BindEngine::BeginPolicyUpdates(&m_miniport->BindEngine);
    if ( !m_miniport->BindEngine.m_isBeingDestroyed )
      m_miniport->BindEngine.m_isDirty = 1;
    Ndis::BindEngine::EndPolicyUpdates(&m_miniport->BindEngine);
  }
  KeEnterCriticalRegion();
  v146.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(&this->m_lock, 0LL);
  m_State = Exclusive;
  this->m_currentOperation = 0LL;
  v146.m_State = Exclusive;
  v6 = 0;
  do
  {
    v7 = this->m_miniport;
    v144 = this->m_isDirty | v6;
    this->m_isDirty = 0;
    v147 = v7;
    if ( ndisMDoesMiniportNeedCoNdisNdProxy(v7) )
      ndisBindEnumerateProtocolDrivers(
        (void (__fastcall *)(__int64, volatile signed __int32 **))lambda_f15002d7dee2adb7876419c4171e5c91_::_helper_func_cdecl_,
        (__int64)v7);
    p_Bindings = (struct _NDIS_MINIPORT_BLOCK *)&v7->Bindings;
    Ndis::BindRules::ReEnableTemporaryUnbind((Ndis::BindRules *)&v7->Bindings, v8);
    Ndis::BindRules::ReStartTemporaryPause(v7, v9);
    Ndis::BindRules::CheckForDriverLoaded((Ndis::BindRules *)&v7->Bindings, v10);
    Ndis::BindRules::CheckForVBusDependency((Ndis::BindRules *)&v7->Bindings, v11);
    Ndis::BindRules::UnbindIncompatibleDriversForMacChange((Ndis::BindRules *)v7, v12);
    m_numElements = v7->Bindings.Filters.m_numElements;
    v14 = 0LL;
    v145 = 0;
    v137 = m_numElements;
    while ( v1 != m_numElements )
    {
      if ( v1 >= (unsigned __int64)v7->Bindings.Filters.m_numElements )
        __fastfail(0xBAD0FFu);
      p = v7->Bindings.Filters._p;
      v16 = p[v1]._p;
      if ( v16->BindState.m_bindContext.m_numElements || v16->BindState.m_bindSources )
      {
        if ( (v16->BindDriver._p->_t.FilterBindFlags & 2) == 0 )
        {
          v14 = p[v1]._p->BindState.m_unbindReasons != 0;
          v145 = p[v1]._p->BindState.m_unbindReasons != 0;
          goto LABEL_12;
        }
        if ( (_DWORD)v14 )
        {
          if ( Ndis::BindState::SetBinding(&v16->BindState, BindingDisabled, Reason_MissingModifyingFilter)
            && (unsigned __int8)byte_1C0085323 >= 4u )
          {
            ndisGetBindLinkNameForTracing(p[v1]._p, (struct NDIS_PNPTRACE_LOCALS *)&v149);
            if ( (unsigned __int8)byte_1C0085323 >= 4u )
            {
              v132 = 28;
LABEL_215:
              WPP_SF_Zq(v132, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v150, v149);
            }
          }
LABEL_186:
          v14 = v145;
          goto LABEL_12;
        }
        m_unbindReasons = v16->BindState.m_unbindReasons;
        v16->BindState.m_unbindReasons = m_unbindReasons & 0xFFFFFF7F;
        if ( (m_unbindReasons != 0) == ((m_unbindReasons & 0xFFFFFF7F) != 0) && v16->BindState.Miniport )
        {
          v78 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C0085323 >= 5u )
          {
            WPP_SF_dd(
              0xEu,
              &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids,
              m_unbindReasons,
              m_unbindReasons & 0xFFFFFF7F);
            v14 = v145;
          }
          if ( !v16->BindState.Miniport->BindEngine.m_isBeingDestroyed )
            v16->BindState.Miniport->BindEngine.m_isDirty = 1;
          v78 = 1;
        }
        if ( v78 && (unsigned __int8)byte_1C0085323 >= 4u )
        {
          ndisGetBindLinkNameForTracing(p[v1]._p, (struct NDIS_PNPTRACE_LOCALS *)&v149);
          if ( (unsigned __int8)byte_1C0085323 >= 4u )
          {
            v132 = 27;
            goto LABEL_215;
          }
          goto LABEL_186;
        }
      }
LABEL_12:
      v7 = v147;
      ++v1;
      m_numElements = v137;
    }
    v17 = p_Bindings;
    if ( LODWORD(p_Bindings->Lock) )
    {
      PcwDataBlock = (int)p_Bindings->PcwDataBlock;
      v111 = 0LL;
      v142 = PcwDataBlock;
      while ( (_DWORD)v111 != PcwDataBlock )
      {
        if ( (unsigned int)v111 >= LODWORD(v17->PcwDataBlock) )
          __fastfail(0xBAD0FFu);
        Reserved28 = v17->Reserved28;
        v119 = Reserved28[v111];
        v120 = *(_DWORD *)(v119 + 48);
        *(_DWORD *)(v119 + 48) = v120 & 0xFFFBFFE3;
        if ( (v120 != 0) == ((v120 & 0xFFFBFFE3) != 0) && *(_QWORD *)(v119 + 16) )
        {
          v121 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C0085323 >= 5u )
            WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v120, v120 & 0xFFFBFFE3);
          if ( !*(_BYTE *)(*(_QWORD *)(v119 + 16) + 5313LL) )
            *(_BYTE *)(*(_QWORD *)(v119 + 16) + 5312LL) = 1;
          v121 = 1;
        }
        if ( v121 )
        {
          if ( (unsigned __int8)byte_1C0085323 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              (struct NDIS_BIND_FILTER_LINK *)Reserved28[v111],
              (struct NDIS_PNPTRACE_LOCALS *)&v149);
            if ( (unsigned __int8)byte_1C0085323 >= 4u )
              WPP_SF_Zq(0x19u, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v150, v149);
          }
        }
        PcwDataBlock = v142;
        v111 = (unsigned int)(v111 + 1);
        v17 = p_Bindings;
      }
      BaseMiniport = (int)v17->BaseMiniport;
      v113 = 0LL;
      v143 = BaseMiniport;
      while ( (_DWORD)v113 != BaseMiniport )
      {
        if ( (unsigned int)v113 >= LODWORD(v17->BaseMiniport) )
          __fastfail(0xBAD0FFu);
        MiniportAdapterContext = v17->MiniportAdapterContext;
        v115 = MiniportAdapterContext[v113];
        v116 = *(_DWORD *)(v115 + 48);
        *(_DWORD *)(v115 + 48) = v116 & 0xFFFBFFE3;
        if ( (v116 != 0) == ((v116 & 0xFFFBFFE3) != 0) && *(_QWORD *)(v115 + 16) )
        {
          v117 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C0085323 >= 5u )
            WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v116, v116 & 0xFFFBFFE3);
          if ( !*(_BYTE *)(*(_QWORD *)(v115 + 16) + 5313LL) )
            *(_BYTE *)(*(_QWORD *)(v115 + 16) + 5312LL) = 1;
          v117 = 1;
        }
        if ( v117 && (unsigned __int8)byte_1C0085323 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            (struct NDIS_BIND_PROTOCOL_LINK *)MiniportAdapterContext[v113],
            (struct NDIS_PNPTRACE_LOCALS *)&v149);
          WPP_SF_Zq(0x1Au, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v150, v149);
        }
        BaseMiniport = v143;
        v113 = (unsigned int)(v113 + 1);
        v17 = p_Bindings;
      }
      v7 = v147;
    }
    Ndis::BindRules::CheckMissingMandatoryFilter((Ndis::BindRules *)v17, (struct Ndis::BindStack *)v14);
    Ndis::BindRules::CoalesceFilterAttachDuringBoot(v7, v17, v18);
    Ndis::BindRules::UnbindOnAttach((Ndis::BindRules *)v17, v19);
    Ndis::BindRules::UnbindOnDetach((Ndis::BindRules *)v17, v20);
    LOBYTE(v21) = v7->InitMode != 0;
    Ndis::BindRules::MakeOptionalFiltersMandatoryDuringBoot((Ndis::BindRules *)v17, v21, v22);
    Ndis::BindRules::UnbindMiniportStack((Ndis::BindRules *)v17, v23);
    Ndis::BindRules::PauseNeededForBind(v7, v17, v24);
    v25 = (int)v17->PcwDataBlock;
    v138 = v25;
    v26 = HIDWORD(v17->Lock) == 0;
    v27 = 0LL;
    while ( (_DWORD)v27 != v25 )
    {
      if ( (unsigned int)v27 >= LODWORD(v17->PcwDataBlock) )
        __fastfail(0xBAD0FFu);
      v28 = (_NDIS_MINIPORT_BLOCK *)v17->Reserved28;
      v147 = v28;
      v29 = *((_QWORD *)&v28->Header.Type + v27);
      if ( *(_DWORD *)(v29 + 72) )
      {
        v30 = *(_DWORD *)(v29 + 52);
        if ( v26 )
          v31 = v30 & 0xFFFFFFEF;
        else
          v31 = v30 | 0x10;
        *(_DWORD *)(v29 + 52) = v31;
        v32 = *(_DWORD *)(v29 + 52);
        if ( (v30 != 0) == (v32 != 0) && *(_QWORD *)(v29 + 16) )
        {
          v33 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C0085323 >= 5u )
          {
            WPP_SF_dd(0xFu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v30, v32);
            v28 = v147;
          }
          if ( !*(_BYTE *)(*(_QWORD *)(v29 + 16) + 5313LL) )
            *(_BYTE *)(*(_QWORD *)(v29 + 16) + 5312LL) = 1;
          v33 = 1;
        }
        if ( v33 )
        {
          if ( (unsigned __int8)byte_1C0085323 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *((struct NDIS_BIND_FILTER_LINK **)&v28->Header.Type + v27),
              (struct NDIS_PNPTRACE_LOCALS *)&v149);
            if ( (unsigned __int8)byte_1C0085323 >= 4u )
              WPP_SF_Zq(0x42u, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v150, v149);
          }
        }
        v26 = *(_DWORD *)(*((_QWORD *)&v147->Header.Type + v27) + 52LL) == 0;
      }
      v25 = v138;
      v27 = (unsigned int)(v27 + 1);
      v17 = p_Bindings;
    }
    v34 = (int)v17->BaseMiniport;
    v35 = 0LL;
    v139 = v34;
    while ( (_DWORD)v35 != v34 )
    {
      if ( (unsigned int)v35 >= LODWORD(v17->BaseMiniport) )
        __fastfail(0xBAD0FFu);
      v36 = (_NDIS_MINIPORT_BLOCK *)v17->MiniportAdapterContext;
      v147 = v36;
      v37 = *((_QWORD *)&v36->Header.Type + v35);
      v38 = *(_DWORD *)(v37 + 52);
      if ( v26 )
        v39 = v38 & 0xFFFFFFEF;
      else
        v39 = v38 | 0x10;
      *(_DWORD *)(v37 + 52) = v39;
      v40 = *(_DWORD *)(v37 + 52);
      if ( (v38 != 0) == (v40 != 0) && *(_QWORD *)(v37 + 16) )
      {
        v41 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0085323 >= 5u )
        {
          WPP_SF_dd(0xFu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v38, v40);
          v36 = v147;
        }
        if ( !*(_BYTE *)(*(_QWORD *)(v37 + 16) + 5313LL) )
          *(_BYTE *)(*(_QWORD *)(v37 + 16) + 5312LL) = 1;
        v41 = 1;
      }
      if ( v41 && (unsigned __int8)byte_1C0085323 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *((struct NDIS_BIND_PROTOCOL_LINK **)&v36->Header.Type + v35),
          (struct NDIS_PNPTRACE_LOCALS *)&v149);
        WPP_SF_Zq(0x43u, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v150, v149);
      }
      v34 = v139;
      v35 = (unsigned int)(v35 + 1);
      v17 = p_Bindings;
    }
    v6 = v144;
    v1 = 0;
  }
  while ( this->m_isDirty );
  this->m_isDirty = v144;
  if ( v144 )
    goto LABEL_96;
  v42 = this->m_miniport;
  v43 = 0;
  v44 = this->m_miniport->Bindings.Protocols.m_numElements;
  while ( v43 != v44 )
  {
    if ( v43 >= (unsigned __int64)v42->Bindings.Protocols.m_numElements )
      __fastfail(0xBAD0FFu);
    v45 = v42->Bindings.Protocols._p[v43]._p;
    if ( (v45->BindState.PretendBindingActive || v45->BindState.m_bindContext.m_numElements)
      && v45->BindState.m_pauseReasons
      && v45->BindState.m_actualPauseState == DatapathRunning )
    {
      if ( v45 )
        v46 = &v45->NDIS_BIND_LINK_BASE;
      else
        v46 = 0LL;
      this->m_currentOperation = v46;
      KLockHolder::ReleaseExclusive(&v146);
      m_currentOperation = this->m_currentOperation;
      p_Blink = (struct NDIS_BIND_PROTOCOL_LINK *)&m_currentOperation[-1].DriverLinkage.Blink;
      if ( !m_currentOperation )
        p_Blink = 0LL;
      ndisPauseProtocol(this->m_miniport, p_Blink);
      KLockHolder::AcquireExclusive(&v146);
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
        goto LABEL_181;
    }
    ++v43;
  }
  v49 = this->m_miniport->Bindings.Filters.m_numElements;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    v50 = v49 - 1;
    do
    {
      if ( v50 >= this->m_miniport->Bindings.Filters.m_numElements )
        __fastfail(0xBAD0FFu);
      v51 = this->m_miniport->Bindings.Filters._p[v50]._p;
      if ( (v51->BindState.PretendBindingActive || v51->BindState.m_bindContext.m_numElements)
        && v51->BindState.m_pauseReasons
        && v51->BindState.m_actualPauseState == DatapathRunning )
      {
        if ( v51 )
          v107 = &v51->NDIS_BIND_LINK_BASE;
        else
          v107 = 0LL;
        this->m_currentOperation = v107;
        KLockHolder::ReleaseExclusive(&v146);
        v108 = this->m_currentOperation;
        v109 = (struct NDIS_BIND_FILTER_LINK *)&v108[-1].DriverLinkage.Blink;
        if ( !v108 )
          v109 = 0LL;
        ndisPauseFilter(this->m_miniport, v109);
        KLockHolder::AcquireExclusive(&v146);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_181;
      }
      --v50;
      --v49;
    }
    while ( v49 );
  }
  if ( this->m_miniport->Bindings.Miniport.m_pauseReasons
    && this->m_miniport->Bindings.Miniport.m_actualPauseState == DatapathRunning )
  {
    KLockHolder::ReleaseExclusive(&v146);
    v125 = this->m_miniport;
    if ( (unsigned __int8)byte_1C0085323 >= 4u )
      WPP_SF_q(0xDu, &WPP_0f031f2086e21aadff9092658e664f02_Traceguids, (__int64)this->m_miniport);
    ndisReferencePackage((__int64)&ndisPkgs);
    ndisMPauseMiniportInner(v125, v126);
    ndisDereferencePackage((__int64)&ndisPkgs);
    if ( (unsigned __int8)byte_1C0085323 >= 4u )
      WPP_SF_q(0xEu, &WPP_0f031f2086e21aadff9092658e664f02_Traceguids, (__int64)v125);
    Ndis::BindEngine::BeginPolicyUpdates(&v125->BindEngine);
    v125->Bindings.Miniport.m_actualPauseState = DatapathPaused;
    Ndis::BindEngine::EndPolicyUpdates(&v125->BindEngine);
    KLockHolder::AcquireExclusive(&v146);
    this->m_currentOperation = 0LL;
    Ndis::BindEngine::ApplyRules(this);
    if ( this->m_isDirty )
      goto LABEL_181;
  }
  p_Protocols = &this->m_miniport->Bindings.Protocols;
  v53 = 0LL;
  v54 = this->m_miniport->Bindings.Protocols.m_numElements;
  v140 = v54;
  while ( 2 )
  {
    if ( (_DWORD)v53 != v54 )
    {
      if ( (unsigned int)v53 >= (unsigned __int64)p_Protocols->m_numElements )
        __fastfail(0xBAD0FFu);
      v55 = p_Protocols->_p;
      v56 = v55[v53]._p;
      if ( !v56->BindState.m_unbindReasons
        || (p_BindState = &v56->BindState, !p_BindState->PretendBindingActive)
        && !p_BindState->m_bindContext.m_numElements )
      {
LABEL_70:
        v54 = v140;
        v53 = (unsigned int)(v53 + 1);
        continue;
      }
      m_bindSources = p_BindState->m_bindSources;
      p_BindState->m_bindSources = m_bindSources & 0xFFFFFFFB;
      if ( (m_bindSources != 0) == ((m_bindSources & 0xFFFFFFFB) != 0) )
      {
        v128 = 0;
        goto LABEL_195;
      }
      if ( (unsigned __int8)byte_1C0085323 >= 5u )
        WPP_SF_dd(0xAu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, m_bindSources, m_bindSources & 0xFFFFFFFB);
      if ( p_BindState->m_bindSources )
      {
        if ( Ndis::BindState::SetBinding(p_BindState, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
          && (unsigned __int8)byte_1C0085323 >= 4u )
        {
          WPP_SF_DZq(0xBu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, p_BindState->m_bindSources, 0LL, 0LL);
        }
        if ( Ndis::BindState::SetBinding(
               p_BindState,
               BindingEnabled,
               Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
          && (unsigned __int8)byte_1C0085323 >= 4u )
        {
          v133 = 12;
          goto LABEL_267;
        }
      }
      else if ( Ndis::BindState::SetBinding(p_BindState, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
             && (unsigned __int8)byte_1C0085323 >= 4u )
      {
        v133 = 13;
LABEL_267:
        WPP_SF_Zq(v133, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, 0LL, 0LL);
      }
      if ( !p_BindState->Miniport->BindEngine.m_isBeingDestroyed )
        p_BindState->Miniport->BindEngine.m_isDirty = 1;
      v128 = 1;
LABEL_195:
      if ( v128 && (unsigned __int8)byte_1C0085323 >= 4u )
      {
        ndisGetBindLinkNameForTracing(v55[v53]._p, (struct NDIS_PNPTRACE_LOCALS *)&v149);
        WPP_SF_Zq(0xAu, &WPP_5b8c069e2f8125229af88e505e9ace44_Traceguids, v150, v149);
      }
      v129 = (NDIS_BIND_LINK_BASE *)v55[v53]._p;
      if ( v129 )
        v129 = (NDIS_BIND_LINK_BASE *)((char *)v129 + 8);
      this->m_currentOperation = v129;
      KLockHolder::ReleaseExclusive(&v146);
      v130 = this->m_currentOperation;
      if ( v130 )
        v130 = (NDIS_BIND_LINK_BASE *)((char *)v130 - 8);
      v131 = this->m_miniport;
      if ( LOBYTE(v130[1].BindState.Miniport->OpenQueue->MiniportAdapterContext) < 6u )
      {
        Ndis::BindEngine::BeginPolicyUpdates(&v131->BindEngine);
        *(_DWORD *)&v130->BindState.m_bindContext.gap0 = 0;
        Ndis::BindEngine::EndPolicyUpdates(&v131->BindEngine);
      }
      BYTE1(v130->BindState.m_AdditionalContext) = 0;
      ndisUnbindEachProtocolOpenOnMiniport(v131, (struct NDIS_BIND_PROTOCOL_LINK *)v130);
      KLockHolder::AcquireExclusive(&v146);
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
        goto LABEL_181;
      goto LABEL_70;
    }
    break;
  }
  v58 = this->m_miniport->Bindings.Filters.m_numElements;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    v59 = v58 - 1;
    while ( 1 )
    {
      if ( v59 >= this->m_miniport->Bindings.Filters.m_numElements )
        __fastfail(0xBAD0FFu);
      v60 = this->m_miniport->Bindings.Filters._p[v59]._p;
      if ( v60->BindState.m_unbindReasons
        && (v60->BindState.PretendBindingActive || v60->BindState.m_bindContext.m_numElements) )
      {
        if ( v60 )
          v134 = &v60->NDIS_BIND_LINK_BASE;
        else
          v134 = 0LL;
        this->m_currentOperation = v134;
        KLockHolder::ReleaseExclusive(&v146);
        v135 = this->m_currentOperation;
        v136 = (struct NDIS_BIND_FILTER_LINK *)&v135[-1].DriverLinkage.Blink;
        if ( !v135 )
          v136 = 0LL;
        ndisDetachFilter(this->m_miniport, v136);
        KLockHolder::AcquireExclusive(&v146);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          break;
      }
      --v59;
      if ( !--v58 )
        goto LABEL_76;
    }
LABEL_181:
    m_State = v146.m_State;
LABEL_96:
    m_Lock = v146.m_Lock;
  }
  else
  {
LABEL_76:
    v61 = 0LL;
    if ( this->m_miniport->Bindings.Filters.m_numElements )
    {
      do
      {
        if ( v61 >= this->m_miniport->Bindings.Filters.m_numElements )
          __fastfail(0xBAD0FFu);
        v62 = this->m_miniport->Bindings.Filters._p[v61]._p;
        if ( !v62->BindState.m_unbindReasons
          && !v62->BindState.PretendBindingActive
          && !v62->BindState.m_bindContext.m_numElements )
        {
          if ( v62 )
            v122 = &v62->NDIS_BIND_LINK_BASE;
          else
            v122 = 0LL;
          this->m_currentOperation = v122;
          KLockHolder::ReleaseExclusive(&v146);
          v123 = this->m_currentOperation;
          v124 = (struct NDIS_BIND_FILTER_LINK *)&v123[-1].DriverLinkage.Blink;
          if ( !v123 )
            v124 = 0LL;
          ndisAttachFilter(this->m_miniport, v124);
          KLockHolder::AcquireExclusive(&v146);
          this->m_currentOperation = 0LL;
          Ndis::BindEngine::ApplyRules(this);
          if ( this->m_isDirty )
            goto LABEL_181;
        }
      }
      while ( ++v61 < this->m_miniport->Bindings.Filters.m_numElements );
    }
    v63 = this->m_miniport;
    v64 = 0;
    v65 = this->m_miniport->Bindings.Protocols.m_numElements;
    while ( v64 != v65 )
    {
      if ( v64 >= (unsigned __int64)v63->Bindings.Protocols.m_numElements )
        __fastfail(0xBAD0FFu);
      v66 = v63->Bindings.Protocols._p[v64]._p;
      if ( !v66->BindState.m_unbindReasons
        && !v66->BindState.PretendBindingActive
        && !v66->BindState.m_bindContext.m_numElements )
      {
        if ( v66 )
          v66 = (NDIS_BIND_PROTOCOL_LINK *)((char *)v66 + 8);
        v67 = v146.m_Lock;
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v66;
        ExReleasePushLockExclusiveEx(v67, 0LL);
        KeLeaveCriticalRegion();
        v68 = this->m_currentOperation;
        v69 = v68 ? (struct NDIS_BIND_PROTOCOL_LINK *)&v68[-1].DriverLinkage.Blink : 0LL;
        ndisBindProtocol(this->m_miniport, v69);
        KeEnterCriticalRegion();
        v146.m_Region.m_Entered = 1;
        ExAcquirePushLockExclusiveEx(v67, 0LL);
        this->m_currentOperation = 0LL;
        m_State = Exclusive;
        m_isDirty = this->m_isDirty;
        v72 = 0;
        v146.m_State = Exclusive;
        do
        {
          v73 = this->m_miniport;
          v72 |= m_isDirty;
          this->m_isDirty = 0;
          Ndis::BindRules::Apply(v73, v70);
          m_isDirty = this->m_isDirty;
        }
        while ( m_isDirty );
        this->m_isDirty = v72;
        if ( v72 )
          goto LABEL_96;
      }
      ++v64;
    }
    v79 = this->m_miniport;
    ndisUpdateMinimumStackVersion(this->m_miniport, 0LL, 0LL);
    ndisUpdateNoPauseOnSuspend(v79);
    if ( !this->m_miniport->Bindings.Miniport.m_pauseReasons
      && this->m_miniport->Bindings.Miniport.m_actualPauseState == DatapathPaused )
    {
      KLockHolder::ReleaseExclusive(&v146);
      ndisMRestartMiniport(this->m_miniport, &v151);
      KLockHolder::AcquireExclusive(&v146);
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
        goto LABEL_181;
    }
    ndisPostProcessRestartParametersAfterMiniport(this->m_miniport, &v151);
    v80 = 0LL;
    if ( this->m_miniport->Bindings.Filters.m_numElements )
    {
      while ( 1 )
      {
        if ( v80 >= this->m_miniport->Bindings.Filters.m_numElements )
          __fastfail(0xBAD0FFu);
        v81 = this->m_miniport->Bindings.Filters._p[v80]._p;
        if ( (v81->BindState.PretendBindingActive || v81->BindState.m_bindContext.m_numElements)
          && !v81->BindState.m_pauseReasons
          && v81->BindState.m_actualPauseState == DatapathPaused )
        {
          if ( v81 )
            v82 = &v81->NDIS_BIND_LINK_BASE;
          else
            v82 = 0LL;
          m_Lock = v146.m_Lock;
          this->m_currentOperation = v82;
          ExReleasePushLockExclusiveEx(m_Lock, 0LL);
          KeLeaveCriticalRegion();
          v83 = this->m_currentOperation;
          v84 = (struct NDIS_BIND_FILTER_LINK *)&v83[-1].DriverLinkage.Blink;
          if ( !v83 )
            v84 = 0LL;
          ndisRestartFilter(this->m_miniport, v84, &v151);
          KeEnterCriticalRegion();
          v146.m_Region.m_Entered = 1;
          ExAcquirePushLockExclusiveEx(m_Lock, 0LL);
          v86 = this->m_isDirty;
          m_State = Exclusive;
          v146.m_State = Exclusive;
          v87 = 0;
          this->m_currentOperation = 0LL;
          do
          {
            v88 = this->m_miniport;
            v87 |= v86;
            this->m_isDirty = 0;
            Ndis::BindRules::Apply(v88, v85);
            v86 = this->m_isDirty;
          }
          while ( v86 );
          this->m_isDirty = v87;
          if ( v87 )
            break;
        }
        if ( ++v80 >= this->m_miniport->Bindings.Filters.m_numElements )
          goto LABEL_132;
      }
    }
    else
    {
LABEL_132:
      ndisPostProcessRestartParametersAfterFilters(this->m_miniport, &v151);
      v89 = this->m_miniport;
      v90 = 0;
      v91 = this->m_miniport->Bindings.Protocols.m_numElements;
      v141 = v91;
      while ( v90 != v91 )
      {
        if ( v90 >= (unsigned __int64)v89->Bindings.Protocols.m_numElements )
          __fastfail(0xBAD0FFu);
        v92 = v89->Bindings.Protocols._p;
        v93 = v92[v90]._p;
        if ( (v93->BindState.PretendBindingActive || v93->BindState.m_bindContext.m_numElements)
          && !v93->BindState.m_pauseReasons
          && v93->BindState.m_actualPauseState == DatapathPaused )
        {
          v95 = v93 ? &v93->NDIS_BIND_LINK_BASE : 0LL;
          v96 = v146.m_Lock;
          v97 = v146.m_Lock;
          this->m_currentOperation = v95;
          ExReleasePushLockExclusiveEx(v97, 0LL);
          KeLeaveCriticalRegion();
          v98 = this->m_currentOperation;
          v99 = v98 ? (struct NDIS_BIND_PROTOCOL_LINK *)&v98[-1].DriverLinkage.Blink : 0LL;
          ndisRestartProtocol(this->m_miniport, v99, &v151);
          KeEnterCriticalRegion();
          v146.m_Region.m_Entered = 1;
          ExAcquirePushLockExclusiveEx(v96, 0LL);
          this->m_currentOperation = 0LL;
          v101 = 0;
          v146.m_State = Exclusive;
          v102 = this->m_isDirty;
          do
          {
            v103 = this->m_miniport;
            v101 |= v102;
            this->m_isDirty = 0;
            Ndis::BindRules::Apply(v103, v100);
            v102 = this->m_isDirty;
          }
          while ( v102 );
          this->m_isDirty = v101;
          if ( v101 )
          {
            m_State = Exclusive;
            goto LABEL_96;
          }
        }
        v94 = v92[v90++]._p;
        v94->BindState.m_AdditionalContext = 0LL;
        v91 = v141;
      }
      ndisPostProcessRestartParametersAfterProtocols(this->m_miniport, &v151);
      v104 = this->m_miniport;
      ndisUpdateMinimumStackVersion(this->m_miniport, 0LL, 0LL);
      ndisUpdateNoPauseOnSuspend(v104);
      v105 = this->m_miniport;
      p_m_lock = &this->m_miniport->MiniportOwner.m_lock;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
      v105->MiniportOwner.m_owner = MiniportNotOwned;
      KeSetEvent(&v105->MiniportOwner.m_isUnowned.m_event, 0, 0);
      ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
      KeLeaveCriticalRegion();
      this->m_bindThread = 0LL;
      KeSetEvent(&this->m_bindCompleteEvent.m_event, 0, 0);
      m_Lock = v146.m_Lock;
      ExReleasePushLockExclusiveEx(v146.m_Lock, 0LL);
      m_State = Unlocked;
      v146.m_State = Unlocked;
      v146.m_Region.m_Entered = 0;
      KeLeaveCriticalRegion();
      v4 = 0;
    }
  }
  v75 = m_State - 1;
  if ( v75 )
  {
    if ( v75 == 1 )
    {
      ExReleasePushLockExclusiveEx(m_Lock, 0LL);
      goto LABEL_100;
    }
  }
  else
  {
    KLockHolder::ReleaseShared(&v146);
  }
  if ( v146.m_Region.m_Entered )
LABEL_100:
    KeLeaveCriticalRegion();
  if ( v151.General.SupportedOidList )
    ExFreePoolWithTag(v151.General.SupportedOidList, 0);
  if ( v151.FilterInstanceBuffer._p )
    ExFreePoolWithTag(v151.FilterInstanceBuffer._p, 0x7272414Bu);
  return v4;
}

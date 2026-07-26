/*
 * XREFs of ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A177C
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A222C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ndisReleaseMiniportPnPEventLock @ 0x1C001911C (ndisReleaseMiniportPnPEventLock.c)
 *     ndisAcquireMiniportPnPEventLock @ 0x1C0019198 (ndisAcquireMiniportPnPEventLock.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     WPP_SF_Zqq @ 0x1C0049938 (WPP_SF_Zqq.c)
 *     WPP_SF_DZq @ 0x1C0058E7C (WPP_SF_DZq.c)
 *     WPP_SF_ZqD @ 0x1C006BB00 (WPP_SF_ZqD.c)
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisInitializeMiniportRestartAttributes @ 0x1C00A0674 (ndisInitializeMiniportRestartAttributes.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A1C64 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A213C (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?resize@?$KArray@PEAX@Rtl@@QEAA_N_K@Z @ 0x1C00A5948 (-resize@-$KArray@PEAX@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00DD908 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F48 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisPnPNotifyBinding @ 0x1C00E98E4 (ndisPnPNotifyBinding.c)
 */

void __fastcall ndisRestartProtocol(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_PROTOCOL_LINK *a2,
        struct NDIS_RESTART_INFORMATION *a3)
{
  _NDIS_PROTOCOL_BLOCK *RunningDriver; // r15
  unsigned int m_numElements; // eax
  __int64 v7; // r15
  _QWORD *v8; // r13
  struct _NDIS_MINIPORT_BLOCK *v9; // rdx
  char v10; // bl
  bool m_isDirty; // al
  struct _NDIS_MINIPORT_BLOCK *m_miniport; // rcx
  Rtl::KString *v13; // rcx
  Rtl::KString *v14; // rcx
  Rtl::KString *p; // rcx
  int v16; // eax
  __int64 v17; // rdx
  int v18; // r15d
  __int64 *v19; // r8
  unsigned int m_bindSources; // r8d
  NDIS_BIND_LINK_BASE *v21; // rcx
  unsigned __int16 v22; // cx
  _NDIS_MINIPORT_BLOCK *Miniport; // rax
  unsigned int v24; // [rsp+30h] [rbp-D0h]
  struct _KEVENT v26; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v27[20]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v28[20]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v29[22]; // [rsp+1A0h] [rbp+A0h] BYREF

  RunningDriver = a2->BindDriver._p->_t.RunningDriver;
  if ( !a3->Attributes.Oid )
    ndisInitializeMiniportRestartAttributes((__int64)a1, (__int64)a3);
  if ( RunningDriver->MajorNdisVersion < 6u )
  {
    a2->BindDriver._p->_t.NeedsBindCompleteEvent = 1;
    if ( (unsigned __int8)byte_1C0085323 >= 4u )
    {
      p = a2->BindDriver._p->_t.Name._p;
      if ( p )
        WPP_SF_Zq(
          0x16u,
          &WPP_6e95c490e51e9748073b6395c0120650_Traceguids,
          (__int64 *)&p->_UNICODE_STRING,
          a2->BindState.Miniport);
      else
        WPP_SF_Zq(0x16u, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, 0LL, a2->BindState.Miniport);
    }
    v16 = ndisBindLegacyProtocol(a1, RunningDriver, a2);
    v18 = v16;
    if ( (unsigned __int8)byte_1C0085323 >= 4u )
    {
      v19 = (__int64 *)a2->BindDriver._p->_t.Name._p;
      if ( v19 )
        ++v19;
      WPP_SF_ZqD(0x17u, v17, v19, a2->BindState.Miniport, v16);
    }
    if ( !v18 )
      goto LABEL_10;
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    Rtl::KArray<void *>::resize(&a2->BindState.m_bindContext);
    a2->BindState.m_LastErrorCode = v18;
    if ( Ndis::BindState::SetBinding(&a2->BindState, BindingDisabled, Reason_LastBindAttemptFailed)
      && (unsigned __int8)byte_1C0085323 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v28);
      WPP_SF_DZq(0x18u, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, v18, (__int64 *)v28[1], v28[0]);
    }
    m_bindSources = a2->BindState.m_bindSources;
    a2->BindState.m_bindSources = m_bindSources & 0xFFFFFFFB;
    if ( (m_bindSources != 0) == ((m_bindSources & 0xFFFFFFFB) != 0) )
    {
LABEL_50:
      Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
      return;
    }
    if ( (unsigned __int8)byte_1C0085323 >= 5u )
      WPP_SF_dd(0xAu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, m_bindSources, m_bindSources & 0xFFFFFFFB);
    v21 = &a2->NDIS_BIND_LINK_BASE;
    if ( a2->BindState.m_bindSources )
    {
      if ( Ndis::BindState::SetBinding(&v21->BindState, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
        && (unsigned __int8)byte_1C0085323 >= 4u )
      {
        WPP_SF_DZq(0xBu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, a2->BindState.m_bindSources, 0LL, 0LL);
      }
      if ( !Ndis::BindState::SetBinding(
              &a2->BindState,
              BindingEnabled,
              Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
        || (unsigned __int8)byte_1C0085323 < 4u )
      {
        goto LABEL_46;
      }
      v22 = 12;
    }
    else
    {
      if ( !Ndis::BindState::SetBinding(&v21->BindState, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
        || (unsigned __int8)byte_1C0085323 < 4u )
      {
        goto LABEL_46;
      }
      v22 = 13;
    }
    WPP_SF_Zq(v22, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, 0LL, 0LL);
LABEL_46:
    Miniport = a2->BindState.Miniport;
    if ( !Miniport->BindEngine.m_isBeingDestroyed )
      Miniport->BindEngine.m_isDirty = 1;
    if ( (unsigned __int8)byte_1C0085323 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v27);
      WPP_SF_Zq(0x19u, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, (__int64 *)v27[1], v27[0]);
    }
    goto LABEL_50;
  }
  m_numElements = a2->BindState.m_bindContext.m_numElements;
  v7 = 0LL;
  v24 = m_numElements;
  while ( (_DWORD)v7 != m_numElements )
  {
    if ( (unsigned int)v7 >= a2->BindState.m_bindContext.m_numElements )
      __fastfail(0xBAD0FFu);
    _mm_lfence();
    v8 = a2->BindState.m_bindContext._p[v7];
    if ( (unsigned __int8)byte_1C0085323 >= 4u )
    {
      v13 = a2->BindDriver._p->_t.Name._p;
      if ( v13 )
        WPP_SF_Zqq(
          0x14u,
          &WPP_6e95c490e51e9748073b6395c0120650_Traceguids,
          (__int64 *)&v13->_UNICODE_STRING,
          a2->BindState.Miniport,
          v8);
      else
        WPP_SF_Zqq(0x14u, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, 0LL, a2->BindState.Miniport, v8);
    }
    memset(v29, 0, sizeof(v29));
    v29[0] = 11272832LL;
    *(_QWORD *)((char *)&v29[20] + 4) = 0LL;
    LODWORD(v29[20]) = 0;
    LODWORD(v29[1]) = 9;
    v29[2] = &a3->ProtocolParameters;
    LODWORD(v29[3]) = 56;
    ndisReferencePackage((__int64)&ndisPkgs);
    ndisAcquireMiniportPnPEventLock(v8[2], &v26);
    ndisPnPNotifyBinding(v8, v29);
    ndisReleaseMiniportPnPEventLock(v8[2]);
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    if ( (unsigned __int8)byte_1C0085323 >= 4u )
    {
      v14 = a2->BindDriver._p->_t.Name._p;
      if ( v14 )
        WPP_SF_Zqq(
          0x15u,
          &WPP_6e95c490e51e9748073b6395c0120650_Traceguids,
          (__int64 *)&v14->_UNICODE_STRING,
          a2->BindState.Miniport,
          v8);
      else
        WPP_SF_Zqq(0x15u, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, 0LL, a2->BindState.Miniport, v8);
    }
    m_numElements = v24;
    v7 = (unsigned int)(v7 + 1);
  }
LABEL_10:
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  a2->BindState.m_actualPauseState = DatapathRunning;
  v10 = 0;
  m_isDirty = a1->BindEngine.m_isDirty;
  do
  {
    m_miniport = a1->BindEngine.m_miniport;
    v10 |= m_isDirty;
    a1->BindEngine.m_isDirty = 0;
    Ndis::BindRules::Apply(m_miniport, v9);
    m_isDirty = a1->BindEngine.m_isDirty;
  }
  while ( m_isDirty );
  a1->BindEngine.m_isDirty = v10;
  ExReleasePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  KeLeaveCriticalRegion();
}

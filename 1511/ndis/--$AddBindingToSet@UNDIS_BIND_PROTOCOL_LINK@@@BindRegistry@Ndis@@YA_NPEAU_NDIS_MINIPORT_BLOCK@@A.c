/*
 * XREFs of ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@_KAEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A2760
 * Callers:
 *     ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A5F3C (-UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$KPtr@UNDIS_BIN.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C0040948 (WPP_SF_dd_ea_1C0040948.c)
 *     WPP_SF_Zq @ 0x1C004A150 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C0058B6C (WPP_SF_DZq.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C0099310 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x1C00A26F4 (-LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A4E98 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00A58C0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ?insertAt@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N_K$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A6218 (-insertAt@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00DD07C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

char __fastcall Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_PROTOCOL_LINK>(
        _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        __int64 a3,
        struct NDIS_BIND_PROTOCOL_LINK **a4)
{
  Ndis::BindState *p_BindState; // rbx
  int m_bindSources; // r8d
  bool v10; // cf
  struct NDIS_BIND_DRIVER_BASE *v11; // rdx
  struct NDIS_BIND_PROTOCOL_LINK *v12; // rax
  char v13; // al
  char *v14; // rbx
  bool v15; // di
  unsigned __int16 v17; // cx
  _QWORD v18[20]; // [rsp+30h] [rbp-B8h] BYREF
  PVOID P; // [rsp+F0h] [rbp+8h] BYREF

  (*a4)->BindState.Miniport = a1;
  p_BindState = &(*a4)->BindState;
  m_bindSources = (*a4)->BindState.m_bindSources;
  (*a4)->BindState.m_bindSources = m_bindSources | 1;
  if ( m_bindSources != 0 )
    goto LABEL_9;
  if ( (unsigned __int8)byte_1C0083723 >= 5u )
    WPP_SF_dd(0xAu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, m_bindSources, m_bindSources | 1);
  if ( p_BindState->m_bindSources )
  {
    if ( Ndis::BindState::SetBinding(p_BindState, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
      && (unsigned __int8)byte_1C0083723 >= 4u )
    {
      WPP_SF_DZq(0xBu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, p_BindState->m_bindSources, 0LL, 0LL);
    }
    if ( !Ndis::BindState::SetBinding(
            p_BindState,
            BindingEnabled,
            Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
      || (unsigned __int8)byte_1C0083723 < 4u )
    {
      goto LABEL_7;
    }
    v17 = 12;
    goto LABEL_23;
  }
  if ( Ndis::BindState::SetBinding(p_BindState, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
    && (unsigned __int8)byte_1C0083723 >= 4u )
  {
    v17 = 13;
LABEL_23:
    WPP_SF_Zq(v17, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, 0LL, 0LL);
  }
LABEL_7:
  v10 = (unsigned __int8)byte_1C0083723 < 4u;
  p_BindState->Miniport->BindEngine.m_isDirty = 1;
  if ( !v10 )
  {
    ndisGetBindLinkNameForTracing(*a4, (struct NDIS_PNPTRACE_LOCALS *)v18);
    WPP_SF_Zq(0xAu, &WPP_cd76ffd012ea25d52ded3a3c48a898ed_Traceguids, (__int64 *)v18[1], v18[0]);
  }
LABEL_9:
  if ( (*a4)->BindDriver._p == (KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder *)-8LL )
    v11 = 0LL;
  else
    v11 = &(*a4)->BindDriver._p->_t.NDIS_BIND_DRIVER_BASE;
  NDIS_BIND_LINK_BASE::LinkToDriver(&(*a4)->NDIS_BIND_LINK_BASE, v11);
  v12 = *a4;
  *a4 = 0LL;
  P = v12;
  v13 = Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::insertAt(a2, a3, &P);
  v14 = (char *)P;
  v15 = v13 == 0;
  if ( P )
  {
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref((char *)P + 104);
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE((NDIS_BIND_LINK_BASE *)(v14 + 8));
    ExFreePoolWithTag(v14, 0x4C745042u);
  }
  if ( v15 )
    return 0;
  a1->BindEngine.m_isDirty = 1;
  return 1;
}

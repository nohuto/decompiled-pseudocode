/*
 * XREFs of ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@_KAEAV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Z @ 0x1C00A24B4
 * Callers:
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A68DC (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$KPtr@UNDIS_BIND_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0040948 (WPP_SF_dd_ea_1C0040948.c)
 *     WPP_SF_Zq @ 0x1C004A150 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C0058B6C (WPP_SF_DZq.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C0099310 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x1C00A26F4 (-LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A4E98 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?grow@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00A5164 (-grow@-$KArray@V-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@A.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x1C00A6B74 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00DCF60 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?moveElements@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@AEAAXKKK@Z @ 0x1C00DD0B4 (-moveElements@-$KArray@V-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@.c)
 */

char __fastcall Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_FILTER_LINK>(
        _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        unsigned __int64 a3,
        struct NDIS_BIND_FILTER_LINK **a4)
{
  Ndis::BindState *p_BindState; // rsi
  int m_bindSources; // r8d
  bool v10; // cf
  struct NDIS_BIND_DRIVER_BASE *v11; // rdx
  struct NDIS_BIND_FILTER_LINK *v12; // rsi
  struct NDIS_BIND_FILTER_LINK *v13; // rbx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  struct NDIS_BIND_FILTER_LINK **v16; // rcx
  char v17; // di
  unsigned __int16 v19; // cx
  _QWORD v20[20]; // [rsp+30h] [rbp-E8h] BYREF

  (*a4)->BindState.Miniport = a1;
  p_BindState = &(*a4)->BindState;
  m_bindSources = (*a4)->BindState.m_bindSources;
  (*a4)->BindState.m_bindSources = m_bindSources | 1;
  if ( m_bindSources != 0 )
    goto LABEL_8;
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
    v19 = 12;
    goto LABEL_30;
  }
  if ( Ndis::BindState::SetBinding(p_BindState, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
    && (unsigned __int8)byte_1C0083723 >= 4u )
  {
    v19 = 13;
LABEL_30:
    WPP_SF_Zq(v19, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, 0LL, 0LL);
  }
LABEL_7:
  v10 = (unsigned __int8)byte_1C0083723 < 4u;
  p_BindState->Miniport->BindEngine.m_isDirty = 1;
  if ( !v10 )
  {
    ndisGetBindLinkNameForTracing(*a4, (struct NDIS_PNPTRACE_LOCALS *)v20);
    if ( (unsigned __int8)byte_1C0083723 >= 4u )
      WPP_SF_Zq(0xAu, &WPP_cd76ffd012ea25d52ded3a3c48a898ed_Traceguids, (__int64 *)v20[1], v20[0]);
  }
LABEL_8:
  if ( (*a4)->BindDriver._p == (KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *)-8LL )
    v11 = 0LL;
  else
    v11 = &(*a4)->BindDriver._p->_t.NDIS_BIND_DRIVER_BASE;
  NDIS_BIND_LINK_BASE::LinkToDriver(&(*a4)->NDIS_BIND_LINK_BASE, v11);
  v12 = *a4;
  *a4 = 0LL;
  v13 = v12;
  v14 = *(unsigned int *)(a2 + 8);
  if ( a3 <= v14
    && (unsigned __int8)Rtl::KArray<KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>>::grow(
                          a2,
                          (unsigned int)(v14 + 1)) )
  {
    v15 = *(unsigned int *)(a2 + 8);
    if ( a3 < v15 )
      Rtl::KArray<KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>>::moveElements(
        a2,
        (unsigned int)a3,
        (unsigned int)(a3 + 1),
        (unsigned int)(v15 - a3));
    v16 = (struct NDIS_BIND_FILTER_LINK **)(*(_QWORD *)(a2 + 16) + 8 * a3);
    if ( v16 )
    {
      v13 = 0LL;
      *v16 = v12;
    }
    ++*(_DWORD *)(a2 + 8);
    v17 = 0;
  }
  else
  {
    v17 = 1;
  }
  if ( v13 )
  {
    KRef<NDIS_BIND_FILTER_DRIVER>::unref(&v13->BindDriver);
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(&v13->NDIS_BIND_LINK_BASE);
    ExFreePoolWithTag(v13, 0x4C6C4642u);
  }
  if ( v17 )
    return 0;
  a1->BindEngine.m_isDirty = 1;
  return 1;
}

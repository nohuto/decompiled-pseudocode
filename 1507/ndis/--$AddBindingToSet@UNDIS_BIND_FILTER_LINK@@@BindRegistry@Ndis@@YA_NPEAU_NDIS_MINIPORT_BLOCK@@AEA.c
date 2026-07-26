/*
 * XREFs of ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@_KAEAV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Z @ 0x1C00A0B40
 * Callers:
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A0A64 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$KPtr@UNDIS_BIND_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C0058E7C (WPP_SF_DZq.c)
 *     ?grow@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00A1068 (-grow@-$KArray@V-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@A.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x1C00A8E48 (-LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00A8EB4 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x1C00ADDD8 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2E2C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?moveElements@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@AEAAXKKK@Z @ 0x1C00E2F80 (-moveElements@-$KArray@V-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@.c)
 */

char __fastcall Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_FILTER_LINK>(
        _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        unsigned __int64 a3,
        struct NDIS_BIND_FILTER_LINK **a4)
{
  struct NDIS_BIND_FILTER_LINK *v8; // rbx
  int m_bindSources; // r8d
  int m_unbindReasons; // r8d
  int v11; // r8d
  _NDIS_MINIPORT_BLOCK *v12; // rax
  struct NDIS_BIND_DRIVER_BASE *v13; // rdx
  struct NDIS_BIND_FILTER_LINK *v14; // rsi
  struct NDIS_BIND_FILTER_LINK *v15; // rbx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  struct NDIS_BIND_FILTER_LINK **v18; // rcx
  char v19; // di
  _NDIS_MINIPORT_BLOCK *Miniport; // rax
  _NDIS_MINIPORT_BLOCK *v22; // rax
  unsigned __int16 v23; // cx
  _QWORD v24[20]; // [rsp+30h] [rbp-E8h] BYREF

  (*a4)->BindState.Miniport = a1;
  v8 = *a4;
  m_bindSources = (*a4)->BindState.m_bindSources;
  (*a4)->BindState.m_bindSources = m_bindSources | 1;
  if ( m_bindSources != 0 )
    goto LABEL_12;
  if ( (unsigned __int8)byte_1C0085323 >= 5u )
    WPP_SF_dd(0xAu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, m_bindSources, m_bindSources | 1);
  if ( v8->BindState.m_bindSources )
  {
    m_unbindReasons = v8->BindState.m_unbindReasons;
    v8->BindState.m_unbindReasons = m_unbindReasons & 0xFFFFFFFE;
    if ( (m_unbindReasons != 0) != ((m_unbindReasons & 0xFFFFFFFE) != 0) || !v8->BindState.Miniport )
    {
      if ( (unsigned __int8)byte_1C0085323 >= 5u )
        WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, m_unbindReasons, m_unbindReasons & 0xFFFFFFFE);
      Miniport = v8->BindState.Miniport;
      if ( !Miniport->BindEngine.m_isBeingDestroyed )
        Miniport->BindEngine.m_isDirty = 1;
      if ( (unsigned __int8)byte_1C0085323 >= 4u )
        WPP_SF_DZq(0xBu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v8->BindState.m_bindSources, 0LL, 0LL);
    }
    v11 = v8->BindState.m_unbindReasons;
    v8->BindState.m_unbindReasons = v11 & 0xFFFBFFE3;
    if ( (v11 != 0) == ((v11 & 0xFFFBFFE3) != 0) && v8->BindState.Miniport )
      goto LABEL_9;
    if ( (unsigned __int8)byte_1C0085323 >= 5u )
      WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v11, v11 & 0xFFFBFFE3);
    v22 = v8->BindState.Miniport;
    if ( !v22->BindEngine.m_isBeingDestroyed )
      v22->BindEngine.m_isDirty = 1;
    if ( (unsigned __int8)byte_1C0085323 < 4u )
      goto LABEL_9;
    v23 = 12;
  }
  else
  {
    if ( !Ndis::BindState::SetBinding(&v8->BindState, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
      || (unsigned __int8)byte_1C0085323 < 4u )
    {
      goto LABEL_9;
    }
    v23 = 13;
  }
  WPP_SF_Zq(v23, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, 0LL, 0LL);
LABEL_9:
  v12 = v8->BindState.Miniport;
  if ( !v12->BindEngine.m_isBeingDestroyed )
    v12->BindEngine.m_isDirty = 1;
  if ( (unsigned __int8)byte_1C0085323 >= 4u )
  {
    ndisGetBindLinkNameForTracing(*a4, (struct NDIS_PNPTRACE_LOCALS *)v24);
    if ( (unsigned __int8)byte_1C0085323 >= 4u )
      WPP_SF_Zq(0xAu, &WPP_cd76ffd012ea25d52ded3a3c48a898ed_Traceguids, (__int64 *)v24[1], v24[0]);
  }
LABEL_12:
  if ( (*a4)->BindDriver._p == (KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *)-8LL )
    v13 = 0LL;
  else
    v13 = &(*a4)->BindDriver._p->_t.NDIS_BIND_DRIVER_BASE;
  NDIS_BIND_LINK_BASE::LinkToDriver(&(*a4)->NDIS_BIND_LINK_BASE, v13);
  v14 = *a4;
  *a4 = 0LL;
  v15 = v14;
  v16 = *(unsigned int *)(a2 + 8);
  if ( a3 <= v16
    && (unsigned __int8)Rtl::KArray<KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>>::grow(
                          a2,
                          (unsigned int)(v16 + 1)) )
  {
    v17 = *(unsigned int *)(a2 + 8);
    if ( a3 < v17 )
      Rtl::KArray<KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>>::moveElements(
        a2,
        (unsigned int)a3,
        (unsigned int)(a3 + 1),
        (unsigned int)(v17 - a3));
    v18 = (struct NDIS_BIND_FILTER_LINK **)(*(_QWORD *)(a2 + 16) + 8 * a3);
    if ( v18 )
    {
      v15 = 0LL;
      *v18 = v14;
    }
    ++*(_DWORD *)(a2 + 8);
    v19 = 0;
  }
  else
  {
    v19 = 1;
  }
  if ( v15 )
  {
    KRef<NDIS_BIND_FILTER_DRIVER>::unref(&v15->BindDriver);
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(&v15->NDIS_BIND_LINK_BASE);
    ExFreePoolWithTag(v15, 0x4C6C4642u);
  }
  if ( v19 )
    return 0;
  if ( !a1->BindEngine.m_isBeingDestroyed )
    a1->BindEngine.m_isDirty = 1;
  return 1;
}

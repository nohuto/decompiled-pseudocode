/*
 * XREFs of ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@_KAEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A6E0C
 * Callers:
 *     ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A6CF4 (-UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$KPtr@UNDIS_BIN.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C0058E7C (WPP_SF_DZq.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?insertAt@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N_K$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A7130 (-insertAt@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00A8EB4 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00AE2B4 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F48 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

char __fastcall Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_PROTOCOL_LINK>(
        _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        __int64 a3,
        struct NDIS_BIND_PROTOCOL_LINK **a4)
{
  struct NDIS_BIND_PROTOCOL_LINK *v8; // rbx
  int m_bindSources; // r8d
  int m_unbindReasons; // r8d
  int v11; // r8d
  _NDIS_MINIPORT_BLOCK *v12; // rax
  struct NDIS_BIND_PROTOCOL_LINK *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rsi
  _LIST_ENTRY *v16; // rdx
  _LIST_ENTRY *p_DriverLinkage; // rcx
  struct NDIS_BIND_PROTOCOL_LINK *v18; // rax
  char v19; // al
  char *v20; // rbx
  bool v21; // di
  _NDIS_MINIPORT_BLOCK *Miniport; // rax
  _NDIS_MINIPORT_BLOCK *v24; // rax
  unsigned __int16 v25; // cx
  _QWORD v26[20]; // [rsp+30h] [rbp-C8h] BYREF
  PVOID P; // [rsp+100h] [rbp+8h] BYREF

  (*a4)->BindState.Miniport = a1;
  v8 = *a4;
  m_bindSources = (*a4)->BindState.m_bindSources;
  (*a4)->BindState.m_bindSources = m_bindSources | 1;
  if ( m_bindSources != 0 )
    goto LABEL_13;
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
    v24 = v8->BindState.Miniport;
    if ( !v24->BindEngine.m_isBeingDestroyed )
      v24->BindEngine.m_isDirty = 1;
    if ( (unsigned __int8)byte_1C0085323 < 4u )
      goto LABEL_9;
    v25 = 12;
  }
  else
  {
    if ( !Ndis::BindState::SetBinding(&v8->BindState, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
      || (unsigned __int8)byte_1C0085323 < 4u )
    {
      goto LABEL_9;
    }
    v25 = 13;
  }
  WPP_SF_Zq(v25, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, 0LL, 0LL);
LABEL_9:
  v12 = v8->BindState.Miniport;
  if ( !v12->BindEngine.m_isBeingDestroyed )
    v12->BindEngine.m_isDirty = 1;
  if ( (unsigned __int8)byte_1C0085323 >= 4u )
  {
    ndisGetBindLinkNameForTracing(*a4, (struct NDIS_PNPTRACE_LOCALS *)v26);
    WPP_SF_Zq(0xAu, &WPP_cd76ffd012ea25d52ded3a3c48a898ed_Traceguids, (__int64 *)v26[1], v26[0]);
  }
LABEL_13:
  v13 = *a4;
  if ( (*a4)->BindDriver._p == (KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder *)-8LL )
    v14 = 0LL;
  else
    v14 = (__int64)&(*a4)->BindDriver._p->_t.NDIS_BIND_DRIVER_BASE;
  v15 = qword_1C0085818;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v15 + 16, 0LL);
  v16 = *(_LIST_ENTRY **)(v14 + 8);
  p_DriverLinkage = &v13->DriverLinkage;
  v13->DriverLinkage.Flink = v16;
  v13->DriverLinkage.Blink = (_LIST_ENTRY *)(v14 + 8);
  if ( v16->Blink != (_LIST_ENTRY *)(v14 + 8) )
    __fastfail(3u);
  v16->Blink = p_DriverLinkage;
  *(_QWORD *)(v14 + 8) = p_DriverLinkage;
  ExReleasePushLockExclusiveEx(v15 + 16, 0LL);
  KeLeaveCriticalRegion();
  v18 = *a4;
  *a4 = 0LL;
  P = v18;
  v19 = Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::insertAt(a2, a3, &P);
  v20 = (char *)P;
  v21 = v19 == 0;
  if ( P )
  {
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref((char *)P + 104);
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE((NDIS_BIND_LINK_BASE *)(v20 + 8));
    ExFreePoolWithTag(v20, 0x4C745042u);
  }
  if ( v21 )
    return 0;
  if ( !a1->BindEngine.m_isBeingDestroyed )
    a1->BindEngine.m_isDirty = 1;
  return 1;
}

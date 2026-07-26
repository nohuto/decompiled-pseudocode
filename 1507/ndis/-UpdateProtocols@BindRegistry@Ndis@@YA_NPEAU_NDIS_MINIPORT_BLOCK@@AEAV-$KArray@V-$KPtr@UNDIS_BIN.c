/*
 * XREFs of ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A6CF4
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A08E8 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C0058E7C (WPP_SF_DZq.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@_KAEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A6E0C (--$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@A.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F48 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

char __fastcall Ndis::BindRegistry::UpdateProtocols(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // r8d
  Ndis::BindState *v18; // rbx
  char v19; // al
  unsigned __int16 v20; // cx
  int v21; // r8d
  Ndis::BindState *v22; // rbx
  char v23; // al
  unsigned __int16 v24; // cx
  __int64 v25; // rsi
  Ndis::BindState *v26; // rbx
  int v27; // r8d
  char v28; // al
  unsigned __int16 v29; // cx
  __int64 v30; // [rsp+38h] [rbp-69h] BYREF
  __int64 *v31; // [rsp+40h] [rbp-61h]

  v4 = *(unsigned int *)(a3 + 8);
  v5 = 0LL;
  v6 = 0LL;
  v10 = a1;
  if ( !*(_DWORD *)(a3 + 8) )
  {
LABEL_8:
    if ( (a4 & 1) != 0 || v5 >= *(unsigned int *)(a2 + 8) )
      return 1;
    while ( 1 )
    {
      v25 = *(_QWORD *)(a2 + 16);
      v26 = (Ndis::BindState *)(*(_QWORD *)(v25 + 8 * v5) + 8LL);
      v27 = *(_DWORD *)(*(_QWORD *)(v25 + 8 * v5) + 44LL);
      *(_DWORD *)(*(_QWORD *)(v25 + 8 * v5) + 44LL) = v27 & 0xFFFFFFFE;
      if ( (v27 != 0) != ((v27 & 0xFFFFFFFE) != 0) )
        break;
      v28 = 0;
LABEL_78:
      if ( v28 )
      {
        if ( (unsigned __int8)byte_1C0085323 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_PROTOCOL_LINK **)(v25 + 8 * v5),
            (struct NDIS_PNPTRACE_LOCALS *)&v30);
          WPP_SF_Zq(0xDu, &WPP_cd76ffd012ea25d52ded3a3c48a898ed_Traceguids, v31, v30);
        }
      }
      if ( ++v5 >= *(unsigned int *)(a2 + 8) )
        return 1;
    }
    if ( (unsigned __int8)byte_1C0085323 >= 5u )
      WPP_SF_dd(0xAu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v27, v27 & 0xFFFFFFFE);
    if ( v26->m_bindSources )
    {
      if ( Ndis::BindState::SetBinding(v26, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
        && (unsigned __int8)byte_1C0085323 >= 4u )
      {
        WPP_SF_DZq(0xBu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v26->m_bindSources, 0LL, 0LL);
      }
      if ( !Ndis::BindState::SetBinding(
              v26,
              BindingEnabled,
              Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
        || (unsigned __int8)byte_1C0085323 < 4u )
      {
        goto LABEL_75;
      }
      v29 = 12;
    }
    else
    {
      if ( !Ndis::BindState::SetBinding(v26, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
        || (unsigned __int8)byte_1C0085323 < 4u )
      {
        goto LABEL_75;
      }
      v29 = 13;
    }
    WPP_SF_Zq(v29, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, 0LL, 0LL);
LABEL_75:
    if ( !v26->Miniport->BindEngine.m_isBeingDestroyed )
      v26->Miniport->BindEngine.m_isDirty = 1;
    v28 = 1;
    goto LABEL_78;
  }
  while ( 1 )
  {
    if ( v6 >= v4 )
      __fastfail(0xBAD0FFu);
    v11 = *(_QWORD *)(a3 + 16) + 8 * v6;
    if ( v5 >= *(unsigned int *)(a2 + 8) )
      break;
    v13 = *(_QWORD *)(a2 + 16);
    v14 = *(_QWORD *)(v13 + 8 * v5);
    v15 = *(_QWORD *)(*(_QWORD *)v11 + 104LL);
    v16 = *(_QWORD *)(v14 + 104);
    if ( v16 == v15 )
    {
      v17 = *(_DWORD *)(v14 + 44);
      v18 = (Ndis::BindState *)(v14 + 8);
      v18->m_bindSources = v17 | 1;
      if ( v17 != 0 )
      {
        v19 = 0;
        goto LABEL_14;
      }
      if ( (unsigned __int8)byte_1C0085323 >= 5u )
        WPP_SF_dd(0xAu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v17, v17 | 1);
      if ( v18->m_bindSources )
      {
        if ( Ndis::BindState::SetBinding(v18, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
          && (unsigned __int8)byte_1C0085323 >= 4u )
        {
          WPP_SF_DZq(0xBu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v18->m_bindSources, 0LL, 0LL);
        }
        if ( Ndis::BindState::SetBinding(
               v18,
               BindingEnabled,
               Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
          && (unsigned __int8)byte_1C0085323 >= 4u )
        {
          v20 = 12;
          goto LABEL_29;
        }
      }
      else if ( Ndis::BindState::SetBinding(v18, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
             && (unsigned __int8)byte_1C0085323 >= 4u )
      {
        v20 = 13;
LABEL_29:
        WPP_SF_Zq(v20, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, 0LL, 0LL);
      }
      if ( !v18->Miniport->BindEngine.m_isBeingDestroyed )
        v18->Miniport->BindEngine.m_isDirty = 1;
      v19 = 1;
LABEL_14:
      if ( v19 && (unsigned __int8)byte_1C0085323 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v13 + 8 * v5),
          (struct NDIS_PNPTRACE_LOCALS *)&v30);
        WPP_SF_Zq(0xBu, &WPP_cd76ffd012ea25d52ded3a3c48a898ed_Traceguids, v31, v30);
      }
LABEL_5:
      ++v5;
      ++v6;
      goto LABEL_6;
    }
    if ( v16 + 8 >= (unsigned __int64)(v15 + 8) )
      break;
    if ( (a4 & 1) == 0 )
    {
      v21 = *(_DWORD *)(v14 + 44);
      v22 = (Ndis::BindState *)(v14 + 8);
      v22->m_bindSources = v21 & 0xFFFFFFFE;
      if ( (v21 != 0) == ((v21 & 0xFFFFFFFE) != 0) )
      {
        v23 = 0;
LABEL_55:
        if ( v23 && (unsigned __int8)byte_1C0085323 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_PROTOCOL_LINK **)(v13 + 8 * v5),
            (struct NDIS_PNPTRACE_LOCALS *)&v30);
          WPP_SF_Zq(0xCu, &WPP_cd76ffd012ea25d52ded3a3c48a898ed_Traceguids, v31, v30);
        }
        goto LABEL_58;
      }
      if ( (unsigned __int8)byte_1C0085323 >= 5u )
        WPP_SF_dd(0xAu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v21, v21 & 0xFFFFFFFE);
      if ( v22->m_bindSources )
      {
        if ( Ndis::BindState::SetBinding(v22, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
          && (unsigned __int8)byte_1C0085323 >= 4u )
        {
          WPP_SF_DZq(0xBu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v22->m_bindSources, 0LL, 0LL);
        }
        if ( Ndis::BindState::SetBinding(
               v22,
               BindingEnabled,
               Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
          && (unsigned __int8)byte_1C0085323 >= 4u )
        {
          v24 = 12;
          goto LABEL_51;
        }
      }
      else if ( Ndis::BindState::SetBinding(v22, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
             && (unsigned __int8)byte_1C0085323 >= 4u )
      {
        v24 = 13;
LABEL_51:
        WPP_SF_Zq(v24, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, 0LL, 0LL);
      }
      if ( !v22->Miniport->BindEngine.m_isBeingDestroyed )
        v22->Miniport->BindEngine.m_isDirty = 1;
      v23 = 1;
      goto LABEL_55;
    }
LABEL_58:
    ++v5;
LABEL_6:
    v4 = *(unsigned int *)(a3 + 8);
    if ( v6 >= v4 )
      goto LABEL_8;
    v10 = a1;
  }
  if ( (unsigned __int8)Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_PROTOCOL_LINK>(v10, a2, v5, v11) )
    goto LABEL_5;
  return 0;
}

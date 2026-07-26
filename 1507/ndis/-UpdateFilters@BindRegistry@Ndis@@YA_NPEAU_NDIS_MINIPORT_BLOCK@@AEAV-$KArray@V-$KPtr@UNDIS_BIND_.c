/*
 * XREFs of ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A0A64
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A08E8 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C0058E7C (WPP_SF_DZq.c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@_KAEAV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Z @ 0x1C00A0B40 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2E2C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

char __fastcall Ndis::BindRegistry::UpdateFilters(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v4; // eax
  unsigned __int64 v5; // rdi
  __int64 v6; // r15
  __int64 i; // r10
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v14; // r14
  __int64 v15; // rdx
  Ndis::BindState *v16; // rbx
  int v17; // r8d
  char v18; // al
  unsigned __int16 v19; // cx
  __int64 v20; // r14
  Ndis::BindState *v21; // rbx
  int v22; // r8d
  char v23; // al
  unsigned __int16 v24; // cx
  __int64 v25; // rsi
  Ndis::BindState *v26; // rbx
  int v27; // r8d
  char v28; // al
  unsigned __int16 v29; // cx
  int v31; // [rsp+34h] [rbp-95h]
  __int64 v33; // [rsp+40h] [rbp-89h] BYREF
  __int64 *v34; // [rsp+48h] [rbp-81h]

  v4 = *(_DWORD *)(a3 + 8);
  v5 = 0LL;
  v6 = 0LL;
  v31 = v4;
  for ( i = a1; ; i = a1 )
  {
    if ( (_DWORD)v6 == v4 )
    {
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
LABEL_87:
        if ( v28 )
        {
          if ( (unsigned __int8)byte_1C0085323 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v25 + 8 * v5),
              (struct NDIS_PNPTRACE_LOCALS *)&v33);
            if ( (unsigned __int8)byte_1C0085323 >= 4u )
              WPP_SF_Zq(0x10u, &WPP_cd76ffd012ea25d52ded3a3c48a898ed_Traceguids, v34, v33);
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
          goto LABEL_84;
        }
        v29 = 12;
      }
      else
      {
        if ( !Ndis::BindState::SetBinding(v26, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
          || (unsigned __int8)byte_1C0085323 < 4u )
        {
          goto LABEL_84;
        }
        v29 = 13;
      }
      WPP_SF_Zq(v29, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, 0LL, 0LL);
LABEL_84:
      if ( !v26->Miniport->BindEngine.m_isBeingDestroyed )
        v26->Miniport->BindEngine.m_isDirty = 1;
      v28 = 1;
      goto LABEL_87;
    }
    if ( (unsigned int)v6 >= *(_DWORD *)(a3 + 8) )
      __fastfail(0xBAD0FFu);
    v10 = v5;
    v11 = *(unsigned int *)(a2 + 8);
    v12 = *(_QWORD *)(a3 + 16) + 8 * v6;
    if ( v5 >= v11 )
      break;
    while ( 1 )
    {
      v14 = *(_QWORD *)(a2 + 16);
      v15 = *(_QWORD *)(v14 + 8 * v10);
      if ( *(_QWORD *)(*(_QWORD *)v12 + 104LL) == *(_QWORD *)(v15 + 104)
        && *(_DWORD *)(*(_QWORD *)v12 + 112LL) == *(_DWORD *)(v15 + 112) )
      {
        break;
      }
      if ( ++v10 >= v11 )
        goto LABEL_5;
    }
    v16 = (Ndis::BindState *)(v15 + 8);
    v17 = *(_DWORD *)(v15 + 44);
    *(_DWORD *)(v15 + 44) = v17 | 1;
    if ( v17 != 0 )
    {
      v18 = 0;
      goto LABEL_35;
    }
    if ( (unsigned __int8)byte_1C0085323 >= 5u )
      WPP_SF_dd(0xAu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v17, v17 | 1);
    if ( v16->m_bindSources )
    {
      if ( Ndis::BindState::SetBinding(v16, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
        && (unsigned __int8)byte_1C0085323 >= 4u )
      {
        WPP_SF_DZq(0xBu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v16->m_bindSources, 0LL, 0LL);
      }
      if ( !Ndis::BindState::SetBinding(
              v16,
              BindingEnabled,
              Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
        || (unsigned __int8)byte_1C0085323 < 4u )
      {
        goto LABEL_32;
      }
      v19 = 12;
    }
    else
    {
      if ( !Ndis::BindState::SetBinding(v16, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
        || (unsigned __int8)byte_1C0085323 < 4u )
      {
        goto LABEL_32;
      }
      v19 = 13;
    }
    WPP_SF_Zq(v19, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, 0LL, 0LL);
LABEL_32:
    if ( !v16->Miniport->BindEngine.m_isBeingDestroyed )
      v16->Miniport->BindEngine.m_isDirty = 1;
    v18 = 1;
LABEL_35:
    if ( v18 )
    {
      if ( (unsigned __int8)byte_1C0085323 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_FILTER_LINK **)(v14 + 8 * v10),
          (struct NDIS_PNPTRACE_LOCALS *)&v33);
        if ( (unsigned __int8)byte_1C0085323 >= 4u )
          WPP_SF_Zq(0xEu, &WPP_cd76ffd012ea25d52ded3a3c48a898ed_Traceguids, v34, v33);
      }
    }
    if ( (a4 & 1) == 0 )
    {
      while ( v5 < v10 )
      {
        if ( v5 >= *(unsigned int *)(a2 + 8) )
          __fastfail(0xBAD0FFu);
        v20 = *(_QWORD *)(a2 + 16);
        v21 = (Ndis::BindState *)(*(_QWORD *)(v20 + 8 * v5) + 8LL);
        v22 = *(_DWORD *)(*(_QWORD *)(v20 + 8 * v5) + 44LL);
        *(_DWORD *)(*(_QWORD *)(v20 + 8 * v5) + 44LL) = v22 & 0xFFFFFFFE;
        if ( (v22 != 0) == ((v22 & 0xFFFFFFFE) != 0) )
        {
          v23 = 0;
          goto LABEL_60;
        }
        if ( (unsigned __int8)byte_1C0085323 >= 5u )
          WPP_SF_dd(0xAu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v22, v22 & 0xFFFFFFFE);
        if ( v21->m_bindSources )
        {
          if ( Ndis::BindState::SetBinding(v21, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
            && (unsigned __int8)byte_1C0085323 >= 4u )
          {
            WPP_SF_DZq(0xBu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v21->m_bindSources, 0LL, 0LL);
          }
          if ( !Ndis::BindState::SetBinding(
                  v21,
                  BindingEnabled,
                  Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
            || (unsigned __int8)byte_1C0085323 < 4u )
          {
            goto LABEL_57;
          }
          v24 = 12;
        }
        else
        {
          if ( !Ndis::BindState::SetBinding(v21, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
            || (unsigned __int8)byte_1C0085323 < 4u )
          {
            goto LABEL_57;
          }
          v24 = 13;
        }
        WPP_SF_Zq(v24, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, 0LL, 0LL);
LABEL_57:
        if ( !v21->Miniport->BindEngine.m_isBeingDestroyed )
          v21->Miniport->BindEngine.m_isDirty = 1;
        v23 = 1;
LABEL_60:
        if ( v23 && (unsigned __int8)byte_1C0085323 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v20 + 8 * v5),
            (struct NDIS_PNPTRACE_LOCALS *)&v33);
          if ( (unsigned __int8)byte_1C0085323 >= 4u )
            WPP_SF_Zq(0xFu, &WPP_cd76ffd012ea25d52ded3a3c48a898ed_Traceguids, v34, v33);
        }
        ++v5;
      }
    }
    v5 = v10 + 1;
LABEL_7:
    v4 = v31;
    v6 = (unsigned int)(v6 + 1);
  }
LABEL_5:
  if ( (unsigned __int8)Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_FILTER_LINK>(i, a2, v5, v12) )
  {
    ++v5;
    goto LABEL_7;
  }
  return 0;
}

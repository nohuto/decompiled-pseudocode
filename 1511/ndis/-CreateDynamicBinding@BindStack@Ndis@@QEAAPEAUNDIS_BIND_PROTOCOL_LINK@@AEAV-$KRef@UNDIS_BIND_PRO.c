/*
 * XREFs of ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00DD504
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C00568B4 (ndisOpenAdapterLegacyProtocol.c)
 *     _lambda_f15002d7dee2adb7876419c4171e5c91_::_helper_func_cdecl_ @ 0x1C00DDA30 (_lambda_f15002d7dee2adb7876419c4171e5c91_--_helper_func_cdecl_.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C0040948 (WPP_SF_dd_ea_1C0040948.c)
 *     WPP_SF_Zq @ 0x1C004A150 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C0058B6C (WPP_SF_DZq.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C0099310 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x1C00A26F4 (-LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A4E98 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00A58C0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x1C00A5DAC (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDele_ea_1C00A5DAC.c)
 *     ?append@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A6054 (-append@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@.c)
 *     ?insertAt@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N_K$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A6218 (-insertAt@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@.c)
 *     Ndis::sortProtocolsByPointer @ 0x1C00AAD30 (Ndis--sortProtocolsByPointer.c)
 *     ?IsAlive@BindState@Ndis@@QEBA_NXZ @ 0x1C00BE410 (-IsAlive@BindState@Ndis@@QEBA_NXZ.c)
 */

PVOID __fastcall Ndis::BindStack::CreateDynamicBinding(__int64 a1, volatile signed __int32 **a2, __int64 a3, int a4)
{
  char *v8; // rbx
  PVOID v9; // rdi
  unsigned __int64 v10; // r8
  __int64 i; // rdx
  __int64 v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rcx
  Ndis::BindState *v15; // rbx
  int v16; // r8d
  unsigned __int16 v17; // cx
  struct NDIS_BIND_DRIVER_BASE *v18; // rdx
  Ndis::BindState *v19; // rbx
  int v20; // r8d
  unsigned __int16 v21; // cx
  unsigned __int64 v22; // rbx
  char v23; // al
  PVOID P[2]; // [rsp+30h] [rbp-38h] BYREF

  Ndis::BindStack::BuildProtocolLink(a1, P, a2);
  v8 = (char *)P[0];
  if ( !P[0] )
  {
    v9 = 0LL;
    goto LABEL_54;
  }
  v10 = *(unsigned int *)(a1 + 16);
  for ( i = 0LL; (_DWORD)i != (_DWORD)v10; i = (unsigned int)(i + 1) )
  {
    v12 = (unsigned int)i;
    if ( (unsigned int)i >= v10 )
      __fastfail(0xBAD0FFu);
    v13 = *(_QWORD *)(a1 + 24);
    if ( a4 != 4 || !Ndis::BindState::IsAlive((Ndis::BindState *)(*(_QWORD *)(v13 + 8 * i) + 8LL)) )
    {
      v14 = *(_QWORD *)(v13 + 8 * i);
      if ( *(_QWORD *)(v14 + 104) == *((_QWORD *)v8 + 13) )
      {
        v15 = (Ndis::BindState *)(v14 + 8);
        v16 = *(_DWORD *)(v14 + 44);
        *(_DWORD *)(v14 + 44) = a4 | v16;
        if ( (v16 != 0) != ((a4 | v16) != 0) )
        {
          if ( (unsigned __int8)byte_1C0083723 >= 5u )
            WPP_SF_dd(0xAu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v16, a4 | v16);
          if ( v15->m_bindSources )
          {
            if ( Ndis::BindState::SetBinding(v15, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
              && (unsigned __int8)byte_1C0083723 >= 4u )
            {
              WPP_SF_DZq(0xBu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v15->m_bindSources, 0LL, 0LL);
            }
            if ( Ndis::BindState::SetBinding(
                   v15,
                   BindingEnabled,
                   Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
              && (unsigned __int8)byte_1C0083723 >= 4u )
            {
              v17 = 12;
              goto LABEL_23;
            }
          }
          else if ( Ndis::BindState::SetBinding(v15, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
                 && (unsigned __int8)byte_1C0083723 >= 4u )
          {
            v17 = 13;
LABEL_23:
            WPP_SF_Zq(v17, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, 0LL, 0LL);
          }
          v15->Miniport->BindEngine.m_isDirty = 1;
        }
        v9 = *(PVOID *)(v13 + 8 * v12);
        goto LABEL_53;
      }
    }
  }
  *((_QWORD *)v8 + 2) = a3;
  if ( *a2 == (volatile signed __int32 *)-8LL )
    v18 = 0LL;
  else
    v18 = (struct NDIS_BIND_DRIVER_BASE *)(*a2 + 4);
  NDIS_BIND_LINK_BASE::LinkToDriver((NDIS_BIND_LINK_BASE *)((char *)P[0] + 8), v18);
  v19 = (Ndis::BindState *)((char *)P[0] + 8);
  v20 = *((_DWORD *)P[0] + 11);
  *((_DWORD *)P[0] + 11) = a4 | v20;
  if ( (v20 != 0) != ((a4 | v20) != 0) )
  {
    if ( (unsigned __int8)byte_1C0083723 >= 5u )
      WPP_SF_dd(0xAu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v20, a4 | v20);
    if ( v19->m_bindSources )
    {
      if ( Ndis::BindState::SetBinding(v19, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
        && (unsigned __int8)byte_1C0083723 >= 4u )
      {
        WPP_SF_DZq(0xBu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v19->m_bindSources, 0LL, 0LL);
      }
      if ( !Ndis::BindState::SetBinding(
              v19,
              BindingEnabled,
              Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
        || (unsigned __int8)byte_1C0083723 < 4u )
      {
        goto LABEL_44;
      }
      v21 = 12;
    }
    else
    {
      if ( !Ndis::BindState::SetBinding(v19, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
        || (unsigned __int8)byte_1C0083723 < 4u )
      {
        goto LABEL_44;
      }
      v21 = 13;
    }
    WPP_SF_Zq(v21, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, 0LL, 0LL);
LABEL_44:
    v19->Miniport->BindEngine.m_isDirty = 1;
  }
  v9 = P[0];
  v22 = 0LL;
  if ( *(_DWORD *)(a1 + 16) )
  {
    while ( Ndis::sortProtocolsByPointer(*(_QWORD *)(a1 + 24) + 8 * v22, (__int64)P) )
    {
      if ( ++v22 >= *(unsigned int *)(a1 + 16) )
        goto LABEL_48;
    }
    v23 = Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::insertAt(
            a1 + 8,
            v22,
            (__int64 *)P);
  }
  else
  {
LABEL_48:
    v23 = Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::append(a1 + 8, (__int64 *)P);
  }
  if ( v23 )
  {
    ++*(_DWORD *)(a1 + 136);
    *(_BYTE *)(a3 + 5312) = 1;
  }
  else
  {
    v9 = 0LL;
  }
LABEL_53:
  v8 = (char *)P[0];
LABEL_54:
  if ( v8 )
  {
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref((volatile signed __int32 **)v8 + 13);
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE((NDIS_BIND_LINK_BASE *)(v8 + 8));
    ExFreePoolWithTag(v8, 0x4C745042u);
  }
  return v9;
}

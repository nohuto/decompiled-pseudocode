/*
 * XREFs of ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00E3130
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0056A24 (ndisOpenAdapterLegacyProtocol.c)
 *     _lambda_f15002d7dee2adb7876419c4171e5c91_::_helper_func_cdecl_ @ 0x1C00E34A0 (_lambda_f15002d7dee2adb7876419c4171e5c91_--_helper_func_cdecl_.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C0058E7C (WPP_SF_DZq.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?IsAlive@BindState@Ndis@@QEBA_NXZ @ 0x1C00A335C (-IsAlive@BindState@Ndis@@QEBA_NXZ.c)
 *     ?append@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A6FE0 (-append@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@.c)
 *     ?insertAt@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N_K$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A7130 (-insertAt@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@.c)
 *     ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x1C00A8E48 (-LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00A8EB4 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00AE2B4 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     Ndis::sortProtocolsByPointer @ 0x1C00B08E8 (Ndis--sortProtocolsByPointer.c)
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x1C00C5498 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_B.c)
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
  _NDIS_MINIPORT_BLOCK *Miniport; // rax
  struct NDIS_BIND_DRIVER_BASE *v19; // rdx
  Ndis::BindState *v20; // rbx
  int v21; // r8d
  unsigned __int16 v22; // cx
  _NDIS_MINIPORT_BLOCK *v23; // rax
  unsigned __int64 v24; // rbx
  char v25; // al
  PVOID P[2]; // [rsp+30h] [rbp-38h] BYREF

  Ndis::BindStack::BuildProtocolLink(a1, P, a2);
  v8 = (char *)P[0];
  if ( !P[0] )
  {
    v9 = 0LL;
    goto LABEL_57;
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
          if ( (unsigned __int8)byte_1C0085323 >= 5u )
            WPP_SF_dd(0xAu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v16, a4 | v16);
          if ( v15->m_bindSources )
          {
            if ( Ndis::BindState::SetBinding(v15, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
              && (unsigned __int8)byte_1C0085323 >= 4u )
            {
              WPP_SF_DZq(0xBu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v15->m_bindSources, 0LL, 0LL);
            }
            if ( Ndis::BindState::SetBinding(
                   v15,
                   BindingEnabled,
                   Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
              && (unsigned __int8)byte_1C0085323 >= 4u )
            {
              v17 = 12;
              goto LABEL_23;
            }
          }
          else if ( Ndis::BindState::SetBinding(v15, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
                 && (unsigned __int8)byte_1C0085323 >= 4u )
          {
            v17 = 13;
LABEL_23:
            WPP_SF_Zq(v17, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, 0LL, 0LL);
          }
          Miniport = v15->Miniport;
          if ( !Miniport->BindEngine.m_isBeingDestroyed )
            Miniport->BindEngine.m_isDirty = 1;
        }
        v9 = *(PVOID *)(v13 + 8 * v12);
        goto LABEL_56;
      }
    }
  }
  *((_QWORD *)v8 + 2) = a3;
  if ( *a2 == (volatile signed __int32 *)-8LL )
    v19 = 0LL;
  else
    v19 = (struct NDIS_BIND_DRIVER_BASE *)(*a2 + 4);
  NDIS_BIND_LINK_BASE::LinkToDriver((NDIS_BIND_LINK_BASE *)((char *)P[0] + 8), v19);
  v20 = (Ndis::BindState *)((char *)P[0] + 8);
  v21 = *((_DWORD *)P[0] + 11);
  *((_DWORD *)P[0] + 11) = a4 | v21;
  if ( (v21 != 0) != ((a4 | v21) != 0) )
  {
    if ( (unsigned __int8)byte_1C0085323 >= 5u )
      WPP_SF_dd(0xAu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v21, a4 | v21);
    if ( v20->m_bindSources )
    {
      if ( Ndis::BindState::SetBinding(v20, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
        && (unsigned __int8)byte_1C0085323 >= 4u )
      {
        WPP_SF_DZq(0xBu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v20->m_bindSources, 0LL, 0LL);
      }
      if ( !Ndis::BindState::SetBinding(
              v20,
              BindingEnabled,
              Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
        || (unsigned __int8)byte_1C0085323 < 4u )
      {
        goto LABEL_45;
      }
      v22 = 12;
    }
    else
    {
      if ( !Ndis::BindState::SetBinding(v20, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
        || (unsigned __int8)byte_1C0085323 < 4u )
      {
LABEL_45:
        v23 = v20->Miniport;
        if ( !v23->BindEngine.m_isBeingDestroyed )
          v23->BindEngine.m_isDirty = 1;
        goto LABEL_47;
      }
      v22 = 13;
    }
    WPP_SF_Zq(v22, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, 0LL, 0LL);
    goto LABEL_45;
  }
LABEL_47:
  v24 = 0LL;
  v9 = P[0];
  if ( *(_DWORD *)(a1 + 16) )
  {
    while ( Ndis::sortProtocolsByPointer(*(_QWORD *)(a1 + 24) + 8 * v24, (__int64)P) )
    {
      if ( ++v24 >= *(unsigned int *)(a1 + 16) )
        goto LABEL_50;
    }
    v25 = Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::insertAt(
            a1 + 8,
            v24,
            (__int64 *)P);
  }
  else
  {
LABEL_50:
    v25 = Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::append(a1 + 8, (__int64 *)P);
  }
  if ( v25 )
  {
    ++*(_DWORD *)(a1 + 136);
    if ( !*(_BYTE *)(a3 + 5313) )
      *(_BYTE *)(a3 + 5312) = 1;
  }
  else
  {
    v9 = 0LL;
  }
LABEL_56:
  v8 = (char *)P[0];
LABEL_57:
  if ( v8 )
  {
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref((volatile signed __int32 **)v8 + 13);
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE((NDIS_BIND_LINK_BASE *)(v8 + 8));
    ExFreePoolWithTag(v8, 0x4C745042u);
  }
  return v9;
}

/*
 * XREFs of ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A3CE0
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A1C64 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A222C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A2FD4 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     WPP_SF__guid_D @ 0x1C006F670 (WPP_SF__guid_D_ea_1C006F670.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?GetActualBindingState@BindState@Ndis@@QEAA?AW4BINDING_ENABLED_OR_DISABLED@@XZ @ 0x1C00C5594 (-GetActualBindingState@BindState@Ndis@@QEAA-AW4BINDING_ENABLED_OR_DISABLED@@XZ.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2E2C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F48 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::UnbindOnDetach(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  int v2; // r15d
  enum BINDING_ENABLED_OR_DISABLED v3; // r12d
  __int64 i; // r14
  __int64 v6; // rsi
  __int64 v7; // rbx
  int v8; // r8d
  char v9; // al
  __int64 v10; // rdx
  int v11; // r15d
  __int64 j; // rdi
  __int64 v13; // r14
  __int64 v14; // rbx
  int v15; // r8d
  char v16; // al
  unsigned __int16 v17; // cx
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int16 v20; // cx
  __int64 v21; // [rsp+28h] [rbp-79h] BYREF
  __int64 *v22; // [rsp+30h] [rbp-71h]

  v2 = *((_DWORD *)this + 10);
  v3 = BindingEnabled;
  for ( i = 0LL; (_DWORD)i != v2; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 10) )
      __fastfail(0xBAD0FFu);
    v6 = *((_QWORD *)this + 6);
    v7 = *(_QWORD *)(v6 + 8 * i);
    if ( *(_DWORD *)(v7 + 72) || *(_DWORD *)(v7 + 44) )
    {
      if ( v3 )
      {
        if ( Ndis::BindState::SetBinding((Ndis::BindState *)(v7 + 8), v3, Reason_UnbindOnDetach) )
        {
          if ( (unsigned __int8)byte_1C0085323 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)&v21);
            if ( (unsigned __int8)byte_1C0085323 >= 4u )
            {
              v17 = 54;
LABEL_36:
              WPP_SF_Zq(v17, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v22, v21);
            }
          }
        }
      }
      else
      {
        v8 = *(_DWORD *)(v7 + 48);
        *(_DWORD *)(v7 + 48) = v8 & 0xFFFFFBFF;
        if ( (v8 != 0) == ((v8 & 0xFFFFFBFF) != 0) && *(_QWORD *)(v7 + 16) )
        {
          v9 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C0085323 >= 5u )
            WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v8, v8 & 0xFFFFFBFF);
          if ( !*(_BYTE *)(*(_QWORD *)(v7 + 16) + 5313LL) )
            *(_BYTE *)(*(_QWORD *)(v7 + 16) + 5312LL) = 1;
          v9 = 1;
        }
        if ( v9 )
        {
          if ( (unsigned __int8)byte_1C0085323 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)&v21);
            if ( (unsigned __int8)byte_1C0085323 >= 4u )
            {
              v17 = 53;
              goto LABEL_36;
            }
          }
        }
      }
      v10 = *(_QWORD *)(v6 + 8 * i);
      if ( (*(_DWORD *)(*(_QWORD *)(v10 + 104) + 56LL) & 8) != 0
        && *(_DWORD *)(v10 + 48)
        && Ndis::BindState::GetActualBindingState((Ndis::BindState *)(v10 + 8)) == BindingEnabled )
      {
        v3 = BindingDisabled;
        if ( (unsigned __int8)byte_1C0085323 >= 5u )
          WPP_SF__guid_D(0x37u, v18, v19 + 40, *(_DWORD *)(v18 + 112));
      }
      continue;
    }
  }
  v11 = *((_DWORD *)this + 4);
  for ( j = 0LL; (_DWORD)j != v11; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= *((_DWORD *)this + 4) )
      __fastfail(0xBAD0FFu);
    v13 = *((_QWORD *)this + 3);
    if ( v3 )
    {
      if ( Ndis::BindState::SetBinding((Ndis::BindState *)(*(_QWORD *)(v13 + 8 * j) + 8LL), v3, Reason_UnbindOnDetach)
        && (unsigned __int8)byte_1C0085323 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v13 + 8 * j),
          (struct NDIS_PNPTRACE_LOCALS *)&v21);
        v20 = 57;
        goto LABEL_52;
      }
    }
    else
    {
      v14 = *(_QWORD *)(v13 + 8 * j);
      v15 = *(_DWORD *)(v14 + 48);
      *(_DWORD *)(v14 + 48) = v15 & 0xFFFFFBFF;
      if ( (v15 != 0) == ((v15 & 0xFFFFFBFF) != 0) && *(_QWORD *)(v14 + 16) )
      {
        v16 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0085323 >= 5u )
          WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v15, v15 & 0xFFFFFBFF);
        if ( !*(_BYTE *)(*(_QWORD *)(v14 + 16) + 5313LL) )
          *(_BYTE *)(*(_QWORD *)(v14 + 16) + 5312LL) = 1;
        v16 = 1;
      }
      if ( v16 && (unsigned __int8)byte_1C0085323 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v13 + 8 * j),
          (struct NDIS_PNPTRACE_LOCALS *)&v21);
        v20 = 56;
LABEL_52:
        WPP_SF_Zq(v20, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v22, v21);
        continue;
      }
    }
  }
}

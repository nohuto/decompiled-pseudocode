/*
 * XREFs of ?CheckMissingModifyingFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A45F4
 * Callers:
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2E2C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::CheckMissingModifyingFilter(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  int v2; // r12d
  BOOL v3; // ebp
  __int64 i; // rsi
  __int64 v6; // r14
  __int64 v7; // rbx
  int v8; // r8d
  char v9; // al
  unsigned __int16 v10; // cx
  _QWORD v11[20]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = *((_DWORD *)this + 10);
  v3 = 0;
  for ( i = 0LL; (_DWORD)i != v2; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 10) )
      __fastfail(0xBAD0FFu);
    v6 = *((_QWORD *)this + 6);
    v7 = *(_QWORD *)(v6 + 8 * i);
    if ( *(_DWORD *)(v7 + 72) || *(_DWORD *)(v7 + 44) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v7 + 104) + 56LL) & 2) == 0 )
      {
        v3 = *(_DWORD *)(v7 + 48) != 0;
        continue;
      }
      if ( v3 )
      {
        if ( Ndis::BindState::SetBinding((Ndis::BindState *)(v7 + 8), BindingDisabled, Reason_MissingModifyingFilter) )
        {
          if ( (unsigned __int8)byte_1C0085323 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)v11);
            if ( (unsigned __int8)byte_1C0085323 >= 4u )
            {
              v10 = 28;
              goto LABEL_30;
            }
          }
        }
      }
      else
      {
        v8 = *(_DWORD *)(v7 + 48);
        *(_DWORD *)(v7 + 48) = v8 & 0xFFFFFF7F;
        if ( (v8 != 0) == ((v8 & 0xFFFFFF7F) != 0) && *(_QWORD *)(v7 + 16) )
        {
          v9 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C0085323 >= 5u )
            WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v8, v8 & 0xFFFFFF7F);
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
              (struct NDIS_PNPTRACE_LOCALS *)v11);
            if ( (unsigned __int8)byte_1C0085323 >= 4u )
            {
              v10 = 27;
LABEL_30:
              WPP_SF_Zq(v10, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, (__int64 *)v11[1], v11[0]);
              continue;
            }
          }
        }
      }
    }
  }
}

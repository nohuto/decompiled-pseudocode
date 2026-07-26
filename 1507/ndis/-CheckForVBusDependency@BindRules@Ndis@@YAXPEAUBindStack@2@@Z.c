/*
 * XREFs of ?CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A4904
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A1C64 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A222C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A2FD4 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F48 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::CheckForVBusDependency(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  int v2; // r15d
  __int64 i; // rdi
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rcx
  char v8; // dl
  int v9; // r8d
  char v10; // al
  unsigned __int16 v11; // cx
  _QWORD v12[20]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = *((_DWORD *)this + 4);
  for ( i = 0LL; (_DWORD)i != v2; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 4) )
      __fastfail(0xBAD0FFu);
    v5 = *((_QWORD *)this + 3);
    v6 = *(_QWORD *)(v5 + 8 * i);
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 104) + 56LL);
    if ( v7 )
    {
      v8 = 1;
      if ( (*(_DWORD *)(v7 + 64) & 0x10000000) != 0 )
        v8 = byte_1C0085248;
      if ( v8 )
      {
        v9 = *(_DWORD *)(v6 + 48);
        *(_DWORD *)(v6 + 48) = v9 & 0xFFDFFFFF;
        if ( (v9 != 0) == ((v9 & 0xFFDFFFFF) != 0) && *(_QWORD *)(v6 + 16) )
        {
          v10 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C0085323 >= 5u )
            WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v9, v9 & 0xFFDFFFFF);
          if ( !*(_BYTE *)(*(_QWORD *)(v6 + 16) + 5313LL) )
            *(_BYTE *)(*(_QWORD *)(v6 + 16) + 5312LL) = 1;
          v10 = 1;
        }
        if ( v10 && (unsigned __int8)byte_1C0085323 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_PROTOCOL_LINK **)(v5 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v12);
          v11 = 19;
LABEL_24:
          WPP_SF_Zq(v11, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, (__int64 *)v12[1], v12[0]);
          continue;
        }
      }
      else if ( Ndis::BindState::SetBinding((Ndis::BindState *)(v6 + 8), BindingDisabled, Reason_ProtocolDependsOnVBus)
             && (unsigned __int8)byte_1C0085323 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v5 + 8 * i),
          (struct NDIS_PNPTRACE_LOCALS *)v12);
        v11 = 20;
        goto LABEL_24;
      }
    }
  }
}

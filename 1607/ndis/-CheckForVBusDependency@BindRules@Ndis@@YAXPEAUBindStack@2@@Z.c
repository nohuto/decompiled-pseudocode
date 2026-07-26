/*
 * XREFs of ?CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A6628
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A527C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C0042EFC (WPP_SF_dd_ea_1C0042EFC.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A6BC8 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::CheckForVBusDependency(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  int v2; // r15d
  __int64 i; // rdi
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rcx
  bool v8; // zf
  char v9; // cl
  int v10; // r8d
  char v11; // al
  unsigned __int16 v12; // cx
  _QWORD v13[20]; // [rsp+20h] [rbp-B8h] BYREF

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
      v8 = (*(_DWORD *)(v7 + 64) & 0x10000000) == 0;
      v9 = 1;
      if ( !v8 )
        v9 = byte_1C00890D8;
      if ( v9 )
      {
        v10 = *(_DWORD *)(v6 + 48);
        *(_DWORD *)(v6 + 48) = v10 & 0xFFDFFFFF;
        if ( (v10 != 0) == ((v10 & 0xFFDFFFFF) != 0) && *(_QWORD *)(v6 + 16) )
        {
          v11 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C00895E3 >= 5u )
            WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v10, v10 & 0xFFDFFFFF);
          *(_BYTE *)(*(_QWORD *)(v6 + 16) + 5312LL) = 1;
          v11 = 1;
        }
        if ( v11 && (unsigned __int8)byte_1C00895E3 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_PROTOCOL_LINK **)(v5 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v13);
          v12 = 19;
LABEL_22:
          WPP_SF_Zq(v12, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, (unsigned __int16 *)v13[1], v13[0]);
          continue;
        }
      }
      else if ( Ndis::BindState::SetBinding((Ndis::BindState *)(v6 + 8), BindingDisabled, Reason_ProtocolDependsOnVBus)
             && (unsigned __int8)byte_1C00895E3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v5 + 8 * i),
          (struct NDIS_PNPTRACE_LOCALS *)v13);
        v12 = 20;
        goto LABEL_22;
      }
    }
  }
}

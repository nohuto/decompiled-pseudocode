/*
 * XREFs of ?UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A5CD0
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A527C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0042EFC (WPP_SF_dd_ea_1C0042EFC.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     WPP_SF__guid_D @ 0x1C00739A0 (WPP_SF__guid_D_ea_1C00739A0.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A6BC8 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2FA4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::UnbindOnAttach(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  int v2; // r12d
  enum BINDING_ENABLED_OR_DISABLED v3; // r13d
  __int64 i; // r14
  __int64 v6; // rsi
  __int64 v7; // rbx
  int v8; // r8d
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r12d
  __int64 j; // rbx
  __int64 v14; // r14
  __int64 v15; // rdi
  int v16; // r8d
  char v17; // al
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // cx
  __int64 v20; // [rsp+28h] [rbp-79h] BYREF
  unsigned __int16 *v21; // [rsp+30h] [rbp-71h]

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
        if ( Ndis::BindState::SetBinding((Ndis::BindState *)(v7 + 8), v3, Reason_UnbindOnAttach)
          && (unsigned __int8)byte_1C00895E3 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)&v20);
          if ( (unsigned __int8)byte_1C00895E3 >= 4u )
          {
            v18 = 49;
LABEL_48:
            WPP_SF_Zq(v18, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v21, v20);
          }
        }
      }
      else
      {
        v8 = *(_DWORD *)(v7 + 48);
        *(_DWORD *)(v7 + 48) = v8 & 0xFFFFFDFF;
        if ( (v8 != 0) == ((v8 & 0xFFFFFDFF) != 0) && *(_QWORD *)(v7 + 16) )
        {
          v9 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C00895E3 >= 5u )
            WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v8, v8 & 0xFFFFFDFF);
          *(_BYTE *)(*(_QWORD *)(v7 + 16) + 5312LL) = 1;
          v9 = 1;
        }
        if ( v9 )
        {
          if ( (unsigned __int8)byte_1C00895E3 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)&v20);
            if ( (unsigned __int8)byte_1C00895E3 >= 4u )
            {
              v18 = 48;
              goto LABEL_48;
            }
          }
        }
      }
      v10 = *(_QWORD *)(v6 + 8 * i);
      v11 = *(_QWORD *)(v10 + 104);
      if ( (*(_DWORD *)(v11 + 56) & 4) != 0 && !*(_DWORD *)(v10 + 48) && !*(_BYTE *)(v10 + 25) && !*(_DWORD *)(v10 + 72) )
      {
        v3 = BindingDisabled;
        if ( (unsigned __int8)byte_1C00895E3 >= 5u )
          WPP_SF__guid_D(0x32u, v10, v11 + 40, *(_DWORD *)(v10 + 112));
      }
      continue;
    }
  }
  v12 = *((_DWORD *)this + 4);
  for ( j = 0LL; (_DWORD)j != v12; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= *((_DWORD *)this + 4) )
      __fastfail(0xBAD0FFu);
    v14 = *((_QWORD *)this + 3);
    if ( v3 )
    {
      if ( Ndis::BindState::SetBinding((Ndis::BindState *)(*(_QWORD *)(v14 + 8 * j) + 8LL), v3, Reason_UnbindOnAttach)
        && (unsigned __int8)byte_1C00895E3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v14 + 8 * j),
          (struct NDIS_PNPTRACE_LOCALS *)&v20);
        v19 = 52;
LABEL_50:
        WPP_SF_Zq(v19, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v21, v20);
        continue;
      }
    }
    else
    {
      v15 = *(_QWORD *)(v14 + 8 * j);
      v16 = *(_DWORD *)(v15 + 48);
      *(_DWORD *)(v15 + 48) = v16 & 0xFFFFFDFF;
      if ( (v16 != 0) == ((v16 & 0xFFFFFDFF) != 0) && *(_QWORD *)(v15 + 16) )
      {
        v17 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C00895E3 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v16, v16 & 0xFFFFFDFF);
        *(_BYTE *)(*(_QWORD *)(v15 + 16) + 5312LL) = 1;
        v17 = 1;
      }
      if ( v17 && (unsigned __int8)byte_1C00895E3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v14 + 8 * j),
          (struct NDIS_PNPTRACE_LOCALS *)&v20);
        v19 = 51;
        goto LABEL_50;
      }
    }
  }
}

/*
 * XREFs of ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1C00A5950
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

void __fastcall Ndis::BindRules::MakeOptionalFiltersMandatoryDuringBoot(
        Ndis::BindRules *this,
        struct Ndis::BindStack *a2)
{
  int v2; // r15d
  enum BINDING_ENABLED_OR_DISABLED v3; // r12d
  __int64 v4; // r14
  __int64 v6; // rsi
  __int64 v7; // rbx
  int v8; // r8d
  char v9; // al
  int v10; // r15d
  __int64 i; // r14
  __int64 v12; // rsi
  __int64 v13; // rbx
  int v14; // r8d
  char v15; // al
  __int64 v16; // rbx
  int v17; // r8d
  char v18; // al
  int v19; // r8d
  char v20; // al
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int16 v23; // cx
  unsigned __int16 v24; // cx
  __int64 v25; // [rsp+28h] [rbp-89h]
  __int64 v26; // [rsp+38h] [rbp-79h] BYREF
  unsigned __int16 *v27; // [rsp+40h] [rbp-71h]

  v2 = *((_DWORD *)this + 10);
  v3 = BindingEnabled;
  v4 = 0LL;
  LOBYTE(v25) = (_BYTE)a2;
  while ( (_DWORD)v4 != v2 )
  {
    if ( (unsigned int)v4 >= *((_DWORD *)this + 10) )
      __fastfail(0xBAD0FFu);
    v6 = *((_QWORD *)this + 6);
    v7 = *(_QWORD *)(v6 + 8 * v4);
    if ( *(_DWORD *)(v7 + 72) || *(_DWORD *)(v7 + 44) )
    {
      if ( (_BYTE)a2 )
      {
        if ( v3 )
        {
          if ( Ndis::BindState::SetBinding((Ndis::BindState *)(v7 + 8), v3, Reason_MissingOptionalFilter)
            && (unsigned __int8)byte_1C00895E3 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * v4),
              (struct NDIS_PNPTRACE_LOCALS *)&v26);
            if ( (unsigned __int8)byte_1C00895E3 >= 4u )
            {
              v23 = 42;
              goto LABEL_57;
            }
          }
LABEL_58:
          LOBYTE(a2) = v25;
        }
        else
        {
          v19 = *(_DWORD *)(v7 + 48);
          *(_DWORD *)(v7 + 48) = v19 & 0xFFFFFFBF;
          if ( (v19 != 0) == ((v19 & 0xFFFFFFBF) != 0) && *(_QWORD *)(v7 + 16) )
          {
            v20 = 0;
          }
          else
          {
            if ( (unsigned __int8)byte_1C00895E3 >= 5u )
            {
              WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v19, v19 & 0xFFFFFFBF);
              LOBYTE(a2) = v25;
            }
            *(_BYTE *)(*(_QWORD *)(v7 + 16) + 5312LL) = 1;
            v20 = 1;
          }
          if ( v20 && (unsigned __int8)byte_1C00895E3 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * v4),
              (struct NDIS_PNPTRACE_LOCALS *)&v26);
            if ( (unsigned __int8)byte_1C00895E3 >= 4u )
            {
              v23 = 41;
              goto LABEL_57;
            }
            goto LABEL_58;
          }
        }
        if ( !(_BYTE)a2 )
          goto LABEL_11;
        v21 = *(_QWORD *)(v6 + 8 * v4);
        v22 = *(_QWORD *)(v21 + 104);
        if ( (*(_DWORD *)(v22 + 56) & 0x11) == 1 && !*(_QWORD *)(v22 + 72) )
        {
          if ( (unsigned __int8)byte_1C00895E3 >= 5u )
            WPP_SF__guid_D(0x2Cu, v21, v22 + 40, *(_DWORD *)(v21 + 112));
          v3 = BindingDisabled;
        }
LABEL_36:
        LOBYTE(a2) = v25;
        goto LABEL_11;
      }
      if ( v3 == BindingEnabled )
      {
        v8 = *(_DWORD *)(v7 + 48);
        *(_DWORD *)(v7 + 48) = v8 & 0xFFFFFFBF;
        if ( (v8 != 0) == ((v8 & 0xFFFFFFBF) != 0) && *(_QWORD *)(v7 + 16) )
        {
          v9 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C00895E3 >= 5u )
          {
            WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v8, v8 & 0xFFFFFFBF);
            LOBYTE(a2) = v25;
          }
          *(_BYTE *)(*(_QWORD *)(v7 + 16) + 5312LL) = 1;
          v9 = 1;
        }
        if ( v9 && (unsigned __int8)byte_1C00895E3 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * v4),
            (struct NDIS_PNPTRACE_LOCALS *)&v26);
          if ( (unsigned __int8)byte_1C00895E3 >= 4u )
          {
            v23 = 43;
LABEL_57:
            WPP_SF_Zq(v23, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v27, v26, v25);
            goto LABEL_58;
          }
          goto LABEL_36;
        }
      }
    }
LABEL_11:
    v4 = (unsigned int)(v4 + 1);
  }
  v10 = *((_DWORD *)this + 4);
  for ( i = 0LL; (_DWORD)i != v10; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 4) )
      __fastfail(0xBAD0FFu);
    v12 = *((_QWORD *)this + 3);
    if ( (_BYTE)a2 )
    {
      if ( v3 )
      {
        if ( Ndis::BindState::SetBinding(
               (Ndis::BindState *)(*(_QWORD *)(v12 + 8 * i) + 8LL),
               v3,
               Reason_MissingOptionalFilter)
          && (unsigned __int8)byte_1C00895E3 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_PROTOCOL_LINK **)(v12 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)&v26);
          v24 = 46;
          goto LABEL_76;
        }
      }
      else
      {
        v16 = *(_QWORD *)(v12 + 8 * i);
        v17 = *(_DWORD *)(v16 + 48);
        *(_DWORD *)(v16 + 48) = v17 & 0xFFFFFFBF;
        if ( (v17 != 0) == ((v17 & 0xFFFFFFBF) != 0) && *(_QWORD *)(v16 + 16) )
        {
          v18 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C00895E3 >= 5u )
            WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v17, v17 & 0xFFFFFFBF);
          *(_BYTE *)(*(_QWORD *)(v16 + 16) + 5312LL) = 1;
          v18 = 1;
        }
        if ( v18 && (unsigned __int8)byte_1C00895E3 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_PROTOCOL_LINK **)(v12 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)&v26);
          v24 = 45;
LABEL_76:
          WPP_SF_Zq(v24, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v27, v26, v25);
        }
      }
    }
    else if ( v3 == BindingEnabled )
    {
      v13 = *(_QWORD *)(v12 + 8 * i);
      v14 = *(_DWORD *)(v13 + 48);
      *(_DWORD *)(v13 + 48) = v14 & 0xFFFFFFBF;
      if ( (v14 != 0) == ((v14 & 0xFFFFFFBF) != 0) && *(_QWORD *)(v13 + 16) )
      {
        v15 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C00895E3 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v14, v14 & 0xFFFFFFBF);
        *(_BYTE *)(*(_QWORD *)(v13 + 16) + 5312LL) = 1;
        v15 = 1;
      }
      if ( v15 && (unsigned __int8)byte_1C00895E3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v12 + 8 * i),
          (struct NDIS_PNPTRACE_LOCALS *)&v26);
        v24 = 47;
        goto LABEL_76;
      }
    }
    LOBYTE(a2) = v25;
  }
}

/*
 * XREFs of ?CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A6088
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A527C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0042EFC (WPP_SF_dd_ea_1C0042EFC.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     WPP_SF__guid_D @ 0x1C00739A0 (WPP_SF__guid_D_ea_1C00739A0.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2FA4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::CheckMissingMandatoryFilter(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  int v2; // r12d
  int v3; // r15d
  __int64 i; // r14
  __int64 v6; // rsi
  __int64 v7; // rbx
  int v8; // r8d
  int v9; // ecx
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // r12d
  __int64 j; // rdi
  __int64 v15; // r14
  int v16; // ecx
  __int64 v17; // rbx
  int v18; // r8d
  char v19; // al
  char v20; // al
  char v21; // al
  unsigned __int16 v22; // cx
  unsigned __int16 v23; // cx
  __int64 v24; // [rsp+28h] [rbp-79h] BYREF
  unsigned __int16 *v25; // [rsp+30h] [rbp-71h]

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
      v8 = *(_DWORD *)(v7 + 48);
      v9 = 0;
      if ( v3 )
      {
        *(_DWORD *)(v7 + 48) = v8 | 0x20;
        LOBYTE(v9) = v8 != 0;
        if ( v9 == 1 && *(_QWORD *)(v7 + 16) )
        {
          v21 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C00895E3 >= 5u )
            WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v8, v8 | 0x20);
          *(_BYTE *)(*(_QWORD *)(v7 + 16) + 5312LL) = 1;
          v21 = 1;
        }
        if ( v21 )
        {
          if ( (unsigned __int8)byte_1C00895E3 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)&v24);
            if ( (unsigned __int8)byte_1C00895E3 >= 4u )
            {
              v22 = 30;
LABEL_57:
              WPP_SF_Zq(v22, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v25, v24);
            }
          }
        }
      }
      else
      {
        *(_DWORD *)(v7 + 48) = v8 & 0xFFFFFFDF;
        LOBYTE(v9) = v8 != 0;
        if ( v9 == ((v8 & 0xFFFFFFDF) != 0) && *(_QWORD *)(v7 + 16) )
        {
          v10 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C00895E3 >= 5u )
            WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v8, v8 & 0xFFFFFFDF);
          *(_BYTE *)(*(_QWORD *)(v7 + 16) + 5312LL) = 1;
          v10 = 1;
        }
        if ( v10 )
        {
          if ( (unsigned __int8)byte_1C00895E3 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)&v24);
            if ( (unsigned __int8)byte_1C00895E3 >= 4u )
            {
              v22 = 29;
              goto LABEL_57;
            }
          }
        }
      }
      v11 = *(_QWORD *)(v6 + 8 * i);
      v12 = *(_QWORD *)(v11 + 104);
      if ( (*(_DWORD *)(v12 + 56) & 1) == 0 && *(_DWORD *)(v11 + 44) && *(_DWORD *)(v11 + 48) && !*(_BYTE *)(v11 + 24) )
      {
        if ( (unsigned __int8)byte_1C00895E3 >= 5u )
          WPP_SF__guid_D(0x1Fu, v11, v12 + 40, *(_DWORD *)(v11 + 112));
        v3 = 1;
      }
      continue;
    }
  }
  v13 = *((_DWORD *)this + 4);
  for ( j = 0LL; (_DWORD)j != v13; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= *((_DWORD *)this + 4) )
      __fastfail(0xBAD0FFu);
    v15 = *((_QWORD *)this + 3);
    v16 = 0;
    v17 = *(_QWORD *)(v15 + 8 * j);
    v18 = *(_DWORD *)(v17 + 48);
    if ( v3 )
    {
      *(_DWORD *)(v17 + 48) = v18 | 0x20;
      LOBYTE(v16) = v18 != 0;
      if ( v16 == 1 && *(_QWORD *)(v17 + 16) )
      {
        v20 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C00895E3 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v18, v18 | 0x20);
        *(_BYTE *)(*(_QWORD *)(v17 + 16) + 5312LL) = 1;
        v20 = 1;
      }
      if ( v20 && (unsigned __int8)byte_1C00895E3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v15 + 8 * j),
          (struct NDIS_PNPTRACE_LOCALS *)&v24);
        v23 = 33;
        goto LABEL_64;
      }
    }
    else
    {
      *(_DWORD *)(v17 + 48) = v18 & 0xFFFFFFDF;
      LOBYTE(v16) = v18 != 0;
      if ( v16 == ((v18 & 0xFFFFFFDF) != 0) && *(_QWORD *)(v17 + 16) )
      {
        v19 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C00895E3 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v18, v18 & 0xFFFFFFDF);
        *(_BYTE *)(*(_QWORD *)(v17 + 16) + 5312LL) = 1;
        v19 = 1;
      }
      if ( v19 && (unsigned __int8)byte_1C00895E3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v15 + 8 * j),
          (struct NDIS_PNPTRACE_LOCALS *)&v24);
        v23 = 32;
LABEL_64:
        WPP_SF_Zq(v23, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v25, v24);
        continue;
      }
    }
  }
}

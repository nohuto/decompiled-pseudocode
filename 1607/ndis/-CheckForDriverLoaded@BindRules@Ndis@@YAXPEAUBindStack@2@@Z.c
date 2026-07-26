/*
 * XREFs of ?CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A66F4
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A527C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0042EFC (WPP_SF_dd_ea_1C0042EFC.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A6BC8 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2FA4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::CheckForDriverLoaded(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  int v2; // r12d
  __int64 i; // rsi
  __int64 v5; // r14
  __int64 v6; // rbx
  int v7; // r8d
  char v8; // al
  int v9; // r12d
  __int64 j; // rdi
  __int64 v11; // r14
  int v12; // ecx
  __int64 v13; // rbx
  int v14; // r8d
  char v15; // al
  char v16; // al
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // cx
  __int64 v19; // [rsp+28h] [rbp-69h] BYREF
  unsigned __int16 *v20; // [rsp+30h] [rbp-61h]

  v2 = *((_DWORD *)this + 10);
  for ( i = 0LL; (_DWORD)i != v2; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 10) )
      __fastfail(0xBAD0FFu);
    v5 = *((_QWORD *)this + 6);
    v6 = *(_QWORD *)(v5 + 8 * i);
    if ( *(_BYTE *)(*(_QWORD *)(v6 + 104) + 16LL) )
    {
      v7 = *(_DWORD *)(v6 + 48);
      *(_DWORD *)(v6 + 48) = v7 & 0xFFFFFFFD;
      if ( (v7 != 0) == ((v7 & 0xFFFFFFFD) != 0) && *(_QWORD *)(v6 + 16) )
      {
        v8 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C00895E3 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v7, v7 & 0xFFFFFFFD);
        *(_BYTE *)(*(_QWORD *)(v6 + 16) + 5312LL) = 1;
        v8 = 1;
      }
      if ( v8 )
      {
        if ( (unsigned __int8)byte_1C00895E3 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)&v19);
          if ( (unsigned __int8)byte_1C00895E3 >= 4u )
          {
            v17 = 15;
LABEL_40:
            WPP_SF_Zq(v17, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v20, v19);
            continue;
          }
        }
      }
    }
    else if ( Ndis::BindState::SetBinding((Ndis::BindState *)(v6 + 8), BindingDisabled, Reason_DriverNotReady)
           && (unsigned __int8)byte_1C00895E3 >= 4u )
    {
      ndisGetBindLinkNameForTracing(*(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i), (struct NDIS_PNPTRACE_LOCALS *)&v19);
      if ( (unsigned __int8)byte_1C00895E3 >= 4u )
      {
        v17 = 16;
        goto LABEL_40;
      }
    }
  }
  v9 = *((_DWORD *)this + 4);
  for ( j = 0LL; (_DWORD)j != v9; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= *((_DWORD *)this + 4) )
      __fastfail(0xBAD0FFu);
    v11 = *((_QWORD *)this + 3);
    v12 = 0;
    v13 = *(_QWORD *)(v11 + 8 * j);
    v14 = *(_DWORD *)(v13 + 48);
    if ( *(_BYTE *)(*(_QWORD *)(v13 + 104) + 16LL) )
    {
      *(_DWORD *)(v13 + 48) = v14 & 0xFFFFFFFD;
      LOBYTE(v12) = v14 != 0;
      if ( v12 == ((v14 & 0xFFFFFFFD) != 0) && *(_QWORD *)(v13 + 16) )
      {
        v15 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C00895E3 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v14, v14 & 0xFFFFFFFD);
        *(_BYTE *)(*(_QWORD *)(v13 + 16) + 5312LL) = 1;
        v15 = 1;
      }
      if ( v15 && (unsigned __int8)byte_1C00895E3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v11 + 8 * j),
          (struct NDIS_PNPTRACE_LOCALS *)&v19);
        v18 = 17;
LABEL_47:
        WPP_SF_Zq(v18, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v20, v19);
        continue;
      }
    }
    else
    {
      *(_DWORD *)(v13 + 48) = v14 | 2;
      LOBYTE(v12) = v14 != 0;
      if ( v12 == 1 && *(_QWORD *)(v13 + 16) )
      {
        v16 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C00895E3 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v14, v14 | 2);
        *(_BYTE *)(*(_QWORD *)(v13 + 16) + 5312LL) = 1;
        v16 = 1;
      }
      if ( v16 && (unsigned __int8)byte_1C00895E3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v11 + 8 * j),
          (struct NDIS_PNPTRACE_LOCALS *)&v19);
        v18 = 18;
        goto LABEL_47;
      }
    }
  }
}

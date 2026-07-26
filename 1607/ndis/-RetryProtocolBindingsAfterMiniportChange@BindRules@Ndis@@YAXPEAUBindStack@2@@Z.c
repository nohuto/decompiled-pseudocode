/*
 * XREFs of ?RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A62E8
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A527C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0042EFC (WPP_SF_dd_ea_1C0042EFC.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2FA4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::RetryProtocolBindingsAfterMiniportChange(
        Ndis::BindRules *this,
        struct Ndis::BindStack *a2)
{
  int v3; // r15d
  __int64 i; // rdi
  __int64 v5; // r14
  __int64 v6; // rsi
  int v7; // r8d
  char v8; // al
  int v9; // r14d
  __int64 j; // rdi
  __int64 v11; // r15
  __int64 v12; // rsi
  int v13; // r8d
  char v14; // al
  __int64 v15; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int16 *v16; // [rsp+28h] [rbp-C0h]

  if ( *((_DWORD *)this + 24) )
  {
    v3 = *((_DWORD *)this + 10);
    for ( i = 0LL; (_DWORD)i != v3; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= *((_DWORD *)this + 10) )
        __fastfail(0xBAD0FFu);
      v5 = *((_QWORD *)this + 6);
      v6 = *(_QWORD *)(v5 + 8 * i);
      v7 = *(_DWORD *)(v6 + 48);
      *(_DWORD *)(v6 + 48) = v7 & 0xFFFBFFE3;
      if ( (v7 != 0) == ((v7 & 0xFFFBFFE3) != 0) && *(_QWORD *)(v6 + 16) )
      {
        v8 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C00895E3 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v7, v7 & 0xFFFBFFE3);
        *(_BYTE *)(*(_QWORD *)(v6 + 16) + 5312LL) = 1;
        v8 = 1;
      }
      if ( v8 && (unsigned __int8)byte_1C00895E3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
          (struct NDIS_PNPTRACE_LOCALS *)&v15);
        if ( (unsigned __int8)byte_1C00895E3 >= 4u )
          WPP_SF_Zq(0x19u, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v16, v15);
      }
    }
    v9 = *((_DWORD *)this + 4);
    for ( j = 0LL; (_DWORD)j != v9; j = (unsigned int)(j + 1) )
    {
      if ( (unsigned int)j >= *((_DWORD *)this + 4) )
        __fastfail(0xBAD0FFu);
      v11 = *((_QWORD *)this + 3);
      v12 = *(_QWORD *)(v11 + 8 * j);
      v13 = *(_DWORD *)(v12 + 48);
      *(_DWORD *)(v12 + 48) = v13 & 0xFFFBFFE3;
      if ( (v13 != 0) == ((v13 & 0xFFFBFFE3) != 0) && *(_QWORD *)(v12 + 16) )
      {
        v14 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C00895E3 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v13, v13 & 0xFFFBFFE3);
        *(_BYTE *)(*(_QWORD *)(v12 + 16) + 5312LL) = 1;
        v14 = 1;
      }
      if ( v14 && (unsigned __int8)byte_1C00895E3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v11 + 8 * j),
          (struct NDIS_PNPTRACE_LOCALS *)&v15);
        WPP_SF_Zq(0x1Au, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v16, v15);
      }
    }
  }
}

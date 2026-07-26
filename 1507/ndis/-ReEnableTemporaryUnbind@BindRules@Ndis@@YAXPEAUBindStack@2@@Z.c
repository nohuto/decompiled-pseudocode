/*
 * XREFs of ?ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A4D68
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A1C64 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A222C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A2FD4 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2E2C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F48 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::ReEnableTemporaryUnbind(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  int v2; // r15d
  __int64 i; // rdi
  __int64 v5; // r14
  __int64 v6; // rbx
  int v7; // r8d
  char v8; // al
  int v9; // r15d
  __int64 j; // rdi
  __int64 v11; // r14
  __int64 v12; // rbx
  int v13; // r8d
  char v14; // al
  __int64 v15; // [rsp+20h] [rbp-C8h] BYREF
  __int64 *v16; // [rsp+28h] [rbp-C0h]

  v2 = *((_DWORD *)this + 10);
  for ( i = 0LL; (_DWORD)i != v2; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 10) )
      __fastfail(0xBAD0FFu);
    v5 = *((_QWORD *)this + 6);
    v6 = *(_QWORD *)(v5 + 8 * i);
    if ( !*(_BYTE *)(v6 + 25) && !*(_DWORD *)(v6 + 72) )
    {
      v7 = *(_DWORD *)(v6 + 48);
      *(_DWORD *)(v6 + 48) = v7 & 0xFFFFDFFF;
      if ( (v7 != 0) == ((v7 & 0xFFFFDFFF) != 0) && *(_QWORD *)(v6 + 16) )
      {
        v8 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0085323 >= 5u )
          WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v7, v7 & 0xFFFFDFFF);
        if ( !*(_BYTE *)(*(_QWORD *)(v6 + 16) + 5313LL) )
          *(_BYTE *)(*(_QWORD *)(v6 + 16) + 5312LL) = 1;
        v8 = 1;
      }
      if ( v8 && (unsigned __int8)byte_1C0085323 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
          (struct NDIS_PNPTRACE_LOCALS *)&v15);
        if ( (unsigned __int8)byte_1C0085323 >= 4u )
          WPP_SF_Zq(0xAu, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v16, v15);
      }
    }
  }
  v9 = *((_DWORD *)this + 4);
  for ( j = 0LL; (_DWORD)j != v9; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= *((_DWORD *)this + 4) )
      __fastfail(0xBAD0FFu);
    v11 = *((_QWORD *)this + 3);
    v12 = *(_QWORD *)(v11 + 8 * j);
    if ( !*(_BYTE *)(v12 + 25) && !*(_DWORD *)(v12 + 72) )
    {
      v13 = *(_DWORD *)(v12 + 48);
      *(_DWORD *)(v12 + 48) = v13 & 0xFFFFDFFF;
      if ( (v13 != 0) == ((v13 & 0xFFFFDFFF) != 0) && *(_QWORD *)(v12 + 16) )
      {
        v14 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0085323 >= 5u )
          WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v13, v13 & 0xFFFFDFFF);
        if ( !*(_BYTE *)(*(_QWORD *)(v12 + 16) + 5313LL) )
          *(_BYTE *)(*(_QWORD *)(v12 + 16) + 5312LL) = 1;
        v14 = 1;
      }
      if ( v14 && (unsigned __int8)byte_1C0085323 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v11 + 8 * j),
          (struct NDIS_PNPTRACE_LOCALS *)&v15);
        WPP_SF_Zq(0xBu, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v16, v15);
      }
    }
  }
}

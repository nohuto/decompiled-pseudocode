/*
 * XREFs of ?PauseMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A3404
 * Callers:
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A2FD4 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2E2C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F48 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::PauseMiniportStack(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  int v2; // r12d
  BOOL v4; // esi
  __int64 i; // rbp
  __int64 v6; // r14
  __int64 v7; // rbx
  int v8; // r8d
  unsigned int v9; // eax
  int v10; // r9d
  char v11; // al
  int v12; // r12d
  __int64 j; // rdi
  __int64 v14; // r14
  __int64 v15; // rbx
  int v16; // r8d
  unsigned int v17; // eax
  int v18; // r9d
  char v19; // al
  __int64 v20; // [rsp+20h] [rbp-C8h] BYREF
  __int64 *v21; // [rsp+28h] [rbp-C0h]

  v2 = *((_DWORD *)this + 10);
  v4 = *((_DWORD *)this + 25) == 0;
  for ( i = 0LL; (_DWORD)i != v2; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 10) )
      __fastfail(0xBAD0FFu);
    v6 = *((_QWORD *)this + 6);
    v7 = *(_QWORD *)(v6 + 8 * i);
    if ( *(_DWORD *)(v7 + 72) )
    {
      v8 = *(_DWORD *)(v7 + 52);
      if ( v4 )
        v9 = v8 & 0xFFFFFFEF;
      else
        v9 = v8 | 0x10;
      *(_DWORD *)(v7 + 52) = v9;
      v10 = *(_DWORD *)(v7 + 52);
      if ( (v8 != 0) == (v10 != 0) && *(_QWORD *)(v7 + 16) )
      {
        v11 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0085323 >= 5u )
          WPP_SF_dd(0xFu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v8, v10);
        if ( !*(_BYTE *)(*(_QWORD *)(v7 + 16) + 5313LL) )
          *(_BYTE *)(*(_QWORD *)(v7 + 16) + 5312LL) = 1;
        v11 = 1;
      }
      if ( v11 && (unsigned __int8)byte_1C0085323 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
          (struct NDIS_PNPTRACE_LOCALS *)&v20);
        if ( (unsigned __int8)byte_1C0085323 >= 4u )
          WPP_SF_Zq(0x42u, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v21, v20);
      }
      v4 = *(_DWORD *)(*(_QWORD *)(v6 + 8 * i) + 52LL) == 0;
    }
  }
  v12 = *((_DWORD *)this + 4);
  for ( j = 0LL; (_DWORD)j != v12; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= *((_DWORD *)this + 4) )
      __fastfail(0xBAD0FFu);
    v14 = *((_QWORD *)this + 3);
    v15 = *(_QWORD *)(v14 + 8 * j);
    v16 = *(_DWORD *)(v15 + 52);
    if ( v4 )
      v17 = v16 & 0xFFFFFFEF;
    else
      v17 = v16 | 0x10;
    *(_DWORD *)(v15 + 52) = v17;
    v18 = *(_DWORD *)(v15 + 52);
    if ( (v16 != 0) == (v18 != 0) && *(_QWORD *)(v15 + 16) )
    {
      v19 = 0;
    }
    else
    {
      if ( (unsigned __int8)byte_1C0085323 >= 5u )
        WPP_SF_dd(0xFu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v16, v18);
      if ( !*(_BYTE *)(*(_QWORD *)(v15 + 16) + 5313LL) )
        *(_BYTE *)(*(_QWORD *)(v15 + 16) + 5312LL) = 1;
      v19 = 1;
    }
    if ( v19 && (unsigned __int8)byte_1C0085323 >= 4u )
    {
      ndisGetBindLinkNameForTracing(
        *(struct NDIS_BIND_PROTOCOL_LINK **)(v14 + 8 * j),
        (struct NDIS_PNPTRACE_LOCALS *)&v20);
      WPP_SF_Zq(0x43u, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v21, v20);
    }
  }
}

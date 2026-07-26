/*
 * XREFs of ?UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A382C
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

void __fastcall Ndis::BindRules::UnbindMiniportStack(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  int v2; // r12d
  BOOL v4; // r13d
  __int64 i; // rsi
  __int64 v6; // r14
  __int64 v7; // rbx
  int v8; // r8d
  char v9; // al
  int v10; // r12d
  __int64 j; // rdi
  __int64 v12; // r14
  __int64 v13; // rbx
  int v14; // r8d
  char v15; // al
  int v16; // r9d
  char v17; // al
  int v18; // r9d
  char v19; // al
  unsigned __int16 v20; // cx
  unsigned __int16 v21; // cx
  __int64 v22; // [rsp+28h] [rbp-79h] BYREF
  __int64 *v23; // [rsp+30h] [rbp-71h]

  v2 = *((_DWORD *)this + 10);
  v4 = *((_DWORD *)this + 24) != 0;
  for ( i = 0LL; (_DWORD)i != v2; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 10) )
      __fastfail(0xBAD0FFu);
    v6 = *((_QWORD *)this + 6);
    v7 = *(_QWORD *)(v6 + 8 * i);
    v8 = *(_DWORD *)(v7 + 48);
    if ( v4 )
    {
      *(_DWORD *)(v7 + 48) = v8 | 0x20000;
      v18 = *(_DWORD *)(v7 + 48);
      if ( (v8 != 0) == (v18 != 0) && *(_QWORD *)(v7 + 16) )
      {
        v19 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0085323 >= 5u )
          WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v8, v18);
        if ( !*(_BYTE *)(*(_QWORD *)(v7 + 16) + 5313LL) )
          *(_BYTE *)(*(_QWORD *)(v7 + 16) + 5312LL) = 1;
        v19 = 1;
      }
      if ( v19 )
      {
        if ( (unsigned __int8)byte_1C0085323 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)&v22);
          if ( (unsigned __int8)byte_1C0085323 >= 4u )
          {
            v20 = 59;
            goto LABEL_60;
          }
        }
      }
    }
    else
    {
      *(_DWORD *)(v7 + 48) = v8 & 0xFFFDFFFF;
      if ( (v8 != 0) == ((v8 & 0xFFFDFFFF) != 0) && *(_QWORD *)(v7 + 16) )
      {
        v9 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0085323 >= 5u )
          WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v8, v8 & 0xFFFDFFFF);
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
            (struct NDIS_PNPTRACE_LOCALS *)&v22);
          if ( (unsigned __int8)byte_1C0085323 >= 4u )
          {
            v20 = 58;
LABEL_60:
            WPP_SF_Zq(v20, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v23, v22);
            continue;
          }
        }
      }
    }
  }
  v10 = *((_DWORD *)this + 4);
  for ( j = 0LL; (_DWORD)j != v10; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= *((_DWORD *)this + 4) )
      __fastfail(0xBAD0FFu);
    v12 = *((_QWORD *)this + 3);
    v13 = *(_QWORD *)(v12 + 8 * j);
    v14 = *(_DWORD *)(v13 + 48);
    if ( v4 )
    {
      *(_DWORD *)(v13 + 48) = v14 | 0x20000;
      v16 = *(_DWORD *)(v13 + 48);
      if ( (v14 != 0) == (v16 != 0) && *(_QWORD *)(v13 + 16) )
      {
        v17 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0085323 >= 5u )
          WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v14, v16);
        if ( !*(_BYTE *)(*(_QWORD *)(v13 + 16) + 5313LL) )
          *(_BYTE *)(*(_QWORD *)(v13 + 16) + 5312LL) = 1;
        v17 = 1;
      }
      if ( v17 && (unsigned __int8)byte_1C0085323 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v12 + 8 * j),
          (struct NDIS_PNPTRACE_LOCALS *)&v22);
        v21 = 61;
LABEL_62:
        WPP_SF_Zq(v21, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v23, v22);
        continue;
      }
    }
    else
    {
      *(_DWORD *)(v13 + 48) = v14 & 0xFFFDFFFF;
      if ( (v14 != 0) == ((v14 & 0xFFFDFFFF) != 0) && *(_QWORD *)(v13 + 16) )
      {
        v15 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0085323 >= 5u )
          WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v14, v14 & 0xFFFDFFFF);
        if ( !*(_BYTE *)(*(_QWORD *)(v13 + 16) + 5313LL) )
          *(_BYTE *)(*(_QWORD *)(v13 + 16) + 5312LL) = 1;
        v15 = 1;
      }
      if ( v15 && (unsigned __int8)byte_1C0085323 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v12 + 8 * j),
          (struct NDIS_PNPTRACE_LOCALS *)&v22);
        v21 = 60;
        goto LABEL_62;
      }
    }
  }
}

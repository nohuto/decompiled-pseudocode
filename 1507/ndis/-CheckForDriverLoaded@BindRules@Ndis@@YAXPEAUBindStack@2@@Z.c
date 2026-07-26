/*
 * XREFs of ?CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A49D0
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

void __fastcall Ndis::BindRules::CheckForDriverLoaded(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  int v2; // r12d
  __int64 i; // rsi
  __int64 v5; // r14
  int v6; // ecx
  __int64 v7; // rbx
  int v8; // r8d
  char v9; // al
  int v10; // r12d
  __int64 j; // rdi
  __int64 v12; // r14
  int v13; // ecx
  __int64 v14; // rbx
  int v15; // r8d
  char v16; // al
  char v17; // al
  char v18; // al
  unsigned __int16 v19; // cx
  unsigned __int16 v20; // cx
  __int64 v21; // [rsp+28h] [rbp-69h] BYREF
  __int64 *v22; // [rsp+30h] [rbp-61h]

  v2 = *((_DWORD *)this + 10);
  for ( i = 0LL; (_DWORD)i != v2; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 10) )
      __fastfail(0xBAD0FFu);
    v5 = *((_QWORD *)this + 6);
    v6 = 0;
    v7 = *(_QWORD *)(v5 + 8 * i);
    v8 = *(_DWORD *)(v7 + 48);
    if ( *(_BYTE *)(*(_QWORD *)(v7 + 104) + 16LL) )
    {
      *(_DWORD *)(v7 + 48) = v8 & 0xFFFFFFFD;
      LOBYTE(v6) = v8 != 0;
      if ( v6 == ((v8 & 0xFFFFFFFD) != 0) && *(_QWORD *)(v7 + 16) )
      {
        v9 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0085323 >= 5u )
          WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v8, v8 & 0xFFFFFFFD);
        if ( !*(_BYTE *)(*(_QWORD *)(v7 + 16) + 5313LL) )
          *(_BYTE *)(*(_QWORD *)(v7 + 16) + 5312LL) = 1;
        v9 = 1;
      }
      if ( v9 )
      {
        if ( (unsigned __int8)byte_1C0085323 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)&v21);
          if ( (unsigned __int8)byte_1C0085323 >= 4u )
          {
            v19 = 15;
LABEL_53:
            WPP_SF_Zq(v19, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v22, v21);
            continue;
          }
        }
      }
    }
    else
    {
      *(_DWORD *)(v7 + 48) = v8 | 2;
      LOBYTE(v6) = v8 != 0;
      if ( v6 == 1 && *(_QWORD *)(v7 + 16) )
      {
        v18 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0085323 >= 5u )
          WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v8, v8 | 2);
        if ( !*(_BYTE *)(*(_QWORD *)(v7 + 16) + 5313LL) )
          *(_BYTE *)(*(_QWORD *)(v7 + 16) + 5312LL) = 1;
        v18 = 1;
      }
      if ( v18 )
      {
        if ( (unsigned __int8)byte_1C0085323 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)&v21);
          if ( (unsigned __int8)byte_1C0085323 >= 4u )
          {
            v19 = 16;
            goto LABEL_53;
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
    v13 = 0;
    v14 = *(_QWORD *)(v12 + 8 * j);
    v15 = *(_DWORD *)(v14 + 48);
    if ( *(_BYTE *)(*(_QWORD *)(v14 + 104) + 16LL) )
    {
      *(_DWORD *)(v14 + 48) = v15 & 0xFFFFFFFD;
      LOBYTE(v13) = v15 != 0;
      if ( v13 == ((v15 & 0xFFFFFFFD) != 0) && *(_QWORD *)(v14 + 16) )
      {
        v16 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0085323 >= 5u )
          WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v15, v15 & 0xFFFFFFFD);
        if ( !*(_BYTE *)(*(_QWORD *)(v14 + 16) + 5313LL) )
          *(_BYTE *)(*(_QWORD *)(v14 + 16) + 5312LL) = 1;
        v16 = 1;
      }
      if ( v16 && (unsigned __int8)byte_1C0085323 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v12 + 8 * j),
          (struct NDIS_PNPTRACE_LOCALS *)&v21);
        v20 = 17;
LABEL_62:
        WPP_SF_Zq(v20, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v22, v21);
        continue;
      }
    }
    else
    {
      *(_DWORD *)(v14 + 48) = v15 | 2;
      LOBYTE(v13) = v15 != 0;
      if ( v13 == 1 && *(_QWORD *)(v14 + 16) )
      {
        v17 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0085323 >= 5u )
          WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v15, v15 | 2);
        if ( !*(_BYTE *)(*(_QWORD *)(v14 + 16) + 5313LL) )
          *(_BYTE *)(*(_QWORD *)(v14 + 16) + 5312LL) = 1;
        v17 = 1;
      }
      if ( v17 && (unsigned __int8)byte_1C0085323 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v12 + 8 * j),
          (struct NDIS_PNPTRACE_LOCALS *)&v21);
        v20 = 18;
        goto LABEL_62;
      }
    }
  }
}

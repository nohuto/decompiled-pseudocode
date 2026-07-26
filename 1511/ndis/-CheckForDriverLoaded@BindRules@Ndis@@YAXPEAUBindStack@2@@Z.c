/*
 * XREFs of ?CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A49F8
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A354C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0040948 (WPP_SF_dd_ea_1C0040948.c)
 *     WPP_SF_Zq @ 0x1C004A150 (WPP_SF_Zq.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00DCF60 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00DD07C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
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
  char v10; // al
  int v11; // r12d
  __int64 j; // rdi
  __int64 v13; // r14
  int v14; // ecx
  __int64 v15; // rbx
  int v16; // r8d
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
        v10 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0083723 >= 5u )
          WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v8, v8 & 0xFFFFFFFD);
        *(_BYTE *)(*(_QWORD *)(v7 + 16) + 5312LL) = 1;
        v10 = 1;
      }
      if ( v10 )
      {
        if ( (unsigned __int8)byte_1C0083723 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)&v21);
          if ( (unsigned __int8)byte_1C0083723 >= 4u )
          {
            v19 = 15;
LABEL_47:
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
        v9 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0083723 >= 5u )
          WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v8, v8 | 2);
        *(_BYTE *)(*(_QWORD *)(v7 + 16) + 5312LL) = 1;
        v9 = 1;
      }
      if ( v9 )
      {
        if ( (unsigned __int8)byte_1C0083723 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)&v21);
          if ( (unsigned __int8)byte_1C0083723 >= 4u )
          {
            v19 = 16;
            goto LABEL_47;
          }
        }
      }
    }
  }
  v11 = *((_DWORD *)this + 4);
  for ( j = 0LL; (_DWORD)j != v11; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= *((_DWORD *)this + 4) )
      __fastfail(0xBAD0FFu);
    v13 = *((_QWORD *)this + 3);
    v14 = 0;
    v15 = *(_QWORD *)(v13 + 8 * j);
    v16 = *(_DWORD *)(v15 + 48);
    if ( *(_BYTE *)(*(_QWORD *)(v15 + 104) + 16LL) )
    {
      *(_DWORD *)(v15 + 48) = v16 & 0xFFFFFFFD;
      LOBYTE(v14) = v16 != 0;
      if ( v14 == ((v16 & 0xFFFFFFFD) != 0) && *(_QWORD *)(v15 + 16) )
      {
        v17 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0083723 >= 5u )
          WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v16, v16 & 0xFFFFFFFD);
        *(_BYTE *)(*(_QWORD *)(v15 + 16) + 5312LL) = 1;
        v17 = 1;
      }
      if ( v17 && (unsigned __int8)byte_1C0083723 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v13 + 8 * j),
          (struct NDIS_PNPTRACE_LOCALS *)&v21);
        v20 = 17;
LABEL_54:
        WPP_SF_Zq(v20, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v22, v21);
        continue;
      }
    }
    else
    {
      *(_DWORD *)(v15 + 48) = v16 | 2;
      LOBYTE(v14) = v16 != 0;
      if ( v14 == 1 && *(_QWORD *)(v15 + 16) )
      {
        v18 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0083723 >= 5u )
          WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v16, v16 | 2);
        *(_BYTE *)(*(_QWORD *)(v15 + 16) + 5312LL) = 1;
        v18 = 1;
      }
      if ( v18 && (unsigned __int8)byte_1C0083723 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v13 + 8 * j),
          (struct NDIS_PNPTRACE_LOCALS *)&v21);
        v20 = 18;
        goto LABEL_54;
      }
    }
  }
}

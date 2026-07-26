/*
 * XREFs of ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1C00A3CAC
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A354C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0040948 (WPP_SF_dd_ea_1C0040948.c)
 *     WPP_SF_Zq @ 0x1C004A150 (WPP_SF_Zq.c)
 *     WPP_SF__guid_D @ 0x1C006EAF0 (WPP_SF__guid_D_ea_1C006EAF0.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A4E98 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00DCF60 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00DD07C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
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
  int v10; // r8d
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r15d
  __int64 i; // r14
  __int64 v16; // rsi
  __int64 v17; // rbx
  int v18; // r8d
  char v19; // al
  __int64 v20; // rbx
  int v21; // r8d
  char v22; // al
  unsigned __int16 v23; // cx
  unsigned __int16 v24; // cx
  __int64 v25; // [rsp+28h] [rbp-89h]
  __int64 v26; // [rsp+38h] [rbp-79h] BYREF
  __int64 *v27; // [rsp+40h] [rbp-71h]

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
            && (unsigned __int8)byte_1C0083723 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * v4),
              (struct NDIS_PNPTRACE_LOCALS *)&v26);
            if ( (unsigned __int8)byte_1C0083723 >= 4u )
            {
              v23 = 42;
              goto LABEL_56;
            }
          }
LABEL_57:
          LOBYTE(a2) = v25;
        }
        else
        {
          v10 = *(_DWORD *)(v7 + 48);
          *(_DWORD *)(v7 + 48) = v10 & 0xFFFFFFBF;
          if ( (v10 != 0) == ((v10 & 0xFFFFFFBF) != 0) && *(_QWORD *)(v7 + 16) )
          {
            v11 = 0;
          }
          else
          {
            if ( (unsigned __int8)byte_1C0083723 >= 5u )
            {
              WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v10, v10 & 0xFFFFFFBF);
              LOBYTE(a2) = v25;
            }
            *(_BYTE *)(*(_QWORD *)(v7 + 16) + 5312LL) = 1;
            v11 = 1;
          }
          if ( v11 && (unsigned __int8)byte_1C0083723 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * v4),
              (struct NDIS_PNPTRACE_LOCALS *)&v26);
            if ( (unsigned __int8)byte_1C0083723 >= 4u )
            {
              v23 = 41;
              goto LABEL_56;
            }
            goto LABEL_57;
          }
        }
        if ( !(_BYTE)a2 )
          goto LABEL_12;
        v12 = *(_QWORD *)(v6 + 8 * v4);
        v13 = *(_QWORD *)(v12 + 104);
        if ( (*(_DWORD *)(v13 + 56) & 0x11) == 1 && !*(_QWORD *)(v13 + 72) )
        {
          if ( (unsigned __int8)byte_1C0083723 >= 5u )
            WPP_SF__guid_D(0x2Cu, v12, v13 + 40, *(_DWORD *)(v12 + 112));
          v3 = BindingDisabled;
        }
LABEL_20:
        LOBYTE(a2) = v25;
        goto LABEL_12;
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
          if ( (unsigned __int8)byte_1C0083723 >= 5u )
          {
            WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v8, v8 & 0xFFFFFFBF);
            LOBYTE(a2) = v25;
          }
          *(_BYTE *)(*(_QWORD *)(v7 + 16) + 5312LL) = 1;
          v9 = 1;
        }
        if ( v9 && (unsigned __int8)byte_1C0083723 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * v4),
            (struct NDIS_PNPTRACE_LOCALS *)&v26);
          if ( (unsigned __int8)byte_1C0083723 >= 4u )
          {
            v23 = 43;
LABEL_56:
            WPP_SF_Zq(v23, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v27, v26, v25);
            goto LABEL_57;
          }
          goto LABEL_20;
        }
      }
    }
LABEL_12:
    v4 = (unsigned int)(v4 + 1);
  }
  v14 = *((_DWORD *)this + 4);
  for ( i = 0LL; (_DWORD)i != v14; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 4) )
      __fastfail(0xBAD0FFu);
    v16 = *((_QWORD *)this + 3);
    if ( (_BYTE)a2 )
    {
      if ( v3 )
      {
        if ( Ndis::BindState::SetBinding(
               (Ndis::BindState *)(*(_QWORD *)(v16 + 8 * i) + 8LL),
               v3,
               Reason_MissingOptionalFilter)
          && (unsigned __int8)byte_1C0083723 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_PROTOCOL_LINK **)(v16 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)&v26);
          v24 = 46;
          goto LABEL_75;
        }
      }
      else
      {
        v20 = *(_QWORD *)(v16 + 8 * i);
        v21 = *(_DWORD *)(v20 + 48);
        *(_DWORD *)(v20 + 48) = v21 & 0xFFFFFFBF;
        if ( (v21 != 0) == ((v21 & 0xFFFFFFBF) != 0) && *(_QWORD *)(v20 + 16) )
        {
          v22 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C0083723 >= 5u )
            WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v21, v21 & 0xFFFFFFBF);
          *(_BYTE *)(*(_QWORD *)(v20 + 16) + 5312LL) = 1;
          v22 = 1;
        }
        if ( v22 && (unsigned __int8)byte_1C0083723 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_PROTOCOL_LINK **)(v16 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)&v26);
          v24 = 45;
LABEL_75:
          WPP_SF_Zq(v24, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v27, v26, v25);
        }
      }
    }
    else if ( v3 == BindingEnabled )
    {
      v17 = *(_QWORD *)(v16 + 8 * i);
      v18 = *(_DWORD *)(v17 + 48);
      *(_DWORD *)(v17 + 48) = v18 & 0xFFFFFFBF;
      if ( (v18 != 0) == ((v18 & 0xFFFFFFBF) != 0) && *(_QWORD *)(v17 + 16) )
      {
        v19 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0083723 >= 5u )
          WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v18, v18 & 0xFFFFFFBF);
        *(_BYTE *)(*(_QWORD *)(v17 + 16) + 5312LL) = 1;
        v19 = 1;
      }
      if ( v19 && (unsigned __int8)byte_1C0083723 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v16 + 8 * i),
          (struct NDIS_PNPTRACE_LOCALS *)&v26);
        v24 = 47;
        goto LABEL_75;
      }
    }
    LOBYTE(a2) = v25;
  }
}

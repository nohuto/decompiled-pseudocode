/*
 * XREFs of ?UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A3ABC
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A354C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0040948 (WPP_SF_dd_ea_1C0040948.c)
 *     WPP_SF_Zq @ 0x1C004A150 (WPP_SF_Zq.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A4E98 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00DCF60 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00DD07C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::UnbindMiniportStack(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  int v2; // r12d
  enum BINDING_ENABLED_OR_DISABLED v4; // r13d
  __int64 i; // rsi
  __int64 v6; // r15
  __int64 v7; // rdi
  int v8; // r8d
  char v9; // al
  int v10; // r12d
  __int64 j; // rbx
  __int64 v12; // r15
  __int64 v13; // rdi
  int v14; // r8d
  char v15; // al
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // cx
  __int64 v18; // [rsp+28h] [rbp-79h] BYREF
  __int64 *v19; // [rsp+30h] [rbp-71h]

  v2 = *((_DWORD *)this + 10);
  v4 = *((_DWORD *)this + 24) != 0;
  for ( i = 0LL; (_DWORD)i != v2; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 10) )
      __fastfail(0xBAD0FFu);
    v6 = *((_QWORD *)this + 6);
    if ( v4 )
    {
      if ( Ndis::BindState::SetBinding((Ndis::BindState *)(*(_QWORD *)(v6 + 8 * i) + 8LL), v4, Reason_MiniportNotReady)
        && (unsigned __int8)byte_1C0083723 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
          (struct NDIS_PNPTRACE_LOCALS *)&v18);
        if ( (unsigned __int8)byte_1C0083723 >= 4u )
        {
          v16 = 59;
          goto LABEL_39;
        }
      }
    }
    else
    {
      v7 = *(_QWORD *)(v6 + 8 * i);
      v8 = *(_DWORD *)(v7 + 48);
      *(_DWORD *)(v7 + 48) = v8 & 0xFFFDFFFF;
      if ( (v8 != 0) == ((v8 & 0xFFFDFFFF) != 0) && *(_QWORD *)(v7 + 16) )
      {
        v9 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0083723 >= 5u )
          WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v8, v8 & 0xFFFDFFFF);
        *(_BYTE *)(*(_QWORD *)(v7 + 16) + 5312LL) = 1;
        v9 = 1;
      }
      if ( v9 )
      {
        if ( (unsigned __int8)byte_1C0083723 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)&v18);
          if ( (unsigned __int8)byte_1C0083723 >= 4u )
          {
            v16 = 58;
LABEL_39:
            WPP_SF_Zq(v16, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v19, v18);
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
    if ( v4 )
    {
      if ( Ndis::BindState::SetBinding((Ndis::BindState *)(*(_QWORD *)(v12 + 8 * j) + 8LL), v4, Reason_MiniportNotReady)
        && (unsigned __int8)byte_1C0083723 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v12 + 8 * j),
          (struct NDIS_PNPTRACE_LOCALS *)&v18);
        v17 = 61;
LABEL_41:
        WPP_SF_Zq(v17, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v19, v18);
        continue;
      }
    }
    else
    {
      v13 = *(_QWORD *)(v12 + 8 * j);
      v14 = *(_DWORD *)(v13 + 48);
      *(_DWORD *)(v13 + 48) = v14 & 0xFFFDFFFF;
      if ( (v14 != 0) == ((v14 & 0xFFFDFFFF) != 0) && *(_QWORD *)(v13 + 16) )
      {
        v15 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0083723 >= 5u )
          WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v14, v14 & 0xFFFDFFFF);
        *(_BYTE *)(*(_QWORD *)(v13 + 16) + 5312LL) = 1;
        v15 = 1;
      }
      if ( v15 && (unsigned __int8)byte_1C0083723 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v12 + 8 * j),
          (struct NDIS_PNPTRACE_LOCALS *)&v18);
        v17 = 60;
        goto LABEL_41;
      }
    }
  }
}

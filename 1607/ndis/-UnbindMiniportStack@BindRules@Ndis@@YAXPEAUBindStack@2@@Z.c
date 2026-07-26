/*
 * XREFs of ?UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A5760
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
  unsigned __int16 *v19; // [rsp+30h] [rbp-71h]

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
        && (unsigned __int8)byte_1C00895E3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
          (struct NDIS_PNPTRACE_LOCALS *)&v18);
        if ( (unsigned __int8)byte_1C00895E3 >= 4u )
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
        if ( (unsigned __int8)byte_1C00895E3 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v8, v8 & 0xFFFDFFFF);
        *(_BYTE *)(*(_QWORD *)(v7 + 16) + 5312LL) = 1;
        v9 = 1;
      }
      if ( v9 )
      {
        if ( (unsigned __int8)byte_1C00895E3 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)&v18);
          if ( (unsigned __int8)byte_1C00895E3 >= 4u )
          {
            v16 = 58;
LABEL_39:
            WPP_SF_Zq(v16, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v19, v18);
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
        && (unsigned __int8)byte_1C00895E3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(v12 + 8 * j),
          (struct NDIS_PNPTRACE_LOCALS *)&v18);
        v17 = 61;
LABEL_41:
        WPP_SF_Zq(v17, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v19, v18);
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
        if ( (unsigned __int8)byte_1C00895E3 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v14, v14 & 0xFFFDFFFF);
        *(_BYTE *)(*(_QWORD *)(v13 + 16) + 5312LL) = 1;
        v15 = 1;
      }
      if ( v15 && (unsigned __int8)byte_1C00895E3 >= 4u )
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

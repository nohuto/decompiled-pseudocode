/*
 * XREFs of ?UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A642C
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

void __fastcall Ndis::BindRules::UnbindIncompatibleDriversForMacChange(
        Ndis::BindRules *this,
        struct _NDIS_MINIPORT_BLOCK *a2)
{
  int v2; // r12d
  __int64 i; // r15
  __int64 v5; // r14
  __int64 v6; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 v11; // rdi
  int v12; // r8d
  char v13; // al
  int v14; // r12d
  __int64 j; // r14
  __int64 v16; // r15
  __int64 v17; // rdx
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  __int64 v22; // rdi
  int v23; // r8d
  char v24; // al
  _QWORD v25[20]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v26[20]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v27[20]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v28[20]; // [rsp+200h] [rbp+100h] BYREF

  v2 = *((_DWORD *)this + 1276);
  for ( i = 0LL; (_DWORD)i != v2; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 1276) )
      __fastfail(0xBAD0FFu);
    v5 = *((_QWORD *)this + 639);
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8 * i) + 104LL) + 72LL);
    if ( v6 )
    {
      _m_prefetchw((char *)this + 4488);
      v7 = *((_DWORD *)this + 1122);
      do
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange((volatile signed __int32 *)this + 1122, v7, v7);
      }
      while ( v8 != v7 );
      if ( (v7 & 0x20) != 0 && (*(_DWORD *)(v6 + 48) & 2) == 0 )
        goto LABEL_62;
      _m_prefetchw((char *)this + 4488);
      v9 = *((_DWORD *)this + 1122);
      do
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)this + 1122, v9, v9);
      }
      while ( v10 != v9 );
      if ( (v9 & 0x40) == 0 || (*(_DWORD *)(v6 + 48) & 4) != 0 )
      {
        v11 = *(_QWORD *)(v5 + 8 * i);
        v12 = *(_DWORD *)(v11 + 48);
        *(_DWORD *)(v11 + 48) = v12 & 0xFFBFFFFF;
        if ( (v12 != 0) == ((v12 & 0xFFBFFFFF) != 0) && *(_QWORD *)(v11 + 16) )
        {
          v13 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C00895E3 >= 5u )
            WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v12, v12 & 0xFFBFFFFF);
          *(_BYTE *)(*(_QWORD *)(v11 + 16) + 5312LL) = 1;
          v13 = 1;
        }
        if ( v13 && (unsigned __int8)byte_1C00895E3 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v28);
          if ( (unsigned __int8)byte_1C00895E3 >= 4u )
            WPP_SF_Zq(0x16u, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, (unsigned __int16 *)v28[1], v28[0]);
        }
      }
      else
      {
LABEL_62:
        if ( Ndis::BindState::SetBinding(
               (Ndis::BindState *)(*(_QWORD *)(v5 + 8 * i) + 8LL),
               BindingDisabled,
               Reason_IncompatibleWithNotification)
          && (unsigned __int8)byte_1C00895E3 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v27);
          if ( (unsigned __int8)byte_1C00895E3 >= 4u )
            WPP_SF_Zq(0x15u, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, (unsigned __int16 *)v27[1], v27[0]);
        }
      }
    }
  }
  v14 = *((_DWORD *)this + 1270);
  for ( j = 0LL; (_DWORD)j != v14; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= *((_DWORD *)this + 1270) )
      __fastfail(0xBAD0FFu);
    v16 = *((_QWORD *)this + 636);
    v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 8 * j) + 104LL) + 56LL);
    if ( v17 )
    {
      _m_prefetchw((char *)this + 4488);
      v18 = *((_DWORD *)this + 1122);
      do
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange((volatile signed __int32 *)this + 1122, v18, v18);
      }
      while ( v19 != v18 );
      if ( (v18 & 0x20) != 0 && (*(_DWORD *)(v17 + 64) & 2) == 0 )
        goto LABEL_51;
      _m_prefetchw((char *)this + 4488);
      v20 = *((_DWORD *)this + 1122);
      do
      {
        v21 = v20;
        v20 = _InterlockedCompareExchange((volatile signed __int32 *)this + 1122, v20, v20);
      }
      while ( v21 != v20 );
      if ( (v20 & 0x40) == 0 || (*(_DWORD *)(v17 + 64) & 4) != 0 )
      {
        v22 = *(_QWORD *)(v16 + 8 * j);
        v23 = *(_DWORD *)(v22 + 48);
        *(_DWORD *)(v22 + 48) = v23 & 0xFFBFFFFF;
        if ( (v23 != 0) == ((v23 & 0xFFBFFFFF) != 0) && *(_QWORD *)(v22 + 16) )
        {
          v24 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C00895E3 >= 5u )
            WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v23, v23 & 0xFFBFFFFF);
          *(_BYTE *)(*(_QWORD *)(v22 + 16) + 5312LL) = 1;
          v24 = 1;
        }
        if ( v24 && (unsigned __int8)byte_1C00895E3 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_PROTOCOL_LINK **)(v16 + 8 * j),
            (struct NDIS_PNPTRACE_LOCALS *)v26);
          WPP_SF_Zq(0x18u, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, (unsigned __int16 *)v26[1], v26[0]);
        }
      }
      else
      {
LABEL_51:
        if ( Ndis::BindState::SetBinding(
               (Ndis::BindState *)(*(_QWORD *)(v16 + 8 * j) + 8LL),
               BindingDisabled,
               Reason_IncompatibleWithNotification)
          && (unsigned __int8)byte_1C00895E3 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_PROTOCOL_LINK **)(v16 + 8 * j),
            (struct NDIS_PNPTRACE_LOCALS *)v25);
          WPP_SF_Zq(0x17u, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, (unsigned __int16 *)v25[1], v25[0]);
        }
      }
    }
  }
}

/*
 * XREFs of ndisFSetRestartAttributes @ 0x1C00B0028
 * Callers:
 *     NdisSetOptionalHandlers @ 0x1C00AFE60 (NdisSetOptionalHandlers.c)
 * Callees:
 *     ndisAllocOrFreeIterativeDataPathTrackerIfNeeded @ 0x1C001E388 (ndisAllocOrFreeIterativeDataPathTrackerIfNeeded.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memcmp @ 0x1C00235F0 (memcmp.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A213C (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2E2C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisFSetRestartAttributes(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  __int64 v6; // r14
  int v7; // r8d
  char v8; // cl
  __int64 v9; // rax
  _QWORD v10[20]; // [rsp+20h] [rbp-C8h] BYREF

  v4 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x23u, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, a1);
  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 1) == 1 )
    {
      if ( *(_WORD *)(a2 + 2) < 0x30u )
      {
        v4 = -1073676283;
      }
      else if ( *(_QWORD *)(a2 + 8) || !*(_QWORD *)(a2 + 24) )
      {
        v4 = ndisAllocOrFreeIterativeDataPathTrackerIfNeeded((struct _NDIS_FILTER_BLOCK *)a1, (_QWORD *)a2, 1);
        if ( !v4 )
        {
          if ( memcmp((const void *)(a1 + 576), (const void *)a2, 0x30uLL) )
          {
            Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(a1 + 32) + 5208LL));
            v6 = *(_QWORD *)(a1 + 32);
            v7 = *(_DWORD *)(v6 + 5164);
            *(_DWORD *)(v6 + 5164) = v7 | 0x20;
            if ( v7 == 0 || !*(_QWORD *)(v6 + 5128) )
            {
              v8 = byte_1C0085323;
              if ( (unsigned __int8)byte_1C0085323 >= 5u )
              {
                WPP_SF_dd(0xFu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v7, v7 | 0x20);
                v8 = byte_1C0085323;
              }
              v9 = *(_QWORD *)(v6 + 5128);
              if ( !*(_BYTE *)(v9 + 5313) )
                *(_BYTE *)(v9 + 5312) = 1;
              if ( (unsigned __int8)v8 >= 4u )
              {
                ndisGetBindLinkNameForTracing(
                  *(struct NDIS_BIND_FILTER_LINK **)(a1 + 896),
                  (struct NDIS_PNPTRACE_LOCALS *)v10);
                if ( (unsigned __int8)byte_1C0085323 >= 4u )
                  WPP_SF_Zq(0x24u, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, (__int64 *)v10[1], v10[0]);
              }
            }
            Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(a1 + 32) + 5208LL));
          }
          *(_OWORD *)(a1 + 576) = *(_OWORD *)a2;
          *(_OWORD *)(a1 + 592) = *(_OWORD *)(a2 + 16);
          *(_OWORD *)(a1 + 608) = *(_OWORD *)(a2 + 32);
        }
      }
      else
      {
        v4 = -1073741811;
      }
    }
    else
    {
      v4 = -1073741637;
    }
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x25u, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, a1);
  return v4;
}

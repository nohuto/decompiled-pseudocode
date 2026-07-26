/*
 * XREFs of ndisFSetRestartAttributes @ 0x1C00AA2A4
 * Callers:
 *     NdisSetOptionalHandlers @ 0x1C00AA0F0 (NdisSetOptionalHandlers.c)
 * Callees:
 *     ndisAllocOrFreeIterativeDataPathTrackerIfNeeded @ 0x1C001AECC (ndisAllocOrFreeIterativeDataPathTrackerIfNeeded.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memcmp @ 0x1C00270A0 (memcmp.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A6CF0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2FA4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisFSetRestartAttributes(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  struct _NDIS_MINIPORT_BLOCK *v6; // rdx
  _QWORD v7[20]; // [rsp+20h] [rbp-C8h] BYREF

  v4 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x23u, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a1);
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
            if ( Ndis::BindState::SetPause(
                   (Ndis::BindState *)(*(_QWORD *)(a1 + 32) + 5120LL),
                   DatapathPaused,
                   PauseReason_RestartNeeded)
              && (unsigned __int8)byte_1C00895E3 >= 4u )
            {
              ndisGetBindLinkNameForTracing(
                *(struct NDIS_BIND_FILTER_LINK **)(a1 + 896),
                (struct NDIS_PNPTRACE_LOCALS *)v7);
              if ( (unsigned __int8)byte_1C00895E3 >= 4u )
                WPP_SF_Zq(0x24u, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, (unsigned __int16 *)v7[1], v7[0]);
            }
            Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(a1 + 32) + 5208LL), v6);
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
    WPP_SF_q(0x25u, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a1);
  return v4;
}

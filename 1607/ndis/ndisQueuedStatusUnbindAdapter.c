/*
 * XREFs of ndisQueuedStatusUnbindAdapter @ 0x1C00CF660
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A6BC8 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00E30F8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 */

void __fastcall ndisQueuedStatusUnbindAdapter(PVOID P, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // r12d
  __int64 i; // rdi
  __int64 v7; // r15
  __int64 v8; // rcx
  _QWORD v9[20]; // [rsp+20h] [rbp-B8h] BYREF

  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_q(0x4Fu, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, (__int64)P);
  Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(a2 + 5208));
  v5 = *(_DWORD *)(a2 + 5080);
  for ( i = 0LL; (_DWORD)i != v5; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *(_DWORD *)(a2 + 5080) )
      __fastfail(0xBAD0FFu);
    v7 = *(_QWORD *)(a2 + 5088);
    v4 = *(_QWORD *)(v7 + 8 * i);
    v8 = *(_QWORD *)(*(_QWORD *)(v4 + 104) + 56LL);
    if ( v8
      && *(_BYTE *)(v8 + 56) < 6u
      && Ndis::BindState::SetBinding((Ndis::BindState *)(v4 + 8), BindingDisabled, Reason_RebindNeeded)
      && (unsigned __int8)byte_1C00895E3 >= 4u )
    {
      ndisGetBindLinkNameForTracing(*(struct NDIS_BIND_PROTOCOL_LINK **)(v7 + 8 * i), (struct NDIS_PNPTRACE_LOCALS *)v9);
      WPP_SF_Zq(0x50u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, (unsigned __int16 *)v9[1], v9[0]);
    }
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a2 + 5208), (struct _NDIS_MINIPORT_BLOCK *)v4);
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a2 + 5208), RunSynchronous, 0);
  ndisDereferenceMiniport(a2);
  ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_q(0x51u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, a2);
}

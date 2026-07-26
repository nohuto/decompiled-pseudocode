/*
 * XREFs of ndisQueuedStatusUnbindAdapter @ 0x1C00D0830
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A1F38 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A213C (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F48 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisQueuedStatusUnbindAdapter(PVOID P, __int64 a2)
{
  int v4; // r12d
  __int64 i; // rdi
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[20]; // [rsp+20h] [rbp-B8h] BYREF

  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_q(0x4Fu, &WPP_0009299248ba37495192320194ebfcad_Traceguids, (__int64)P);
  Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(a2 + 5208));
  v4 = *(_DWORD *)(a2 + 5080);
  for ( i = 0LL; (_DWORD)i != v4; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *(_DWORD *)(a2 + 5080) )
      __fastfail(0xBAD0FFu);
    v6 = *(_QWORD *)(a2 + 5088);
    v7 = *(_QWORD *)(v6 + 8 * i);
    v8 = *(_QWORD *)(*(_QWORD *)(v7 + 104) + 56LL);
    if ( v8
      && *(_BYTE *)(v8 + 56) < 6u
      && Ndis::BindState::SetBinding((Ndis::BindState *)(v7 + 8), BindingDisabled, Reason_RebindNeeded)
      && (unsigned __int8)byte_1C0085323 >= 4u )
    {
      ndisGetBindLinkNameForTracing(*(struct NDIS_BIND_PROTOCOL_LINK **)(v6 + 8 * i), (struct NDIS_PNPTRACE_LOCALS *)v9);
      WPP_SF_Zq(0x50u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, (__int64 *)v9[1], v9[0]);
    }
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a2 + 5208));
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a2 + 5208), RunSynchronous);
  ndisDereferenceMiniport(a2, 0x34u);
  ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_q(0x51u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, a2);
}

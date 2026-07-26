/*
 * XREFs of ndisBindRequest @ 0x1C00628E8
 * Callers:
 *     ?ndisFBindRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEBU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0057240 (-ndisFBindRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEBU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisMBindRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0062544 (-ndisMBindRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ndisBugCheckEx @ 0x1C004F098 (ndisBugCheckEx.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A6BC8 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A6CF0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAX$$TPEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00B3588 (-ndisGetBindLinkNameForTracing@@YAX$$TPEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisBindRequest(
        ULONG_PTR BugCheckParameter2,
        Ndis::BindEngine *this,
        Ndis::BindState *a3,
        ULONG_PTR BugCheckParameter3)
{
  enum CallRunMode v7; // edi
  std::nullptr_t v8; // rcx
  unsigned __int16 v9; // cx
  std::nullptr_t v10; // rcx
  unsigned __int16 v11; // cx
  std::nullptr_t v12; // rcx
  std::nullptr_t v13; // rcx
  __int64 v14; // [rsp+28h] [rbp-49h] BYREF
  unsigned __int16 *v15; // [rsp+30h] [rbp-41h]

  if ( *(_BYTE *)BugCheckParameter3 != 0x80
    || *(_BYTE *)(BugCheckParameter3 + 1) != 2
    || *(_WORD *)(BugCheckParameter3 + 2) < 0xACu
    || *(_DWORD *)(BugCheckParameter3 + 4)
    || *(_DWORD *)(BugCheckParameter3 + 168)
    || *(_DWORD *)(BugCheckParameter3 + 164)
    || *(_DWORD *)(BugCheckParameter3 + 160)
    || *(_QWORD *)(BugCheckParameter3 + 16)
    || *(_DWORD *)(BugCheckParameter3 + 24) )
  {
    ndisBugCheckEx(0x22uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  }
  v7 = RunAsynchronous;
  Ndis::BindEngine::BeginPolicyUpdates(this);
  switch ( *(_DWORD *)(BugCheckParameter3 + 8) )
  {
    case 0x12:
      if ( !Ndis::BindState::SetBinding(a3, BindingEnabled, Reason_NetEventInhibitBindsAbove)
        || (unsigned __int8)byte_1C00895E3 < 4u )
      {
        break;
      }
      ndisGetBindLinkNameForTracing(v13, (struct NDIS_PNPTRACE_LOCALS *)&v14);
      v11 = 57;
LABEL_28:
      WPP_SF_Zq(v11, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, v15, v14);
      break;
    case 0x13:
      if ( !Ndis::BindState::SetBinding(a3, BindingDisabled, Reason_NetEventInhibitBindsAbove)
        || (unsigned __int8)byte_1C00895E3 < 4u )
      {
        goto LABEL_24;
      }
      ndisGetBindLinkNameForTracing(v12, (struct NDIS_PNPTRACE_LOCALS *)&v14);
      v9 = 58;
      goto LABEL_23;
    case 0x14:
      if ( !Ndis::BindState::SetPause(a3, DatapathRunning, PauseReason_NetEventRequirePause)
        || (unsigned __int8)byte_1C00895E3 < 4u )
      {
        break;
      }
      ndisGetBindLinkNameForTracing(v10, (struct NDIS_PNPTRACE_LOCALS *)&v14);
      v11 = 59;
      goto LABEL_28;
    case 0x15:
      if ( !Ndis::BindState::SetPause(a3, DatapathPaused, PauseReason_NetEventRequirePause)
        || (unsigned __int8)byte_1C00895E3 < 4u )
      {
        goto LABEL_24;
      }
      ndisGetBindLinkNameForTracing(v8, (struct NDIS_PNPTRACE_LOCALS *)&v14);
      v9 = 60;
LABEL_23:
      WPP_SF_Zq(v9, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, v15, v14);
LABEL_24:
      v7 = RunSynchronous;
      break;
  }
  Ndis::BindEngine::EndPolicyUpdates(this);
  Ndis::BindEngine::ApplyBindChanges(this, v7, 0);
}

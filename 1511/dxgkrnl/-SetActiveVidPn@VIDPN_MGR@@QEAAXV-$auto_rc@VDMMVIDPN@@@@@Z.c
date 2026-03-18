/*
 * XREFs of ?SetActiveVidPn@VIDPN_MGR@@QEAAXV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FD54
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C008DD50 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 * Callees:
 *     ?UpdateVidPnTargetList@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0007CB4 (-UpdateVidPnTargetList@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ??4?$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C000C2EC (--4-$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z.c)
 *     ?SaveAsLkg@DMMVIDPNTOPOLOGY@@QEBAJXZ @ 0x1C0090C08 (-SaveAsLkg@DMMVIDPNTOPOLOGY@@QEBAJXZ.c)
 */

unsigned __int64 __fastcall VIDPN_MGR::SetActiveVidPn(__int64 a1, __int64 *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbp
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  if ( **(struct _KTHREAD ***)(a1 + 40) != KeGetCurrentThread() )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !*a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v12);
  }
  auto_rc<DMMVIDPN>::operator=((__int64 *)(a1 + 72), a2);
  v4 = DMMVIDPNTOPOLOGY::SaveAsLkg((DMMVIDPNTOPOLOGY *)(*(_QWORD *)(a1 + 72) + 96LL));
  v9 = v4;
  if ( v4 < 0 )
  {
    v13 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v6 = *(_QWORD *)(a1 + 72) + 96LL;
    *(_QWORD *)(v13 + 24) = v6;
    *(_QWORD *)(v13 + 32) = v9;
  }
  if ( !*(_QWORD *)(a1 + 8) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v14);
  }
  ADAPTER_DISPLAY::UpdateVidPnTargetList(*(ADAPTER_DISPLAY **)(a1 + 8));
  return auto_rc<DMMVIDPN>::reset(a2, 0LL);
}

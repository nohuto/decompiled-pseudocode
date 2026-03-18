/*
 * XREFs of ?SetActiveVidPn@VIDPN_MGR@@QEAAXV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00CDBEC
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C00CC7A0 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 * Callees:
 *     ??4?$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C0007D94 (--4-$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z.c)
 *     ?UpdateVidPnTargetList@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C000E398 (-UpdateVidPnTargetList@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?SaveAsLkg@DMMVIDPNTOPOLOGY@@QEBAJXZ @ 0x1C00CBE20 (-SaveAsLkg@DMMVIDPNTOPOLOGY@@QEBAJXZ.c)
 */

unsigned __int64 __fastcall VIDPN_MGR::SetActiveVidPn(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r8
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*(_QWORD *)(a1 + 40) + 8LL) != CurrentThread )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2, CurrentThread, a4);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !*a2 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1, a2, CurrentThread, a4);
    WdLogEvent5_WdAssertion(v15);
  }
  auto_rc<DMMVIDPN>::operator=((__int64 *)(a1 + 72), a2);
  v7 = DMMVIDPNTOPOLOGY::SaveAsLkg((DMMVIDPNTOPOLOGY *)(*(_QWORD *)(a1 + 72) + 96LL));
  v12 = v7;
  if ( v7 < 0 )
  {
    v16 = WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
    v9 = *(_QWORD *)(a1 + 72) + 96LL;
    *(_QWORD *)(v16 + 24) = v9;
    *(_QWORD *)(v16 + 32) = v12;
  }
  if ( !*(_QWORD *)(a1 + 8) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v17);
  }
  ADAPTER_DISPLAY::UpdateVidPnTargetList(*(ADAPTER_DISPLAY **)(a1 + 8));
  return auto_rc<DMMVIDPN>::reset(a2, 0LL);
}

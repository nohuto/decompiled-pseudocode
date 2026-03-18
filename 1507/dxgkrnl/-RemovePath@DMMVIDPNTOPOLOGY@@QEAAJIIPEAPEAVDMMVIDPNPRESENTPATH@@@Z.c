/*
 * XREFs of ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C008A0DC
 * Callers:
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C008E76C (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C0096A54 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_ @ 0x1C00B10E0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_.c)
 *     ?RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z @ 0x1C00B9520 (-RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z.c)
 *     ?RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z @ 0x1C00BD1F0 (-RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00CC158 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C0173A38 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?RemovePath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z @ 0x1C017C400 (-RemovePath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z.c)
 * Callees:
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAJXZ @ 0x1C0003CDC (-_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAJXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00043C4 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00043F8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAJXZ @ 0x1C0006FC4 (-_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAJXZ.c)
 *     ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x1C00076DC (-IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z.c)
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C000770C (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 *     ??A?$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEBAAEBTModifyingActionConstraints@ProtectableFromChange@@_K@Z @ 0x1C0007FE0 (--A-$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEBAAEBTModifyingActionConstrai.c)
 *     ?Remove@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x1C0008334 (-Remove@-$Set@VDMMVIDPNPRESENTPATH@@@@QEAAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C008A260 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::RemovePath(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        unsigned int a3,
        struct DMMVIDPNPRESENTPATH **a4)
{
  __int64 v4; // r14
  __int64 v6; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DMMVIDPNPRESENTPATH *Path; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  int *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  DMMVIDPNSOURCE *v24; // r10
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3;
  v6 = a2;
  if ( a4 )
    *a4 = 0LL;
  if ( !ProtectableFromChange::IsModifyingActionAllowed((DMMVIDPNTOPOLOGY *)((char *)this + 56), 2u) )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v8);
LABEL_19:
    v26[3] = this;
    WdLogEvent5_WdError(v26);
    return 3221225506LL;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(this, v6, v4);
  if ( Path )
  {
    if ( *((_BYTE *)this + 76) <= 2u )
    {
      v28 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
      WdLogEvent5_WdAssertion(v28);
    }
    if ( (*(_BYTE *)Vector<ProtectableFromChange::ModifyingActionConstraints>::operator[]((__int64)this + 80, 2uLL) & 1) != 0 )
    {
      v37 = 0LL;
      if ( (int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(this, v6, &v37) < 0 || (v33 = v37) == 0 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v30, v29, v31, v32);
        WdLogEvent5_WdAssertion(v34);
        v33 = v37;
      }
      if ( v33 < 2 )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdError(v30);
        v26[4] = v6;
        v26[5] = v4;
        goto LABEL_19;
      }
    }
    v16 = Set<DMMVIDPNPRESENTPATH>::Remove((__int64)this, (__int64)Path);
    if ( !v16 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v15, v14, v17, v18);
      WdLogEvent5_WdAssertion(v35);
    }
    *((_DWORD *)this + 49) &= ~(1 << (*(_DWORD *)(v16 + 104) - 1));
    v19 = *(int **)(v16 + 96);
    if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(this, v19[6]) )
    {
      v36 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
      WdLogEvent5_WdAssertion(v36);
    }
    DMMVIDPNTARGET::_SetEmptyCofuncModeSet((DMMVIDPNTARGET *)v19);
    if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology(this, *(_DWORD *)(*(_QWORD *)(v16 + 88) + 24LL)) )
      DMMVIDPNSOURCE::_SetEmptyCofuncModeSet(v24);
    if ( a4 )
      *a4 = (struct DMMVIDPNPRESENTPATH *)v16;
    else
      (**(void (__fastcall ***)(__int64, __int64))v16)(v16, 1LL);
    ProtectableFromChange::OnModifyingActionCompletion((DMMVIDPNTOPOLOGY *)((char *)this + 56), 2u);
    return 0LL;
  }
  else
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v27[3] = v6;
    v27[4] = v4;
    v27[5] = this;
    WdLogEvent5_WdError(v27);
    return 3223192359LL;
  }
}

/*
 * XREFs of ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0091214
 * Callers:
 *     ?RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z @ 0x1C008F004 (-RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C008F680 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C0090F40 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A5D3C (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     sub_1C00C5900 @ 0x1C00C5900 (sub_1C00C5900.c)
 *     ?RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z @ 0x1C00CBC48 (-RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C0178054 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?RemovePath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z @ 0x1C0180140 (-RemovePath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004E38 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004EC4 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004EF8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAJXZ @ 0x1C0006404 (-_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAJXZ.c)
 *     ?Remove@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x1C00086A8 (-Remove@-$Set@VDMMVIDPNPRESENTPATH@@@@QEAAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z.c)
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAJXZ @ 0x1C0009DB4 (-_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAJXZ.c)
 *     ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x1C000A0F4 (-IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z.c)
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C000A124 (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 *     ??A?$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEBAAEBTModifyingActionConstraints@ProtectableFromChange@@_K@Z @ 0x1C000A198 (--A-$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEBAAEBTModifyingActionConstrai.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0091398 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
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
  __int64 v9; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r15
  __int64 v11; // rcx
  __int64 v12; // rdi
  int *v13; // r14
  __int64 v14; // rcx
  DMMVIDPNSOURCE *v15; // r10
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3;
  v6 = a2;
  if ( a4 )
    *a4 = 0LL;
  if ( !ProtectableFromChange::IsModifyingActionAllowed((DMMVIDPNTOPOLOGY *)((char *)this + 56), 2u) )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v8);
LABEL_19:
    v17[3] = this;
    WdLogEvent5_WdError(v17);
    return 3221225506LL;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(this, v6, v4);
  if ( Path )
  {
    if ( *((_BYTE *)this + 76) <= 2u )
    {
      v19 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v19);
    }
    if ( (*(_BYTE *)Vector<ProtectableFromChange::ModifyingActionConstraints>::operator[]((__int64)this + 80, 2uLL) & 1) != 0 )
    {
      v25 = 0LL;
      if ( (int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(this, v6, &v25) < 0 || (v21 = v25) == 0 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v22);
        v21 = v25;
      }
      if ( v21 < 2 )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdError(v20);
        v17[4] = v6;
        v17[5] = v4;
        goto LABEL_19;
      }
    }
    v12 = Set<DMMVIDPNPRESENTPATH>::Remove((__int64)this, (__int64)Path);
    if ( !v12 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v11);
      WdLogEvent5_WdAssertion(v23);
    }
    *((_DWORD *)this + 49) &= ~(1 << (*(_DWORD *)(v12 + 104) - 1));
    v13 = *(int **)(v12 + 96);
    if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(this, v13[6]) )
    {
      v24 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v24);
    }
    DMMVIDPNTARGET::_SetEmptyCofuncModeSet((DMMVIDPNTARGET *)v13);
    if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology(this, *(_DWORD *)(*(_QWORD *)(v12 + 88) + 24LL)) )
      DMMVIDPNSOURCE::_SetEmptyCofuncModeSet(v15);
    if ( a4 )
      *a4 = (struct DMMVIDPNPRESENTPATH *)v12;
    else
      (**(void (__fastcall ***)(__int64, __int64))v12)(v12, 1LL);
    ProtectableFromChange::OnModifyingActionCompletion((DMMVIDPNTOPOLOGY *)((char *)this + 56), 2u);
    return 0LL;
  }
  else
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v18[3] = v6;
    v18[4] = v4;
    v18[5] = this;
    WdLogEvent5_WdError(v18);
    return 3223192359LL;
  }
}

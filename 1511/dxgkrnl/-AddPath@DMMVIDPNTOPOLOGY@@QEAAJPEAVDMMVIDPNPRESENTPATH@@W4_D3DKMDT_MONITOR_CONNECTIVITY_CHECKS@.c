/*
 * XREFs of ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C009106C
 * Callers:
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C008F680 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C0091E10 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00DC850 (-RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C017F650 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004E38 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004EF8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Add@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0008640 (-Add@-$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x1C000A0F4 (-IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z.c)
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C000A124 (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C1AC (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AddPath(
        DMMVIDPNTOPOLOGY *this,
        struct DMMVIDPNPRESENTPATH *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r14
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // r15
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r10
  _QWORD *v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  _QWORD *v33; // rax
  DMMVIDPNTOPOLOGY *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax

  v4 = (int)a3;
  if ( !a2 )
  {
    v25 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v25);
  }
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v7[3] = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
  v7[4] = *(unsigned int *)(*((_QWORD *)a2 + 12) + 24LL);
  v7[5] = *((int *)a2 + 26);
  v7[6] = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
  v7[7] = v4;
  if ( !ProtectableFromChange::IsModifyingActionAllowed((DMMVIDPNTOPOLOGY *)((char *)this + 56), 1u) )
  {
    v26 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v26 + 24) = this;
    WdLogEvent5_WdError(v26);
    return 3221225506LL;
  }
  v9 = *((_QWORD *)a2 + 12);
  if ( DMMVIDPNTOPOLOGY::FindPath(this, *(_DWORD *)(*((_QWORD *)a2 + 11) + 24LL), *(_DWORD *)(v9 + 24)) )
  {
    v27 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    *(_QWORD *)(v27 + 24) = a2;
    *(_QWORD *)(v27 + 32) = this;
    WdLogEvent5_WdWarning(v27);
    return 3223192339LL;
  }
  v14 = *(_BYTE *)(*(_QWORD *)(v9 + 96) + 390LL);
  if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(this, v12) )
  {
    v24 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdDmmEvent)();
    v24[3] = a2;
    v24[4] = this;
    v24[5] = *(unsigned int *)(v9 + 24);
    WdLogEvent5_WdDmmEvent(v24);
    return 3223192320LL;
  }
  if ( !*(_QWORD *)(v17 + 96) )
  {
    v22 = (unsigned int)(v4 - 1);
    if ( (_DWORD)v4 == 1 )
    {
      v23 = WdLogNewEntry5_WdDmmEvent(v22);
      *(_QWORD *)(v23 + 24) = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
      *(_QWORD *)(v23 + 32) = *(unsigned int *)(*((_QWORD *)a2 + 12) + 24LL);
      WdLogEvent5_WdDmmEvent(v23);
    }
    else
    {
      if ( (_DWORD)v4 == 2 )
      {
        v29 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdDmmEvent)();
        v29[3] = a2;
        v29[4] = this;
        v29[5] = *(unsigned int *)(v9 + 24);
        WdLogEvent5_WdDmmEvent(v29);
        return 3223192376LL;
      }
      if ( (unsigned int)(v4 - 1) > 1 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v22);
        WdLogEvent5_WdAssertion(v28);
      }
    }
  }
  v18 = (_QWORD *)((char *)this + 24);
  if ( (_QWORD *)*v18 == v18 || (v19 = *v18 - 8LL) == 0 )
  {
LABEL_9:
    if ( Set<DMMVIDPNPRESENTPATH>::Add((__int64)this, (__int64)a2) != 1 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v20);
      WdLogEvent5_WdAssertion(v35);
    }
    if ( this )
    {
      if ( *((_QWORD *)a2 + 6) )
      {
        v37 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v37);
      }
      *((_QWORD *)a2 + 6) = this;
    }
    else
    {
      v36 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v36 + 24) = (char *)a2 + 40;
      *(_QWORD *)(v36 + 32) = *((_QWORD *)a2 + 6);
      WdLogEvent5_WdError(v36);
    }
    *((_DWORD *)this + 49) |= 1 << (*((_DWORD *)a2 + 26) - 1);
    ProtectableFromChange::OnModifyingActionCompletion((DMMVIDPNTOPOLOGY *)((char *)this + 56), 1u);
    return 0LL;
  }
  while ( 1 )
  {
    v30 = *(_QWORD *)(v19 + 88);
    v31 = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
    if ( *(_DWORD *)(v30 + 24) != (_DWORD)v31 )
      goto LABEL_29;
    if ( v14 )
      break;
    v31 = *(_QWORD *)(*(_QWORD *)(v19 + 96) + 96LL);
    if ( *(_BYTE *)(v31 + 390) )
    {
      v32 = WdLogNewEntry5_WdWarning(v31, v30, v15, v16);
      *(_QWORD *)(v32 + 24) = *(_QWORD *)(v19 + 96);
      goto LABEL_37;
    }
LABEL_29:
    if ( *(_DWORD *)(v19 + 104) == *((_DWORD *)a2 + 26) )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v15, v16);
      v33[3] = a2;
      v33[4] = *((int *)a2 + 26);
      v33[5] = v9;
      v33[6] = this;
      WdLogEvent5_WdWarning(v33);
    }
    v34 = *(DMMVIDPNTOPOLOGY **)(v19 + 8);
    if ( v34 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
      v19 = 0LL;
    else
      v19 = (__int64)v34 - 8;
    if ( !v19 )
      goto LABEL_9;
  }
  v32 = WdLogNewEntry5_WdWarning(v31, v30, v15, v16);
  *(_QWORD *)(v32 + 24) = v9;
LABEL_37:
  *(_QWORD *)(v32 + 32) = -1071774975LL;
  WdLogEvent5_WdWarning(v32);
  return 3223192321LL;
}

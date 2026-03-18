/*
 * XREFs of ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0089F34
 * Callers:
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00891AC (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C0096A54 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00CC290 (-RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C017B910 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00043F8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x1C00076DC (-IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z.c)
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C000770C (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?Add@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00082CC (-Add@-$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r10
  _QWORD *v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  _QWORD *v37; // rax
  DMMVIDPNTOPOLOGY *v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax

  v4 = (int)a3;
  if ( !a2 )
  {
    v29 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v29);
  }
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v7[3] = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
  v7[4] = *(unsigned int *)(*((_QWORD *)a2 + 12) + 24LL);
  v7[5] = *((int *)a2 + 26);
  v7[6] = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
  v7[7] = v4;
  if ( !ProtectableFromChange::IsModifyingActionAllowed((DMMVIDPNTOPOLOGY *)((char *)this + 56), 1u) )
  {
    v30 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v30 + 24) = this;
    WdLogEvent5_WdError(v30);
    return 3221225506LL;
  }
  v9 = *((_QWORD *)a2 + 12);
  if ( DMMVIDPNTOPOLOGY::FindPath(this, *(_DWORD *)(*((_QWORD *)a2 + 11) + 24LL), *(_DWORD *)(v9 + 24)) )
  {
    v31 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    *(_QWORD *)(v31 + 24) = a2;
    *(_QWORD *)(v31 + 32) = this;
    WdLogEvent5_WdWarning(v31);
    return 3223192339LL;
  }
  v14 = *(_BYTE *)(*(_QWORD *)(v9 + 96) + 390LL);
  if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(this, v12) )
  {
    v28 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdDmmEvent)();
    v28[3] = a2;
    v28[4] = this;
    v28[5] = *(unsigned int *)(v9 + 24);
    WdLogEvent5_WdDmmEvent(v28);
    return 3223192320LL;
  }
  if ( !*(_QWORD *)(v18 + 96) )
  {
    v26 = (unsigned int)(v4 - 1);
    if ( (_DWORD)v4 == 1 )
    {
      v27 = WdLogNewEntry5_WdDmmEvent(v26);
      *(_QWORD *)(v27 + 24) = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
      *(_QWORD *)(v27 + 32) = *(unsigned int *)(*((_QWORD *)a2 + 12) + 24LL);
      WdLogEvent5_WdDmmEvent(v27);
    }
    else
    {
      if ( (_DWORD)v4 == 2 )
      {
        v33 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdDmmEvent)();
        v33[3] = a2;
        v33[4] = this;
        v33[5] = *(unsigned int *)(v9 + 24);
        WdLogEvent5_WdDmmEvent(v33);
        return 3223192376LL;
      }
      if ( (unsigned int)(v4 - 1) > 1 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v26, v15, v16, v17);
        WdLogEvent5_WdAssertion(v32);
      }
    }
  }
  v19 = (_QWORD *)((char *)this + 24);
  if ( (_QWORD *)*v19 == v19 || (v20 = *v19 - 8LL) == 0 )
  {
LABEL_9:
    if ( Set<DMMVIDPNPRESENTPATH>::Add((__int64)this, (__int64)a2) != 1 )
    {
      v39 = WdLogNewEntry5_WdAssertion(v22, v21, v23, v24);
      WdLogEvent5_WdAssertion(v39);
    }
    if ( this )
    {
      if ( *((_QWORD *)a2 + 6) )
      {
        v41 = WdLogNewEntry5_WdAssertion(v22, v21, v23, v24);
        WdLogEvent5_WdAssertion(v41);
      }
      *((_QWORD *)a2 + 6) = this;
    }
    else
    {
      v40 = WdLogNewEntry5_WdError(v22);
      *(_QWORD *)(v40 + 24) = (char *)a2 + 40;
      *(_QWORD *)(v40 + 32) = *((_QWORD *)a2 + 6);
      WdLogEvent5_WdError(v40);
    }
    *((_DWORD *)this + 49) |= 1 << (*((_DWORD *)a2 + 26) - 1);
    ProtectableFromChange::OnModifyingActionCompletion((DMMVIDPNTOPOLOGY *)((char *)this + 56), 1u);
    return 0LL;
  }
  while ( 1 )
  {
    v34 = *(_QWORD *)(v20 + 88);
    v35 = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
    if ( *(_DWORD *)(v34 + 24) != (_DWORD)v35 )
      goto LABEL_29;
    if ( v14 )
      break;
    v35 = *(_QWORD *)(*(_QWORD *)(v20 + 96) + 96LL);
    if ( *(_BYTE *)(v35 + 390) )
    {
      v36 = WdLogNewEntry5_WdWarning(v35, v34, v16, v17);
      *(_QWORD *)(v36 + 24) = *(_QWORD *)(v20 + 96);
      goto LABEL_37;
    }
LABEL_29:
    if ( *(_DWORD *)(v20 + 104) == *((_DWORD *)a2 + 26) )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, v16, v17);
      v37[3] = a2;
      v37[4] = *((int *)a2 + 26);
      v37[5] = v9;
      v37[6] = this;
      WdLogEvent5_WdWarning(v37);
    }
    v38 = *(DMMVIDPNTOPOLOGY **)(v20 + 8);
    if ( v38 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
      v20 = 0LL;
    else
      v20 = (__int64)v38 - 8;
    if ( !v20 )
      goto LABEL_9;
  }
  v36 = WdLogNewEntry5_WdWarning(v35, v34, v16, v17);
  *(_QWORD *)(v36 + 24) = v9;
LABEL_37:
  *(_QWORD *)(v36 + 32) = -1071774975LL;
  WdLogEvent5_WdWarning(v36);
  return 3223192321LL;
}

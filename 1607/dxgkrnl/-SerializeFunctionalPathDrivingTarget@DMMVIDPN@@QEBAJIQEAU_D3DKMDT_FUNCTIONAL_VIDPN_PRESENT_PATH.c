/*
 * XREFs of ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C007E558
 * Callers:
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C008388C (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D39F4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary @ 0x1C00D9D3C (DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E2234 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@PEAU_D.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00047D8 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00804BC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0080CB8 (-SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@.c)
 */

__int64 __fastcall DMMVIDPN::SerializeFunctionalPathDrivingTarget(
        DMMVIDPN *this,
        unsigned int a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a3)
{
  __int64 v3; // rsi
  int PathSourceFromTarget; // eax
  __int64 v7; // rcx
  DMMVIDPNPRESENTPATH *Path; // rbp
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbp
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  __int64 v24; // rsi
  __int64 v25; // rax

  v3 = a2;
  if ( !a3 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v16);
  }
  memset(a3, 0, 0x1E0uLL);
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((DMMVIDPN *)((char *)this + 96), v3);
  if ( PathSourceFromTarget == -1 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v18[3] = v3;
    v19 = *((_QWORD *)this + 6);
    if ( !*(_QWORD *)(v19 + 8) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v17);
      WdLogEvent5_WdAssertion(v20);
    }
    v18[4] = *(_QWORD *)(*(_QWORD *)(v19 + 8) + 16LL);
    v18[5] = this;
    WdLogEvent5_WdDmmEvent(v18);
    return 3223192384LL;
  }
  else
  {
    Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPN *)((char *)this + 96), PathSourceFromTarget, v3);
    if ( !Path )
    {
      v21 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v21);
    }
    v9 = DMMVIDPNPRESENTPATH::SerializeFunctionalPath(Path, a3);
    v14 = v9;
    if ( v9 < 0 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
      v23[3] = v3;
      v24 = *((_QWORD *)this + 6);
      if ( !*(_QWORD *)(v24 + 8) )
      {
        v25 = WdLogNewEntry5_WdAssertion(v22);
        WdLogEvent5_WdAssertion(v25);
      }
      v23[4] = *(_QWORD *)(*(_QWORD *)(v24 + 8) + 16LL);
      v23[5] = this;
      v23[6] = v14;
      WdLogEvent5_WdWarning(v23);
      return (unsigned int)v14;
    }
    else
    {
      return 0LL;
    }
  }
}

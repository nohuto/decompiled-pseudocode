/*
 * XREFs of ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00922B4
 * Callers:
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C008E7E8 (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary @ 0x1C00C5508 (DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00CB234 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004E38 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0091004 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00A11B4 (-SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@.c)
 */

__int64 __fastcall DMMVIDPN::SerializeFunctionalPathDrivingTarget(
        DMMVIDPN *this,
        unsigned int a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a3)
{
  __int64 v3; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  int PathSourceFromTarget; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  DMMVIDPNPRESENTPATH *Path; // rbp
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbp
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rbx
  __int64 v27; // rsi
  __int64 v28; // rax

  v3 = a2;
  if ( !a3 )
  {
    v19 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v19);
  }
  memset(a3, 0, 0x1E0uLL);
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                           (DMMVIDPN *)((char *)this + 96),
                           (unsigned int)v3,
                           v6,
                           v7);
  if ( PathSourceFromTarget == -1 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v9);
    v21[3] = v3;
    v22 = *((_QWORD *)this + 6);
    if ( !*(_QWORD *)(v22 + 8) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v20);
      WdLogEvent5_WdAssertion(v23);
    }
    v21[4] = *(_QWORD *)(*(_QWORD *)(v22 + 8) + 16LL);
    v21[5] = this;
    WdLogEvent5_WdDmmEvent(v21);
    return 3223192384LL;
  }
  else
  {
    Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPN *)((char *)this + 96), PathSourceFromTarget, v3);
    if ( !Path )
    {
      v24 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v24);
    }
    v12 = DMMVIDPNPRESENTPATH::SerializeFunctionalPath(Path, a3);
    v17 = v12;
    if ( v12 < 0 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
      v26[3] = v3;
      v27 = *((_QWORD *)this + 6);
      if ( !*(_QWORD *)(v27 + 8) )
      {
        v28 = WdLogNewEntry5_WdAssertion(v25);
        WdLogEvent5_WdAssertion(v28);
      }
      v26[4] = *(_QWORD *)(*(_QWORD *)(v27 + 8) + 16LL);
      v26[5] = this;
      v26[6] = v17;
      WdLogEvent5_WdWarning(v26);
      return (unsigned int)v17;
    }
    else
    {
      return 0LL;
    }
  }
}

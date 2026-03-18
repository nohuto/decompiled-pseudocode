/*
 * XREFs of ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00CBA5C
 * Callers:
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary @ 0x1C00B89C4 (DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary.c)
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8CFC (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BCBD4 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0089ECC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00CBD24 (-SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@.c)
 */

__int64 __fastcall DMMVIDPN::SerializeFunctionalPathDrivingTarget(
        DMMVIDPN *this,
        __int64 a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a3,
        __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  int PathSourceFromTarget; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  DMMVIDPNPRESENTPATH *Path; // rbp
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbp
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rbx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rbx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rsi
  __int64 v38; // rax

  v4 = (unsigned int)a2;
  if ( !a3 )
  {
    v23 = WdLogNewEntry5_WdAssertion(this, a2, 0LL, a4);
    WdLogEvent5_WdAssertion(v23);
  }
  memset(a3, 0, 0x1E0uLL);
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                           (DMMVIDPN *)((char *)this + 96),
                           (unsigned int)v4,
                           v7,
                           v8);
  if ( PathSourceFromTarget == -1 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v10);
    v26[3] = v4;
    v29 = *((_QWORD *)this + 6);
    if ( !*(_QWORD *)(v29 + 8) )
    {
      v30 = WdLogNewEntry5_WdAssertion(v25, v24, v27, v28);
      WdLogEvent5_WdAssertion(v30);
    }
    v26[4] = *(_QWORD *)(*(_QWORD *)(v29 + 8) + 16LL);
    v26[5] = this;
    WdLogEvent5_WdDmmEvent(v26);
    return 3223192384LL;
  }
  else
  {
    Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPN *)((char *)this + 96), PathSourceFromTarget, v4);
    if ( !Path )
    {
      v31 = WdLogNewEntry5_WdAssertion(v12, v11, v14, v15);
      WdLogEvent5_WdAssertion(v31);
    }
    v16 = DMMVIDPNPRESENTPATH::SerializeFunctionalPath(Path, a3);
    v21 = v16;
    if ( v16 < 0 )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
      v34[3] = v4;
      v37 = *((_QWORD *)this + 6);
      if ( !*(_QWORD *)(v37 + 8) )
      {
        v38 = WdLogNewEntry5_WdAssertion(v33, v32, v35, v36);
        WdLogEvent5_WdAssertion(v38);
      }
      v34[4] = *(_QWORD *)(*(_QWORD *)(v37 + 8) + 16LL);
      v34[5] = this;
      v34[6] = v21;
      WdLogEvent5_WdWarning(v34);
      return (unsigned int)v21;
    }
    else
    {
      return 0LL;
    }
  }
}

/*
 * XREFs of DxgkRemoveSessionViewForCurrentSession @ 0x1C00BDF98
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C005F540 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C0065374 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@IE@Z @ 0x1C00BE00C (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@IE@Z.c)
 */

__int64 __fastcall DxgkRemoveSessionViewForCurrentSession(struct _LUID *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // di
  unsigned int v5; // esi
  DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _KTHREAD **SessionData; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax

  v4 = a3;
  v5 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2, a3, a4);
  SessionData = (struct _KTHREAD **)DXGGLOBAL::GetSessionData(Global, v8, v9, v10);
  if ( SessionData )
  {
    if ( SessionData[2315] != KeGetCurrentThread() )
    {
      v22 = WdLogNewEntry5_WdAssertion(v12, v11, v14, v15);
      *(_QWORD *)(v22 + 24) = 730LL;
      WdLogEvent5_WdAssertion(v22);
    }
    return DXGSESSIONDATA::RemoveSourceViewFromSession((DXGSESSIONDATA *)SessionData, a1, v5, v4);
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v17 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v19, v18, v20, v21);
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
}

/*
 * XREFs of DxgkRemoveSessionViewForCurrentSession @ 0x1C00AE93C
 * Callers:
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C00A3B2C (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00AE440 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@IE@Z @ 0x1C009EF8C (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@IE@Z.c)
 */

__int64 __fastcall DxgkRemoveSessionViewForCurrentSession(struct _LUID *a1, unsigned int a2, char a3)
{
  DXGGLOBAL *Global; // rax
  __int64 v7; // rcx
  struct _KTHREAD **SessionData; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  SessionData = (struct _KTHREAD **)DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    if ( SessionData[2318] != KeGetCurrentThread() )
    {
      v15 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v15 + 24) = 731LL;
      WdLogEvent5_WdAssertion(v15);
    }
    return DXGSESSIONDATA::RemoveSourceViewFromSession((DXGSESSIONDATA *)SessionData, a1, a2, a3);
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v10 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v12, v11, v13, v14);
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
}

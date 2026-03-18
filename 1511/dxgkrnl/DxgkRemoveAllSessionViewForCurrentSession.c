/*
 * XREFs of DxgkRemoveAllSessionViewForCurrentSession @ 0x1C00C6094
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A4E18 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C009EF24 (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkRemoveAllSessionViewForCurrentSession(__int64 a1)
{
  DXGGLOBAL *Global; // rax
  __int64 v2; // rcx
  struct _KTHREAD **SessionData; // rbx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax

  Global = DXGGLOBAL::GetGlobal(a1);
  SessionData = (struct _KTHREAD **)DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    if ( SessionData[2318] != KeGetCurrentThread() )
    {
      v10 = WdLogNewEntry5_WdAssertion(v2);
      *(_QWORD *)(v10 + 24) = 772LL;
      WdLogEvent5_WdAssertion(v10);
    }
    DXGSESSIONDATA::RemoveAllSourceViewFromSession((DXGSESSIONDATA *)SessionData);
    return 0LL;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v5 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v7, v6, v8, v9);
    *(_QWORD *)(v5 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
}

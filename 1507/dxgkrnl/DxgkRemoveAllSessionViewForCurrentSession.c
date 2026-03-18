/*
 * XREFs of DxgkRemoveAllSessionViewForCurrentSession @ 0x1C00B100C
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0066644 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C008F2D4 (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkRemoveAllSessionViewForCurrentSession(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD **SessionData; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax

  Global = DXGGLOBAL::GetGlobal(a1, a2, a3, a4);
  SessionData = (struct _KTHREAD **)DXGGLOBAL::GetSessionData(Global, v5, v6, v7);
  if ( SessionData )
  {
    if ( SessionData[2315] != KeGetCurrentThread() )
    {
      v19 = WdLogNewEntry5_WdAssertion(v9, v8, v11, v12);
      *(_QWORD *)(v19 + 24) = 771LL;
      WdLogEvent5_WdAssertion(v19);
    }
    DXGSESSIONDATA::RemoveAllSourceViewFromSession((DXGSESSIONDATA *)SessionData);
    return 0LL;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v14 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v16, v15, v17, v18);
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
}

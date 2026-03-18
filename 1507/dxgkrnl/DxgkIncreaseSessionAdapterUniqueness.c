/*
 * XREFs of DxgkIncreaseSessionAdapterUniqueness @ 0x1C00BE408
 * Callers:
 *     DxgkSessionReconnected @ 0x1C00BE390 (DxgkSessionReconnected.c)
 *     DxgkSessionDisconnected @ 0x1C00BE3C0 (DxgkSessionDisconnected.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall DxgkIncreaseSessionAdapterUniqueness(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9

  Global = DXGGLOBAL::GetGlobal(a1, a2, a3, a4);
  SessionData = DXGGLOBAL::GetSessionData(Global, v5, v6, v7);
  if ( SessionData )
  {
    v10 = (volatile signed __int32 *)*((_QWORD *)SessionData + 2313);
    if ( v10 )
      _InterlockedIncrement(v10);
    return 0LL;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v12 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v14, v13, v15, v16);
    *(_QWORD *)(v12 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
}

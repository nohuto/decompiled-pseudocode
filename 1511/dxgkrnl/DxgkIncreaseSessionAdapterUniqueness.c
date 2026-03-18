/*
 * XREFs of DxgkIncreaseSessionAdapterUniqueness @ 0x1C00B8F34
 * Callers:
 *     DxgkSessionDisconnected @ 0x1C00B8EF0 (DxgkSessionDisconnected.c)
 *     DxgkSessionReconnected @ 0x1C00CCCF0 (DxgkSessionReconnected.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall DxgkIncreaseSessionAdapterUniqueness(__int64 a1)
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v3; // rcx
  volatile signed __int32 *v4; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  Global = DXGGLOBAL::GetGlobal(a1);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    v4 = (volatile signed __int32 *)*((_QWORD *)SessionData + 2316);
    if ( v4 )
      _InterlockedIncrement(v4);
    return 0LL;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v6 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v8, v7, v9, v10);
    *(_QWORD *)(v6 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
}

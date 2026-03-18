/*
 * XREFs of DxgkIncreaseSessionAdapterUniqueness @ 0x1C00C617C
 * Callers:
 *     DxgkSessionDisconnected @ 0x1C00C6100 (DxgkSessionDisconnected.c)
 *     DxgkSessionConnected @ 0x1C00C6150 (DxgkSessionConnected.c)
 *     DxgkSessionReconnected @ 0x1C00E3010 (DxgkSessionReconnected.c)
 * Callees:
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
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
    v4 = (volatile signed __int32 *)*((_QWORD *)SessionData + 2313);
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

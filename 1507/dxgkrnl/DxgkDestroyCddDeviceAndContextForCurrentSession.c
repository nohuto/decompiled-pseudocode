/*
 * XREFs of DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0156B24
 * Callers:
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C0065374 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z @ 0x1C0065524 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z.c)
 *     ?DxgkCddDestroy@@YAJIIQEAXE@Z @ 0x1C00B07B0 (-DxgkCddDestroy@@YAJIIQEAXE@Z.c)
 *     DxgkDisplayOnOff @ 0x1C00BA1C0 (DxgkDisplayOnOff.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEAU_LUID@@@Z @ 0x1C008F454 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEAU_LUID@@@Z.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DA6A4 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkDestroyCddDeviceAndContextForCurrentSession(
        struct _LUID *a1,
        struct DXGDEVICE *a2,
        __int64 a3,
        __int64 a4)
{
  DXGGLOBAL *Global; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  DXGSESSIONDATA *SessionData; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rcx
  SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2, a3, a4);
  SessionData = DXGGLOBAL::GetSessionData(Global, v7, v8, v9);
  if ( !SessionData )
  {
    v12 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v12 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v14, v13, v15, v16);
    v17 = (_QWORD *)v12;
    *(_QWORD *)(v12 + 32) = -1073741811LL;
LABEL_3:
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(SessionData, a1);
  if ( !SessionAdapterFromLuid )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v21[3] = a1->HighPart;
    v21[4] = a1->LowPart;
    v17 = v21;
    v21[5] = -1073741811LL;
    goto LABEL_3;
  }
  SESSION_ADAPTER::DestroyCddDeviceAndContext(SessionAdapterFromLuid, a2);
  return 0LL;
}

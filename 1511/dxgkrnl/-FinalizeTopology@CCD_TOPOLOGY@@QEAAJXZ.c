/*
 * XREFs of ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00A2688
 * Callers:
 *     DxgkFinalizePathsModality @ 0x1C00C6440 (DxgkFinalizePathsModality.c)
 * Callees:
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0007070 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007098 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000B054 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1C000B08C (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C00A3B2C (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FinalizeTopology(CCD_TOPOLOGY *this)
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rbp
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  unsigned int v11; // edi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  _BYTE v18[8]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF
  char v20; // [rsp+58h] [rbp-20h]

  v20 = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  v5 = -1073741811;
  if ( !SessionData )
  {
    v15 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v15 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    v16 = v15;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
LABEL_12:
    WdLogEvent5_WdError(v16);
    goto LABEL_9;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionData + 2324));
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v16 = WdLogNewEntry5_WdError(v6);
    goto LABEL_12;
  }
  v18[0] = 0;
  v8 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v18, 1);
  v10 = v8;
  if ( v8 < 0 )
  {
    v17 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v17 + 24) = v10;
LABEL_15:
    WdLogEvent5_WdError(v17);
    v5 = v10;
    goto LABEL_8;
  }
  v11 = 0;
  if ( *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) )
  {
    while ( 1 )
    {
      v12 = CCD_TOPOLOGY::FinalizeTopologyOnAdapter(this, Current, v11);
      v10 = v12;
      if ( v12 < 0 )
        break;
      if ( ++v11 >= *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) )
        goto LABEL_7;
    }
    v17 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v17 + 24) = v11;
    *(_QWORD *)(v17 + 32) = v10;
    goto LABEL_15;
  }
LABEL_7:
  v5 = 0;
LABEL_8:
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)v18);
LABEL_9:
  CPROCESSATTACHHELPER::Detach(&ApcState);
  return v5;
}

/*
 * XREFs of ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00640AC
 * Callers:
 *     DxgkFinalizePathsModality @ 0x1C00B1520 (DxgkFinalizePathsModality.c)
 * Callees:
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0004D18 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0004D38 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000A708 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1C000A740 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C0065374 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
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
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  _BYTE v22[8]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF
  char v24; // [rsp+58h] [rbp-20h]

  v24 = 0;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  v5 = -1073741811;
  if ( !SessionData )
  {
    v15 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v15 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v17, v16, v18, v19);
    v20 = v15;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
LABEL_12:
    WdLogEvent5_WdError(v20);
    goto LABEL_9;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionData + 2321));
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v20 = WdLogNewEntry5_WdError(v6);
    goto LABEL_12;
  }
  v22[0] = 0;
  v8 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v22, 1);
  v10 = v8;
  if ( v8 < 0 )
  {
    v21 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v21 + 24) = v10;
LABEL_15:
    WdLogEvent5_WdError(v21);
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
    v21 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v21 + 24) = v11;
    *(_QWORD *)(v21 + 32) = v10;
    goto LABEL_15;
  }
LABEL_7:
  v5 = 0;
LABEL_8:
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)v22);
LABEL_9:
  CPROCESSATTACHHELPER::Detach(&ApcState);
  return v5;
}

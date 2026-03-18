/*
 * XREFs of ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C008CFD0
 * Callers:
 *     DxgkFinalizePathsModality @ 0x1C00DB370 (DxgkFinalizePathsModality.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0001388 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1C00013C0 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C00017E4 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00017FC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C008BE9C (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FinalizeTopology(CCD_TOPOLOGY *this)
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGFASTMUTEX *const *ProcessDxgProcess; // rbp
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned int v13; // edi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  _BYTE v20[8]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF
  char v22; // [rsp+58h] [rbp-20h]

  v22 = 0;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  v5 = -1073741811;
  if ( !SessionData )
  {
    v17 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v17 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    v18 = v17;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
LABEL_12:
    WdLogEvent5_WdError(v18);
    goto LABEL_9;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionData + 2323));
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct DXGFASTMUTEX *const *)PsGetProcessDxgProcess(CurrentProcess, v7);
  if ( !ProcessDxgProcess )
  {
    v18 = WdLogNewEntry5_WdError(v8);
    goto LABEL_12;
  }
  v20[0] = 0;
  v10 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v20, 1);
  v12 = v10;
  if ( v10 < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v19 + 24) = v12;
LABEL_15:
    WdLogEvent5_WdError(v19);
    v5 = v12;
    goto LABEL_8;
  }
  v13 = 0;
  if ( *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) )
  {
    while ( 1 )
    {
      v14 = CCD_TOPOLOGY::FinalizeTopologyOnAdapter(this, ProcessDxgProcess, v13);
      v12 = v14;
      if ( v14 < 0 )
        break;
      if ( ++v13 >= *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) )
        goto LABEL_7;
    }
    v19 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v19 + 24) = v13;
    *(_QWORD *)(v19 + 32) = v12;
    goto LABEL_15;
  }
LABEL_7:
  v5 = 0;
LABEL_8:
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)v20);
LABEL_9:
  CPROCESSATTACHHELPER::Detach(&ApcState);
  return v5;
}

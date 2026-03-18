/*
 * XREFs of OutputDuplProcessTerminate @ 0x1C0074920
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A2328 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0008680 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0077A44 (-GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C0078090 (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00783C0 (-ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0078654 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00867B8 (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall OutputDuplProcessTerminate(__int64 a1, PERESOURCE *a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  DXGSESSIONMGR *v18; // rcx
  struct DXGSESSIONDATA *SessionData; // rax
  OUTPUTDUPL_SESSION_MGR *v20; // rbx
  struct _EPROCESS *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _BYTE v25[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v26[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v27[40]; // [rsp+48h] [rbp-30h] BYREF

  v3 = (int)a1;
  if ( !(_DWORD)a1
    && (!a3
     || !a2
     || DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a3)
     || DXGADAPTER::IsCoreResourceExclusiveOwner(a2)) )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v22 + 24) = 2875LL;
    WdLogEvent5_WdAssertion(v22);
  }
  CurrentProcess = PsGetCurrentProcess();
  if ( PsGetProcessDxgProcess(CurrentProcess, v7) )
  {
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v25,
      (struct DXGADAPTER *const)a2,
      (struct DXGADAPTER *const)a3);
    if ( !(_DWORD)v3 )
    {
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v25) >= 0 )
        ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
          *(ADAPTER_DISPLAY **)(a3 + 2128),
          lambda_77b62ca48c87c620acb82d9376f9f1ce_::_lambda_invoker_cdecl_,
          0LL);
      goto LABEL_11;
    }
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    if ( RemoteOutputDuplMgr )
    {
      OUTPUTDUPL_MGR::ProcessPendingProcessTerminate(RemoteOutputDuplMgr);
    }
    else
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
      v17[3] = v3;
      v17[4] = a2;
      v17[5] = a3;
    }
    v18 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 69);
    if ( v18 )
      SessionData = DXGSESSIONMGR::GetSessionData(v18);
    else
      SessionData = 0LL;
    if ( SessionData )
    {
      v20 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)SessionData + 1);
      if ( v20 )
      {
        v21 = (struct _EPROCESS *)PsGetCurrentProcess();
        OUTPUTDUPL_SESSION_MGR::ProcessTerminated(v20, v21);
LABEL_11:
        COREACCESS::~COREACCESS((COREACCESS *)v27);
        COREACCESS::~COREACCESS((COREACCESS *)v26);
        return;
      }
      v24 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v24 + 24) = 2935LL;
    }
    else
    {
      v24 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v24 + 24) = 2928LL;
    }
    WdLogEvent5_WdError(v24);
    goto LABEL_11;
  }
  v23 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
  *(_QWORD *)(v23 + 24) = 2881LL;
  WdLogEvent5_WdWarning(v23);
}

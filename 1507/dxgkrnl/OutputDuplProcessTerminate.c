/*
 * XREFs of OutputDuplProcessTerminate @ 0x1C008F6BC
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0084D7C (-Destroy@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001E60 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C008D638 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C008DE2C (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C008F7C8 (-ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C0095350 (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 */

void __fastcall OutputDuplProcessTerminate(__int64 a1, PERESOURCE *a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  DXGGLOBAL *Global; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v29; // rcx
  OUTPUTDUPL_SESSION_MGR *v30; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  _BYTE v38[8]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v39[24]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v40[40]; // [rsp+40h] [rbp-28h] BYREF

  v3 = (int)a1;
  if ( !(_DWORD)a1
    && (DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a3) || DXGADAPTER::IsCoreResourceExclusiveOwner(a2)) )
  {
    v35 = WdLogNewEntry5_WdAssertion(a1, v32, v33, v34);
    *(_QWORD *)(v35 + 24) = 2812LL;
    WdLogEvent5_WdAssertion(v35);
  }
  if ( DXGPROCESS::GetCurrent(a1) )
  {
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v38,
      (struct DXGADAPTER *const)a2,
      (struct DXGADAPTER *const)a3);
    if ( !(_DWORD)v3 )
    {
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v38) >= 0 )
        ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
          *(ADAPTER_DISPLAY **)(a3 + 1976),
          lambda_14e82ce282d9954f1b80c41b0c8394c0_::_helper_func_cdecl_,
          0LL);
      goto LABEL_9;
    }
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(v11, v10, v12, v13);
    if ( RemoteOutputDuplMgr )
    {
      OUTPUTDUPL_MGR::ProcessPendingProcessTerminate(RemoteOutputDuplMgr);
    }
    else
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
      v19[3] = v3;
      v19[4] = a2;
      v19[5] = a3;
    }
    Global = DXGGLOBAL::GetGlobal(v21, v20, v22, v23);
    SessionData = DXGGLOBAL::GetSessionData(Global, v25, v26, v27);
    if ( SessionData )
    {
      v30 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)SessionData + 1);
      if ( v30 )
      {
        CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v29);
        OUTPUTDUPL_SESSION_MGR::ProcessTerminated(v30, CurrentProcess);
LABEL_9:
        COREACCESS::~COREACCESS((COREACCESS *)v40);
        COREACCESS::~COREACCESS((COREACCESS *)v39);
        return;
      }
      v37 = WdLogNewEntry5_WdError(v29);
      *(_QWORD *)(v37 + 24) = 2871LL;
    }
    else
    {
      v37 = WdLogNewEntry5_WdError(v29);
      *(_QWORD *)(v37 + 24) = 2864LL;
    }
    WdLogEvent5_WdError(v37);
    goto LABEL_9;
  }
  v36 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
  *(_QWORD *)(v36 + 24) = 2818LL;
  WdLogEvent5_WdWarning(v36);
}

/*
 * XREFs of OutputDuplProcessTerminate @ 0x1C00BBBD0
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0067BB4 (-Destroy@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00990F0 (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C009E6E0 (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00BBCE4 (-ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00BBF70 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

void __fastcall OutputDuplProcessTerminate(__int64 a1, PERESOURCE *a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  __int64 v16; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v19; // rcx
  OUTPUTDUPL_SESSION_MGR *v20; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _BYTE v25[72]; // [rsp+20h] [rbp-48h] BYREF

  v3 = (int)a1;
  if ( !(_DWORD)a1
    && (!a3
     || !a2
     || DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a3)
     || DXGADAPTER::IsCoreResourceExclusiveOwner(a2)) )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v22 + 24) = 2785LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( DXGPROCESS::GetCurrent() )
  {
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v25,
      (struct DXGADAPTER *const)a2,
      (struct DXGADAPTER *const)a3);
    if ( !(_DWORD)v3 )
    {
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v25) >= 0 )
        ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
          *(ADAPTER_DISPLAY **)(a3 + 1984),
          (__int64 (__fastcall *)(__int64, __int64))sub_1C00C67F0,
          0LL);
      goto LABEL_9;
    }
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    if ( RemoteOutputDuplMgr )
    {
      OUTPUTDUPL_MGR::ProcessPendingProcessTerminate(RemoteOutputDuplMgr);
    }
    else
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
      v15[3] = v3;
      v15[4] = a2;
      v15[5] = a3;
    }
    Global = DXGGLOBAL::GetGlobal(v16);
    SessionData = DXGGLOBAL::GetSessionData(Global);
    if ( SessionData )
    {
      v20 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)SessionData + 1);
      if ( v20 )
      {
        CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess();
        OUTPUTDUPL_SESSION_MGR::ProcessTerminated(v20, CurrentProcess);
LABEL_9:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v25);
        return;
      }
      v24 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v24 + 24) = 2845LL;
    }
    else
    {
      v24 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v24 + 24) = 2838LL;
    }
    WdLogEvent5_WdError(v24);
    goto LABEL_9;
  }
  v23 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
  *(_QWORD *)(v23 + 24) = 2791LL;
  WdLogEvent5_WdWarning(v23);
}

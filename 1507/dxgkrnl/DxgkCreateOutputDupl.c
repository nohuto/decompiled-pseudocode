/*
 * XREFs of DxgkCreateOutputDupl @ 0x1C0155520
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0004D58 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0004E78 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C00098B8 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C008EB3C (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0152A40 (-CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0152AC4 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 *     ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1C0152DE4 (-CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkCreateOutputDupl(
        struct _D3DKMT_CREATE_OUTPUTDUPL *a1,
        struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  D3DKMT_HANDLE hAdapter; // edx
  struct DXGADAPTER **v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  struct DXGADAPTER *v24; // r12
  struct DXGADAPTER *v25; // r14
  __int64 v26; // rax
  int OutputDuplManager; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  OUTPUTDUPL_MGR *v32; // r14
  DXGGLOBAL *Global; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v38; // rax
  __int64 v39; // r15
  unsigned int v40; // eax
  __int64 v41; // r14
  __int64 v42; // rax
  UINT KeyedMutexCount; // eax
  __int64 v44; // rax
  DXGADAPTER *v45; // r15
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  int OutputDuplication; // eax
  __int64 v51; // rcx
  struct DXGPROCESS *v52; // rax
  __int64 v53; // rdi
  struct DXGADAPTER *v55; // [rsp+30h] [rbp-39h] BYREF
  struct DXGPROCESS *v56; // [rsp+38h] [rbp-31h]
  char v57; // [rsp+40h] [rbp-29h]
  OUTPUTDUPL_MGR *v58; // [rsp+48h] [rbp-21h] BYREF
  DXGADAPTER *v59; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v60[104]; // [rsp+58h] [rbp-11h] BYREF
  int v61; // [rsp+D0h] [rbp+67h] BYREF
  struct DXGADAPTER *v62; // [rsp+E0h] [rbp+77h] BYREF
  struct DXGADAPTER *v63; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2061);
  if ( (unsigned __int64)a1 <= MmUserProbeAddress )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 3005LL;
    WdLogEvent5_WdAssertion(v6);
  }
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  v9 = Current;
  if ( Current )
  {
    *(_DWORD *)a2 ^= (*(_DWORD *)a2 ^ (32 * (*(__int64 (__fastcall **)(int *))(*((_QWORD *)Current + 10) + 224LL))(&v61))) & 0x20;
    v15 = *(_DWORD *)a2;
    if ( !v61 )
    {
      v16 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v16 + 24) = 3021LL;
      WdLogEvent5_WdError(v16);
      LODWORD(v13) = -2147483611;
      goto LABEL_56;
    }
    hAdapter = a1->hAdapter;
    v18 = &v62;
    v62 = 0LL;
    if ( (v15 & 0x20) != 0 )
      v18 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v59, hAdapter, (struct _KTHREAD **)v9, v18);
    v23 = *(_DWORD *)a2;
    LODWORD(v13) = 0;
    v63 = 0LL;
    v24 = 0LL;
    v55 = 0LL;
    v58 = 0LL;
    if ( (v23 & 0x20) == 0 )
    {
      v25 = v62;
      if ( !v62 )
      {
        v26 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
        v13 = -1073741811LL;
        *(_QWORD *)(v26 + 24) = a1->hAdapter;
LABEL_17:
        *(_QWORD *)(v26 + 32) = v13;
        WdLogEvent5_WdWarning(v26);
LABEL_55:
        DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v59);
        goto LABEL_56;
      }
      OutputDuplManager = FindOutputDuplManager(v62, a1->VidPnSourceId, &v63, &v55, &v58);
      v13 = OutputDuplManager;
      if ( OutputDuplManager < 0 )
      {
        v26 = WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
        *(_QWORD *)(v26 + 24) = v25;
        goto LABEL_17;
      }
      v24 = v63;
      v32 = v58;
LABEL_28:
      KeyedMutexCount = a1->KeyedMutexCount;
      if ( KeyedMutexCount )
      {
        if ( KeyedMutexCount > 3 )
        {
          v44 = WdLogNewEntry5_WdError(v29);
          *(_QWORD *)(v44 + 24) = a1->KeyedMutexCount;
          WdLogEvent5_WdError(v44);
          LODWORD(v13) = -1073741811;
          goto LABEL_55;
        }
        *(_DWORD *)a2 &= ~0x10u;
      }
      else
      {
        *(_DWORD *)a2 |= 0x10u;
      }
      v45 = v55;
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v60, v24, v55);
      if ( (*(_DWORD *)a2 & 0x20) == 0 )
      {
        DXGADAPTER::ReleaseReference(v24);
        DXGADAPTER::ReleaseReference(v45);
        LODWORD(v13) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v60);
        if ( (int)v13 < 0 )
        {
LABEL_40:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v60);
          goto LABEL_55;
        }
      }
      if ( a1->VidPnSourceId >= *((_DWORD *)v32 + 13) )
      {
        v47 = WdLogNewEntry5_WdError(v46);
        *(_QWORD *)(v47 + 24) = a1->VidPnSourceId;
        WdLogEvent5_WdError(v47);
        LODWORD(v13) = -1071774972;
        goto LABEL_40;
      }
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v55, *((struct DXGFASTMUTEX *const *)v32 + 3));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v55);
      if ( !*((_DWORD *)v32 + 12) )
      {
        v49 = WdLogNewEntry5_WdError(v48);
        *(_QWORD *)(v49 + 24) = 3138LL;
        WdLogEvent5_WdError(v49);
        LODWORD(v13) = -2147483611;
        if ( (_BYTE)v56 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v55);
        goto LABEL_40;
      }
      if ( (*(_DWORD *)a2 & 1) != 0 )
      {
        if ( (*(_DWORD *)a2 & 0x10) != 0 )
        {
LABEL_46:
          if ( (_BYTE)v56 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v55);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v60);
          if ( (int)v13 >= 0 && (*(_DWORD *)a2 & 0x11) == 1 )
          {
            v52 = DXGPROCESS::GetCurrent(v51);
            v53 = v52 ? *((_QWORD *)v52 + 10) : 0LL;
            v56 = v9;
            v57 = 0;
            DXGUSERCRIT::Acquire((DXGUSERCRIT *)&v55, 0);
            (*(void (**)(void))(v53 + 192))();
            if ( v57 )
            {
              v57 = 0;
              (*(void (**)(void))(*((_QWORD *)v56 + 10) + 40LL))();
            }
          }
          goto LABEL_55;
        }
        OutputDuplication = OUTPUTDUPL_MGR::CompleteInitialization(v32, a1);
      }
      else
      {
        OutputDuplication = OUTPUTDUPL_MGR::CreateOutputDuplication(v32, a1, a2);
      }
      LODWORD(v13) = OutputDuplication;
      goto LABEL_46;
    }
    Global = DXGGLOBAL::GetGlobal(v20, v19, v21, v22);
    SessionData = DXGGLOBAL::GetSessionData(Global, v34, v35, v36);
    if ( SessionData )
    {
      v39 = *((_QWORD *)SessionData + 1);
      if ( v39 )
      {
        v32 = *(OUTPUTDUPL_MGR **)(v39 + 40);
        if ( !v32 )
        {
          v40 = (*(__int64 (**)(void))(*((_QWORD *)v9 + 10) + 344LL))();
          v41 = v40;
          LODWORD(v13) = OUTPUTDUPL_SESSION_MGR::CreateRemoteOutputDuplMgr((struct DXGFASTMUTEX *const *)v39, v40);
          if ( (int)v13 < 0 )
          {
            v42 = WdLogNewEntry5_WdError(v29);
            *(_QWORD *)(v42 + 24) = v41;
            WdLogEvent5_WdError(v42);
            goto LABEL_55;
          }
          v32 = *(OUTPUTDUPL_MGR **)(v39 + 40);
        }
        goto LABEL_28;
      }
      v38 = WdLogNewEntry5_WdError(v29);
      *(_QWORD *)(v38 + 24) = 3070LL;
    }
    else
    {
      v38 = WdLogNewEntry5_WdError(v29);
      *(_QWORD *)(v38 + 24) = 3063LL;
    }
    WdLogEvent5_WdError(v38);
    LODWORD(v13) = -1073741801;
    goto LABEL_55;
  }
  v10 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v10 + 24) = 3010LL;
  WdLogEvent5_WdError(v10);
  LODWORD(v13) = -1073741811;
LABEL_56:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v11, &EventProfilerExit, v12, 2061);
  return (unsigned int)v13;
}

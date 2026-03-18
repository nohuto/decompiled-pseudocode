/*
 * XREFs of DxgkCreateOutputDupl @ 0x1C0159800
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0003E88 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0003F64 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C00080EC (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C009FD44 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0156CE0 (-CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0156D64 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 *     ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1C0157088 (-CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkCreateOutputDupl(
        struct _D3DKMT_CREATE_OUTPUTDUPL *a1,
        struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *a2,
        __int64 a3)
{
  __int64 v5; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  struct DXGPROCESS *v8; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  D3DKMT_HANDLE hAdapter; // edx
  struct DXGADAPTER **v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  struct DXGADAPTER *v23; // r12
  struct DXGADAPTER *v24; // r14
  __int64 v25; // rax
  int OutputDuplManager; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  OUTPUTDUPL_MGR *v31; // r14
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v34; // rax
  __int64 v35; // r15
  unsigned int v36; // eax
  __int64 v37; // r14
  __int64 v38; // rax
  UINT KeyedMutexCount; // eax
  __int64 v40; // rax
  DXGADAPTER *v41; // r15
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  int OutputDuplication; // eax
  struct DXGPROCESS *v47; // rax
  __int64 v48; // rdi
  struct DXGADAPTER *v50; // [rsp+30h] [rbp-39h] BYREF
  struct DXGPROCESS *v51; // [rsp+38h] [rbp-31h]
  char v52; // [rsp+40h] [rbp-29h]
  OUTPUTDUPL_MGR *v53; // [rsp+48h] [rbp-21h] BYREF
  DXGADAPTER *v54; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v55[104]; // [rsp+58h] [rbp-11h] BYREF
  int v56; // [rsp+D0h] [rbp+67h] BYREF
  struct DXGADAPTER *v57; // [rsp+E0h] [rbp+77h] BYREF
  struct DXGADAPTER *v58; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2061);
  if ( (unsigned __int64)a1 <= MmUserProbeAddress )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v5 + 24) = 2980LL;
    WdLogEvent5_WdAssertion(v5);
  }
  Current = DXGPROCESS::GetCurrent();
  v8 = Current;
  if ( Current )
  {
    *(_DWORD *)a2 ^= (*(_DWORD *)a2 ^ (32 * (*(__int64 (__fastcall **)(int *))(*((_QWORD *)Current + 10) + 224LL))(&v56))) & 0x20;
    v14 = *(_DWORD *)a2;
    if ( !v56 )
    {
      v15 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v15 + 24) = 2996LL;
      WdLogEvent5_WdError(v15);
      LODWORD(v12) = -2147483611;
      goto LABEL_56;
    }
    hAdapter = a1->hAdapter;
    v17 = &v57;
    v57 = 0LL;
    if ( (v14 & 0x20) != 0 )
      v17 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v54, hAdapter, (struct _KTHREAD **)v8, v17);
    v22 = *(_DWORD *)a2;
    LODWORD(v12) = 0;
    v58 = 0LL;
    v23 = 0LL;
    v50 = 0LL;
    v53 = 0LL;
    if ( (v22 & 0x20) == 0 )
    {
      v24 = v57;
      if ( !v57 )
      {
        v25 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
        v12 = -1073741811LL;
        *(_QWORD *)(v25 + 24) = a1->hAdapter;
LABEL_17:
        *(_QWORD *)(v25 + 32) = v12;
        WdLogEvent5_WdWarning(v25);
LABEL_55:
        DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v54);
        goto LABEL_56;
      }
      OutputDuplManager = FindOutputDuplManager(v57, a1->VidPnSourceId, &v58, &v50, &v53);
      v12 = OutputDuplManager;
      if ( OutputDuplManager < 0 )
      {
        v25 = WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
        *(_QWORD *)(v25 + 24) = v24;
        goto LABEL_17;
      }
      v23 = v58;
      v31 = v53;
LABEL_28:
      KeyedMutexCount = a1->KeyedMutexCount;
      if ( KeyedMutexCount )
      {
        if ( KeyedMutexCount > 3 )
        {
          v40 = WdLogNewEntry5_WdError(v28);
          *(_QWORD *)(v40 + 24) = a1->KeyedMutexCount;
          WdLogEvent5_WdError(v40);
          LODWORD(v12) = -1073741811;
          goto LABEL_55;
        }
        *(_DWORD *)a2 &= ~0x10u;
      }
      else
      {
        *(_DWORD *)a2 |= 0x10u;
      }
      v41 = v50;
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v55, v23, v50);
      if ( (*(_DWORD *)a2 & 0x20) == 0 )
      {
        DXGADAPTER::ReleaseReference(v23);
        DXGADAPTER::ReleaseReference(v41);
        LODWORD(v12) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v55);
        if ( (int)v12 < 0 )
        {
LABEL_40:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v55);
          goto LABEL_55;
        }
      }
      if ( a1->VidPnSourceId >= *((_DWORD *)v31 + 13) )
      {
        v43 = WdLogNewEntry5_WdError(v42);
        *(_QWORD *)(v43 + 24) = a1->VidPnSourceId;
        WdLogEvent5_WdError(v43);
        LODWORD(v12) = -1071774972;
        goto LABEL_40;
      }
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v50, *((struct DXGFASTMUTEX *const *)v31 + 3));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v50);
      if ( !*((_DWORD *)v31 + 12) )
      {
        v45 = WdLogNewEntry5_WdError(v44);
        *(_QWORD *)(v45 + 24) = 3113LL;
        WdLogEvent5_WdError(v45);
        LODWORD(v12) = -2147483611;
        if ( (_BYTE)v51 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v50);
        goto LABEL_40;
      }
      if ( (*(_DWORD *)a2 & 1) != 0 )
      {
        if ( (*(_DWORD *)a2 & 0x10) != 0 )
        {
LABEL_46:
          if ( (_BYTE)v51 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v50);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v55);
          if ( (int)v12 >= 0 && (*(_DWORD *)a2 & 0x11) == 1 )
          {
            v47 = DXGPROCESS::GetCurrent();
            v48 = v47 ? *((_QWORD *)v47 + 10) : 0LL;
            v51 = v8;
            v52 = 0;
            DXGUSERCRIT::Acquire((DXGUSERCRIT *)&v50, 0);
            (*(void (**)(void))(v48 + 192))();
            if ( v52 )
            {
              v52 = 0;
              (*(void (**)(void))(*((_QWORD *)v51 + 10) + 40LL))();
            }
          }
          goto LABEL_55;
        }
        OutputDuplication = OUTPUTDUPL_MGR::CompleteInitialization(v31, a1);
      }
      else
      {
        OutputDuplication = OUTPUTDUPL_MGR::CreateOutputDuplication(v31, a1, a2);
      }
      LODWORD(v12) = OutputDuplication;
      goto LABEL_46;
    }
    Global = DXGGLOBAL::GetGlobal(v19);
    SessionData = DXGGLOBAL::GetSessionData(Global);
    if ( SessionData )
    {
      v35 = *((_QWORD *)SessionData + 1);
      if ( v35 )
      {
        v31 = *(OUTPUTDUPL_MGR **)(v35 + 40);
        if ( !v31 )
        {
          v36 = (*(__int64 (**)(void))(*((_QWORD *)v8 + 10) + 344LL))();
          v37 = v36;
          LODWORD(v12) = OUTPUTDUPL_SESSION_MGR::CreateRemoteOutputDuplMgr((struct DXGFASTMUTEX *const *)v35, v36);
          if ( (int)v12 < 0 )
          {
            v38 = WdLogNewEntry5_WdError(v28);
            *(_QWORD *)(v38 + 24) = v37;
            WdLogEvent5_WdError(v38);
            goto LABEL_55;
          }
          v31 = *(OUTPUTDUPL_MGR **)(v35 + 40);
        }
        goto LABEL_28;
      }
      v34 = WdLogNewEntry5_WdError(v28);
      *(_QWORD *)(v34 + 24) = 3045LL;
    }
    else
    {
      v34 = WdLogNewEntry5_WdError(v28);
      *(_QWORD *)(v34 + 24) = 3038LL;
    }
    WdLogEvent5_WdError(v34);
    LODWORD(v12) = -1073741801;
    goto LABEL_55;
  }
  v9 = WdLogNewEntry5_WdError(v7);
  *(_QWORD *)(v9 + 24) = 2985LL;
  WdLogEvent5_WdError(v9);
  LODWORD(v12) = -1073741811;
LABEL_56:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v10, &EventProfilerExit, v11, 2061);
  return (unsigned int)v12;
}

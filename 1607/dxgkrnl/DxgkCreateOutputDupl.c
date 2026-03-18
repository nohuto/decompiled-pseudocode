/*
 * XREFs of DxgkCreateOutputDupl @ 0x1C017E790
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0001624 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00098D0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C0078C30 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C017B814 (-CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C017B898 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 *     ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1C017BB64 (-CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z.c)
 *     ?OutputDuplIsAllowedByMdmPolicy@@YA_NXZ @ 0x1C017D7E4 (-OutputDuplIsAllowedByMdmPolicy@@YA_NXZ.c)
 */

__int64 __fastcall DxgkCreateOutputDupl(
        struct _D3DKMT_CREATE_OUTPUTDUPL *a1,
        struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *a2,
        __int64 a3)
{
  __int64 v5; // rax
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  D3DKMT_HANDLE hAdapter; // edx
  struct DXGADAPTER **v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  struct DXGADAPTER *v26; // r12
  struct DXGADAPTER *v27; // r13
  struct DXGADAPTER *v28; // r14
  __int64 v29; // rax
  int OutputDuplManager; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rdx
  OUTPUTDUPL_MGR *v36; // r14
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v39; // rax
  __int64 v40; // r15
  unsigned int v41; // eax
  __int64 v42; // r14
  __int64 v43; // rax
  UINT KeyedMutexCount; // eax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  bool v49; // zf
  __int64 v50; // rax
  int OutputDuplication; // eax
  __int64 v52; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v54; // rdi
  _BYTE v56[8]; // [rsp+40h] [rbp-79h] BYREF
  DXGPUSHLOCK *v57; // [rsp+48h] [rbp-71h]
  int v58; // [rsp+50h] [rbp-69h]
  struct DXGADAPTER *v59; // [rsp+58h] [rbp-61h] BYREF
  OUTPUTDUPL_MGR *v60; // [rsp+60h] [rbp-59h] BYREF
  __int64 ProcessDxgProcess; // [rsp+68h] [rbp-51h]
  unsigned __int64 v62; // [rsp+70h] [rbp-49h] BYREF
  DXGADAPTER *v63[3]; // [rsp+78h] [rbp-41h] BYREF
  _BYTE v64[128]; // [rsp+90h] [rbp-29h] BYREF
  int v65; // [rsp+120h] [rbp+67h] BYREF
  struct DXGADAPTER *v66; // [rsp+130h] [rbp+77h] BYREF
  struct DXGADAPTER *v67; // [rsp+138h] [rbp+7Fh] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2061);
  if ( (unsigned __int64)a1 <= MmUserProbeAddress )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v5 + 24) = 3011LL;
    WdLogEvent5_WdAssertion(v5);
  }
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v7);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( !OutputDuplIsAllowedByMdmPolicy() )
    {
      v15 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v15 + 24) = 3023LL;
      WdLogEvent5_WdError(v15);
      LODWORD(v13) = -1073741790;
      goto LABEL_56;
    }
    *(_DWORD *)a2 ^= (*(_DWORD *)a2 ^ (32
                                     * (*(__int64 (__fastcall **)(int *))(*(_QWORD *)(ProcessDxgProcess + 72) + 224LL))(&v65))) & 0x20;
    v17 = *(_DWORD *)a2;
    if ( !v65 )
    {
      v18 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v18 + 24) = 3034LL;
      WdLogEvent5_WdError(v18);
      LODWORD(v13) = -2147483611;
      goto LABEL_56;
    }
    hAdapter = a1->hAdapter;
    v20 = &v66;
    v66 = 0LL;
    if ( (v17 & 0x20) != 0 )
      v20 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v63, hAdapter, v9, v20);
    v62 = -1LL;
    LODWORD(v13) = 0;
    v25 = *(_DWORD *)a2;
    v26 = 0LL;
    v67 = 0LL;
    v27 = 0LL;
    v59 = 0LL;
    v60 = 0LL;
    if ( (v25 & 0x20) == 0 )
    {
      v28 = v66;
      if ( !v66 )
      {
        v29 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
        v13 = -1073741811LL;
        *(_QWORD *)(v29 + 24) = a1->hAdapter;
LABEL_19:
        *(_QWORD *)(v29 + 32) = v13;
        WdLogEvent5_WdWarning(v29);
LABEL_55:
        DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v63, v35);
        goto LABEL_56;
      }
      OutputDuplManager = FindOutputDuplManager(
                            v66,
                            a1->VidPnSourceId,
                            &v67,
                            (unsigned __int64 *)&v66,
                            &v59,
                            &v62,
                            &v60);
      v13 = OutputDuplManager;
      if ( OutputDuplManager < 0 )
      {
        v29 = WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
        *(_QWORD *)(v29 + 24) = v28;
        goto LABEL_19;
      }
      v26 = v67;
      v27 = v59;
      v36 = v60;
LABEL_31:
      KeyedMutexCount = a1->KeyedMutexCount;
      if ( KeyedMutexCount )
      {
        if ( KeyedMutexCount > 3 )
        {
          v45 = WdLogNewEntry5_WdError(v32);
          *(_QWORD *)(v45 + 24) = a1->KeyedMutexCount;
          WdLogEvent5_WdError(v45);
          LODWORD(v13) = -1073741811;
          goto LABEL_55;
        }
        *(_DWORD *)a2 &= ~0x10u;
      }
      else
      {
        *(_DWORD *)a2 |= 0x10u;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v64, v26, v27);
      if ( (*(_DWORD *)a2 & 0x20) == 0 )
      {
        DXGADAPTER::ReleaseReference(v26);
        DXGADAPTER::ReleaseReference(v27);
        LODWORD(v13) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v64);
        if ( (int)v13 < 0 )
        {
LABEL_42:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64);
          goto LABEL_55;
        }
      }
      if ( a1->VidPnSourceId >= *((_DWORD *)v36 + 13) )
      {
        v47 = WdLogNewEntry5_WdError(v46);
        *(_QWORD *)(v47 + 24) = a1->VidPnSourceId;
        WdLogEvent5_WdError(v47);
        LODWORD(v13) = -1071774972;
        goto LABEL_42;
      }
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v56, *((struct _KTHREAD ***)v36 + 3));
      DXGPUSHLOCK::AcquireExclusive(v57);
      v49 = *((_DWORD *)v36 + 12) == 0;
      v58 = 2;
      if ( v49 )
      {
        v50 = WdLogNewEntry5_WdError(v48);
        *(_QWORD *)(v50 + 24) = 3156LL;
        WdLogEvent5_WdError(v50);
        LODWORD(v13) = -2147483611;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v56);
        goto LABEL_42;
      }
      if ( (*(_DWORD *)a2 & 1) != 0 )
      {
        if ( (*(_DWORD *)a2 & 0x10) != 0 )
          goto LABEL_48;
        OutputDuplication = OUTPUTDUPL_MGR::CompleteInitialization(v36, a1);
      }
      else
      {
        OutputDuplication = OUTPUTDUPL_MGR::CreateOutputDuplication(v36, a1, a2);
      }
      LODWORD(v13) = OutputDuplication;
LABEL_48:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v56);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64);
      if ( (int)v13 >= 0 && (*(_DWORD *)a2 & 0x11) == 1 )
      {
        Current = DXGPROCESS::GetCurrent(v52);
        v54 = Current ? *((_QWORD *)Current + 9) : 0LL;
        v57 = v9;
        LOBYTE(v58) = 0;
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v56, 0);
        (*(void (**)(void))(v54 + 192))();
        if ( (_BYTE)v58 )
        {
          LOBYTE(v58) = 0;
          (*(void (**)(void))(*((_QWORD *)v57 + 9) + 40LL))();
        }
      }
      goto LABEL_55;
    }
    Global = DXGGLOBAL::GetGlobal(v22);
    SessionData = DXGGLOBAL::GetSessionData(Global);
    if ( SessionData )
    {
      v40 = *((_QWORD *)SessionData + 1);
      if ( v40 )
      {
        v36 = *(OUTPUTDUPL_MGR **)(v40 + 40);
        if ( !v36 )
        {
          v41 = (*(__int64 (**)(void))(*(_QWORD *)(ProcessDxgProcess + 72) + 344LL))();
          v42 = v41;
          LODWORD(v13) = OUTPUTDUPL_SESSION_MGR::CreateRemoteOutputDuplMgr((struct DXGFASTMUTEX *const *)v40, v41);
          if ( (int)v13 < 0 )
          {
            v43 = WdLogNewEntry5_WdError(v32);
            *(_QWORD *)(v43 + 24) = v42;
            WdLogEvent5_WdError(v43);
            goto LABEL_55;
          }
          v36 = *(OUTPUTDUPL_MGR **)(v40 + 40);
        }
        v9 = (struct DXGPROCESS *)ProcessDxgProcess;
        goto LABEL_31;
      }
      v39 = WdLogNewEntry5_WdError(v32);
      *(_QWORD *)(v39 + 24) = 3088LL;
    }
    else
    {
      v39 = WdLogNewEntry5_WdError(v32);
      *(_QWORD *)(v39 + 24) = 3081LL;
    }
    WdLogEvent5_WdError(v39);
    LODWORD(v13) = -1073741801;
    goto LABEL_55;
  }
  v10 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v10 + 24) = 3016LL;
  WdLogEvent5_WdError(v10);
  LODWORD(v13) = -1073741811;
LABEL_56:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v11, &EventProfilerExit, v12, 2061);
  return (unsigned int)v13;
}

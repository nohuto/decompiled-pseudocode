/*
 * XREFs of DxgkCheckMonitorPowerState @ 0x1C00B7320
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0003E88 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0003F64 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0079FD0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     DmmIsSourceInActiveVidPnTopology @ 0x1C0097CD8 (DmmIsSourceInActiveVidPnTopology.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0145430 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCheckMonitorPowerState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 CurrentProcess; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGADAPTER *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // ebx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  int v33; // edi
  DXGADAPTER *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  struct DXGADAPTER *v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  char IsSourceInActiveVidPnTopology; // al
  __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  _BYTE v58[8]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v59[8]; // [rsp+38h] [rbp-50h] BYREF
  DXGADAPTER *v60; // [rsp+40h] [rbp-48h]
  char v61; // [rsp+48h] [rbp-40h]
  _BYTE v62[8]; // [rsp+50h] [rbp-38h] BYREF
  unsigned int *v63; // [rsp+58h] [rbp-30h]
  struct DXGADAPTER *v64; // [rsp+98h] [rbp+10h] BYREF
  struct DXGADAPTER *v65; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v66; // [rsp+A8h] [rbp+20h]

  v3 = (__int64 *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2046);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v56 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v56 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v56);
    goto LABEL_59;
  }
  v10 = *(_QWORD *)(ProcessWin32Process + 248);
  if ( !v10 )
  {
LABEL_59:
    v57 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v57 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v57);
    goto LABEL_60;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v66 = *v3;
  v11 = v66;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v64, v66, (struct _KTHREAD **)v10, &v65);
  v16 = v65;
  if ( !v65 )
  {
    v17 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v17 + 24) = v11;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v64);
LABEL_60:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v18, &EventProfilerExit, v19, 2046);
    return 3221225485LL;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v10 + 80) + 208LL))() )
  {
    v24 = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v20, v22, v23) + 24) = -1071775738LL;
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v64);
LABEL_12:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v25, &EventProfilerExit, v26, 2046);
    return v24;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v58, v16, 0LL);
  if ( v61 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v28, v30);
    v32[3] = 275LL;
    v32[4] = 4LL;
    v32[5] = v59;
    v33 = 0;
    v32[6] = 0LL;
    v32[7] = 0LL;
    WdLogEvent5_WdCriticalError(v32);
  }
  else
  {
    v33 = 0;
  }
  v34 = v60;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v60 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v60 + 32)) )
      KeWaitForSingleObject((char *)v60 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v60);
    v34 = v60;
  }
  v61 = 1;
  if ( *((_DWORD *)v34 + 40) != 1 )
    goto LABEL_27;
  if ( v60 != (DXGADAPTER *)v63 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v62);
    v34 = (DXGADAPTER *)v63[40];
    if ( (_DWORD)v34 != 1 )
    {
      COREACCESS::Release((COREACCESS *)v62);
LABEL_27:
      COREACCESS::Release((COREACCESS *)v59);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v58);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v64);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v35, &EventProfilerExit, v36, 2046);
      return 3221226166LL;
    }
  }
  v37 = v65;
  v38 = *((_QWORD *)v65 + 248);
  if ( v38 )
  {
    v42 = HIDWORD(v66);
    if ( HIDWORD(v66) >= *(_DWORD *)(v38 + 104) )
    {
      v43 = WdLogNewEntry5_WdWarning(v34, v28, v30, v31);
      *(_QWORD *)(v43 + 24) = v42;
      *(_QWORD *)(v43 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v43);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v58);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v64);
      goto LABEL_60;
    }
    v44 = *(unsigned int *)(*((_QWORD *)v65 + 2) + 640LL);
    if ( (int)v44 > 0 )
    {
      v46 = *((_QWORD *)v65 + 248);
      v47 = *(_QWORD *)(v46 + 16);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v47 + 144)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v47 + 128)) )
      {
        v48 = WdLogNewEntry5_WdAssertion(v47);
        *(_QWORD *)(v48 + 24) = 3820LL;
        WdLogEvent5_WdAssertion(v48);
      }
      v49 = HIDWORD(v66);
      if ( HIDWORD(v66) >= *(_DWORD *)(v46 + 104) )
      {
        v50 = WdLogNewEntry5_WdAssertion(v47);
        *(_QWORD *)(v50 + 24) = 3821LL;
        WdLogEvent5_WdAssertion(v50);
      }
      if ( *(_BYTE *)(*(_QWORD *)(v46 + 136) + 1016 * v49 + 698) )
      {
        v52 = *((_QWORD *)v65 + 249);
        if ( v52 )
          IsSourceInActiveVidPnTopology = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v52 + 400)
                                                                                                + 8LL)
                                                                                    + 448LL))(
                                            *(_QWORD *)(v52 + 408),
                                            (unsigned int)v49);
        else
          IsSourceInActiveVidPnTopology = DmmIsSourceInActiveVidPnTopology((__int64)v65, v49);
        if ( !IsSourceInActiveVidPnTopology )
          v33 = -1071775738;
        v24 = v33;
      }
      else
      {
        v51 = (_QWORD *)WdLogNewEntry5_WdTrace(1016 * v49, v28, v30, v31);
        v51[3] = -1071775739LL;
        v51[4] = v65;
        v51[5] = v49;
        v24 = -1071775739;
      }
    }
    else
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdTrace(v44, v28, v30, v31);
      v24 = -1071775738;
      v45[3] = -1071775738LL;
      v45[4] = v65;
      v45[5] = HIDWORD(v66);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v58);
    if ( v64 )
    {
      v54 = _InterlockedDecrement64((volatile signed __int64 *)v64 + 3);
      if ( !v54 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v64 + 2), v64);
      if ( v54 < 0 )
      {
        v55 = WdLogNewEntry5_WdAssertion(v25);
        *(_QWORD *)(v55 + 24) = 1158LL;
        WdLogEvent5_WdAssertion(v55);
      }
    }
    goto LABEL_12;
  }
  v39 = WdLogNewEntry5_WdWarning(v34, v28, v30, v31);
  *(_QWORD *)(v39 + 24) = v37;
  *(_QWORD *)(v39 + 32) = -1073741637LL;
  WdLogEvent5_WdWarning(v39);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v58);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v64);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v40, &EventProfilerExit, v41, 2046);
  return 3221225659LL;
}

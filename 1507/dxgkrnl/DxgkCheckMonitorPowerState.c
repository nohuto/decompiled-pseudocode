/*
 * XREFs of DxgkCheckMonitorPowerState @ 0x1C00A4930
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0004D58 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0004E78 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00789F0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     DmmIsSourceInActiveVidPnTopology @ 0x1C00B6E28 (DmmIsSourceInActiveVidPnTopology.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C013EFB8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
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
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  DXGADAPTER *v25; // rcx
  struct DXGADAPTER *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rax
  char IsSourceInActiveVidPnTopology; // al
  unsigned int v35; // edi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rbx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  _QWORD *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r8
  _QWORD *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  _BYTE v59[8]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v60[8]; // [rsp+38h] [rbp-50h] BYREF
  DXGADAPTER *v61; // [rsp+40h] [rbp-48h]
  char v62; // [rsp+48h] [rbp-40h]
  _BYTE v63[8]; // [rsp+50h] [rbp-38h] BYREF
  unsigned int *v64; // [rsp+58h] [rbp-30h]
  struct DXGADAPTER *v65; // [rsp+98h] [rbp+10h] BYREF
  struct DXGADAPTER *v66; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v67; // [rsp+A8h] [rbp+20h]

  v3 = (__int64 *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2046);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v57 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v57 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v57);
    goto LABEL_61;
  }
  v10 = *(_QWORD *)(ProcessWin32Process + 248);
  if ( !v10 )
  {
LABEL_61:
    v58 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v58 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v58);
    if ( (qword_1C00467F0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
      return 3221225485LL;
LABEL_63:
    Template_q(v44, &EventProfilerExit, v45, 2046);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v67 = *v3;
  v11 = v67;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v65, v67, (struct _KTHREAD **)v10, &v66);
  v16 = v66;
  if ( !v66 )
  {
    v42 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v42 + 24) = v11;
    *(_QWORD *)(v42 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v42);
    goto LABEL_41;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v10 + 80) + 208LL))() )
  {
    v35 = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17, v19, v20) + 24) = -1071775738LL;
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v65);
LABEL_34:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v37, &EventProfilerExit, v38, 2046);
    return v35;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v59, v16, 0LL);
  if ( v62 )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v21, v23);
    v46[3] = 275LL;
    v46[4] = 4LL;
    v46[5] = v60;
    v46[6] = 0LL;
    v46[7] = 0LL;
    WdLogEvent5_WdCriticalError(v46);
  }
  v25 = v61;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v61 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v61 + 32)) )
      KeWaitForSingleObject((char *)v61 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v61);
    v25 = v61;
  }
  v62 = 1;
  if ( *((_DWORD *)v25 + 40) != 1 )
    goto LABEL_49;
  if ( v61 != (DXGADAPTER *)v64 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v63);
    v25 = (DXGADAPTER *)v64[40];
    if ( (_DWORD)v25 != 1 )
    {
      COREACCESS::Release((COREACCESS *)v63);
LABEL_49:
      COREACCESS::Release((COREACCESS *)v60);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v65);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v47, &EventProfilerExit, v48, 2046);
      return 3221226166LL;
    }
  }
  v26 = v66;
  v27 = *((_QWORD *)v66 + 247);
  if ( v27 )
  {
    v28 = HIDWORD(v67);
    if ( HIDWORD(v67) < *(_DWORD *)(v27 + 80) )
    {
      v29 = *(unsigned int *)(*((_QWORD *)v66 + 2) + 496LL);
      if ( (int)v29 <= 0 )
      {
        v52 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v21, v23, v24);
        v35 = -1071775738;
        v52[3] = -1071775738LL;
        v52[4] = v66;
        v52[5] = HIDWORD(v67);
      }
      else
      {
        v30 = *((_QWORD *)v66 + 247);
        v31 = *(_QWORD *)(v30 + 16);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v31 + 144)
          && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v31 + 128)) )
        {
          v53 = WdLogNewEntry5_WdAssertion(v31, v21, v23, v24);
          *(_QWORD *)(v53 + 24) = 3681LL;
          WdLogEvent5_WdAssertion(v53);
        }
        v32 = HIDWORD(v67);
        if ( HIDWORD(v67) >= *(_DWORD *)(v30 + 80) )
        {
          v54 = WdLogNewEntry5_WdAssertion(v31, v21, v23, v24);
          *(_QWORD *)(v54 + 24) = 3682LL;
          WdLogEvent5_WdAssertion(v54);
        }
        if ( *(_BYTE *)(*(_QWORD *)(v30 + 112) + 1008 * v32 + 698) )
        {
          v33 = *((_QWORD *)v66 + 248);
          if ( v33 )
            IsSourceInActiveVidPnTopology = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v33 + 376)
                                                                                                  + 8LL)
                                                                                      + 448LL))(
                                              *(_QWORD *)(v33 + 384),
                                              (unsigned int)v32);
          else
            IsSourceInActiveVidPnTopology = DmmIsSourceInActiveVidPnTopology(v66, (unsigned int)v32, v23, v24);
          if ( IsSourceInActiveVidPnTopology )
            v35 = 0;
          else
            v35 = -1071775738;
        }
        else
        {
          v55 = (_QWORD *)WdLogNewEntry5_WdTrace(1008 * v32, v21, v23, v24);
          v55[3] = -1071775739LL;
          v55[4] = v66;
          v55[5] = v32;
          v35 = -1071775739;
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
      if ( v65 )
      {
        v40 = _InterlockedDecrement64((volatile signed __int64 *)v65 + 3);
        if ( !v40 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v65 + 2), v65);
        if ( v40 < 0 )
        {
          v56 = WdLogNewEntry5_WdAssertion(v37, v36, v38, v39);
          *(_QWORD *)(v56 + 24) = 1067LL;
          WdLogEvent5_WdAssertion(v56);
        }
      }
      goto LABEL_34;
    }
    v43 = WdLogNewEntry5_WdWarning(v25, v21, v23, v24);
    *(_QWORD *)(v43 + 24) = v28;
    *(_QWORD *)(v43 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v43);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
LABEL_41:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v65);
    if ( (qword_1C00467F0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
      return 3221225485LL;
    goto LABEL_63;
  }
  v49 = WdLogNewEntry5_WdWarning(v25, v21, v23, v24);
  *(_QWORD *)(v49 + 24) = v26;
  *(_QWORD *)(v49 + 32) = -1073741637LL;
  WdLogEvent5_WdWarning(v49);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v65);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v50, &EventProfilerExit, v51, 2046);
  return 3221225659LL;
}

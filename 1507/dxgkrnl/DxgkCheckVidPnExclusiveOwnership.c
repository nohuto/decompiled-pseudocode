/*
 * XREFs of DxgkCheckVidPnExclusiveOwnership @ 0x1C00A4BD0
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
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C013EFB8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCheckVidPnExclusiveOwnership(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 CurrentProcess; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGADAPTER *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  DXGADAPTER *v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // r14
  __int64 v32; // rsi
  __int64 v33; // rbx
  __int64 v34; // rcx
  int v35; // ecx
  unsigned int v36; // edi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  _QWORD *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
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
  __int64 v66; // [rsp+A0h] [rbp+18h]
  struct DXGADAPTER *v67; // [rsp+A8h] [rbp+20h] BYREF

  v3 = (__int64 *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2058);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v57 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v57 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v57);
    goto LABEL_63;
  }
  v10 = *(_QWORD *)(ProcessWin32Process + 248);
  if ( !v10 )
  {
LABEL_63:
    v58 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v58 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v58);
    if ( (qword_1C00467F0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
      return 3221225485LL;
LABEL_65:
    Template_q(v45, &EventProfilerExit, v46, 2058);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v66 = *v3;
  v11 = v66;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v65, v66, (struct _KTHREAD **)v10, &v67);
  v16 = v67;
  if ( !v67 )
  {
    v43 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v43 + 24) = v11;
    *(_QWORD *)(v43 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v43);
    goto LABEL_47;
  }
  if ( (*(unsigned int (**)(void))(*(_QWORD *)(v10 + 80) + 208LL))() )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v59, v16, 0LL);
    if ( *((_QWORD *)v16 + 247) )
    {
      if ( v62 )
      {
        v47 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v21, v23);
        v47[3] = 275LL;
        v47[4] = 4LL;
        v47[5] = v60;
        v47[6] = 0LL;
        v47[7] = 0LL;
        WdLogEvent5_WdCriticalError(v47);
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
        goto LABEL_55;
      if ( v61 != (DXGADAPTER *)v64 )
      {
        COREACCESS::AcquireShared((COREACCESS *)v63);
        v25 = (DXGADAPTER *)v64[40];
        if ( (_DWORD)v25 != 1 )
        {
          COREACCESS::Release((COREACCESS *)v63);
LABEL_55:
          COREACCESS::Release((COREACCESS *)v60);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
          DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v65);
          if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
            Template_q(v48, &EventProfilerExit, v49, 2058);
          return 3221226166LL;
        }
      }
      v26 = HIDWORD(v66);
      if ( HIDWORD(v66) < *(_DWORD *)(*((_QWORD *)v16 + 247) + 80LL) )
      {
        v27 = *((_QWORD *)v67 + 2);
        if ( *(int *)(v27 + 496) <= 0 )
        {
          v50 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v21, v23, v24);
          v36 = -1071775738;
          v50[3] = -1071775738LL;
          v50[4] = v67;
          v50[5] = HIDWORD(v66);
        }
        else
        {
          v28 = *((_QWORD *)v16 + 247);
          v29 = *(_QWORD *)(v28 + 16);
          if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v29 + 144)
            && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v29 + 128)) )
          {
            v51 = WdLogNewEntry5_WdAssertion(v29, v21, v23, v24);
            *(_QWORD *)(v51 + 24) = 3681LL;
            WdLogEvent5_WdAssertion(v51);
          }
          v30 = HIDWORD(v66);
          if ( HIDWORD(v66) >= *(_DWORD *)(v28 + 80) )
          {
            v52 = WdLogNewEntry5_WdAssertion(v29, v21, v23, v24);
            *(_QWORD *)(v52 + 24) = 3682LL;
            WdLogEvent5_WdAssertion(v52);
          }
          v31 = v30;
          v32 = 1008 * v30;
          if ( *(_BYTE *)(*(_QWORD *)(v28 + 112) + v32 + 698) )
          {
            v33 = *((_QWORD *)v16 + 247);
            v34 = *(_QWORD *)(v33 + 16);
            if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v34 + 144)
              && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v34 + 128)) )
            {
              v54 = WdLogNewEntry5_WdAssertion(v34, v21, v23, v24);
              *(_QWORD *)(v54 + 24) = 4003LL;
              WdLogEvent5_WdAssertion(v54);
            }
            if ( HIDWORD(v66) >= *(_DWORD *)(v33 + 80) )
            {
              v55 = WdLogNewEntry5_WdAssertion(v34, v21, v23, v24);
              *(_QWORD *)(v55 + 24) = 4004LL;
              WdLogEvent5_WdAssertion(v55);
            }
            v35 = *(_DWORD *)(*(_QWORD *)(v33 + 112) + v32 + 680);
            if ( (unsigned int)(v35 - 2) <= 1 )
            {
              v36 = -1071775738;
            }
            else if ( v35 )
            {
              v36 = 0;
            }
            else
            {
              v36 = -1071775732;
            }
          }
          else
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v21, v23, v24);
            v53[3] = -1071775739LL;
            v53[4] = v67;
            v53[5] = v31;
            v36 = -1071775739;
          }
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
        if ( v65 )
        {
          v41 = _InterlockedDecrement64((volatile signed __int64 *)v65 + 3);
          if ( !v41 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v65 + 2), v65);
          if ( v41 < 0 )
          {
            v56 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
            *(_QWORD *)(v56 + 24) = 1067LL;
            WdLogEvent5_WdAssertion(v56);
          }
        }
        goto LABEL_38;
      }
      v44 = WdLogNewEntry5_WdWarning(v25, v21, v23, v24);
      *(_QWORD *)(v44 + 24) = v26;
    }
    else
    {
      v44 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
      *(_QWORD *)(v44 + 24) = v16;
    }
    *(_QWORD *)(v44 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v44);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
LABEL_47:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v65);
    if ( (qword_1C00467F0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
      return 3221225485LL;
    goto LABEL_65;
  }
  v36 = -1071775738;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17, v19, v20) + 24) = -1071775738LL;
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v65);
LABEL_38:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v38, &EventProfilerExit, v39, 2058);
  return v36;
}

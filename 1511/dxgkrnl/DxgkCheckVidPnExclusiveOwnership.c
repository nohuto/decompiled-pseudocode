/*
 * XREFs of DxgkCheckVidPnExclusiveOwnership @ 0x1C00B6DC0
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
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0145430 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCheckVidPnExclusiveOwnership(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  __int64 CurrentProcess; // rbx
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
  __int64 v32; // rax
  _QWORD *v33; // rax
  DXGADAPTER *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rsi
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // ecx
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  _BYTE v55[8]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v56[8]; // [rsp+38h] [rbp-60h] BYREF
  DXGADAPTER *v57; // [rsp+40h] [rbp-58h]
  char v58; // [rsp+48h] [rbp-50h]
  _BYTE v59[8]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int *v60; // [rsp+58h] [rbp-40h]
  struct DXGADAPTER *v61; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v62; // [rsp+B0h] [rbp+18h]
  struct DXGADAPTER *v63; // [rsp+B8h] [rbp+20h] BYREF

  v3 = (__int64 *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2058);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v53 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v53 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v53);
    goto LABEL_61;
  }
  v10 = *(_QWORD *)(ProcessWin32Process + 248);
  if ( !v10 )
  {
LABEL_61:
    v54 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v54 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v54);
    goto LABEL_62;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v62 = *v3;
  v11 = v62;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v61, v62, (struct _KTHREAD **)v10, &v63);
  v16 = v63;
  if ( !v63 )
  {
    v17 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v17 + 24) = v11;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v61);
LABEL_62:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v18, &EventProfilerExit, v19, 2058);
    return 3221225485LL;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v10 + 80) + 208LL))() )
  {
    v24 = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v20, v22, v23) + 24) = -1071775738LL;
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v61);
LABEL_12:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v25, &EventProfilerExit, v26, 2058);
    return v24;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v55, v16, 0LL);
  if ( !*((_QWORD *)v16 + 248) )
  {
    v32 = WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
    *(_QWORD *)(v32 + 24) = v16;
    goto LABEL_18;
  }
  if ( v58 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v28, v30);
    v33[3] = 275LL;
    v33[4] = 4LL;
    v33[5] = v56;
    v24 = 0;
    v33[6] = 0LL;
    v33[7] = 0LL;
    WdLogEvent5_WdCriticalError(v33);
  }
  else
  {
    v24 = 0;
  }
  v34 = v57;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v57 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v57 + 32)) )
      KeWaitForSingleObject((char *)v57 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v57);
    v34 = v57;
  }
  v58 = 1;
  if ( *((_DWORD *)v34 + 40) == 1 )
  {
    if ( v57 == (DXGADAPTER *)v60
      || (COREACCESS::AcquireShared((COREACCESS *)v59), v34 = (DXGADAPTER *)v60[40], (_DWORD)v34 == 1) )
    {
      v37 = HIDWORD(v62);
      if ( HIDWORD(v62) < *(_DWORD *)(*((_QWORD *)v16 + 248) + 104LL) )
      {
        v38 = *((_QWORD *)v63 + 2);
        if ( *(int *)(v38 + 640) > 0 )
        {
          v40 = *((_QWORD *)v16 + 248);
          v41 = *(_QWORD *)(v40 + 16);
          if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v41 + 144)
            && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v41 + 128)) )
          {
            v42 = WdLogNewEntry5_WdAssertion(v41);
            *(_QWORD *)(v42 + 24) = 3820LL;
            WdLogEvent5_WdAssertion(v42);
          }
          v43 = HIDWORD(v62);
          if ( HIDWORD(v62) >= *(_DWORD *)(v40 + 104) )
          {
            v44 = WdLogNewEntry5_WdAssertion(v41);
            *(_QWORD *)(v44 + 24) = 3821LL;
            WdLogEvent5_WdAssertion(v44);
          }
          if ( *(_BYTE *)(*(_QWORD *)(v40 + 136) + 1016 * v43 + 698) )
          {
            v46 = *((_QWORD *)v16 + 248);
            v47 = *(_QWORD *)(v46 + 16);
            if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v47 + 144)
              && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v47 + 128)) )
            {
              v48 = WdLogNewEntry5_WdAssertion(v47);
              *(_QWORD *)(v48 + 24) = 4142LL;
              WdLogEvent5_WdAssertion(v48);
            }
            if ( HIDWORD(v62) >= *(_DWORD *)(v46 + 104) )
            {
              v49 = WdLogNewEntry5_WdAssertion(v47);
              *(_QWORD *)(v49 + 24) = 4143LL;
              WdLogEvent5_WdAssertion(v49);
            }
            v50 = *(_DWORD *)(*(_QWORD *)(v46 + 136) + 1016 * v43 + 680);
            if ( (unsigned int)(v50 - 2) <= 1 )
            {
              v24 = -1071775738;
            }
            else if ( !v50 )
            {
              v24 = -1071775732;
            }
          }
          else
          {
            v45 = (_QWORD *)WdLogNewEntry5_WdTrace(v41, v28, v30, v31);
            v45[3] = -1071775739LL;
            v45[4] = v63;
            v45[5] = v43;
            v24 = -1071775739;
          }
        }
        else
        {
          v39 = (_QWORD *)WdLogNewEntry5_WdTrace(v38, v28, v30, v31);
          v24 = -1071775738;
          v39[3] = -1071775738LL;
          v39[4] = v63;
          v39[5] = HIDWORD(v62);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v55);
        if ( v61 )
        {
          v51 = _InterlockedDecrement64((volatile signed __int64 *)v61 + 3);
          if ( !v51 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v61 + 2), v61);
          if ( v51 < 0 )
          {
            v52 = WdLogNewEntry5_WdAssertion(v25);
            *(_QWORD *)(v52 + 24) = 1158LL;
            WdLogEvent5_WdAssertion(v52);
          }
        }
        goto LABEL_12;
      }
      v32 = WdLogNewEntry5_WdWarning(v34, v28, v30, v31);
      *(_QWORD *)(v32 + 24) = v37;
LABEL_18:
      *(_QWORD *)(v32 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v32);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v55);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v61);
      goto LABEL_62;
    }
    COREACCESS::Release((COREACCESS *)v59);
  }
  COREACCESS::Release((COREACCESS *)v56);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v55);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v61);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v35, &EventProfilerExit, v36, 2058);
  return 3221226166LL;
}

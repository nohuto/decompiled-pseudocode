/*
 * XREFs of DxgkCheckVidPnExclusiveOwnership @ 0x1C00CB590
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCheckVidPnExclusiveOwnership(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGADAPTER *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct DXGADAPTER *v18; // rdi
  char *v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdi
  struct DXGADAPTER *v25; // r13
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // r14
  __int64 v30; // r15
  __int64 v31; // r14
  __int64 v32; // rdi
  __int64 v33; // rcx
  int v34; // ecx
  unsigned int v35; // edi
  __int64 v36; // rcx
  __int64 v37; // r8
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  struct DXGADAPTER *v53[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v54[2]; // [rsp+30h] [rbp-58h] BYREF
  char v55; // [rsp+40h] [rbp-48h]
  struct DXGADAPTER *v56; // [rsp+98h] [rbp+10h] BYREF
  __int64 v57; // [rsp+A0h] [rbp+18h]

  v3 = (__int64 *)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2058);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v5);
  if ( !ProcessDxgProcess )
  {
    v40 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v40 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v40);
    goto LABEL_39;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v57 = *v3;
  v8 = v57;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v53, v57, ProcessDxgProcess, &v56);
  v13 = v56;
  if ( !v56 )
  {
    v43 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    *(_QWORD *)(v43 + 24) = v8;
LABEL_37:
    *(_QWORD *)(v43 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v43);
LABEL_38:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v53, v44);
LABEL_39:
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v41, &EventProfilerExit, v42, 2058);
    return 3221225485LL;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)ProcessDxgProcess + 9) + 208LL))() )
  {
    v35 = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14, v16, v17) + 24) = -1071775738LL;
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v53, v45);
LABEL_28:
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v36, &EventProfilerExit, v37, 2058);
    return v35;
  }
  if ( !*((_QWORD *)v13 + 266) )
  {
    v43 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    *(_QWORD *)(v43 + 24) = v13;
    goto LABEL_37;
  }
  v54[1] = v13;
  _InterlockedIncrement64((volatile signed __int64 *)v13 + 3);
  v54[0] = -1LL;
  KeEnterCriticalRegion();
  v18 = v56;
  v19 = (char *)v56 + 120;
  ExAcquirePushLockSharedEx((char *)v56 + 120, 0LL);
  v55 = 1;
  if ( *((_DWORD *)v18 + 44) == 1 )
  {
    v24 = HIDWORD(v57);
    if ( HIDWORD(v57) < *(_DWORD *)(*((_QWORD *)v13 + 266) + 80LL) )
    {
      v25 = v56;
      v26 = *(unsigned int *)(*((_QWORD *)v56 + 2) + 496LL);
      if ( (int)v26 <= 0 )
      {
        v39 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v20, v22, v23);
        v35 = -1071775738;
        v39[3] = -1071775738LL;
        v39[4] = v56;
        v39[5] = HIDWORD(v57);
      }
      else
      {
        v27 = *((_QWORD *)v13 + 266);
        v28 = *(_QWORD *)(v27 + 16);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v28 + 160) )
          ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v28 + 144));
        v29 = HIDWORD(v57);
        if ( HIDWORD(v57) >= *(_DWORD *)(v27 + 80) )
        {
          v50 = WdLogNewEntry5_WdAssertion(v28);
          *(_QWORD *)(v50 + 24) = 3978LL;
          WdLogEvent5_WdAssertion(v50);
        }
        v30 = v29;
        v31 = 1016 * v29;
        if ( *(_BYTE *)(*(_QWORD *)(v27 + 112) + v31 + 706) )
        {
          v32 = *((_QWORD *)v13 + 266);
          v33 = *(_QWORD *)(v32 + 16);
          if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v33 + 160) )
            ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v33 + 144));
          if ( HIDWORD(v57) >= *(_DWORD *)(v32 + 80) )
          {
            v52 = WdLogNewEntry5_WdAssertion(v33);
            *(_QWORD *)(v52 + 24) = 4299LL;
            WdLogEvent5_WdAssertion(v52);
          }
          v34 = *(_DWORD *)(*(_QWORD *)(v32 + 112) + v31 + 680);
          if ( (unsigned int)(v34 - 2) <= 1 )
          {
            v35 = -1071775738;
          }
          else if ( v34 )
          {
            v35 = 0;
          }
          else
          {
            v35 = -1071775732;
          }
        }
        else
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v20, v22, v23);
          v51[3] = -1071775739LL;
          v51[4] = v56;
          v51[5] = v30;
          v35 = -1071775739;
        }
      }
      ExReleasePushLockSharedEx(v19, 0LL);
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v25 + 2), v56);
      if ( v53[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v53[0] + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v53[0] + 2), v53[0]);
      goto LABEL_28;
    }
    v49 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    *(_QWORD *)(v49 + 24) = v24;
    *(_QWORD *)(v49 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v49);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v54);
    goto LABEL_38;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v54);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v53, v46);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v47, &EventProfilerExit, v48, 2058);
  return 3221226166LL;
}

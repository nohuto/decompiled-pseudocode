/*
 * XREFs of DxgkCheckMonitorPowerState @ 0x1C00CB110
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     DmmIsSourceInActiveVidPnTopology @ 0x1C0088C5C (DmmIsSourceInActiveVidPnTopology.c)
 *     ?IsWaitingForPowerOn@DXGADAPTER@@QEAAEI@Z @ 0x1C0145914 (-IsWaitingForPowerOn@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCheckMonitorPowerState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGADAPTER *v17; // r14
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // ebx
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  struct DXGADAPTER *v28; // rbx
  char *v29; // r13
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  struct DXGADAPTER *v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rbx
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // r15
  __int64 v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // rax
  _QWORD *v52; // rax
  DXGADAPTER *v53; // r15
  __int64 v54; // rax
  char IsSourceInActiveVidPnTopology; // al
  struct DXGADAPTER *v56[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v57[2]; // [rsp+30h] [rbp-58h] BYREF
  char v58; // [rsp+40h] [rbp-48h]
  struct DXGADAPTER *v59; // [rsp+98h] [rbp+10h] BYREF
  __int64 v60; // [rsp+A0h] [rbp+18h]

  v3 = (__int64 *)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2046);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v5);
  if ( !ProcessDxgProcess )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
LABEL_6:
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v9, &EventProfilerExit, v10, 2046);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v60 = *v3;
  v12 = v60;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v56, v60, ProcessDxgProcess, &v59);
  v17 = v59;
  if ( !v59 )
  {
    v18 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    *(_QWORD *)(v18 + 24) = v12;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v18);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v56, v19);
    goto LABEL_6;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)ProcessDxgProcess + 9) + 208LL))() )
  {
    v24 = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v20, v22, v23) + 24) = -1071775738LL;
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v56, v25);
LABEL_16:
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v26, &EventProfilerExit, v27, 2046);
    return v24;
  }
  v57[1] = v17;
  _InterlockedIncrement64((volatile signed __int64 *)v17 + 3);
  v57[0] = -1LL;
  KeEnterCriticalRegion();
  v28 = v59;
  v29 = (char *)v59 + 120;
  ExAcquirePushLockSharedEx((char *)v59 + 120, 0LL);
  v58 = 1;
  if ( *((_DWORD *)v28 + 44) == 1 )
  {
    v37 = v59;
    v38 = *((_QWORD *)v59 + 266);
    if ( v38 )
    {
      v43 = HIDWORD(v60);
      if ( HIDWORD(v60) >= *(_DWORD *)(v38 + 80) )
      {
        v44 = WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
        *(_QWORD *)(v44 + 24) = v43;
        *(_QWORD *)(v44 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v44);
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v57);
        DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v56, v45);
        goto LABEL_6;
      }
      v46 = *(unsigned int *)(*((_QWORD *)v59 + 2) + 496LL);
      if ( (int)v46 > 0 )
      {
        v48 = *((_QWORD *)v59 + 266);
        v49 = *(_QWORD *)(v48 + 16);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v49 + 160) )
          ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v49 + 144));
        v50 = HIDWORD(v60);
        if ( HIDWORD(v60) >= *(_DWORD *)(v48 + 80) )
        {
          v51 = WdLogNewEntry5_WdAssertion(v49);
          *(_QWORD *)(v51 + 24) = 3978LL;
          WdLogEvent5_WdAssertion(v51);
        }
        if ( *(_BYTE *)(*(_QWORD *)(v48 + 112) + 1016 * v50 + 706) )
        {
          v53 = v59;
          v54 = *((_QWORD *)v59 + 267);
          if ( v54 )
            IsSourceInActiveVidPnTopology = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v54 + 376)
                                                                                                  + 8LL)
                                                                                      + 448LL))(
                                              *(_QWORD *)(v54 + 384),
                                              (unsigned int)v50);
          else
            IsSourceInActiveVidPnTopology = DmmIsSourceInActiveVidPnTopology((__int64)v59, v50);
          if ( IsSourceInActiveVidPnTopology || DXGADAPTER::IsWaitingForPowerOn(v53, v50) )
            v24 = 0;
          else
            v24 = -1071775738;
        }
        else
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdTrace(1016 * v50, v30, v32, v33);
          v52[3] = -1071775739LL;
          v52[4] = v59;
          v52[5] = v50;
          v24 = -1071775739;
        }
      }
      else
      {
        v47 = (_QWORD *)WdLogNewEntry5_WdTrace(v46, v30, v32, v33);
        v24 = -1071775738;
        v47[3] = -1071775738LL;
        v47[4] = v59;
        v47[5] = HIDWORD(v60);
      }
      ExReleasePushLockSharedEx(v29, 0LL);
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v37 + 2), v59);
      if ( v56[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v56[0] + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v56[0] + 2), v56[0]);
      goto LABEL_16;
    }
    v39 = WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
    *(_QWORD *)(v39 + 24) = v37;
    *(_QWORD *)(v39 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v39);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v57);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v56, v40);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v41, &EventProfilerExit, v42, 2046);
    return 3221225659LL;
  }
  else
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v57);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v56, v34);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v35, &EventProfilerExit, v36, 2046);
    return 3221226166LL;
  }
}

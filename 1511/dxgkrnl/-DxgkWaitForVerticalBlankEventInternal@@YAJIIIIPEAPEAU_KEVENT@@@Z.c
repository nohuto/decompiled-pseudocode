/*
 * XREFs of ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00B6230
 * Callers:
 *     DxgkWaitForVerticalBlankEvent @ 0x1C00B6160 (DxgkWaitForVerticalBlankEvent.c)
 *     DxgkWaitForVerticalBlankEvent2 @ 0x1C0132B40 (DxgkWaitForVerticalBlankEvent2.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00015E8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002428 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0003400 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003D78 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C0079E00 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0079E40 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0079FD0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAU_KEVENT@@@Z @ 0x1C009A200 (-WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAU_KEVENT@@@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0125D08 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C012FDA0 (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0145430 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEventInternal(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        ULONG a4,
        struct _KEVENT **a5)
{
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v22; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // r9d
  unsigned int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  bool v38; // of
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rt0
  __int64 v42; // rax
  __int64 v43; // rax
  volatile signed __int64 *v44; // rbx
  __int64 v45; // rcx
  struct DXGGLOBAL *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  char v49; // of
  __int64 v50; // rax
  __int64 v51; // rt0
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  _QWORD *v62; // rax
  DXGADAPTER *v63; // rcx
  DXGADAPTER *v64; // r15
  int v65; // r14d
  bool v66; // zf
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  char *v70; // r15
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rax
  _QWORD *v75; // rax
  unsigned int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // rdx
  __int64 v81; // rax
  _QWORD *v82; // rax
  int v83; // eax
  int v84; // eax
  int v85; // eax
  struct DXGADAPTER *v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rax
  DXGADAPTER *v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  _QWORD *v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  char v96; // [rsp+30h] [rbp-81h]
  char v97; // [rsp+31h] [rbp-80h]
  char v98; // [rsp+32h] [rbp-7Fh]
  DXGADAPTER *v99; // [rsp+38h] [rbp-79h]
  char v100[8]; // [rsp+40h] [rbp-71h] BYREF
  char v101[8]; // [rsp+48h] [rbp-69h] BYREF
  DXGADAPTER *v102; // [rsp+50h] [rbp-61h]
  char v103; // [rsp+58h] [rbp-59h]
  char v104[8]; // [rsp+60h] [rbp-51h] BYREF
  struct DXGADAPTER *v105; // [rsp+68h] [rbp-49h]
  char v106; // [rsp+70h] [rbp-41h]
  union _LARGE_INTEGER Timeout; // [rsp+78h] [rbp-39h] BYREF
  char *v108; // [rsp+80h] [rbp-31h]
  __int64 v109; // [rsp+88h] [rbp-29h] BYREF
  char v110; // [rsp+90h] [rbp-21h]
  char v111[8]; // [rsp+98h] [rbp-19h] BYREF
  char v112; // [rsp+A0h] [rbp-11h]
  char v113[8]; // [rsp+A8h] [rbp-9h] BYREF
  char v114; // [rsp+B0h] [rbp-1h]
  char v115[8]; // [rsp+B8h] [rbp+7h] BYREF
  __int64 v116; // [rsp+C0h] [rbp+Fh]
  int v117; // [rsp+C8h] [rbp+17h]

  v6 = a3;
  v7 = a1;
  v8 = 0LL;
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v94 = WdLogNewEntry5_WdEvent(v12, v11, v13, v14);
    *(_QWORD *)(v94 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v94);
    goto LABEL_170;
  }
  v15 = *(_QWORD *)(ProcessWin32Process + 248);
  if ( !v15 )
  {
LABEL_170:
    v95 = WdLogNewEntry5_WdError(v12);
    v29 = -1073741811;
    *(_QWORD *)(v95 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v95);
    return v29;
  }
  if ( a4 && !(*(unsigned int (**)(void))(*(_QWORD *)(v15 + 80) + 216LL))() )
  {
    v20 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    *(_QWORD *)(v20 + 24) = -1073741790LL;
    WdLogEvent5_WdWarning(v20);
    return 3221225506LL;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(v15 + 80) + 224LL))(0LL) )
  {
    Global = DXGGLOBAL::GetGlobal(v22);
    return REMOTE_VSYNC::WaitForVSync((struct DXGGLOBAL *)((char *)Global + 728));
  }
  v116 = v15 + 192;
  if ( v15 != -192 && *(struct _KTHREAD **)(v15 + 200) == KeGetCurrentThread() )
  {
    v24 = WdLogNewEntry5_WdAssertion(v22);
    *(_QWORD *)(v24 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v24);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v15 + 192, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v28 = *(_DWORD *)(v15 + 208);
      if ( v28 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v25, &EventBlockThread, v26, v28);
    }
    ExAcquirePushLockSharedEx(v15 + 192, 0LL);
  }
  v117 = 1;
  v29 = -1073741811;
  v30 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v30 < *(_DWORD *)(v15 + 232)
    && (v27 = *(_QWORD *)(v15 + 216),
        v25 = ((unsigned int)v7 >> 26) & 0x30,
        v26 = *(unsigned int *)(v27 + 16LL * (unsigned int)v30 + 8),
        (((unsigned int)v7 >> 26) & 0x30) == (*(_BYTE *)(v27 + 16LL * (unsigned int)v30 + 8) & 0x30))
    && (v26 & 0x1000) == 0
    && (v26 & 0xF) != 0
    && (*(_BYTE *)(v27 + 16LL * (unsigned int)v30 + 8) & 0xF) == 1
    && (v31 = *(_QWORD *)(v27 + 16LL * (unsigned int)v30)) != 0 )
  {
    if ( !a2 )
      goto LABEL_31;
    v32 = (a2 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v32 < *(_DWORD *)(v15 + 232) )
    {
      v25 = (a2 >> 26) & 0x30;
      v26 = *(unsigned int *)(v27 + 16LL * (unsigned int)v32 + 8);
      if ( ((a2 >> 26) & 0x30) == (*(_BYTE *)(v27 + 16LL * (unsigned int)v32 + 8) & 0x30)
        && (v26 & 0x1000) == 0
        && (v26 & 0xF) != 0
        && (*(_BYTE *)(v27 + 16LL * (unsigned int)v32 + 8) & 0xF) == 3 )
      {
        v8 = *(_QWORD *)(v27 + 16LL * (unsigned int)v32);
        if ( v8 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v8 + 64));
LABEL_31:
          ExReleasePushLockSharedEx(v15 + 192, 0LL);
          KeLeaveCriticalRegion();
          v37 = *(_QWORD *)(v31 + 1984);
          if ( v37 )
          {
            v38 = __OFSUB__((_DWORD)v6, *(_DWORD *)(v37 + 104));
            if ( (unsigned int)v6 >= *(_DWORD *)(v37 + 104) )
            {
              v39 = WdLogNewEntry5_WdError(v34);
              *(_QWORD *)(v39 + 24) = v6;
              *(_QWORD *)(v39 + 32) = -1073741811LL;
              WdLogEvent5_WdError(v39);
LABEL_162:
              v93 = (_QWORD *)WdLogNewEntry5_WdError(v34);
              v93[5] = (int)v29;
              v93[3] = v31;
              v93[4] = v6;
              WdLogEvent5_WdError(v93);
LABEL_163:
              if ( v8 )
              {
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v8 + 16), (struct DXGDEVICE *)v8);
              }
              return v29;
            }
            v41 = _InterlockedAdd64((volatile signed __int64 *)(v31 + 24), 1uLL);
            if ( (v41 < 0) ^ v38 | (v41 == 0) )
            {
              v42 = WdLogNewEntry5_WdAssertion(v34);
              *(_QWORD *)(v42 + 24) = 1141LL;
              WdLogEvent5_WdAssertion(v42);
            }
            if ( *(_QWORD *)(v31 + 1992) )
            {
              if ( _InterlockedAdd64((volatile signed __int64 *)(v31 + 24), 1uLL) <= 0 )
              {
                v43 = WdLogNewEntry5_WdAssertion(v34);
                *(_QWORD *)(v43 + 24) = 1141LL;
                WdLogEvent5_WdAssertion(v43);
              }
              v44 = (volatile signed __int64 *)v31;
              v99 = (DXGADAPTER *)v31;
              goto LABEL_44;
            }
            DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v111);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v111);
            v46 = DXGGLOBAL::GetGlobal(v45);
            v44 = (volatile signed __int64 *)*((_QWORD *)v46 + 89);
            if ( v44 )
            {
              DXGADAPTER::AcquireReference(*((DXGADAPTER **)v46 + 89));
              v99 = (DXGADAPTER *)v44;
              if ( v112 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v111);
LABEL_44:
              if ( v8
                && (v44 != *(volatile signed __int64 **)(*(_QWORD *)(v8 + 16) + 16LL) || v31 != *(_QWORD *)(v8 + 2832)) )
              {
                v48 = WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
                *(_QWORD *)(v48 + 24) = v31;
                *(_QWORD *)(v48 + 32) = a2;
                WdLogEvent5_WdWarning(v48);
                v29 = -1073741811;
                goto LABEL_163;
              }
              v102 = (DXGADAPTER *)v44;
              v103 = 0;
              v49 = 0;
              if ( _InterlockedAdd64(v44 + 3, 1uLL) <= 0 )
              {
                v50 = WdLogNewEntry5_WdAssertion(v34);
                *(_QWORD *)(v50 + 24) = 1141LL;
                WdLogEvent5_WdAssertion(v50);
              }
              v105 = (struct DXGADAPTER *)v31;
              v106 = 0;
              v51 = _InterlockedAdd64((volatile signed __int64 *)(v31 + 24), 1uLL);
              if ( (v51 < 0) ^ v49 | (v51 == 0) )
              {
                v52 = WdLogNewEntry5_WdAssertion(v34);
                *(_QWORD *)(v52 + 24) = 1141LL;
                WdLogEvent5_WdAssertion(v52);
              }
              v53 = _InterlockedDecrement64((volatile signed __int64 *)v99 + 3);
              if ( v53 )
              {
                if ( v53 < 0 )
                {
                  v54 = WdLogNewEntry5_WdAssertion(v53);
                  *(_QWORD *)(v54 + 24) = 1158LL;
                  WdLogEvent5_WdAssertion(v54);
                }
              }
              else
              {
                DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v99 + 2), v99);
              }
              v55 = _InterlockedDecrement64((volatile signed __int64 *)(v31 + 24));
              if ( v55 )
              {
                if ( v55 < 0 )
                {
                  v56 = WdLogNewEntry5_WdAssertion(v53);
                  *(_QWORD *)(v56 + 24) = 1158LL;
                  WdLogEvent5_WdAssertion(v56);
                }
              }
              else
              {
                DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v31 + 16), (struct DXGADAPTER *)v31);
              }
              if ( *(_DWORD *)(v31 + 120) == 1 )
              {
                DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
                  (DXGADAPTERSTOPRESETLOCKSHARED *)v113,
                  v99,
                  1);
                v109 = v31;
                v110 = 0;
                if ( (DXGADAPTER *)v31 != v99 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v109);
                if ( *((_DWORD *)v99 + 40) != 1 || *(_DWORD *)(v31 + 160) != 1 )
                {
                  v29 = -1073741130;
                  goto LABEL_79;
                }
                if ( (unsigned int)v6 >= *(_DWORD *)(*(_QWORD *)(v31 + 1984) + 104LL) )
                {
                  v61 = WdLogNewEntry5_WdWarning(v58, v57, v59, v60);
                  v29 = -1073741811;
                  *(_QWORD *)(v61 + 24) = v6;
                  *(_QWORD *)(v61 + 32) = -1073741811LL;
                  WdLogEvent5_WdWarning(v61);
LABEL_79:
                  if ( v110 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v109);
                  if ( v114 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v113);
                  goto LABEL_145;
                }
                if ( *(_QWORD *)(v31 + 1992) )
                {
                  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v99 + 249)
                                                                                                  + 400LL)
                                                                                      + 8LL)
                                                                          + 448LL))(
                          *(_QWORD *)(*((_QWORD *)v99 + 249) + 408LL),
                          (unsigned int)v6) )
                  {
                    v29 = -1071775738;
                    goto LABEL_79;
                  }
                }
                else if ( !(unsigned __int8)DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)v31, (unsigned int)v6) )
                {
                  v29 = -1071775738;
                  goto LABEL_79;
                }
                if ( v110 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v109);
                if ( v114 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v113);
              }
              if ( v103 )
              {
                v62 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v53, v33, v35);
                v29 = 0;
                v62[5] = v101;
                v62[3] = 275LL;
                v62[4] = 4LL;
                v62[6] = 0LL;
                v62[7] = 0LL;
                WdLogEvent5_WdCriticalError(v62);
              }
              else
              {
                v29 = 0;
              }
              v63 = v102;
              if ( KeGetCurrentThread() != *((struct _KTHREAD **)v102 + 18) )
              {
                if ( !KeReadStateEvent((PRKEVENT)((char *)v102 + 32)) )
                  KeWaitForSingleObject((char *)v102 + 32, Executive, 0, 0, 0LL);
                DXGADAPTER::AcquireCoreResourceShared(v102);
                v63 = v102;
              }
              v103 = 1;
              if ( *((_DWORD *)v63 + 40) != 1 )
                goto LABEL_92;
              if ( v102 != v105 )
              {
                COREACCESS::AcquireShared((COREACCESS *)v104);
                v63 = (DXGADAPTER *)*((unsigned int *)v105 + 40);
                if ( (_DWORD)v63 != 1 )
                {
                  COREACCESS::Release((COREACCESS *)v104);
LABEL_92:
                  COREACCESS::Release((COREACCESS *)v101);
                  v29 = -1073741130;
LABEL_145:
                  v86 = v105;
                  if ( v105 )
                  {
                    if ( v106 )
                    {
                      COREACCESS::Release((COREACCESS *)v104);
                      v86 = v105;
                    }
                    v87 = _InterlockedDecrement64((volatile signed __int64 *)v86 + 3);
                    if ( v87 )
                    {
                      if ( v87 < 0 )
                      {
                        v88 = WdLogNewEntry5_WdAssertion(v86);
                        *(_QWORD *)(v88 + 24) = 1158LL;
                        WdLogEvent5_WdAssertion(v88);
                      }
                    }
                    else
                    {
                      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v86 + 2), v86);
                    }
                  }
                  v89 = v102;
                  if ( v102 )
                  {
                    if ( v103 )
                    {
                      COREACCESS::Release((COREACCESS *)v101);
                      v89 = v102;
                    }
                    v90 = _InterlockedDecrement64((volatile signed __int64 *)v89 + 3);
                    if ( v90 )
                    {
                      if ( v90 < 0 )
                      {
                        v91 = WdLogNewEntry5_WdAssertion(v89);
                        *(_QWORD *)(v91 + 24) = 1158LL;
                        WdLogEvent5_WdAssertion(v91);
                      }
                    }
                    else
                    {
                      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v89 + 2), v89);
                    }
                  }
                  goto LABEL_163;
                }
              }
              v64 = v99;
              v65 = 0;
              v66 = *((_QWORD *)v99 + 249) == 0LL;
              v108 = (char *)v99 + 1992;
              if ( v66 )
              {
                v67 = WdLogNewEntry5_WdAssertion(v63);
                *(_QWORD *)(v67 + 24) = 23957LL;
                WdLogEvent5_WdAssertion(v67);
              }
              if ( !*(_QWORD *)(v31 + 1984) )
              {
                v68 = WdLogNewEntry5_WdAssertion(v63);
                *(_QWORD *)(v68 + 24) = 23958LL;
                WdLogEvent5_WdAssertion(v68);
              }
              if ( a2 )
              {
                if ( *(_DWORD *)(v8 + 352) != 1 )
                {
                  v29 = -1073741130;
                  goto LABEL_145;
                }
                v64 = v99;
              }
              v98 = 0;
              v97 = 0;
              v96 = 0;
              if ( *(_QWORD *)(v31 + 1992) )
              {
                if ( (DXGADAPTER *)v31 != v64 )
                {
                  v69 = WdLogNewEntry5_WdAssertion(v63);
                  *(_QWORD *)(v69 + 24) = 23975LL;
                  WdLogEvent5_WdAssertion(v69);
                }
                if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v108 + 400LL)
                                                                                    + 8LL)
                                                                        + 448LL))(
                        *(_QWORD *)(*(_QWORD *)v108 + 408LL),
                        (unsigned int)v6) )
                {
                  v29 = -1071775738;
                  goto LABEL_145;
                }
                _InterlockedIncrement((volatile signed __int32 *)v64 + 504);
                v70 = v108;
                v98 = 1;
                if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v108 + 400LL)
                                                                                    + 8LL)
                                                                        + 456LL))(
                        *(_QWORD *)(*(_QWORD *)v108 + 408LL),
                        (unsigned int)v6) )
                {
                  v74 = *(_QWORD *)v70;
                  LOBYTE(v73) = 1;
                  if ( v8 )
                  {
                    if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v74 + 400) + 8LL)
                                                                        + 472LL))(
                           *(_QWORD *)(v8 + 544),
                           0LL,
                           v73) < 0 )
                    {
LABEL_109:
                      DXGADAPTER::DecrementVSyncWaiter(v99);
                      v29 = -1071775738;
                      goto LABEL_145;
                    }
                    v96 = 1;
                  }
                  else
                  {
                    if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v74 + 400) + 8LL)
                                                                         + 464LL))(
                           *(_QWORD *)(v74 + 408),
                           1LL,
                           v73) < 0 )
                      goto LABEL_109;
                    v97 = 1;
                  }
                }
              }
              else
              {
                if ( !(unsigned __int8)DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)v31, (unsigned int)v6) )
                {
                  v29 = -1071775738;
                  goto LABEL_145;
                }
                ADAPTER_DISPLAY::ControlVSyncAdapter(*(ADAPTER_DISPLAY **)(v31 + 1984), v6);
                v70 = v108;
              }
              if ( v102 != v105 )
                COREACCESS::Release((COREACCESS *)v104);
              if ( !v103 )
              {
                v75 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v72, v71, v73);
                v75[5] = v101;
                v75[3] = 275LL;
                v75[4] = 4LL;
                v75[6] = 0LL;
                v75[7] = 0LL;
                WdLogEvent5_WdCriticalError(v75);
              }
              v103 = 0;
              if ( KeGetCurrentThread() != *((struct _KTHREAD **)v102 + 18) )
                DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v102);
              if ( a4 )
              {
                v76 = ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent(
                        *(DXGADAPTER ***)(v31 + 1984),
                        v6,
                        1,
                        a4,
                        (PVOID *)a5);
                v65 = v76;
                if ( v76 <= 0x3E )
                  v29 = v76;
              }
              else
              {
                v80 = *(_QWORD *)(v31 + 1984);
                v81 = *(_QWORD *)(v80 + 16);
                if ( !*(_QWORD *)(v81 + 1984)
                  || (v66 = *(_QWORD *)(v81 + 544) == 0LL, Timeout.QuadPart = -1000000LL, v66) )
                {
                  Timeout.QuadPart = -5000000LL;
                }
                KeWaitForSingleObject((PVOID)(*(_QWORD *)(v80 + 136) + 1016 * v6 + 800), UserRequest, 0, 0, &Timeout);
              }
              if ( v98 && _InterlockedDecrement((volatile signed __int32 *)v99 + 504) < 0 )
              {
                v82 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v78, v77, v79);
                v82[5] = v99;
                v82[3] = 275LL;
                v82[4] = 28LL;
                v82[6] = *((unsigned int *)v99 + 504);
                v82[7] = 0LL;
                WdLogEvent5_WdCriticalError(v82);
              }
              if ( v97 )
              {
                v83 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v100);
                if ( v83 < 0 )
                {
                  v29 = v83;
                  goto LABEL_145;
                }
                v84 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v70 + 400LL)
                                                                                     + 8LL)
                                                                         + 464LL))(
                        *(_QWORD *)(*(_QWORD *)v70 + 408LL),
                        1LL,
                        0LL);
              }
              else
              {
                if ( !v96 )
                  goto LABEL_142;
                v85 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v100);
                v65 = v85;
                if ( v85 < 0 )
                {
                  v29 = v85;
                  goto LABEL_145;
                }
                if ( *(_DWORD *)(v8 + 352) != 1 )
                {
LABEL_142:
                  if ( v65 < 0 || !v29 )
                    v29 = v65;
                  goto LABEL_145;
                }
                v84 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v70 + 400LL)
                                                                                    + 8LL)
                                                                        + 472LL))(
                        *(_QWORD *)(v8 + 544),
                        0LL,
                        0LL);
              }
              v65 = v84;
              goto LABEL_142;
            }
            v92 = WdLogNewEntry5_WdError(v47);
            *(_QWORD *)(v92 + 24) = v31;
            *(_QWORD *)(v92 + 32) = -1073741637LL;
            WdLogEvent5_WdError(v92);
            DXGADAPTER::ReleaseReference((DXGADAPTER *)v31);
            if ( v112 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v111);
          }
          v29 = -1073741637;
          goto LABEL_162;
        }
      }
    }
    v40 = WdLogNewEntry5_WdWarning(v25, v32, v26, v27);
    *(_QWORD *)(v40 + 24) = v31;
    *(_QWORD *)(v40 + 32) = a2;
  }
  else
  {
    v40 = WdLogNewEntry5_WdWarning(v25, v30, v26, v27);
    *(_QWORD *)(v40 + 24) = v7;
    *(_QWORD *)(v40 + 32) = -1073741811LL;
  }
  WdLogEvent5_WdWarning(v40);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v115);
  return v29;
}

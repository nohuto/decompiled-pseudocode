/*
 * XREFs of ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0085380
 * Callers:
 *     DxgkSetSyncRefreshCountWaitTarget @ 0x1C00852D0 (DxgkSetSyncRefreshCountWaitTarget.c)
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00016F4 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z @ 0x1C0006C34 (-SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006E88 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C000903C (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     Template_qqqq @ 0x1C001F0F0 (Template_qqqq.c)
 *     ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1C00283E8 (-SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C009F904 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C009F940 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C00CEC9C (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0147094 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkSetSyncRefreshCountWaitTargetInternal(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v4; // r14d
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  volatile signed __int64 *v29; // rdi
  DXGADAPTER *v30; // rcx
  struct DXGADAPTER *v31; // r12
  char v32; // r15
  char v33; // di
  unsigned int v34; // r13d
  __int64 v35; // r8
  ADAPTER_DISPLAY *v36; // rbx
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  unsigned int v44; // r13d
  unsigned int v45; // edi
  struct DXGADAPTER *v46; // rcx
  DXGGLOBAL **v47; // rcx
  ADAPTER_RENDER **v48; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // r9d
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  int v68; // eax
  _QWORD *v69; // rax
  int v70; // eax
  unsigned int v71; // eax
  int v72; // eax
  __int64 v73; // rax
  __int64 v74; // rax
  char v75; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v76; // [rsp+40h] [rbp-C0h] BYREF
  char v77; // [rsp+41h] [rbp-BFh]
  struct DXGADAPTER *v78; // [rsp+48h] [rbp-B8h]
  struct DXGDEVICE *v79; // [rsp+50h] [rbp-B0h]
  unsigned int v80; // [rsp+58h] [rbp-A8h]
  char v81[8]; // [rsp+60h] [rbp-A0h] BYREF
  char v82[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v83; // [rsp+70h] [rbp-90h]
  DXGADAPTER *v84; // [rsp+78h] [rbp-88h]
  char v85; // [rsp+80h] [rbp-80h]
  char v86[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v87; // [rsp+90h] [rbp-70h]
  struct DXGADAPTER *v88; // [rsp+98h] [rbp-68h]
  char v89; // [rsp+A0h] [rbp-60h]
  char v90[8]; // [rsp+B0h] [rbp-50h] BYREF
  char v91; // [rsp+B8h] [rbp-48h]
  char v92[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v93; // [rsp+C8h] [rbp-38h]
  char v94; // [rsp+D0h] [rbp-30h]
  _BYTE v95[16]; // [rsp+D8h] [rbp-28h] BYREF
  char v96; // [rsp+E8h] [rbp-18h]
  char v97[8]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v98; // [rsp+F8h] [rbp-8h]
  int v99; // [rsp+100h] [rbp+0h]

  v4 = 0;
  v5 = a3;
  v79 = 0LL;
  v6 = a2;
  v7 = a1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v9);
  v12 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v51 = WdLogNewEntry5_WdError(v11);
    v45 = -1073741811;
    *(_QWORD *)(v51 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v51);
    return v45;
  }
  if ( (*(unsigned int (**)(void))(*(_QWORD *)(ProcessDxgProcess + 72) + 216LL))() )
  {
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(v12 + 72) + 224LL))(0LL) )
    {
      v98 = v12 + 184;
      if ( v12 != -184 && *(struct _KTHREAD **)(v12 + 192) == KeGetCurrentThread() )
      {
        v53 = WdLogNewEntry5_WdAssertion(v17);
        *(_QWORD *)(v53 + 24) = 1142LL;
        WdLogEvent5_WdAssertion(v53);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v12 + 184, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v54 = *(_DWORD *)(v12 + 200);
          if ( v54 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v18, &EventBlockThread, v19, v54);
        }
        ExAcquirePushLockSharedEx(v12 + 184, 0LL);
      }
      v21 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
      v99 = 1;
      if ( (unsigned int)v21 < *(_DWORD *)(v12 + 224)
        && (v20 = *(_QWORD *)(v12 + 208),
            v18 = ((unsigned int)v7 >> 26) & 0x30,
            v19 = *(unsigned int *)(v20 + 16LL * (unsigned int)v21 + 8),
            (((unsigned int)v7 >> 26) & 0x30) == (*(_BYTE *)(v20 + 16LL * (unsigned int)v21 + 8) & 0x30))
        && (v19 & 0x1000) == 0
        && (v19 & 0xF) != 0
        && (*(_BYTE *)(v20 + 16LL * (unsigned int)v21 + 8) & 0xF) == 1
        && (v22 = *(_QWORD *)(v20 + 16LL * (unsigned int)v21)) != 0 )
      {
        if ( !(_DWORD)v6 )
        {
          v23 = 0LL;
          goto LABEL_16;
        }
        v55 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v55 < *(_DWORD *)(v12 + 224) )
        {
          v18 = ((unsigned int)v6 >> 26) & 0x30;
          v19 = *(unsigned int *)(v20 + 16LL * (unsigned int)v55 + 8);
          if ( (((unsigned int)v6 >> 26) & 0x30) == (*(_BYTE *)(v20 + 16LL * (unsigned int)v55 + 8) & 0x30)
            && (v19 & 0x1000) == 0
            && (v19 & 0xF) != 0 )
          {
            v18 = 2LL * (unsigned int)v55;
            if ( (*(_BYTE *)(v20 + 16LL * (unsigned int)v55 + 8) & 0xF) == 3 )
            {
              v23 = *(_QWORD *)(v20 + 16LL * (unsigned int)v55);
              v79 = (struct DXGDEVICE *)v23;
              if ( v23 )
              {
                _InterlockedIncrement64((volatile signed __int64 *)(v23 + 64));
LABEL_16:
                ExReleasePushLockSharedEx(v12 + 184, 0LL);
                KeLeaveCriticalRegion();
                v28 = *(_QWORD *)(v22 + 2128);
                if ( v28 )
                {
                  if ( (unsigned int)v5 >= *(_DWORD *)(v28 + 80) )
                  {
                    v57 = WdLogNewEntry5_WdError(v25);
                    v45 = -1073741811;
                    *(_QWORD *)(v57 + 24) = v5;
                    *(_QWORD *)(v57 + 32) = -1073741811LL;
                    WdLogEvent5_WdError(v57);
                    goto LABEL_91;
                  }
                  _InterlockedIncrement64((volatile signed __int64 *)(v22 + 24));
                  if ( *(_QWORD *)(v22 + 2136) )
                  {
                    _InterlockedIncrement64((volatile signed __int64 *)(v22 + 24));
                    v29 = (volatile signed __int64 *)v22;
                    v78 = (struct DXGADAPTER *)v22;
                    goto LABEL_20;
                  }
                  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v90);
                  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v90);
                  v29 = (volatile signed __int64 *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 70);
                  if ( v29 )
                  {
                    _InterlockedIncrement64(v29 + 3);
                    v78 = (struct DXGADAPTER *)v29;
                    if ( v91 )
                      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v90);
LABEL_20:
                    if ( v23
                      && (v29 != *(volatile signed __int64 **)(*(_QWORD *)(v23 + 16) + 16LL)
                       || v22 != *(_QWORD *)(v23 + 2856)) )
                    {
                      v59 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
                      *(_QWORD *)(v59 + 24) = v22;
                      *(_QWORD *)(v59 + 32) = v6;
                      WdLogEvent5_WdWarning(v59);
                      v45 = -1073741811;
LABEL_70:
                      v48 = (ADAPTER_RENDER **)v79;
                      if ( v79 )
                      {
                        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v79 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                          ADAPTER_RENDER::DestroyDeviceNoLocks(v48[2], (struct DXGDEVICE *)v48);
                      }
                      return v45;
                    }
                    v84 = (DXGADAPTER *)v29;
                    v85 = 0;
                    _InterlockedIncrement64(v29 + 3);
                    v83 = -1LL;
                    v88 = (struct DXGADAPTER *)v22;
                    v89 = 0;
                    _InterlockedIncrement64((volatile signed __int64 *)(v22 + 24));
                    v87 = -1LL;
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v78 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v78 + 2), v78);
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v22 + 16), (struct DXGADAPTER *)v22);
                    if ( *(_DWORD *)(v22 + 136) != 1 )
                    {
LABEL_26:
                      v30 = v84;
                      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v84 + 20) )
                      {
                        if ( !KeReadStateEvent((PRKEVENT)v84 + 2) )
                          KeWaitForSingleObject((char *)v84 + 48, Executive, 0, 0, 0LL);
                        DXGADAPTER::AcquireCoreResourceShared(v84);
                        v30 = v84;
                      }
                      v85 = 1;
                      if ( *((_DWORD *)v30 + 44) != 1 )
                        goto LABEL_120;
                      if ( v84 != v88 )
                      {
                        COREACCESS::AcquireShared((COREACCESS *)v86);
                        v30 = (DXGADAPTER *)*((unsigned int *)v88 + 44);
                        if ( (_DWORD)v30 != 1 )
                        {
                          COREACCESS::Release((COREACCESS *)v86);
LABEL_120:
                          COREACCESS::Release((COREACCESS *)v82);
                          v45 = -1073741130;
                          goto LABEL_60;
                        }
                      }
                      v31 = v78;
                      if ( !*((_QWORD *)v78 + 267) )
                      {
                        v65 = WdLogNewEntry5_WdAssertion(v30);
                        *(_QWORD *)(v65 + 24) = 4290LL;
                        WdLogEvent5_WdAssertion(v65);
                      }
                      if ( !*(_QWORD *)(v22 + 2128) )
                      {
                        v66 = WdLogNewEntry5_WdAssertion(v30);
                        *(_QWORD *)(v66 + 24) = 4291LL;
                        WdLogEvent5_WdAssertion(v66);
                      }
                      if ( (_DWORD)v6 && *(_DWORD *)(v23 + 376) != 1 )
                      {
                        v45 = -1073741130;
                        goto LABEL_60;
                      }
                      v32 = 0;
                      v77 = 0;
                      v33 = 0;
                      if ( *(_QWORD *)(v22 + 2136) )
                      {
                        if ( (struct DXGADAPTER *)v22 != v78 )
                        {
                          v67 = WdLogNewEntry5_WdAssertion(v30);
                          *(_QWORD *)(v67 + 24) = 4309LL;
                          WdLogEvent5_WdAssertion(v67);
                        }
                        v34 = a3;
                        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v31 + 267) + 376LL)
                                                                                            + 8LL)
                                                                                + 448LL))(
                                *(_QWORD *)(*((_QWORD *)v31 + 267) + 384LL),
                                a3) )
                        {
                          v45 = -1071775738;
                          goto LABEL_60;
                        }
                        _InterlockedIncrement((volatile signed __int32 *)v78 + 540);
                        v32 = 1;
                        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v31 + 267) + 376LL)
                                                                                            + 8LL)
                                                                                + 456LL))(
                                *(_QWORD *)(*((_QWORD *)v31 + 267) + 384LL),
                                a3) )
                        {
                          LOBYTE(v35) = 1;
                          if ( v79 )
                          {
                            if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v31 + 267) + 376LL)
                                                                                            + 8LL)
                                                                                + 472LL))(
                                   *((_QWORD *)v79 + 71),
                                   0LL,
                                   v35) >= 0 )
                            {
                              v33 = 1;
                              goto LABEL_42;
                            }
                          }
                          else if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v31 + 267) + 376LL)
                                                                                                + 8LL)
                                                                                    + 464LL))(
                                      *(_QWORD *)(*((_QWORD *)v31 + 267) + 384LL),
                                      1LL,
                                      v35) >= 0 )
                          {
                            v77 = 1;
                            goto LABEL_42;
                          }
                          DXGADAPTER::DecrementVSyncWaiter(v78);
                          v45 = -1071775738;
                          goto LABEL_60;
                        }
                      }
                      else
                      {
                        v34 = a3;
                        if ( !DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)v22, a3) )
                        {
                          v45 = -1071775738;
                          goto LABEL_60;
                        }
                        ADAPTER_DISPLAY::ControlVSyncAdapter(*(ADAPTER_DISPLAY **)(v22 + 2128), a3);
                      }
LABEL_42:
                      v36 = *(ADAPTER_DISPLAY **)(v22 + 2128);
                      v80 = *((_DWORD *)v78 + 540);
                      v37 = *((_QWORD *)v36 + 14) + 1016LL * v34;
                      v38 = PsGetCurrentProcess();
                      v40 = PsGetProcessDxgProcess(v38, v39);
                      v76 = 1;
                      if ( *(_QWORD *)(v37 + 832) && (*(unsigned int (**)(void))(*(_QWORD *)(v40 + 72) + 216LL))() )
                      {
                        if ( *((_QWORD *)v36 + 32) )
                        {
                          *(_DWORD *)(v37 + 840) = a4;
                          BLTQUEUE::SetDWMTargetVsync(
                            (BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)v36 + 32) + 8LL) + 2632LL * a3),
                            a4);
                        }
                        else
                        {
                          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                          {
                            v75 = *(_BYTE *)(v37 + 848);
                            v68 = *(_DWORD *)(v37 + 844);
                            v44 = a4;
                            Template_qqqq(v80, &EventDWMVsyncCountWait, v43, a4, v68, v75, v80);
                          }
                          else
                          {
                            v44 = a4;
                          }
                          ADAPTER_DISPLAY::SetSyncRefreshCountWaitTargetNonPaged(v36, a3, v44, &v76);
                        }
                      }
                      if ( v84 != v88 )
                        COREACCESS::Release((COREACCESS *)v86);
                      if ( !v85 )
                      {
                        v69 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v42, v41, v43);
                        v69[5] = v82;
                        v69[3] = 275LL;
                        v69[4] = 4LL;
                        v69[6] = 0LL;
                        v69[7] = 0LL;
                        WdLogEvent5_WdCriticalError(v69);
                      }
                      v85 = 0;
                      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v84 + 20) )
                        DXGADAPTER::ReleaseCoreResource(v84);
                      if ( v32 && v76 )
                        DXGADAPTER::DecrementVSyncWaiter(v78);
                      if ( v77 )
                      {
                        v70 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v81);
                        if ( v70 < 0 )
                        {
                          v45 = v70;
                          goto LABEL_60;
                        }
                        v71 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v31 + 267) + 376LL)
                                                                                             + 8LL)
                                                                                 + 464LL))(
                                *(_QWORD *)(*((_QWORD *)v31 + 267) + 384LL),
                                1LL,
                                0LL);
                      }
                      else
                      {
                        if ( !v33 )
                          goto LABEL_59;
                        v72 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v81);
                        v4 = v72;
                        if ( v72 < 0 )
                        {
                          v45 = v72;
                          goto LABEL_60;
                        }
                        if ( *((_DWORD *)v79 + 94) != 1 )
                          goto LABEL_59;
                        v71 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v31 + 267) + 376LL)
                                                                                            + 8LL)
                                                                                + 472LL))(
                                *((_QWORD *)v79 + 71),
                                0LL,
                                0LL);
                      }
                      v4 = v71;
LABEL_59:
                      v45 = v4;
LABEL_60:
                      v46 = v88;
                      if ( v88 )
                      {
                        if ( v89 )
                        {
                          COREACCESS::Release((COREACCESS *)v86);
                          v46 = v88;
                        }
                        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v46 + 2), v46);
                      }
                      if ( v84 )
                      {
                        if ( v85 )
                          COREACCESS::Release((COREACCESS *)v82);
                        v47 = (DXGGLOBAL **)v84;
                        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v84 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                          DXGGLOBAL::DestroyAdapter(v47[2], (struct DXGADAPTER *)v47);
                      }
                      goto LABEL_70;
                    }
                    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
                      (DXGADAPTERSTOPRESETLOCKSHARED *)v95,
                      v78,
                      1);
                    v93 = v22;
                    v94 = 0;
                    if ( (struct DXGADAPTER *)v22 != v78 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v92);
                    if ( *((_DWORD *)v78 + 44) != 1 || *(_DWORD *)(v22 + 176) != 1 )
                    {
                      v45 = -1073741130;
                      goto LABEL_114;
                    }
                    if ( (unsigned int)v5 >= *(_DWORD *)(*(_QWORD *)(v22 + 2128) + 80LL) )
                    {
                      v64 = WdLogNewEntry5_WdWarning(v61, v60, v62, v63);
                      v45 = -1073741811;
                      *(_QWORD *)(v64 + 24) = v5;
                      *(_QWORD *)(v64 + 32) = -1073741811LL;
                      WdLogEvent5_WdWarning(v64);
LABEL_114:
                      if ( v94 )
                        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v92);
                      if ( v96 )
                        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v95);
                      goto LABEL_60;
                    }
                    if ( *(_QWORD *)(v22 + 2136) )
                    {
                      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v78 + 267) + 376LL)
                                                                                          + 8LL)
                                                                              + 448LL))(
                              *(_QWORD *)(*((_QWORD *)v78 + 267) + 384LL),
                              (unsigned int)v5) )
                      {
                        v45 = -1071775738;
                        goto LABEL_114;
                      }
                    }
                    else if ( !DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)v22, v5) )
                    {
                      v45 = -1071775738;
                      goto LABEL_114;
                    }
                    if ( v94 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v92);
                    if ( v96 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v95);
                    goto LABEL_26;
                  }
                  v73 = WdLogNewEntry5_WdError(v25);
                  *(_QWORD *)(v73 + 24) = v22;
                  *(_QWORD *)(v73 + 32) = -1073741637LL;
                  WdLogEvent5_WdError(v73);
                  DXGADAPTER::ReleaseReference((DXGADAPTER *)v22);
                  if ( v91 )
                    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v90);
                }
                v45 = -1073741637;
LABEL_91:
                v58 = (_QWORD *)WdLogNewEntry5_WdError(v25);
                v58[5] = (int)v45;
                v58[3] = v22;
                v58[4] = v5;
                WdLogEvent5_WdError(v58);
                goto LABEL_70;
              }
            }
          }
        }
        v56 = WdLogNewEntry5_WdWarning(v18, v55, v19, v20);
        *(_QWORD *)(v56 + 24) = v22;
        *(_QWORD *)(v56 + 32) = v6;
        WdLogEvent5_WdWarning(v56);
        v45 = -1073741811;
      }
      else
      {
        v74 = WdLogNewEntry5_WdWarning(v18, v21, v19, v20);
        v45 = -1073741811;
        *(_QWORD *)(v74 + 24) = v7;
        *(_QWORD *)(v74 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v74);
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v97);
      return v45;
    }
    Global = DXGGLOBAL::GetGlobal();
    return REMOTE_VSYNC::WaitForVSync((struct DXGGLOBAL *)((char *)Global + 576));
  }
  else
  {
    v52 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    *(_QWORD *)(v52 + 24) = -1073741790LL;
    WdLogEvent5_WdWarning(v52);
    return 3221225506LL;
  }
}

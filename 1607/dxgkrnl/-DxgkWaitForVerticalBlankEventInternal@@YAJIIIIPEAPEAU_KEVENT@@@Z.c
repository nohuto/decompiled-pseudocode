/*
 * XREFs of ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00CB920
 * Callers:
 *     DxgkWaitForVerticalBlankEvent @ 0x1C00CB850 (DxgkWaitForVerticalBlankEvent.c)
 *     DxgkWaitForVerticalBlankEvent2 @ 0x1C0150EE0 (DxgkWaitForVerticalBlankEvent2.c)
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00016F4 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
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
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C009F904 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C009F940 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C00CEC9C (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAU_KEVENT@@@Z @ 0x1C0144680 (-WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAU_KEVENT@@@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0147094 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEventInternal(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct _KEVENT **a5)
{
  __int64 v5; // r15
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  volatile signed __int64 *v26; // rdi
  DXGADAPTER *v27; // rcx
  struct DXGADAPTER *v28; // r14
  int v29; // r15d
  char *v30; // r13
  char v31; // r12
  unsigned int v32; // edi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  char v36; // r14
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  struct DXGADAPTER *v42; // rcx
  DXGADAPTER *v43; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rax
  int v53; // r9d
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  _QWORD *v68; // rax
  unsigned int v69; // eax
  _QWORD *v70; // rax
  int v71; // eax
  int v72; // eax
  int v73; // eax
  __int64 v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // rax
  char v77; // [rsp+30h] [rbp-B1h]
  struct DXGADAPTER *v78; // [rsp+38h] [rbp-A9h]
  struct DXGDEVICE *v79; // [rsp+40h] [rbp-A1h]
  char v80[8]; // [rsp+50h] [rbp-91h] BYREF
  char v81[8]; // [rsp+58h] [rbp-89h] BYREF
  __int64 v82; // [rsp+60h] [rbp-81h]
  DXGADAPTER *v83; // [rsp+68h] [rbp-79h]
  char v84; // [rsp+70h] [rbp-71h]
  char v85[8]; // [rsp+78h] [rbp-69h] BYREF
  __int64 v86; // [rsp+80h] [rbp-61h]
  struct DXGADAPTER *v87; // [rsp+88h] [rbp-59h]
  char v88; // [rsp+90h] [rbp-51h]
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-41h] BYREF
  char v90[8]; // [rsp+A8h] [rbp-39h] BYREF
  char v91; // [rsp+B0h] [rbp-31h]
  char v92[8]; // [rsp+B8h] [rbp-29h] BYREF
  __int64 v93; // [rsp+C0h] [rbp-21h]
  char v94; // [rsp+C8h] [rbp-19h]
  _BYTE v95[16]; // [rsp+D0h] [rbp-11h] BYREF
  char v96; // [rsp+E0h] [rbp-1h]
  char v97[8]; // [rsp+E8h] [rbp+7h] BYREF
  __int64 v98; // [rsp+F0h] [rbp+Fh]
  int v99; // [rsp+F8h] [rbp+17h]

  v5 = a3;
  v79 = 0LL;
  v7 = a2;
  v8 = (unsigned int)a1;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v10);
  v13 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v46 = WdLogNewEntry5_WdError(v12);
    v32 = -1073741811;
    *(_QWORD *)(v46 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v46);
    return v32;
  }
  if ( !a4 || (*(unsigned int (**)(void))(*(_QWORD *)(ProcessDxgProcess + 72) + 216LL))() )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(v13 + 72) + 224LL))(0LL) )
    {
      Global = DXGGLOBAL::GetGlobal(v14);
      return REMOTE_VSYNC::WaitForVSync((struct DXGGLOBAL *)((char *)Global + 576));
    }
    v98 = v13 + 184;
    if ( v13 != -184 && *(struct _KTHREAD **)(v13 + 192) == KeGetCurrentThread() )
    {
      v52 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v52 + 24) = 1142LL;
      WdLogEvent5_WdAssertion(v52);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v13 + 184, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v53 = *(_DWORD *)(v13 + 200);
        if ( v53 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v15, &EventBlockThread, v16, v53);
      }
      ExAcquirePushLockSharedEx(v13 + 184, 0LL);
    }
    v99 = 1;
    v18 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v18 < *(_DWORD *)(v13 + 224)
      && (v17 = *(_QWORD *)(v13 + 208),
          v15 = ((unsigned int)v8 >> 26) & 0x30,
          v16 = *(unsigned int *)(v17 + 16LL * (unsigned int)v18 + 8),
          (((unsigned int)v8 >> 26) & 0x30) == (*(_BYTE *)(v17 + 16LL * (unsigned int)v18 + 8) & 0x30))
      && (v16 & 0x1000) == 0
      && (v16 & 0xF) != 0
      && (*(_BYTE *)(v17 + 16LL * (unsigned int)v18 + 8) & 0xF) == 1
      && (v19 = *(_QWORD *)(v17 + 16LL * (unsigned int)v18)) != 0 )
    {
      if ( !(_DWORD)v7 )
      {
        v20 = 0LL;
        goto LABEL_16;
      }
      v54 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v54 < *(_DWORD *)(v13 + 224) )
      {
        v15 = ((unsigned int)v7 >> 26) & 0x30;
        v16 = *(unsigned int *)(v17 + 16LL * (unsigned int)v54 + 8);
        if ( (((unsigned int)v7 >> 26) & 0x30) == (*(_BYTE *)(v17 + 16LL * (unsigned int)v54 + 8) & 0x30)
          && (v16 & 0x1000) == 0
          && (v16 & 0xF) != 0 )
        {
          v15 = 2LL * (unsigned int)v54;
          if ( (*(_BYTE *)(v17 + 16LL * (unsigned int)v54 + 8) & 0xF) == 3 )
          {
            v20 = *(_QWORD *)(v17 + 16LL * (unsigned int)v54);
            v79 = (struct DXGDEVICE *)v20;
            if ( v20 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(v20 + 64));
LABEL_16:
              ExReleasePushLockSharedEx(v13 + 184, 0LL);
              KeLeaveCriticalRegion();
              v25 = *(_QWORD *)(v19 + 2128);
              if ( v25 )
              {
                if ( (unsigned int)v5 >= *(_DWORD *)(v25 + 80) )
                {
                  v56 = WdLogNewEntry5_WdError(v22);
                  v32 = -1073741811;
                  *(_QWORD *)(v56 + 24) = v5;
                  *(_QWORD *)(v56 + 32) = -1073741811LL;
                  WdLogEvent5_WdError(v56);
LABEL_148:
                  v75 = (_QWORD *)WdLogNewEntry5_WdError(v22);
                  v75[5] = (int)v32;
                  v75[3] = v19;
                  v75[4] = v5;
                  WdLogEvent5_WdError(v75);
LABEL_72:
                  if ( v79 )
                  {
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v79 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v79 + 2), v79);
                  }
                  return v32;
                }
                _InterlockedIncrement64((volatile signed __int64 *)(v19 + 24));
                if ( *(_QWORD *)(v19 + 2136) )
                {
                  _InterlockedIncrement64((volatile signed __int64 *)(v19 + 24));
                  v26 = (volatile signed __int64 *)v19;
                  v78 = (struct DXGADAPTER *)v19;
                  goto LABEL_20;
                }
                DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v90);
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v90);
                v26 = (volatile signed __int64 *)*((_QWORD *)DXGGLOBAL::GetGlobal(v57) + 70);
                if ( v26 )
                {
                  _InterlockedIncrement64(v26 + 3);
                  v78 = (struct DXGADAPTER *)v26;
                  if ( v91 )
                    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v90);
LABEL_20:
                  if ( v20
                    && (v26 != *(volatile signed __int64 **)(*(_QWORD *)(v20 + 16) + 16LL)
                     || v19 != *(_QWORD *)(v20 + 2856)) )
                  {
                    v58 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
                    *(_QWORD *)(v58 + 24) = v19;
                    *(_QWORD *)(v58 + 32) = v7;
                    WdLogEvent5_WdWarning(v58);
                    v32 = -1073741811;
                    goto LABEL_72;
                  }
                  v83 = (DXGADAPTER *)v26;
                  v84 = 0;
                  _InterlockedIncrement64(v26 + 3);
                  v82 = -1LL;
                  v87 = (struct DXGADAPTER *)v19;
                  v88 = 0;
                  _InterlockedIncrement64((volatile signed __int64 *)(v19 + 24));
                  v86 = -1LL;
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v78 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v78 + 2), v78);
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v19 + 16), (struct DXGADAPTER *)v19);
                  if ( *(_DWORD *)(v19 + 136) != 1 )
                  {
LABEL_26:
                    v27 = v83;
                    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v83 + 20) )
                    {
                      if ( !KeReadStateEvent((PRKEVENT)v83 + 2) )
                        KeWaitForSingleObject((char *)v83 + 48, Executive, 0, 0, 0LL);
                      DXGADAPTER::AcquireCoreResourceShared(v83);
                      v27 = v83;
                    }
                    v84 = 1;
                    if ( *((_DWORD *)v27 + 44) != 1 )
                      goto LABEL_121;
                    if ( v83 != v87 )
                    {
                      COREACCESS::AcquireShared((COREACCESS *)v85);
                      v27 = (DXGADAPTER *)*((unsigned int *)v87 + 44);
                      if ( (_DWORD)v27 != 1 )
                      {
                        COREACCESS::Release((COREACCESS *)v85);
LABEL_121:
                        COREACCESS::Release((COREACCESS *)v81);
                        v32 = -1073741130;
                        goto LABEL_62;
                      }
                    }
                    v28 = v78;
                    v29 = 0;
                    v30 = (char *)v78 + 2136;
                    if ( !*((_QWORD *)v78 + 267) )
                    {
                      v64 = WdLogNewEntry5_WdAssertion(v27);
                      *(_QWORD *)(v64 + 24) = 4612LL;
                      WdLogEvent5_WdAssertion(v64);
                    }
                    if ( !*(_QWORD *)(v19 + 2128) )
                    {
                      v65 = WdLogNewEntry5_WdAssertion(v27);
                      *(_QWORD *)(v65 + 24) = 4613LL;
                      WdLogEvent5_WdAssertion(v65);
                    }
                    if ( (_DWORD)v7 )
                    {
                      if ( *((_DWORD *)v79 + 94) != 1 )
                      {
                        v32 = -1073741130;
                        goto LABEL_62;
                      }
                      v28 = v78;
                    }
                    v31 = 0;
                    v32 = 0;
                    v77 = 0;
                    if ( *(_QWORD *)(v19 + 2136) )
                    {
                      if ( (struct DXGADAPTER *)v19 != v28 )
                      {
                        v66 = WdLogNewEntry5_WdAssertion(v27);
                        *(_QWORD *)(v66 + 24) = 4630LL;
                        WdLogEvent5_WdAssertion(v66);
                      }
                      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v30 + 376LL)
                                                                                          + 8LL)
                                                                              + 448LL))(
                              *(_QWORD *)(*(_QWORD *)v30 + 384LL),
                              a3) )
                      {
                        v32 = -1071775738;
LABEL_62:
                        v42 = v87;
                        if ( v87 )
                        {
                          if ( v88 )
                          {
                            COREACCESS::Release((COREACCESS *)v85);
                            v42 = v87;
                          }
                          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v42 + 2), v42);
                        }
                        v43 = v83;
                        if ( v83 )
                        {
                          if ( v84 )
                          {
                            COREACCESS::Release((COREACCESS *)v81);
                            v43 = v83;
                          }
                          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v43 + 2), v43);
                        }
                        goto LABEL_72;
                      }
                      _InterlockedIncrement((volatile signed __int32 *)v28 + 540);
                      v31 = 1;
                      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v30 + 376LL)
                                                                                         + 8LL)
                                                                             + 456LL))(
                             *(_QWORD *)(*(_QWORD *)v30 + 384LL),
                             a3) )
                      {
                        goto LABEL_42;
                      }
                      LOBYTE(v35) = 1;
                      v67 = *(_QWORD *)v30;
                      if ( v79 )
                      {
                        if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v67 + 376) + 8LL)
                                                                            + 472LL))(
                               *((_QWORD *)v79 + 71),
                               0LL,
                               v35) >= 0 )
                        {
                          v36 = 1;
LABEL_43:
                          if ( v83 != v87 )
                            COREACCESS::Release((COREACCESS *)v85);
                          if ( !v84 )
                          {
                            v68 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v33, v35);
                            v68[5] = v81;
                            v68[3] = 275LL;
                            v68[4] = 4LL;
                            v68[6] = 0LL;
                            v68[7] = 0LL;
                            WdLogEvent5_WdCriticalError(v68);
                          }
                          v84 = 0;
                          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v83 + 20) )
                            DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v83);
                          if ( a4 )
                          {
                            v69 = ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent(
                                    *(ADAPTER_DISPLAY **)(v19 + 2128),
                                    a3,
                                    1,
                                    a4,
                                    a5);
                            v29 = v69;
                            if ( v69 <= 0x3E )
                              v32 = v69;
                          }
                          else
                          {
                            v37 = *(_QWORD *)(v19 + 2128);
                            v38 = *(_QWORD *)(v37 + 16);
                            if ( *(_QWORD *)(v38 + 2128) && *(_QWORD *)(v38 + 560) )
                              Timeout.QuadPart = -1000000LL;
                            else
                              Timeout.QuadPart = -5000000LL;
                            KeWaitForSingleObject(
                              (PVOID)(*(_QWORD *)(v37 + 112) + 1016LL * a3 + 808),
                              UserRequest,
                              0,
                              0,
                              &Timeout);
                          }
                          if ( v31 && _InterlockedDecrement((volatile signed __int32 *)v78 + 540) < 0 )
                          {
                            v70 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40, v39, v41);
                            v70[5] = v78;
                            v70[3] = 275LL;
                            v70[4] = 28LL;
                            v70[6] = *((unsigned int *)v78 + 540);
                            v70[7] = 0LL;
                            WdLogEvent5_WdCriticalError(v70);
                          }
                          if ( v77 )
                          {
                            v71 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v80);
                            if ( v71 < 0 )
                            {
                              v32 = v71;
                              goto LABEL_62;
                            }
                            v72 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v30 + 376LL)
                                                                                                 + 8LL)
                                                                                     + 464LL))(
                                    *(_QWORD *)(*(_QWORD *)v30 + 384LL),
                                    1LL,
                                    0LL);
                          }
                          else
                          {
                            if ( !v36 )
                              goto LABEL_59;
                            v73 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v80);
                            v29 = v73;
                            if ( v73 < 0 )
                            {
                              v32 = v73;
                              goto LABEL_62;
                            }
                            if ( *((_DWORD *)v79 + 94) != 1 )
                            {
LABEL_59:
                              if ( v29 < 0 || !v32 )
                                v32 = v29;
                              goto LABEL_62;
                            }
                            v72 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v30 + 376LL)
                                                                                                + 8LL)
                                                                                    + 472LL))(
                                    *((_QWORD *)v79 + 71),
                                    0LL,
                                    0LL);
                          }
                          v29 = v72;
                          goto LABEL_59;
                        }
LABEL_127:
                        DXGADAPTER::DecrementVSyncWaiter(v78);
                        v32 = -1071775738;
                        goto LABEL_62;
                      }
                      if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v67 + 376) + 8LL)
                                                                           + 464LL))(
                             *(_QWORD *)(v67 + 384),
                             1LL,
                             v35) < 0 )
                        goto LABEL_127;
                      v77 = 1;
                    }
                    else
                    {
                      if ( !DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)v19, a3) )
                      {
                        v32 = -1071775738;
                        goto LABEL_62;
                      }
                      ADAPTER_DISPLAY::ControlVSyncAdapter(*(ADAPTER_DISPLAY **)(v19 + 2128), a3);
                    }
LABEL_42:
                    v36 = 0;
                    goto LABEL_43;
                  }
                  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
                    (DXGADAPTERSTOPRESETLOCKSHARED *)v95,
                    v78,
                    1);
                  v93 = v19;
                  v94 = 0;
                  if ( (struct DXGADAPTER *)v19 != v78 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v92);
                  if ( *((_DWORD *)v78 + 44) != 1 || *(_DWORD *)(v19 + 176) != 1 )
                  {
                    v32 = -1073741130;
                    goto LABEL_115;
                  }
                  if ( (unsigned int)v5 >= *(_DWORD *)(*(_QWORD *)(v19 + 2128) + 80LL) )
                  {
                    v63 = WdLogNewEntry5_WdWarning(v60, v59, v61, v62);
                    v32 = -1073741811;
                    *(_QWORD *)(v63 + 24) = v5;
                    *(_QWORD *)(v63 + 32) = -1073741811LL;
                    WdLogEvent5_WdWarning(v63);
LABEL_115:
                    if ( v94 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v92);
                    if ( v96 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v95);
                    goto LABEL_62;
                  }
                  if ( *(_QWORD *)(v19 + 2136) )
                  {
                    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v78 + 267) + 376LL)
                                                                                        + 8LL)
                                                                            + 448LL))(
                            *(_QWORD *)(*((_QWORD *)v78 + 267) + 384LL),
                            (unsigned int)v5) )
                    {
                      v32 = -1071775738;
                      goto LABEL_115;
                    }
                  }
                  else if ( !DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)v19, v5) )
                  {
                    v32 = -1071775738;
                    goto LABEL_115;
                  }
                  if ( v94 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v92);
                  if ( v96 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v95);
                  goto LABEL_26;
                }
                v74 = WdLogNewEntry5_WdError(v22);
                *(_QWORD *)(v74 + 24) = v19;
                *(_QWORD *)(v74 + 32) = -1073741637LL;
                WdLogEvent5_WdError(v74);
                DXGADAPTER::ReleaseReference((DXGADAPTER *)v19);
                if ( v91 )
                  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v90);
              }
              v32 = -1073741637;
              goto LABEL_148;
            }
          }
        }
      }
      v55 = WdLogNewEntry5_WdWarning(v15, v54, v16, v17);
      *(_QWORD *)(v55 + 24) = v19;
      *(_QWORD *)(v55 + 32) = v7;
      WdLogEvent5_WdWarning(v55);
      v32 = -1073741811;
    }
    else
    {
      v76 = WdLogNewEntry5_WdWarning(v15, v18, v16, v17);
      v32 = -1073741811;
      *(_QWORD *)(v76 + 24) = v8;
      *(_QWORD *)(v76 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v76);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v97);
    return v32;
  }
  v51 = WdLogNewEntry5_WdWarning(v48, v47, v49, v50);
  *(_QWORD *)(v51 + 24) = -1073741790LL;
  WdLogEvent5_WdWarning(v51);
  return 3221225506LL;
}

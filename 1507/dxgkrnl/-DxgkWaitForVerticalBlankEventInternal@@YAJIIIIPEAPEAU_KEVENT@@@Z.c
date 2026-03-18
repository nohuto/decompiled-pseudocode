/*
 * XREFs of ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00A4450
 * Callers:
 *     DxgkWaitForVerticalBlankEvent @ 0x1C00A43A0 (DxgkWaitForVerticalBlankEvent.c)
 *     DxgkWaitForVerticalBlankEvent2 @ 0x1C012C5F0 (DxgkWaitForVerticalBlankEvent2.c)
 * Callees:
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002490 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C00026A0 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0004FF8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00788C0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00789F0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C011E940 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAU_KEVENT@@@Z @ 0x1C011EBE8 (-WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAU_KEVENT@@@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01201C0 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C0129708 (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C013EFB8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
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
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  bool v32; // of
  __int64 v33; // rt0
  volatile signed __int64 *v34; // rdi
  char v35; // of
  __int64 v36; // rt0
  __int64 v37; // rcx
  __int64 v38; // rax
  DXGADAPTER *v39; // rcx
  DXGADAPTER *v40; // rsi
  int v41; // r15d
  char *v42; // r13
  char v43; // r12
  unsigned int v44; // edi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  char v48; // si
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rcx
  struct DXGADAPTER *v52; // rcx
  __int64 v53; // rax
  DXGADAPTER *v54; // rcx
  __int64 v55; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  struct DXGGLOBAL *v62; // rax
  __int64 v63; // rax
  int v64; // r9d
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rax
  _QWORD *v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  _QWORD *v88; // rax
  unsigned int v89; // eax
  _QWORD *v90; // rax
  int v91; // eax
  int v92; // eax
  int v93; // eax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  _QWORD *v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  char v101; // [rsp+30h] [rbp-81h]
  DXGADAPTER *v102; // [rsp+38h] [rbp-79h]
  struct DXGDEVICE *v103; // [rsp+40h] [rbp-71h]
  _BYTE v104[8]; // [rsp+48h] [rbp-69h] BYREF
  _BYTE v105[8]; // [rsp+50h] [rbp-61h] BYREF
  DXGADAPTER *v106; // [rsp+58h] [rbp-59h]
  char v107; // [rsp+60h] [rbp-51h]
  _BYTE v108[8]; // [rsp+68h] [rbp-49h] BYREF
  struct DXGADAPTER *v109; // [rsp+70h] [rbp-41h]
  char v110; // [rsp+78h] [rbp-39h]
  union _LARGE_INTEGER Timeout; // [rsp+80h] [rbp-31h] BYREF
  __int64 v112; // [rsp+88h] [rbp-29h] BYREF
  char v113; // [rsp+90h] [rbp-21h]
  DXGADAPTER *v114; // [rsp+98h] [rbp-19h] BYREF
  char v115; // [rsp+A0h] [rbp-11h]
  _BYTE v116[8]; // [rsp+A8h] [rbp-9h] BYREF
  char v117; // [rsp+B0h] [rbp-1h]
  _BYTE v118[8]; // [rsp+B8h] [rbp+7h] BYREF
  __int64 v119; // [rsp+C0h] [rbp+Fh]
  int v120; // [rsp+C8h] [rbp+17h]

  v5 = a3;
  v103 = 0LL;
  v7 = a2;
  v8 = (unsigned int)a1;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v99 = WdLogNewEntry5_WdEvent(v12, v11, v13, v14);
    *(_QWORD *)(v99 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v99);
    goto LABEL_172;
  }
  v15 = *(_QWORD *)(ProcessWin32Process + 248);
  if ( !v15 )
  {
LABEL_172:
    v100 = WdLogNewEntry5_WdError(v12);
    v44 = -1073741811;
    *(_QWORD *)(v100 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v100);
    return v44;
  }
  if ( a4 && !(*(unsigned int (**)(void))(*(_QWORD *)(v15 + 80) + 216LL))() )
  {
    v61 = WdLogNewEntry5_WdWarning(v58, v57, v59, v60);
    *(_QWORD *)(v61 + 24) = -1073741790LL;
    WdLogEvent5_WdWarning(v61);
    return 3221225506LL;
  }
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(v15 + 80) + 224LL))(0LL) )
  {
    v20 = v15 + 192;
    v119 = v15 + 192;
    if ( v15 != -192 && *(struct _KTHREAD **)(v15 + 200) == KeGetCurrentThread() )
    {
      v63 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
      *(_QWORD *)(v63 + 24) = 1135LL;
      WdLogEvent5_WdAssertion(v63);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v15 + 192, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v64 = *(_DWORD *)(v15 + 208);
        if ( v64 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v21, &EventBlockThread, v22, v64);
      }
      ExAcquirePushLockSharedEx(v15 + 192, 0LL);
    }
    v120 = 1;
    v24 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v24 < *(_DWORD *)(v15 + 232)
      && (v23 = *(_QWORD *)(v15 + 216),
          v21 = ((unsigned int)v8 >> 26) & 0x30,
          v22 = *(unsigned int *)(v23 + 16LL * (unsigned int)v24 + 8),
          (((unsigned int)v8 >> 26) & 0x30) == (*(_BYTE *)(v23 + 16LL * (unsigned int)v24 + 8) & 0x30))
      && (v22 & 0x1000) == 0
      && (v22 & 0xF) != 0
      && (*(_BYTE *)(v23 + 16LL * (unsigned int)v24 + 8) & 0xF) == 1
      && (v25 = *(_QWORD *)(v23 + 16LL * (unsigned int)v24)) != 0 )
    {
      if ( !(_DWORD)v7 )
      {
        v26 = 0LL;
        goto LABEL_17;
      }
      v65 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v65 < *(_DWORD *)(v15 + 232) )
      {
        v21 = ((unsigned int)v7 >> 26) & 0x30;
        v22 = *(unsigned int *)(v23 + 16LL * (unsigned int)v65 + 8);
        if ( (((unsigned int)v7 >> 26) & 0x30) == (*(_BYTE *)(v23 + 16LL * (unsigned int)v65 + 8) & 0x30)
          && (v22 & 0x1000) == 0
          && (v22 & 0xF) != 0 )
        {
          v21 = 2LL * (unsigned int)v65;
          if ( (*(_BYTE *)(v23 + 16LL * (unsigned int)v65 + 8) & 0xF) == 3 )
          {
            v26 = *(_QWORD *)(v23 + 16LL * (unsigned int)v65);
            v103 = (struct DXGDEVICE *)v26;
            if ( v26 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(v26 + 64));
LABEL_17:
              ExReleasePushLockSharedEx(v20, 0LL);
              KeLeaveCriticalRegion();
              v31 = *(_QWORD *)(v25 + 1976);
              if ( v31 )
              {
                v32 = __OFSUB__((_DWORD)v5, *(_DWORD *)(v31 + 80));
                if ( (unsigned int)v5 >= *(_DWORD *)(v31 + 80) )
                {
                  v67 = WdLogNewEntry5_WdError(v28);
                  v44 = -1073741811;
                  *(_QWORD *)(v67 + 24) = v5;
                  *(_QWORD *)(v67 + 32) = -1073741811LL;
                  WdLogEvent5_WdError(v67);
LABEL_166:
                  v97 = (_QWORD *)WdLogNewEntry5_WdError(v28);
                  v97[5] = (int)v44;
                  v97[3] = v25;
                  v97[4] = v5;
                  WdLogEvent5_WdError(v97);
LABEL_87:
                  if ( v103 )
                  {
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v103 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v103 + 2), v103);
                  }
                  return v44;
                }
                v33 = _InterlockedAdd64((volatile signed __int64 *)(v25 + 24), 1uLL);
                if ( (v33 < 0) ^ v32 | (v33 == 0) )
                {
                  v68 = WdLogNewEntry5_WdAssertion(v28, v27, v29, v30);
                  *(_QWORD *)(v68 + 24) = 1050LL;
                  WdLogEvent5_WdAssertion(v68);
                }
                if ( *(_QWORD *)(v25 + 1984) )
                {
                  if ( _InterlockedAdd64((volatile signed __int64 *)(v25 + 24), 1uLL) <= 0 )
                  {
                    v69 = WdLogNewEntry5_WdAssertion(v28, v27, v29, v30);
                    *(_QWORD *)(v69 + 24) = 1050LL;
                    WdLogEvent5_WdAssertion(v69);
                  }
                  v34 = (volatile signed __int64 *)v25;
                  v102 = (DXGADAPTER *)v25;
                  goto LABEL_25;
                }
                DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v116);
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v116);
                Global = DXGGLOBAL::GetGlobal(v71, v70, v72, v73);
                v34 = (volatile signed __int64 *)*((_QWORD *)Global + 71);
                if ( v34 )
                {
                  DXGADAPTER::AcquireReference(*((DXGADAPTER **)Global + 71));
                  v102 = (DXGADAPTER *)v34;
                  if ( v117 )
                    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v116);
LABEL_25:
                  if ( v26
                    && (v34 != *(volatile signed __int64 **)(*(_QWORD *)(v26 + 16) + 16LL)
                     || v25 != *(_QWORD *)(v26 + 18704)) )
                  {
                    v76 = WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
                    *(_QWORD *)(v76 + 24) = v25;
                    *(_QWORD *)(v76 + 32) = v7;
                    WdLogEvent5_WdWarning(v76);
                    v44 = -1073741811;
                    goto LABEL_87;
                  }
                  v106 = (DXGADAPTER *)v34;
                  v107 = 0;
                  v35 = 0;
                  if ( _InterlockedAdd64(v34 + 3, 1uLL) <= 0 )
                  {
                    v77 = WdLogNewEntry5_WdAssertion(v28, v27, v29, v30);
                    *(_QWORD *)(v77 + 24) = 1050LL;
                    WdLogEvent5_WdAssertion(v77);
                  }
                  v109 = (struct DXGADAPTER *)v25;
                  v110 = 0;
                  v36 = _InterlockedAdd64((volatile signed __int64 *)(v25 + 24), 1uLL);
                  if ( (v36 < 0) ^ v35 | (v36 == 0) )
                  {
                    v78 = WdLogNewEntry5_WdAssertion(v28, v27, v29, v30);
                    *(_QWORD *)(v78 + 24) = 1050LL;
                    WdLogEvent5_WdAssertion(v78);
                  }
                  v37 = _InterlockedDecrement64((volatile signed __int64 *)v102 + 3);
                  if ( v37 )
                  {
                    if ( v37 < 0 )
                    {
                      v79 = WdLogNewEntry5_WdAssertion(v37, v27, v29, v30);
                      *(_QWORD *)(v79 + 24) = 1067LL;
                      WdLogEvent5_WdAssertion(v79);
                    }
                  }
                  else
                  {
                    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v102 + 2), v102);
                  }
                  v38 = _InterlockedDecrement64((volatile signed __int64 *)(v25 + 24));
                  if ( v38 )
                  {
                    if ( v38 < 0 )
                    {
                      v80 = WdLogNewEntry5_WdAssertion(v37, v27, v29, v30);
                      *(_QWORD *)(v80 + 24) = 1067LL;
                      WdLogEvent5_WdAssertion(v80);
                    }
                  }
                  else
                  {
                    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v25 + 16), (struct DXGADAPTER *)v25);
                  }
                  if ( *(_DWORD *)(v25 + 120) != 1 )
                  {
LABEL_37:
                    if ( v107 )
                    {
                      v83 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v27, v29);
                      v83[5] = v105;
                      v83[3] = 275LL;
                      v83[4] = 4LL;
                      v83[6] = 0LL;
                      v83[7] = 0LL;
                      WdLogEvent5_WdCriticalError(v83);
                    }
                    v39 = v106;
                    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v106 + 18) )
                    {
                      if ( !KeReadStateEvent((PRKEVENT)((char *)v106 + 32)) )
                        KeWaitForSingleObject((char *)v106 + 32, Executive, 0, 0, 0LL);
                      DXGADAPTER::AcquireCoreResourceShared(v106);
                      v39 = v106;
                    }
                    v107 = 1;
                    if ( *((_DWORD *)v39 + 40) != 1 )
                      goto LABEL_137;
                    if ( v106 != v109 )
                    {
                      COREACCESS::AcquireShared((COREACCESS *)v108);
                      v39 = (DXGADAPTER *)*((unsigned int *)v109 + 40);
                      if ( (_DWORD)v39 != 1 )
                      {
                        COREACCESS::Release((COREACCESS *)v108);
LABEL_137:
                        COREACCESS::Release((COREACCESS *)v105);
                        v44 = -1073741130;
                        goto LABEL_75;
                      }
                    }
                    v40 = v102;
                    v41 = 0;
                    v42 = (char *)v102 + 1984;
                    if ( !*((_QWORD *)v102 + 248) )
                    {
                      v84 = WdLogNewEntry5_WdAssertion(v39, v27, v29, v30);
                      *(_QWORD *)(v84 + 24) = 23373LL;
                      WdLogEvent5_WdAssertion(v84);
                    }
                    if ( !*(_QWORD *)(v25 + 1976) )
                    {
                      v85 = WdLogNewEntry5_WdAssertion(v39, v27, v29, v30);
                      *(_QWORD *)(v85 + 24) = 23374LL;
                      WdLogEvent5_WdAssertion(v85);
                    }
                    if ( (_DWORD)v7 )
                    {
                      if ( *((_DWORD *)v103 + 88) != 1 )
                      {
                        v44 = -1073741130;
                        goto LABEL_75;
                      }
                      v40 = v102;
                    }
                    v43 = 0;
                    v44 = 0;
                    v101 = 0;
                    if ( *(_QWORD *)(v25 + 1984) )
                    {
                      if ( (DXGADAPTER *)v25 != v40 )
                      {
                        v86 = WdLogNewEntry5_WdAssertion(v39, v27, v29, v30);
                        *(_QWORD *)(v86 + 24) = 23391LL;
                        WdLogEvent5_WdAssertion(v86);
                      }
                      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v42 + 376LL)
                                                                                          + 8LL)
                                                                              + 448LL))(
                              *(_QWORD *)(*(_QWORD *)v42 + 384LL),
                              a3) )
                      {
                        v44 = -1071775738;
LABEL_75:
                        v52 = v109;
                        if ( v109 )
                        {
                          if ( v110 )
                          {
                            COREACCESS::Release((COREACCESS *)v108);
                            v52 = v109;
                          }
                          v53 = _InterlockedDecrement64((volatile signed __int64 *)v52 + 3);
                          if ( v53 )
                          {
                            if ( v53 < 0 )
                            {
                              v94 = WdLogNewEntry5_WdAssertion(v52, v27, v29, v30);
                              *(_QWORD *)(v94 + 24) = 1067LL;
                              WdLogEvent5_WdAssertion(v94);
                            }
                          }
                          else
                          {
                            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v52 + 2), v52);
                          }
                        }
                        v54 = v106;
                        if ( v106 )
                        {
                          if ( v107 )
                          {
                            COREACCESS::Release((COREACCESS *)v105);
                            v54 = v106;
                          }
                          v55 = _InterlockedDecrement64((volatile signed __int64 *)v54 + 3);
                          if ( v55 )
                          {
                            if ( v55 < 0 )
                            {
                              v95 = WdLogNewEntry5_WdAssertion(v54, v27, v29, v30);
                              *(_QWORD *)(v95 + 24) = 1067LL;
                              WdLogEvent5_WdAssertion(v95);
                            }
                          }
                          else
                          {
                            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v54 + 2), v54);
                          }
                        }
                        goto LABEL_87;
                      }
                      _InterlockedIncrement((volatile signed __int32 *)v40 + 500);
                      v43 = 1;
                      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v42 + 376LL)
                                                                                         + 8LL)
                                                                             + 456LL))(
                             *(_QWORD *)(*(_QWORD *)v42 + 384LL),
                             a3) )
                      {
                        goto LABEL_55;
                      }
                      LOBYTE(v47) = 1;
                      v87 = *(_QWORD *)v42;
                      if ( v103 )
                      {
                        if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v87 + 376) + 8LL)
                                                                            + 472LL))(
                               *((_QWORD *)v103 + 68),
                               0LL,
                               v47) >= 0 )
                        {
                          v48 = 1;
LABEL_56:
                          if ( v106 != v109 )
                            COREACCESS::Release((COREACCESS *)v108);
                          if ( !v107 )
                          {
                            v88 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v46, v45, v47);
                            v88[5] = v105;
                            v88[3] = 275LL;
                            v88[4] = 4LL;
                            v88[6] = 0LL;
                            v88[7] = 0LL;
                            WdLogEvent5_WdCriticalError(v88);
                          }
                          v107 = 0;
                          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v106 + 18) )
                            DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v106);
                          if ( a4 )
                          {
                            v89 = ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent(
                                    *(ADAPTER_DISPLAY **)(v25 + 1976),
                                    a3,
                                    1,
                                    a4,
                                    a5);
                            v41 = v89;
                            if ( v89 <= 0x3E )
                              v44 = v89;
                          }
                          else
                          {
                            v49 = *(_QWORD *)(v25 + 1976);
                            v50 = *(_QWORD *)(v49 + 16);
                            if ( *(_QWORD *)(v50 + 1976) && *(_QWORD *)(v50 + 544) )
                              Timeout.QuadPart = -1000000LL;
                            else
                              Timeout.QuadPart = -5000000LL;
                            KeWaitForSingleObject(
                              (PVOID)(*(_QWORD *)(v49 + 112) + 1008LL * a3 + 800),
                              UserRequest,
                              0,
                              0,
                              &Timeout);
                          }
                          if ( v43 && _InterlockedDecrement((volatile signed __int32 *)v102 + 500) < 0 )
                          {
                            v90 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v51, v27, v29);
                            v90[5] = v102;
                            v90[3] = 275LL;
                            v90[4] = 28LL;
                            v90[6] = *((unsigned int *)v102 + 500);
                            v90[7] = 0LL;
                            WdLogEvent5_WdCriticalError(v90);
                          }
                          if ( v101 )
                          {
                            v91 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v104);
                            if ( v91 < 0 )
                            {
                              v44 = v91;
                              goto LABEL_75;
                            }
                            v92 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v42 + 376LL)
                                                                                                 + 8LL)
                                                                                     + 464LL))(
                                    *(_QWORD *)(*(_QWORD *)v42 + 384LL),
                                    1LL,
                                    0LL);
                          }
                          else
                          {
                            if ( !v48 )
                              goto LABEL_72;
                            v93 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v104);
                            v41 = v93;
                            if ( v93 < 0 )
                            {
                              v44 = v93;
                              goto LABEL_75;
                            }
                            if ( *((_DWORD *)v103 + 88) != 1 )
                            {
LABEL_72:
                              if ( v41 < 0 || !v44 )
                                v44 = v41;
                              goto LABEL_75;
                            }
                            v92 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v42 + 376LL)
                                                                                                + 8LL)
                                                                                    + 472LL))(
                                    *((_QWORD *)v103 + 68),
                                    0LL,
                                    0LL);
                          }
                          v41 = v92;
                          goto LABEL_72;
                        }
LABEL_143:
                        DXGADAPTER::DecrementVSyncWaiter(v102);
                        v44 = -1071775738;
                        goto LABEL_75;
                      }
                      if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v87 + 376) + 8LL)
                                                                           + 464LL))(
                             *(_QWORD *)(v87 + 384),
                             1LL,
                             v47) < 0 )
                        goto LABEL_143;
                      v101 = 1;
                    }
                    else
                    {
                      if ( !DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)v25, a3) )
                      {
                        v44 = -1071775738;
                        goto LABEL_75;
                      }
                      ADAPTER_DISPLAY::ControlVSyncAdapter(*(ADAPTER_DISPLAY **)(v25 + 1976), a3);
                    }
LABEL_55:
                    v48 = 0;
                    goto LABEL_56;
                  }
                  v114 = v102;
                  v115 = 0;
                  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v114);
                  v112 = v25;
                  v113 = 0;
                  if ( (DXGADAPTER *)v25 != v102 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v112);
                  if ( *((_DWORD *)v102 + 40) != 1 || *(_DWORD *)(v25 + 160) != 1 )
                  {
                    v44 = -1073741130;
                    goto LABEL_131;
                  }
                  if ( (unsigned int)v5 >= *(_DWORD *)(*(_QWORD *)(v25 + 1976) + 80LL) )
                  {
                    v82 = WdLogNewEntry5_WdWarning(v81, v27, v29, v30);
                    v44 = -1073741811;
                    *(_QWORD *)(v82 + 24) = v5;
                    *(_QWORD *)(v82 + 32) = -1073741811LL;
                    WdLogEvent5_WdWarning(v82);
LABEL_131:
                    if ( v113 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v112);
                    if ( v115 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v114);
                    goto LABEL_75;
                  }
                  if ( *(_QWORD *)(v25 + 1984) )
                  {
                    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v102 + 248) + 376LL)
                                                                                        + 8LL)
                                                                            + 448LL))(
                            *(_QWORD *)(*((_QWORD *)v102 + 248) + 384LL),
                            (unsigned int)v5) )
                    {
                      v44 = -1071775738;
                      goto LABEL_131;
                    }
                  }
                  else if ( !DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)v25, v5) )
                  {
                    v44 = -1071775738;
                    goto LABEL_131;
                  }
                  if ( v113 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v112);
                  if ( v115 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v114);
                  goto LABEL_37;
                }
                v96 = WdLogNewEntry5_WdError(v75);
                *(_QWORD *)(v96 + 24) = v25;
                *(_QWORD *)(v96 + 32) = -1073741637LL;
                WdLogEvent5_WdError(v96);
                DXGADAPTER::ReleaseReference((DXGADAPTER *)v25);
                if ( v117 )
                  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v116);
              }
              v44 = -1073741637;
              goto LABEL_166;
            }
          }
        }
      }
      v66 = WdLogNewEntry5_WdWarning(v21, v65, v22, v23);
      *(_QWORD *)(v66 + 24) = v25;
      *(_QWORD *)(v66 + 32) = v7;
      WdLogEvent5_WdWarning(v66);
      v44 = -1073741811;
    }
    else
    {
      v98 = WdLogNewEntry5_WdWarning(v21, v24, v22, v23);
      v44 = -1073741811;
      *(_QWORD *)(v98 + 24) = v8;
      *(_QWORD *)(v98 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v98);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v118);
    return v44;
  }
  v62 = DXGGLOBAL::GetGlobal(v17, v16, v18, v19);
  return REMOTE_VSYNC::WaitForVSync((struct DXGGLOBAL *)((char *)v62 + 584));
}

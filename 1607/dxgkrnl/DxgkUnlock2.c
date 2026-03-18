/*
 * XREFs of DxgkUnlock2 @ 0x1C00A54B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0009524 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0009738 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000A100 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C0143A3C (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0145540 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkUnlock2(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD **ProcessDxgProcess; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rcx
  struct DXGDEVICE *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // r14
  void *v18; // rcx
  __int64 v19; // r9
  unsigned __int8 v20; // bl
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rax
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned int v41[2]; // [rsp+30h] [rbp-A8h]
  struct DXGDEVICE *v42; // [rsp+38h] [rbp-A0h] BYREF
  int v43; // [rsp+40h] [rbp-98h]
  _BYTE v44[8]; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v45[16]; // [rsp+58h] [rbp-80h] BYREF
  DXGADAPTER *v46; // [rsp+68h] [rbp-70h]
  char v47; // [rsp+70h] [rbp-68h]
  _BYTE v48[16]; // [rsp+78h] [rbp-60h] BYREF
  __int64 v49; // [rsp+88h] [rbp-50h]
  __int64 v50; // [rsp+98h] [rbp-40h]
  char v51; // [rsp+A0h] [rbp-38h]
  struct DXGALLOCATION *v52; // [rsp+E8h] [rbp+10h] BYREF
  char v53; // [rsp+F0h] [rbp+18h] BYREF
  struct DXGDEVICE *v54; // [rsp+F8h] [rbp+20h] BYREF

  v3 = (_QWORD *)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2104);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v5);
  if ( !ProcessDxgProcess )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
LABEL_6:
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v9, &EventProfilerExit, v10, 2104);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_QWORD *)MmUserProbeAddress;
  *(_QWORD *)v41 = *v3;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v53, *v3, ProcessDxgProcess, &v54);
  v13 = v54;
  if ( !v54 )
  {
    v14 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v14 + 24) = v41[0];
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v53);
    goto LABEL_6;
  }
  v42 = v54;
  v15 = *(_QWORD *)(*((_QWORD *)v54 + 2) + 16LL);
  if ( *(int *)(v15 + 1792) >= 0x2000 || *(_BYTE *)(v15 + 2076) )
    v16 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 191);
  else
    v16 = 0;
  v43 = v16;
  v17 = *((_QWORD *)v13 + 2);
  if ( *((_DWORD *)v13 + 76) == 2 )
  {
    if ( KeReadStateEvent((PRKEVENT)(v17 + 80)) )
      goto LABEL_24;
    v18 = (void *)(v17 + 80);
  }
  else
  {
    if ( KeReadStateEvent((PRKEVENT)(v17 + 56)) )
      goto LABEL_24;
    v18 = (void *)(v17 + 56);
  }
  KeWaitForSingleObject(v18, Executive, 0, 0, 0LL);
LABEL_24:
  KeEnterCriticalRegion();
  if ( v16 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v13 + 88, 0LL) )
      goto LABEL_35;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 96LL));
    v20 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v13 + 88));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v13 + 10), 0) )
      goto LABEL_35;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 96LL));
    v20 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v21, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v13 + 10), 1u);
  }
  if ( v20 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_35:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, (__int64)v13, 0, v19, 0);
  if ( v47 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v22, v24);
    v25[3] = 275LL;
    v25[4] = 4LL;
    v25[5] = v45;
    v25[6] = 0LL;
    v25[7] = 0LL;
    WdLogEvent5_WdCriticalError(v25);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v46 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v46 + 2) )
      KeWaitForSingleObject((char *)v46 + 48, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v46);
  }
  v47 = 1;
  if ( *(_DWORD *)(v50 + 376) != 1 )
    goto LABEL_45;
  if ( v51 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v48);
    if ( *(_DWORD *)(v49 + 176) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v48);
LABEL_45:
      COREACCESS::Release((COREACCESS *)v45);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v44);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v42);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v53);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v26, &EventProfilerExit, v27, 2104);
      return 3221226166LL;
    }
  }
  DXGPROCESS::GetAllocationSafe((__int64)ProcessDxgProcess, (DXGALLOCATIONREFERENCE *)&v52, v41[1]);
  if ( !v52 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, 0LL, v29, v30);
    v31[3] = v41[1];
LABEL_51:
    WdLogEvent5_WdWarning(v31);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v52);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v44);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v42);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v53);
    goto LABEL_6;
  }
  v32 = *(_QWORD *)(*((_QWORD *)v52 + 1) + 16LL);
  if ( *(_QWORD *)(v32 + 16) != *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v52, v29, v30);
    v31[3] = v54;
    v31[4] = v52;
    v31[5] = -1073741811LL;
    goto LABEL_51;
  }
  if ( !*((_QWORD *)v52 + 3) )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v52, v29, v30);
    v31[3] = v41[1];
    v31[4] = v52;
    goto LABEL_51;
  }
  v33 = DXGDEVICE::Unlock2(v54, v52, 1);
  v35 = v33;
  if ( v33 >= 0 )
  {
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v52);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v44);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v42);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v53);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v39, &EventProfilerExit, v40, 2104);
    return 0LL;
  }
  else
  {
    v36 = WdLogNewEntry5_WdError(v34);
    *(_QWORD *)(v36 + 24) = v52;
    *(_QWORD *)(v36 + 32) = v35;
    WdLogEvent5_WdError(v36);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v52);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v44);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v42);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v53);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v37, &EventProfilerExit, v38, 2104);
    return (unsigned int)v35;
  }
}

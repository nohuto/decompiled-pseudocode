/*
 * XREFs of DxgkLock2 @ 0x1C009EBF0
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
 *     ?VidMmLock@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0011558 (-VidMmLock@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C0143A3C (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0145540 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkLock2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD **ProcessDxgProcess; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  ULONG64 v12; // rax
  __int64 v13; // rcx
  struct DXGDEVICE *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // r14
  void *v19; // rcx
  __int64 v20; // r9
  unsigned __int8 v21; // bl
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  struct DXGALLOCATION *v33; // rbx
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rax
  int v39; // ecx
  __int64 v40; // rax
  int v41; // ecx
  int v42; // ebx
  _QWORD *v43; // r8
  __int64 v44; // rcx
  __int64 v45; // r8
  struct DXGDEVICE *v46; // [rsp+30h] [rbp-C8h] BYREF
  struct DXGDEVICE *v47; // [rsp+38h] [rbp-C0h] BYREF
  int v48; // [rsp+40h] [rbp-B8h]
  unsigned int v49[4]; // [rsp+48h] [rbp-B0h]
  void *v50; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE v51[8]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v52[16]; // [rsp+68h] [rbp-90h] BYREF
  DXGADAPTER *v53; // [rsp+78h] [rbp-80h]
  char v54; // [rsp+80h] [rbp-78h]
  _BYTE v55[16]; // [rsp+88h] [rbp-70h] BYREF
  __int64 v56; // [rsp+98h] [rbp-60h]
  __int64 v57; // [rsp+A8h] [rbp-50h]
  char v58; // [rsp+B0h] [rbp-48h]
  struct DXGALLOCATION *v59; // [rsp+110h] [rbp+18h] BYREF
  char v60; // [rsp+118h] [rbp+20h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2103);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v5);
  if ( !ProcessDxgProcess )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
LABEL_6:
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v9, &EventProfilerExit, v10, 2103);
    return 3221225485LL;
  }
  v12 = a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = MmUserProbeAddress;
  *(_OWORD *)v49 = *(_OWORD *)v12;
  v50 = *(void **)(v12 + 16);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v60, v49[0], ProcessDxgProcess, &v46);
  v14 = v46;
  if ( !v46 )
  {
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = v49[0];
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v60);
    goto LABEL_6;
  }
  v47 = v46;
  v16 = *(_QWORD *)(*((_QWORD *)v46 + 2) + 16LL);
  if ( *(int *)(v16 + 1792) >= 0x2000 || *(_BYTE *)(v16 + 2076) )
    v17 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 191);
  else
    v17 = 0;
  v48 = v17;
  v18 = *((_QWORD *)v14 + 2);
  if ( *((_DWORD *)v14 + 76) == 2 )
  {
    if ( KeReadStateEvent((PRKEVENT)(v18 + 80)) )
      goto LABEL_24;
    v19 = (void *)(v18 + 80);
  }
  else
  {
    if ( KeReadStateEvent((PRKEVENT)(v18 + 56)) )
      goto LABEL_24;
    v19 = (void *)(v18 + 56);
  }
  KeWaitForSingleObject(v19, Executive, 0, 0, 0LL);
LABEL_24:
  KeEnterCriticalRegion();
  if ( v17 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v14 + 88, 0LL) )
      goto LABEL_35;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 96LL));
    v21 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v14 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v14 + 88));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v14 + 10), 0) )
      goto LABEL_35;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 96LL));
    v21 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v14 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v22, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v14 + 10), 1u);
  }
  if ( v21 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v14 + 2) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_35:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v51, (__int64)v14, 0, v20, 0);
  if ( v54 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23, v25);
    v26[3] = 275LL;
    v26[4] = 4LL;
    v26[5] = v52;
    v26[6] = 0LL;
    v26[7] = 0LL;
    WdLogEvent5_WdCriticalError(v26);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v53 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v53 + 2) )
      KeWaitForSingleObject((char *)v53 + 48, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v53);
  }
  v54 = 1;
  if ( *(_DWORD *)(v57 + 376) != 1 )
    goto LABEL_45;
  if ( v58 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v55);
    if ( *(_DWORD *)(v56 + 176) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v55);
LABEL_45:
      COREACCESS::Release((COREACCESS *)v52);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v47);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v60);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v27, &EventProfilerExit, v28, 2103);
      return 3221226166LL;
    }
  }
  DXGPROCESS::GetAllocationSafe((__int64)ProcessDxgProcess, (DXGALLOCATIONREFERENCE *)&v59, v49[1]);
  v33 = v59;
  if ( !v59 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
    v34[3] = v49[1];
    v34[4] = -1073741811LL;
LABEL_51:
    WdLogEvent5_WdWarning(v34);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v59);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v47);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v60);
    goto LABEL_6;
  }
  v35 = *(_QWORD *)(*((_QWORD *)v59 + 1) + 16LL);
  v36 = *(_QWORD *)(v35 + 16);
  v37 = *((_QWORD *)v14 + 2);
  if ( v36 != *(_QWORD *)(v37 + 16) )
    goto LABEL_53;
  if ( !*((_QWORD *)v59 + 3) )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v36, v37, v32);
    v34[3] = v49[1];
    v34[4] = v59;
    v34[5] = -1073741811LL;
    goto LABEL_51;
  }
  if ( (*(_DWORD *)(*((_QWORD *)v59 + 6) + 4LL) & 2) == 0 )
  {
    v38 = *((_QWORD *)v59 + 5);
    if ( v38 )
    {
      v39 = *(_DWORD *)(v38 + 4);
      if ( (v39 & 1) != 0 && (v39 & 2) == 0 )
      {
        v40 = *(_QWORD *)(v37 + 16);
        v41 = *(_DWORD *)(v40 + 300);
        if ( (v41 & 0x10) == 0 && (v41 & 8) == 0 )
        {
          v35 = *(unsigned int *)(v40 + 1524);
          if ( (v35 & 0x80u) == 0LL )
          {
LABEL_53:
            v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v36, v37, v32);
            v34[3] = v46;
            v34[4] = v59;
            v34[5] = -1073741811LL;
            goto LABEL_51;
          }
        }
      }
    }
  }
  if ( !*((_DWORD *)v46 + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v46 + 10));
  v42 = VIDMM_EXPORT::VidMmLock(
          *(VIDMM_EXPORT **)(*((_QWORD *)v14 + 2) + 400LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)v14 + 2) + 408LL),
          *((struct _VIDMM_MULTI_ALLOC **)v33 + 3),
          v32,
          &v50);
  if ( v42 >= 0 )
  {
    v43 = (_QWORD *)(a1 + 16);
    if ( a1 + 16 >= MmUserProbeAddress )
      v43 = (_QWORD *)MmUserProbeAddress;
    *v43 = v50;
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v59);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v47);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v60);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v44, &EventProfilerExit, v45, 2103);
  return (unsigned int)v42;
}

/*
 * XREFs of DxgkCreateAllocation @ 0x1C0076DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0009524 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009964 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000A100 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _lambda_66b8a9031714805b7c929fd6741fe715_::_lambda_invoker_cdecl_ @ 0x1C00778F0 (_lambda_66b8a9031714805b7c929fd6741fe715_--_lambda_invoker_cdecl_.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0078654 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0099060 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009E864 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z @ 0x1C00A3EEC (-IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01449E0 (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0145540 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCreateAllocation(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD **ProcessDxgProcess; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  _D3DKMT_CREATEALLOCATION *v12; // rax
  __int64 hDevice; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct DXGDEVICE *v18; // rdi
  __int64 v19; // rax
  __int64 NumAllocations; // rbx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // r15
  void *v25; // rcx
  unsigned __int8 v26; // bl
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdi
  SIZE_T v42; // rax
  struct DXGDEVICE *v43; // r15
  __int64 v44; // rcx
  __int64 v45; // rdi
  OUTPUTDUPL_MGR *v46; // rcx
  DXGGLOBAL *v47; // rcx
  __int64 v48; // rax
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  unsigned int v50; // edi
  _DWORD *v51; // rdx
  _DWORD *v52; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS *v53; // rdx
  struct DXGADAPTER *v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // r8
  _QWORD *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r8
  struct DXGDEVICE *v60; // [rsp+60h] [rbp-168h] BYREF
  PVOID P; // [rsp+68h] [rbp-160h]
  struct DXGDEVICE *v62; // [rsp+70h] [rbp-158h] BYREF
  int v63; // [rsp+78h] [rbp-150h]
  __int64 v64; // [rsp+80h] [rbp-148h] BYREF
  struct DXGADAPTER *v65; // [rsp+88h] [rbp-140h]
  char v66; // [rsp+90h] [rbp-138h]
  _D3DKMT_CREATEALLOCATION v67; // [rsp+A0h] [rbp-128h] BYREF
  struct _KTHREAD **v68; // [rsp+F0h] [rbp-D8h]
  _BYTE v69[8]; // [rsp+100h] [rbp-C8h] BYREF
  _BYTE v70[16]; // [rsp+108h] [rbp-C0h] BYREF
  DXGADAPTER *v71; // [rsp+118h] [rbp-B0h]
  char v72; // [rsp+120h] [rbp-A8h]
  _BYTE v73[16]; // [rsp+128h] [rbp-A0h] BYREF
  __int64 v74; // [rsp+138h] [rbp-90h]
  __int64 v75; // [rsp+148h] [rbp-80h]
  char v76; // [rsp+150h] [rbp-78h]
  _QWORD v77[3]; // [rsp+160h] [rbp-68h] BYREF
  struct DXGDEVICE *v78; // [rsp+1E8h] [rbp+20h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2003);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v5);
  v68 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
LABEL_6:
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v9, &EventProfilerExit, v10, 2003);
    return 3221225485LL;
  }
  v12 = (_D3DKMT_CREATEALLOCATION *)a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = (_D3DKMT_CREATEALLOCATION *)MmUserProbeAddress;
  v67 = *v12;
  hDevice = v67.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v60, v67.hDevice, ProcessDxgProcess, &v78);
  v18 = v78;
  if ( !v78 )
  {
    v19 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v19 + 24) = hDevice;
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v60);
    goto LABEL_6;
  }
  NumAllocations = v67.NumAllocations;
  if ( v67.NumAllocations > 0x682AA )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    v21[3] = v18;
    v21[4] = NumAllocations;
    v21[5] = -1073741811LL;
LABEL_16:
    WdLogEvent5_WdWarning(v21);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v60);
    goto LABEL_6;
  }
  if ( (*(_BYTE *)&v67.Flags & 8) != 0
    || (*(_BYTE *)&v67.Flags & 0x20) != 0
    || (*(_WORD *)&v67.Flags & 0x100) != 0
    || (*(_WORD *)&v67.Flags & 0x1000) != 0
    || (*(_WORD *)&v67.Flags & 0x200) != 0
    || (*(_BYTE *)&v67.Flags & 2) != 0 && (*(_BYTE *)&v67.Flags & 1) == 0
    || !v67.hResource && !v67.NumAllocations )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    v21[3] = v18;
    v21[4] = -1073741811LL;
    goto LABEL_16;
  }
  v62 = v78;
  v22 = *(_QWORD *)(*((_QWORD *)v78 + 2) + 16LL);
  if ( *(int *)(v22 + 1792) >= 0x2000 || *(_BYTE *)(v22 + 2076) )
    v23 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 191);
  else
    v23 = 0;
  v63 = v23;
  v24 = *((_QWORD *)v18 + 2);
  if ( *((_DWORD *)v18 + 76) == 2 )
  {
    if ( KeReadStateEvent((PRKEVENT)(v24 + 80)) )
      goto LABEL_37;
    v25 = (void *)(v24 + 80);
  }
  else
  {
    if ( KeReadStateEvent((PRKEVENT)(v24 + 56)) )
      goto LABEL_37;
    v25 = (void *)(v24 + 56);
  }
  KeWaitForSingleObject(v25, Executive, 0, 0, 0LL);
LABEL_37:
  KeEnterCriticalRegion();
  if ( v23 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v18 + 88, 0LL) )
      goto LABEL_48;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 96LL));
    v26 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v18 + 88));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v18 + 10), 0) )
      goto LABEL_48;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 96LL));
    v26 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v27, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v18 + 10), 1u);
  }
  if ( v26 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_48:
  v65 = *(struct DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v65 + 3);
  v64 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v65 + 120, 0LL);
  v66 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v69, (__int64)v78, 2, v28, 0);
  if ( v72 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29, v31);
    v32[3] = 275LL;
    v32[4] = 4LL;
    v32[5] = v70;
    v32[6] = 0LL;
    v32[7] = 0LL;
    WdLogEvent5_WdCriticalError(v32);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v71 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v71 + 2) )
      KeWaitForSingleObject((char *)v71 + 48, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v71);
  }
  v72 = 1;
  v33 = *(unsigned int *)(v75 + 376);
  if ( (_DWORD)v33 != 1 )
    goto LABEL_58;
  if ( v76 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v73);
    v33 = *(unsigned int *)(v74 + 176);
    if ( (_DWORD)v33 != 1 )
    {
      COREACCESS::Release((COREACCESS *)v73);
LABEL_58:
      COREACCESS::Release((COREACCESS *)v70);
      v38 = WdLogNewEntry5_WdWarning(v35, v34, v36, v37);
      *(_QWORD *)(v38 + 24) = v78;
      *(_QWORD *)(v38 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v38);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v69);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v64);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v62);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v60);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v39, &EventProfilerExit, v40, 2003);
      return 3221226166LL;
    }
  }
  v41 = v67.NumAllocations;
  v42 = 8LL * v67.NumAllocations;
  if ( !is_mul_ok(v67.NumAllocations, 8uLL) )
    v42 = -1LL;
  if ( v42 )
  {
    if ( v42 > 0x7FFFFFFF )
      goto LABEL_94;
  }
  else
  {
    v42 = 1LL;
  }
  P = ExAllocatePoolWithTag(PagedPool, v42, 0x4B677844u);
  if ( P )
  {
    v43 = v78;
    v44 = *((_QWORD *)v78 + 357);
    if ( v44 )
    {
      v45 = *(_QWORD *)(v44 + 2128);
      v46 = *(OUTPUTDUPL_MGR **)(v45 + 104);
      if ( !v46 || (int)lambda_66b8a9031714805b7c929fd6741fe715_::_lambda_invoker_cdecl_(v46, v78) >= 0 )
      {
        v77[0] = *(_QWORD *)(*(_QWORD *)(v45 + 16) + 268LL);
        v77[1] = lambda_66b8a9031714805b7c929fd6741fe715_::_lambda_invoker_cdecl_;
        v77[2] = v43;
        v47 = DXGGLOBAL::m_pGlobal;
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v48 = WdLogNewEntry5_WdAssertion(0LL);
          *(_QWORD *)(v48 + 24) = 982LL;
          WdLogEvent5_WdAssertion(v48);
          v47 = DXGGLOBAL::m_pGlobal;
        }
        DXGGLOBAL::IterateOutputDuplMgrsWithCallback(
          v47,
          lambda_de3a9c4ca82130b89abd09a8dda67964_::_lambda_invoker_cdecl_,
          v77);
      }
    }
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    if ( RemoteOutputDuplMgr )
      OUTPUTDUPL_MGR::CleanUpPendingList(RemoteOutputDuplMgr, v43);
    v67.hGlobalShare = 0;
    v67.hDevice = 0;
    v50 = DXGDEVICE::CreateAllocation(v43, &v67, 1u, 0, 0LL, 0LL, (struct COREDEVICEACCESS *)v69, 0, 0LL, 0LL, 0LL);
    v51 = (_DWORD *)(a1 + 4);
    if ( a1 + 4 >= MmUserProbeAddress )
      v51 = (_DWORD *)MmUserProbeAddress;
    *v51 = v67.hResource;
    v52 = (_DWORD *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v52 = (_DWORD *)MmUserProbeAddress;
    *v52 = v67.hGlobalShare;
    v53 = (D3DKMT_CREATEALLOCATIONFLAGS *)(a1 + 56);
    if ( a1 + 56 >= MmUserProbeAddress )
      v53 = (D3DKMT_CREATEALLOCATIONFLAGS *)MmUserProbeAddress;
    *v53 = v67.Flags;
    ExFreePoolWithTag(P, 0);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v69);
    v54 = v65;
    ExReleasePushLockSharedEx((char *)v65 + 120, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v65 + 2), v65);
    if ( v63 )
      ExReleasePushLockSharedEx((char *)v78 + 88, 0LL);
    else
      ExReleaseResourceLite(*((PERESOURCE *)v78 + 10));
    KeLeaveCriticalRegion();
    if ( v60 && _InterlockedExchangeAdd64((volatile signed __int64 *)v60 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v60 + 2), v60);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v55, &EventProfilerExit, v56, 2003);
    return v50;
  }
LABEL_94:
  v57 = (_QWORD *)WdLogNewEntry5_WdLowResource(v33);
  v57[3] = v78;
  v57[4] = v41;
  v57[5] = -1073741801LL;
  WdLogEvent5_WdLowResource(v57);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v69);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v64);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v62);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v60);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v58, &EventProfilerExit, v59, 2003);
  return 3221225495LL;
}

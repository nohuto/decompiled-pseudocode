/*
 * XREFs of DxgkCreateAllocation @ 0x1C00A2D80
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00013C8 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0002670 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002AA0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002AA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00789F0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007D760 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0081B5C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z @ 0x1C008AB38 (-IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z.c)
 *     _lambda_01e55edfa3d0a32d4fa785aa2dca734f_::_helper_func_cdecl_ @ 0x1C008D970 (_lambda_01e55edfa3d0a32d4fa785aa2dca734f_--_helper_func_cdecl_.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01260D8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C013EFB8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCreateAllocation(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD **v10; // r13
  struct _D3DKMT_CREATEALLOCATION *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGDEVICE *v16; // rdi
  __int64 NumAllocations; // rbx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // r15
  BOOLEAN v21; // al
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  char v25; // of
  volatile signed __int64 *v26; // rcx
  __int64 v27; // rt0
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdi
  SIZE_T v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  PVOID PoolWithTag; // r12
  DXGDEVICE *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // r15
  OUTPUTDUPL_MGR *v42; // rcx
  DXGGLOBAL *v43; // rcx
  unsigned int v44; // r15d
  _DWORD *v45; // rax
  _DWORD *v46; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS *v47; // r14
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rsi
  __int64 v53; // rcx
  __int64 v54; // r8
  char v56; // al
  unsigned __int8 v57; // bl
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r8
  _QWORD *v63; // rax
  void *v64; // rcx
  unsigned __int8 v65; // bl
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // r8
  _QWORD *v75; // rax
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  struct DXGADAPTER *v82; // [rsp+70h] [rbp-138h] BYREF
  char v83; // [rsp+78h] [rbp-130h]
  struct DXGDEVICE *v84; // [rsp+80h] [rbp-128h] BYREF
  int v85; // [rsp+88h] [rbp-120h]
  struct _D3DKMT_CREATEALLOCATION v86; // [rsp+A0h] [rbp-108h] BYREF
  _BYTE v87[8]; // [rsp+F0h] [rbp-B8h] BYREF
  _BYTE v88[8]; // [rsp+F8h] [rbp-B0h] BYREF
  DXGADAPTER *v89; // [rsp+100h] [rbp-A8h]
  char v90; // [rsp+108h] [rbp-A0h]
  _BYTE v91[8]; // [rsp+110h] [rbp-98h] BYREF
  __int64 v92; // [rsp+118h] [rbp-90h]
  __int64 v93; // [rsp+128h] [rbp-80h]
  char v94; // [rsp+130h] [rbp-78h]
  _QWORD v95[3]; // [rsp+140h] [rbp-68h] BYREF
  struct DXGDEVICE *v96; // [rsp+1C0h] [rbp+18h] BYREF
  struct DXGDEVICE *v97; // [rsp+1C8h] [rbp+20h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2003);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v80 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v80 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v80);
    goto LABEL_99;
  }
  v10 = *(struct _KTHREAD ***)(ProcessWin32Process + 248);
  if ( !v10 )
  {
LABEL_99:
    v81 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v81 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v81);
    if ( (qword_1C00467F0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
      return 3221225485LL;
LABEL_101:
    Template_q(v61, &EventProfilerExit, v62, 2003);
    return 3221225485LL;
  }
  v11 = (struct _D3DKMT_CREATEALLOCATION *)a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = (struct _D3DKMT_CREATEALLOCATION *)MmUserProbeAddress;
  v86 = *v11;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v96, v86.hDevice, v10, &v97);
  v16 = v97;
  if ( !v97 )
  {
    v59 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v59 + 24) = v86.hDevice;
    *(_QWORD *)(v59 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v59);
LABEL_74:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v96);
    if ( (qword_1C00467F0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) == 0 )
      return 3221225485LL;
    goto LABEL_101;
  }
  NumAllocations = v86.NumAllocations;
  if ( v86.NumAllocations > 0x682AA )
  {
    v63 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    v63[3] = v16;
    v63[4] = NumAllocations;
    v63[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v63);
    goto LABEL_74;
  }
  if ( (*(_BYTE *)&v86.Flags & 8) != 0
    || (*(_BYTE *)&v86.Flags & 0x20) != 0
    || (*(_WORD *)&v86.Flags & 0x100) != 0
    || (*(_WORD *)&v86.Flags & 0x1000) != 0
    || (*(_WORD *)&v86.Flags & 0x200) != 0
    || (*(_BYTE *)&v86.Flags & 2) != 0 && (*(_BYTE *)&v86.Flags & 1) == 0
    || !v86.hResource && !v86.NumAllocations )
  {
    v60 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v60 + 24) = v16;
    *(_QWORD *)(v60 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v60);
    goto LABEL_74;
  }
  v84 = v97;
  v18 = *(_QWORD *)(*((_QWORD *)v97 + 2) + 16LL);
  if ( *(int *)(v18 + 1648) >= 0x2000 || *(_BYTE *)(v18 + 1932) )
    v19 = *((_DWORD *)DXGGLOBAL::GetGlobal(v18, v12, v14, v15) + 195);
  else
    v19 = 0;
  v85 = v19;
  v20 = *((_QWORD *)v16 + 2);
  if ( *((_DWORD *)v16 + 70) == 2 )
  {
    if ( KeReadStateEvent((PRKEVENT)(v20 + 80)) )
      goto LABEL_21;
    v64 = (void *)(v20 + 80);
  }
  else
  {
    if ( KeReadStateEvent((PRKEVENT)(v20 + 56)) )
      goto LABEL_21;
    v64 = (void *)(v20 + 56);
  }
  KeWaitForSingleObject(v64, Executive, 0, 0, 0LL);
LABEL_21:
  KeEnterCriticalRegion();
  if ( !v19 )
  {
    v21 = ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 10), 0);
    v25 = 0;
    if ( v21 )
      goto LABEL_23;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 80LL));
    v57 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v58, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 10), 1u);
    if ( !v57 )
      goto LABEL_69;
    goto LABEL_85;
  }
  v56 = ExTryAcquirePushLockSharedEx((char *)v16 + 88, 0LL);
  v25 = 0;
  if ( v56 )
    goto LABEL_23;
  KeLeaveCriticalRegion();
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 80LL));
  v65 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
  DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v16 + 88));
  if ( v65 )
LABEL_85:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
LABEL_69:
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 80LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_23:
  v26 = *(volatile signed __int64 **)(*((_QWORD *)v16 + 2) + 16LL);
  v82 = (struct DXGADAPTER *)v26;
  v27 = _InterlockedAdd64(v26 + 3, 1uLL);
  if ( (v27 < 0) ^ v25 | (v27 == 0) )
  {
    v66 = WdLogNewEntry5_WdAssertion(v26, v22, v23, v24);
    *(_QWORD *)(v66 + 24) = 1050LL;
    WdLogEvent5_WdAssertion(v66);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v82 + 104, 0LL);
  v83 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v87, (__int64)v97, 2, v28, 0);
  if ( v90 )
  {
    v67 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29, v31);
    v67[3] = 275LL;
    v67[4] = 4LL;
    v67[5] = v88;
    v67[6] = 0LL;
    v67[7] = 0LL;
    WdLogEvent5_WdCriticalError(v67);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v89 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v89 + 32)) )
      KeWaitForSingleObject((char *)v89 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v89);
  }
  v90 = 1;
  if ( *(_DWORD *)(v93 + 352) != 1 )
    goto LABEL_88;
  if ( v94 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v91);
    if ( *(_DWORD *)(v92 + 160) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v91);
LABEL_88:
      COREACCESS::Release((COREACCESS *)v88);
      v72 = WdLogNewEntry5_WdWarning(v69, v68, v70, v71);
      *(_QWORD *)(v72 + 24) = v97;
      *(_QWORD *)(v72 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v72);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v87);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v82);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v84);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v96);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v73, &EventProfilerExit, v74, 2003);
      return 3221226166LL;
    }
  }
  v32 = v86.NumAllocations;
  v33 = 8LL * v86.NumAllocations;
  if ( !is_mul_ok(v86.NumAllocations, 8uLL) )
    v33 = -1LL;
  if ( !v33 )
    v33 = 1LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v33, 0x4B677844u);
  if ( PoolWithTag )
  {
    v39 = v97;
    v40 = *((_QWORD *)v97 + 2338);
    if ( v40 )
    {
      v41 = *(_QWORD *)(v40 + 1976);
      v42 = *(OUTPUTDUPL_MGR **)(v41 + 104);
      if ( !v42 || (int)lambda_01e55edfa3d0a32d4fa785aa2dca734f_::_helper_func_cdecl_(v42, (PERESOURCE *)v97) >= 0 )
      {
        v95[0] = *(_QWORD *)(*(_QWORD *)(v41 + 16) + 252LL);
        v95[1] = lambda_01e55edfa3d0a32d4fa785aa2dca734f_::_helper_func_cdecl_;
        v95[2] = v39;
        v43 = DXGGLOBAL::m_pGlobal;
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v78 = WdLogNewEntry5_WdAssertion(0LL, v34, v36, v37);
          *(_QWORD *)(v78 + 24) = 1038LL;
          WdLogEvent5_WdAssertion(v78);
          v43 = DXGGLOBAL::m_pGlobal;
        }
        DXGGLOBAL::IterateOutputDuplMgrsWithCallback(
          v43,
          lambda_eedd85b836c993498b6f79843d09d3d6_::_helper_func_cdecl_,
          v95);
      }
    }
    v86.hGlobalShare = 0;
    v86.hDevice = 0;
    LOBYTE(v36) = 1;
    v44 = DXGDEVICE::CreateAllocation(v39, &v86, v36, 0LL, 0LL, 0LL, (struct COREDEVICEACCESS *)v87, 0, 0LL, 0LL, 0LL);
    v45 = (_DWORD *)(a1 + 4);
    if ( a1 + 4 >= MmUserProbeAddress )
      v45 = (_DWORD *)MmUserProbeAddress;
    *v45 = v86.hResource;
    v46 = (_DWORD *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v46 = (_DWORD *)MmUserProbeAddress;
    *v46 = v86.hGlobalShare;
    v47 = (D3DKMT_CREATEALLOCATIONFLAGS *)(a1 + 56);
    if ( (unsigned __int64)v47 >= MmUserProbeAddress )
      v47 = (D3DKMT_CREATEALLOCATIONFLAGS *)MmUserProbeAddress;
    *v47 = v86.Flags;
    ExFreePoolWithTag(PoolWithTag, 0);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v87);
    ExReleasePushLockSharedEx((char *)v82 + 104, 0LL);
    KeLeaveCriticalRegion();
    v52 = _InterlockedDecrement64((volatile signed __int64 *)v82 + 3);
    if ( !v52 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v82 + 2), v82);
    if ( v52 < 0 )
    {
      v79 = WdLogNewEntry5_WdAssertion(v49, v48, v50, v51);
      *(_QWORD *)(v79 + 24) = 1067LL;
      WdLogEvent5_WdAssertion(v79);
    }
    if ( v85 )
      ExReleasePushLockSharedEx((char *)v97 + 88, 0LL);
    else
      ExReleaseResourceLite(*((PERESOURCE *)v97 + 10));
    KeLeaveCriticalRegion();
    if ( v96 && _InterlockedExchangeAdd64((volatile signed __int64 *)v96 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v96 + 2), v96);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v53, &EventProfilerExit, v54, 2003);
    return v44;
  }
  else
  {
    v75 = (_QWORD *)WdLogNewEntry5_WdLowResource(v35);
    v75[3] = v97;
    v75[4] = v32;
    v75[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v75);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v87);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v82);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v84);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v96);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v76, &EventProfilerExit, v77, 2003);
    return 3221225495LL;
  }
}

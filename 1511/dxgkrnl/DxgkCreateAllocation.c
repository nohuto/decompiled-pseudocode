/*
 * XREFs of DxgkCreateAllocation @ 0x1C00B5600
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0001650 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0003358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00035B8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004214 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0070760 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0075D88 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0079FD0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z @ 0x1C0096C10 (-IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z.c)
 *     sub_1C009DF90 @ 0x1C009DF90 (sub_1C009DF90.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C012C2B8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0145430 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCreateAllocation(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD **v10; // r14
  struct _D3DKMT_CREATEALLOCATION *v11; // rax
  __int64 hDevice; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGDEVICE *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 NumAllocations; // rbx
  _QWORD *v22; // rax
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // r15
  void *v26; // rcx
  BOOLEAN v27; // al
  char v28; // of
  unsigned __int8 v29; // bl
  __int64 v30; // r8
  char v31; // al
  volatile signed __int64 *v32; // rcx
  __int64 v33; // rt0
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v48; // rbx
  SIZE_T v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  _QWORD *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  DXGDEVICE *v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rbx
  OUTPUTDUPL_MGR *v60; // rcx
  DXGGLOBAL *v61; // rcx
  __int64 v62; // rax
  unsigned int v63; // r15d
  _DWORD *v64; // rdx
  _DWORD *v65; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS *v66; // rdx
  struct DXGADAPTER *v67; // rbx
  __int64 v68; // rcx
  __int64 v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rax
  __int64 v74; // rax
  struct DXGDEVICE *v75; // [rsp+60h] [rbp-148h] BYREF
  PVOID P; // [rsp+68h] [rbp-140h]
  struct DXGADAPTER *v77; // [rsp+70h] [rbp-138h] BYREF
  char v78; // [rsp+78h] [rbp-130h]
  struct DXGDEVICE *v79; // [rsp+80h] [rbp-128h] BYREF
  int v80; // [rsp+88h] [rbp-120h]
  struct _D3DKMT_CREATEALLOCATION v81; // [rsp+90h] [rbp-118h] BYREF
  _BYTE v82[8]; // [rsp+E0h] [rbp-C8h] BYREF
  _BYTE v83[8]; // [rsp+E8h] [rbp-C0h] BYREF
  DXGADAPTER *v84; // [rsp+F0h] [rbp-B8h]
  char v85; // [rsp+F8h] [rbp-B0h]
  _BYTE v86[8]; // [rsp+100h] [rbp-A8h] BYREF
  __int64 v87; // [rsp+108h] [rbp-A0h]
  __int64 v88; // [rsp+118h] [rbp-90h]
  char v89; // [rsp+120h] [rbp-88h]
  struct _KTHREAD **v90; // [rsp+130h] [rbp-78h]
  _QWORD v91[3]; // [rsp+138h] [rbp-70h] BYREF
  struct DXGDEVICE *v92; // [rsp+1C8h] [rbp+20h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2003);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v73 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v73 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v73);
    goto LABEL_96;
  }
  v10 = *(struct _KTHREAD ***)(ProcessWin32Process + 248);
  v90 = v10;
  if ( !v10 )
  {
LABEL_96:
    v74 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v74 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v74);
    goto LABEL_97;
  }
  v11 = (struct _D3DKMT_CREATEALLOCATION *)a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = (struct _D3DKMT_CREATEALLOCATION *)MmUserProbeAddress;
  v81 = *v11;
  hDevice = v81.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v75, v81.hDevice, v10, &v92);
  v17 = v92;
  if ( !v92 )
  {
    v18 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v18 + 24) = hDevice;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v75);
LABEL_97:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v19, &EventProfilerExit, v20, 2003);
    return 3221225485LL;
  }
  NumAllocations = v81.NumAllocations;
  if ( v81.NumAllocations > 0x682AA )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    v22[3] = v17;
    v22[4] = NumAllocations;
    v22[5] = -1073741811LL;
LABEL_12:
    WdLogEvent5_WdWarning(v22);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v75);
    goto LABEL_97;
  }
  if ( (*(_BYTE *)&v81.Flags & 8) != 0
    || (*(_BYTE *)&v81.Flags & 0x20) != 0
    || (*(_WORD *)&v81.Flags & 0x100) != 0
    || (*(_WORD *)&v81.Flags & 0x1000) != 0
    || (*(_WORD *)&v81.Flags & 0x200) != 0
    || (*(_BYTE *)&v81.Flags & 2) != 0 && (*(_BYTE *)&v81.Flags & 1) == 0
    || !v81.hResource && !v81.NumAllocations )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    v22[3] = v17;
    v22[4] = -1073741811LL;
    goto LABEL_12;
  }
  v79 = v92;
  v23 = *(_QWORD *)(*((_QWORD *)v92 + 2) + 16LL);
  if ( *(int *)(v23 + 1656) >= 0x2000 || *(_BYTE *)(v23 + 1940) )
    v24 = *((_DWORD *)DXGGLOBAL::GetGlobal(v23) + 231);
  else
    v24 = 0;
  v80 = v24;
  v25 = *((_QWORD *)v17 + 2);
  if ( *((_DWORD *)v17 + 70) == 2 )
  {
    if ( KeReadStateEvent((PRKEVENT)(v25 + 80)) )
      goto LABEL_33;
    v26 = (void *)(v25 + 80);
  }
  else
  {
    if ( KeReadStateEvent((PRKEVENT)(v25 + 56)) )
      goto LABEL_33;
    v26 = (void *)(v25 + 56);
  }
  KeWaitForSingleObject(v26, Executive, 0, 0, 0LL);
LABEL_33:
  KeEnterCriticalRegion();
  if ( v24 )
  {
    v31 = ExTryAcquirePushLockSharedEx((char *)v17 + 88, 0LL);
    v28 = 0;
    if ( v31 )
      goto LABEL_44;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 80LL));
    v29 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v17 + 88));
  }
  else
  {
    v27 = ExAcquireResourceExclusiveLite(*((PERESOURCE *)v17 + 10), 0);
    v28 = 0;
    if ( v27 )
      goto LABEL_44;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 80LL));
    v29 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v30, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v17 + 10), 1u);
  }
  if ( v29 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 80LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_44:
  v32 = *(volatile signed __int64 **)(*((_QWORD *)v17 + 2) + 16LL);
  v77 = (struct DXGADAPTER *)v32;
  v33 = _InterlockedAdd64(v32 + 3, 1uLL);
  if ( (v33 < 0) ^ v28 | (v33 == 0) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v32);
    *(_QWORD *)(v34 + 24) = 1141LL;
    WdLogEvent5_WdAssertion(v34);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v77 + 104, 0LL);
  v78 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v82, (__int64)v92, 2, v35, 0);
  if ( v85 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v36, v38);
    v39[3] = 275LL;
    v39[4] = 4LL;
    v39[5] = v83;
    v39[6] = 0LL;
    v39[7] = 0LL;
    WdLogEvent5_WdCriticalError(v39);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v84 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v84 + 32)) )
      KeWaitForSingleObject((char *)v84 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v84);
  }
  v85 = 1;
  if ( *(_DWORD *)(v88 + 352) != 1 )
    goto LABEL_56;
  if ( v89 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v86);
    if ( *(_DWORD *)(v87 + 160) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v86);
LABEL_56:
      COREACCESS::Release((COREACCESS *)v83);
      v44 = WdLogNewEntry5_WdWarning(v41, v40, v42, v43);
      *(_QWORD *)(v44 + 24) = v92;
      *(_QWORD *)(v44 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v44);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v82);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v77);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v79);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v75);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v45, &EventProfilerExit, v46, 2003);
      return 3221226166LL;
    }
  }
  v48 = v81.NumAllocations;
  v49 = 8LL * v81.NumAllocations;
  if ( !is_mul_ok(v81.NumAllocations, 8uLL) )
    v49 = -1LL;
  if ( !v49 )
    v49 = 1LL;
  P = ExAllocatePoolWithTag(PagedPool, v49, 0x4B677844u);
  if ( P )
  {
    v57 = v92;
    v58 = *((_QWORD *)v92 + 354);
    if ( v58 )
    {
      v59 = *(_QWORD *)(v58 + 1984);
      v60 = *(OUTPUTDUPL_MGR **)(v59 + 128);
      if ( !v60 || (int)sub_1C009DF90(v60, (PERESOURCE *)v92) >= 0 )
      {
        v91[0] = *(_QWORD *)(*(_QWORD *)(v59 + 16) + 252LL);
        v91[1] = sub_1C009DF90;
        v91[2] = v57;
        v61 = DXGGLOBAL::m_pGlobal;
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v62 = WdLogNewEntry5_WdAssertion(0LL);
          *(_QWORD *)(v62 + 24) = 1016LL;
          WdLogEvent5_WdAssertion(v62);
          v61 = DXGGLOBAL::m_pGlobal;
        }
        DXGGLOBAL::IterateOutputDuplMgrsWithCallback(v61, sub_1C0124C00, v91);
      }
    }
    v81.hGlobalShare = 0;
    v81.hDevice = 0;
    LOBYTE(v52) = 1;
    v63 = DXGDEVICE::CreateAllocation(v57, &v81, v52, 0LL, 0LL, 0LL, (struct COREDEVICEACCESS *)v82, 0, 0LL, 0LL, 0LL);
    v64 = (_DWORD *)(a1 + 4);
    if ( a1 + 4 >= MmUserProbeAddress )
      v64 = (_DWORD *)MmUserProbeAddress;
    *v64 = v81.hResource;
    v65 = (_DWORD *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v65 = (_DWORD *)MmUserProbeAddress;
    *v65 = v81.hGlobalShare;
    v66 = (D3DKMT_CREATEALLOCATIONFLAGS *)(a1 + 56);
    if ( a1 + 56 >= MmUserProbeAddress )
      v66 = (D3DKMT_CREATEALLOCATIONFLAGS *)MmUserProbeAddress;
    *v66 = v81.Flags;
    ExFreePoolWithTag(P, 0);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v82);
    v67 = v77;
    ExReleasePushLockSharedEx((char *)v77 + 104, 0LL);
    KeLeaveCriticalRegion();
    v69 = _InterlockedDecrement64((volatile signed __int64 *)v67 + 3);
    if ( !v69 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v77 + 2), v77);
    if ( v69 < 0 )
    {
      v70 = WdLogNewEntry5_WdAssertion(v68);
      *(_QWORD *)(v70 + 24) = 1158LL;
      WdLogEvent5_WdAssertion(v70);
    }
    if ( v80 )
      ExReleasePushLockSharedEx((char *)v92 + 88, 0LL);
    else
      ExReleaseResourceLite(*((PERESOURCE *)v92 + 10));
    KeLeaveCriticalRegion();
    if ( v75 && _InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v75 + 2), v75);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v71, &EventProfilerExit, v72, 2003);
    return v63;
  }
  else
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdLowResource(v51, v50, v52, v53);
    v54[3] = v92;
    v54[4] = v48;
    v54[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v54);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v82);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v77);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v79);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v75);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v55, &EventProfilerExit, v56, 2003);
    return 3221225495LL;
  }
}

/*
 * XREFs of ?DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z @ 0x1C0157668
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C0193CE0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C0007484 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000A100 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000A128 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z @ 0x1C00937EC (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009E2E4 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C009F940 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B4048 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@@Z @ 0x1C00CE5F4 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@@Z.c)
 *     ?DdiDestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C015800C (-DdiDestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015A620 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiCreateVirtualGpu(ADAPTER_RENDER *this, struct _DXGKARG_CREATEVIRTUALGPU *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 PartitionId; // rcx
  __int64 v9; // rax
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  struct DXGPROCESS *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  struct DXGADAPTER *v18; // r13
  char *v19; // r15
  struct DXGDEVICE **v20; // r12
  int Device; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  _QWORD *v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int8 CurrentIrql; // r13
  __int64 v40; // r14
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v42; // rax
  int CurrentProcessSessionId; // r14d
  __int64 ThreadWin32Thread; // rax
  int v45; // r15d
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  _QWORD *v49; // rax
  unsigned __int8 v50; // cl
  _QWORD *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  __int64 v59; // r14
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 NumMemorySegments; // rax
  __int64 v65; // rax
  SIZE_T v66; // rax
  PVOID v67; // rax
  void *v68; // rcx
  __int64 v69; // rax
  ULONG v70; // eax
  __int64 i; // r13
  struct DXGDEVICE *v72; // r9
  int StandardAllocation; // eax
  struct DXGPROCESS *v74; // rbx
  unsigned int v75; // ecx
  __int64 v76; // rbx
  int v77; // r8d
  __int64 v78; // rbx
  int v79; // eax
  __int64 v80; // rcx
  __int64 v81; // rbx
  __int64 v82; // rax
  __int64 v83; // r13
  __int64 v84; // r8
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  unsigned __int8 v91; // r13
  __int64 v92; // r14
  struct _KTHREAD *v93; // rbx
  __int64 v94; // rax
  int v95; // r14d
  __int64 v96; // rax
  int v97; // r12d
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  _QWORD *v101; // rax
  unsigned __int8 v102; // cl
  _QWORD *v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  int v110; // [rsp+30h] [rbp-D0h] BYREF
  _DXGKARG_DESTROYVIRTUALGPU v111; // [rsp+34h] [rbp-CCh] BYREF
  struct DXGPROCESS *ProcessDxgProcess; // [rsp+38h] [rbp-C8h] BYREF
  PERESOURCE *v113; // [rsp+40h] [rbp-C0h]
  char *v114; // [rsp+48h] [rbp-B8h]
  __int64 v115; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v116[16]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v117[24]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v118[80]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v119[96]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v120[52]; // [rsp+130h] [rbp+30h] BYREF
  UINT64 Size; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int64 v122; // [rsp+2D8h] [rbp+1D8h]
  __int64 v123; // [rsp+2E0h] [rbp+1E0h]
  _QWORD v124[130]; // [rsp+2F0h] [rbp+1F0h] BYREF

  result = ADAPTER_RENDER::EnsureVirtualGpuProcess(this);
  if ( (int)result >= 0 )
  {
    if ( a2->PartitionId >= *((_DWORD *)this + 266) )
      return 3221225485LL;
    PartitionId = a2->PartitionId;
    if ( *(_QWORD *)(*((_QWORD *)this + 134) + 8 * PartitionId) )
    {
      v9 = WdLogNewEntry5_WdWarning(PartitionId, v5, v6, v7);
      *(_QWORD *)(v9 + 24) = a2->PartitionId;
      WdLogEvent5_WdWarning(v9);
      return 3221225485LL;
    }
    CurrentProcess = PsGetCurrentProcess(PartitionId);
    ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v11);
    v12 = ProcessDxgProcess;
    if ( !ProcessDxgProcess )
    {
      LODWORD(v12) = DXGPROCESS::CreateDxgProcess(&ProcessDxgProcess);
      if ( (int)v12 < 0 )
      {
        v17 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
        *(_QWORD *)(v17 + 24) = 975LL;
        WdLogEvent5_WdWarning(v17);
        return (unsigned int)v12;
      }
      v12 = ProcessDxgProcess;
    }
    v113 = (PERESOURCE *)*((_QWORD *)this + 2);
    v18 = (struct DXGADAPTER *)v113;
    DXGADAPTER::ReleaseCoreResource(v113);
    v19 = (char *)v12 + 136;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v12 + 136, 0LL);
    *((_QWORD *)v12 + 18) = KeGetCurrentThread();
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 24, 0LL);
    *((_QWORD *)this + 4) = KeGetCurrentThread();
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v118, v18, 0LL);
    LODWORD(v12) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v118);
    if ( (int)v12 < 0 )
      goto LABEL_14;
    v20 = (struct DXGDEVICE **)((char *)this + 1080);
    if ( !*((_QWORD *)this + 135) )
    {
      Device = ADAPTER_RENDER::CreateDevice((DXGADAPTER **)this, (__int64 *)this + 135, 1u, 0LL, 0, 0);
      v12 = (struct DXGPROCESS *)Device;
      if ( Device < 0 )
      {
        v26 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
        *(_QWORD *)(v26 + 24) = a2->PartitionId;
        *(_QWORD *)(v26 + 32) = v12;
        WdLogEvent5_WdWarning(v26);
LABEL_14:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v118);
        *((_QWORD *)this + 4) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 24, 0LL);
        KeLeaveCriticalRegion();
        *((_QWORD *)v19 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v19, 0LL);
        KeLeaveCriticalRegion();
LABEL_15:
        DXGADAPTER::AcquireCoreResourceShared(v18);
        return (unsigned int)v12;
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v118);
    *((_QWORD *)this + 4) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 24, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)v19 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v19, 0LL);
    KeLeaveCriticalRegion();
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v116,
      *v20);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v117, v18, 1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v119, (__int64)*v20, 2, v27, 0);
    v28 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v119);
    v12 = (struct DXGPROCESS *)v28;
    if ( v28 < 0 )
    {
      v33 = WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
      *(_QWORD *)(v33 + 24) = *v20;
      *(_QWORD *)(v33 + 32) = v12;
      WdLogEvent5_WdWarning(v33);
LABEL_99:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
      if ( v117[16] )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v117);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v116);
      v18 = (struct DXGADAPTER *)v113;
      goto LABEL_15;
    }
    v34 = operator new(0x48uLL, 0x4B677844u, PagedPool);
    if ( v34 )
      *v34 = 0LL;
    else
      v34 = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 134) + 8LL * a2->PartitionId) = v34;
    if ( !*(_QWORD *)(*((_QWORD *)this + 134) + 8LL * a2->PartitionId) )
    {
      LODWORD(v12) = -1073741801;
      goto LABEL_99;
    }
    ++*((_DWORD *)this + 267);
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
    CurrentIrql = KeGetCurrentIrql();
    v40 = 0LL;
    if ( CurrentIrql >= 2u )
      goto LABEL_34;
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v42 = WdLogNewEntry5_WdAssertion(v36);
      *(_QWORD *)(v42 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v42);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v36, v35, v37, v38);
    if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
    {
      ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
      if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
      {
        v40 = 0LL;
        goto LABEL_34;
      }
      v40 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
    }
    else
    {
      v40 = 0LL;
    }
    if ( v40 )
    {
      v45 = *(_DWORD *)(v40 + 136);
LABEL_35:
      v12 = (struct DXGPROCESS *)(*(int (__fastcall **)(struct _LIST_ENTRY *, struct _DXGKARG_CREATEVIRTUALGPU *))&v113[117]->ActiveEntries)(
                                   v113[117]->SystemResourcesList.Blink,
                                   a2);
      if ( CurrentIrql != KeGetCurrentIrql() )
      {
        v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v47, v46, v48);
        v49[3] = 275LL;
        v49[4] = 16LL;
        v49[5] = this;
        v49[6] = CurrentIrql;
        v50 = KeGetCurrentIrql();
        v49[7] = v50;
        WdLogEvent5_WdCriticalError(v49);
      }
      if ( v40 && *(_DWORD *)(v40 + 136) != v45 )
      {
        v51 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v47, v46, v48);
        v51[3] = 275LL;
        v51[4] = 25LL;
        v52 = *(int *)(v40 + 136);
        v51[7] = 0LL;
        v51[5] = v52;
        v51[6] = v45;
        WdLogEvent5_WdCriticalError(v51);
      }
      if ( (_DWORD)v12 != -1073741823 && (_DWORD)v12 != -1073741811 && (_DWORD)v12 )
      {
        v53 = WdLogNewEntry5_WdError(v47);
        *(_QWORD *)(v53 + 24) = v12;
        WdLogEvent5_WdError(v53);
      }
      DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
      if ( (int)v12 < 0 )
      {
LABEL_45:
        v58 = WdLogNewEntry5_WdWarning(v55, v54, v56, v57);
LABEL_93:
        *(_QWORD *)(v58 + 24) = v12;
        WdLogEvent5_WdWarning(v58);
        goto LABEL_94;
      }
      v59 = *(_QWORD *)(*((_QWORD *)this + 134) + 8LL * a2->PartitionId);
      *(_BYTE *)(v59 + 64) = 1;
      *(_DWORD *)v59 = a2->PartitionId;
      *(CLSID *)(v59 + 12) = a2->UserModeVirtualDeviceProvider;
      RtlCopyLuid((PLUID)(v59 + 4), &a2->VirtualGpuLuid);
      *(_QWORD *)(v59 + 48) = *v20;
      NumMemorySegments = a2->NumMemorySegments;
      if ( (unsigned int)NumMemorySegments > 0x20 )
      {
        v65 = WdLogNewEntry5_WdWarning(v61, v60, v62, v63);
        *(_QWORD *)(v65 + 24) = a2->NumMemorySegments;
        *(_QWORD *)(v65 + 32) = 1077LL;
        WdLogEvent5_WdWarning(v65);
        LODWORD(v12) = -1073741811;
LABEL_94:
        v111.PartitionId = a2->PartitionId;
        ADAPTER_RENDER::DdiDestroyVirtualGpu(this, &v111);
        goto LABEL_99;
      }
      if ( (_DWORD)NumMemorySegments )
      {
        v66 = 8 * NumMemorySegments;
        if ( !is_mul_ok(a2->NumMemorySegments, 8uLL) )
          v66 = -1LL;
        v67 = operator new[](v66, 0x4B677844u, PagedPool);
        *(_QWORD *)(v59 + 56) = v67;
        v68 = v67;
        if ( !v67 )
        {
          v69 = WdLogNewEntry5_WdLowResource(0LL);
          *(_QWORD *)(v69 + 24) = 1086LL;
          WdLogEvent5_WdLowResource(v69);
          LODWORD(v12) = -1073741801;
          goto LABEL_94;
        }
        v70 = a2->NumMemorySegments;
        *(_DWORD *)(v59 + 40) = v70;
        memset(v68, 0, 8LL * v70);
      }
      for ( i = 0LL; (unsigned int)i < a2->NumMemorySegments; i = (unsigned int)(i + 1) )
      {
        Size = 0LL;
        v122 = 0LL;
        v123 = 0LL;
        memset(v120, 0, 0x198uLL);
        v72 = *v20;
        LODWORD(v120[0]) |= 0x200u;
        LODWORD(v120[2]) = 5;
        HIDWORD(v120[0]) = *((_DWORD *)v72 + 77);
        v120[3] = &Size;
        Size = a2->SegmentInfo[i].Size;
        LODWORD(v122) = a2->SegmentInfo[i].Alignment;
        HIDWORD(v122) = a2->SegmentInfo[i].DriverSegmentId;
        LODWORD(v123) = a2->SegmentInfo[i].PrivateDriverData;
        StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                               v72,
                               (struct _D3DKM_CREATESTANDARDALLOCATION *)v120,
                               0LL);
        v12 = (struct DXGPROCESS *)StandardAllocation;
        if ( StandardAllocation < 0 )
          goto LABEL_45;
        v74 = ProcessDxgProcess;
        v114 = (char *)ProcessDxgProcess + 184;
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)ProcessDxgProcess + 184));
        v75 = (HIDWORD(v120[6]) >> 6) & 0xFFFFFF;
        if ( v75 < *((_DWORD *)v74 + 56)
          && (v76 = *((_QWORD *)v74 + 26),
              v77 = *(_DWORD *)(v76 + 16LL * v75 + 8),
              ((HIDWORD(v120[6]) >> 26) & 0x30) == (*(_BYTE *)(v76 + 16LL * v75 + 8) & 0x30))
          && (v77 & 0x1000) == 0
          && (v77 & 0xF) != 0
          && (*(_BYTE *)(v76 + 16LL * v75 + 8) & 0xF) == 5 )
        {
          v78 = *(_QWORD *)(v76 + 16LL * v75);
        }
        else
        {
          v78 = 0LL;
        }
        ExReleasePushLockSharedEx(v114, 0LL);
        KeLeaveCriticalRegion();
        *(_QWORD *)(*(_QWORD *)(v59 + 56) + 8 * i) = v78;
        v79 = VIDMM_EXPORT::VidMmPinAllocation(
                *(VIDMM_EXPORT **)(*((_QWORD *)*v20 + 2) + 400LL),
                *((struct VIDMM_GLOBAL **)this + 51),
                *(struct _VIDMM_MULTI_ALLOC **)(*(_QWORD *)(*(_QWORD *)(v59 + 56) + 8 * i) + 24LL),
                0LL,
                0LL);
        v81 = v79;
        if ( v79 < 0 )
        {
          v82 = WdLogNewEntry5_WdError(v80);
          *(_QWORD *)(v82 + 24) = v81;
          WdLogEvent5_WdError(v82);
          break;
        }
      }
      memset(v124, 0, 0x408uLL);
      v83 = 0LL;
      LODWORD(v124[0]) = a2->PartitionId;
      HIDWORD(v124[0]) = a2->NumMemorySegments;
      if ( HIDWORD(v124[0]) )
      {
        do
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v20 + 2)
                                                                                           + 400LL)
                                                                               + 8LL)
                                                                   + 216LL))(
            *((_QWORD *)this + 51),
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v59 + 56) + 8 * v83) + 48LL) + 8LL),
            &v110,
            &v115);
          v84 = 4LL * (unsigned int)v83;
          v85 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v59 + 56) + 8 * v83) + 48LL) + 16LL);
          LODWORD(v124[v84 + 6]) = v110;
          v124[v84 + 7] = v115;
          v124[v84 + 5] = v85;
          v86 = 6 * (v83 + 3);
          v83 = (unsigned int)(v83 + 1);
          v124[v84 + 8] = *((_QWORD *)&a2->PartitionId + v86);
        }
        while ( (unsigned int)v83 < a2->NumMemorySegments );
      }
      DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
      v91 = KeGetCurrentIrql();
      v92 = 0LL;
      if ( v91 >= 2u )
        goto LABEL_81;
      v93 = KeGetCurrentThread();
      if ( !v93 )
      {
        v94 = WdLogNewEntry5_WdAssertion(v88);
        *(_QWORD *)(v94 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v94);
      }
      v95 = PsGetCurrentProcessSessionId(v88, v87, v89, v90);
      if ( v95 && (unsigned int)PsGetThreadSessionId(v93) == v95 )
      {
        v96 = PsGetThreadWin32Thread(v93);
        if ( !v96 || !*(_QWORD *)v96 )
        {
          v92 = 0LL;
          goto LABEL_81;
        }
        v92 = *(_QWORD *)(*(_QWORD *)v96 + 80LL);
      }
      else
      {
        v92 = 0LL;
      }
      if ( v92 )
      {
        v97 = *(_DWORD *)(v92 + 136);
        goto LABEL_82;
      }
LABEL_81:
      v97 = 0;
LABEL_82:
      v12 = (struct DXGPROCESS *)((int (__fastcall *)(struct _LIST_ENTRY *, _QWORD *))v113[117]->Reserved2)(
                                   v113[117]->SystemResourcesList.Blink,
                                   v124);
      if ( v91 != KeGetCurrentIrql() )
      {
        v101 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v99, v98, v100);
        v101[3] = 275LL;
        v101[4] = 16LL;
        v101[5] = this;
        v101[6] = v91;
        v102 = KeGetCurrentIrql();
        v101[7] = v102;
        WdLogEvent5_WdCriticalError(v101);
      }
      if ( v92 && *(_DWORD *)(v92 + 136) != v97 )
      {
        v103 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v99, v98, v100);
        v103[3] = 275LL;
        v103[4] = 25LL;
        v104 = *(int *)(v92 + 136);
        v103[7] = 0LL;
        v103[5] = v104;
        v103[6] = v97;
        WdLogEvent5_WdCriticalError(v103);
      }
      if ( (_DWORD)v12 != -1073741823 && (_DWORD)v12 != -1073741811 && (_DWORD)v12 )
      {
        v105 = WdLogNewEntry5_WdError(v99);
        *(_QWORD *)(v105 + 24) = v12;
        WdLogEvent5_WdError(v105);
      }
      DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
      if ( (int)v12 >= 0 )
      {
        LODWORD(v12) = 0;
        goto LABEL_99;
      }
      v58 = WdLogNewEntry5_WdWarning(v107, v106, v108, v109);
      *(_QWORD *)(v58 + 32) = 1170LL;
      goto LABEL_93;
    }
LABEL_34:
    v45 = 0;
    goto LABEL_35;
  }
  return result;
}

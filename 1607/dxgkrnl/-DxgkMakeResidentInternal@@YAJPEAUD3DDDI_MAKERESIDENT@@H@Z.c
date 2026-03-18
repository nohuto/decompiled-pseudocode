/*
 * XREFs of ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C00A5B80
 * Callers:
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z @ 0x1C008DAA0 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z.c)
 *     DxgkMakeResident @ 0x1C00D32C0 (DxgkMakeResident.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0009524 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000A100 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000C6D8 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000C708 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C000D934 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C000DA08 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0011450 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     Template_ppqq @ 0x1C00257F8 (Template_ppqq.c)
 *     Template_qxx @ 0x1C0025884 (Template_qxx.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00747A8 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B4048 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C0144B04 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C0144B3C (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0145540 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0151998 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DxgkMakeResidentInternal(struct D3DDDI_MAKERESIDENT *a1, int a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  struct _KTHREAD **ProcessDxgProcess; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  int v15; // edi
  struct D3DDDI_MAKERESIDENT *v16; // rax
  struct D3DDDI_MAKERESIDENT *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  struct DXGPAGINGQUEUE *v25; // r13
  __int64 v26; // rax
  unsigned __int64 NumAllocations; // rsi
  char *v28; // r12
  __int64 v29; // rax
  bool v30; // cf
  unsigned __int64 v31; // rax
  char *v32; // rax
  unsigned __int64 v33; // rsi
  _BYTE *PoolWithTag; // rcx
  unsigned int *AllocationList; // r15
  __int64 v36; // r14
  __int64 v37; // rcx
  int v38; // ebx
  __int64 v39; // rsi
  void *v40; // rcx
  __int64 v41; // r9
  unsigned __int8 v42; // bl
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  _QWORD *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rdx
  struct _KTHREAD **v53; // rbx
  unsigned int *v54; // rax
  unsigned int v55; // r8d
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  ULONG_PTR Count; // rbx
  __int64 v62; // rax
  ULONG_PTR *v63; // rax
  struct _EX_RUNDOWN_REF *v64; // rcx
  DXGGLOBAL *v65; // rax
  __int64 v66; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v68; // rax
  int CurrentProcessSessionId; // ebx
  bool v70; // zf
  __int64 v71; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  struct _KTHREAD *v75; // rsi
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  int v79; // ebx
  __int64 v80; // r8
  __int64 v81; // rbx
  __int64 *v82; // rax
  __int64 v83; // rbx
  _QWORD *v84; // rax
  __int64 v85; // rcx
  __int64 v86; // r8
  struct DXGPAGINGQUEUE *v87; // rbx
  __int64 v88; // r14
  __int64 v89; // rax
  int v90; // ebx
  struct D3DDDI_MAKERESIDENT *v91; // rsi
  struct D3DDDI_MAKERESIDENT_FLAGS::$2E662C15F8525AEEECC7862586193CD2::$C41099F84E8AA7AB57942996F31C279B Value; // edx
  __int64 v93; // rax
  UINT64 *p_PagingFenceValue; // r14
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  struct D3DDDI_MAKERESIDENT *v98; // r8
  _QWORD *v99; // rdx
  _QWORD *p_NumBytesToTrim; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // r8
  struct _EX_RUNDOWN_REF *v106; // [rsp+48h] [rbp-400h] BYREF
  char v107[8]; // [rsp+50h] [rbp-3F8h] BYREF
  struct _KTHREAD **v108; // [rsp+58h] [rbp-3F0h]
  struct D3DDDI_MAKERESIDENT *v109; // [rsp+60h] [rbp-3E8h]
  _BYTE *v110; // [rsp+68h] [rbp-3E0h]
  struct D3DDDI_MAKERESIDENT *v111; // [rsp+70h] [rbp-3D8h]
  __int64 v112; // [rsp+78h] [rbp-3D0h] BYREF
  int v113; // [rsp+80h] [rbp-3C8h]
  struct DXGPAGINGQUEUE *v114; // [rsp+88h] [rbp-3C0h] BYREF
  ULONG_PTR *v115; // [rsp+90h] [rbp-3B8h]
  __int64 v116; // [rsp+98h] [rbp-3B0h]
  unsigned int v117; // [rsp+A0h] [rbp-3A8h]
  unsigned int *v118; // [rsp+A8h] [rbp-3A0h]
  struct D3DDDI_MAKERESIDENT *v119; // [rsp+B0h] [rbp-398h]
  char v120[8]; // [rsp+C0h] [rbp-388h] BYREF
  _BYTE v121[16]; // [rsp+C8h] [rbp-380h] BYREF
  DXGADAPTER *v122; // [rsp+D8h] [rbp-370h]
  char v123; // [rsp+E0h] [rbp-368h]
  _BYTE v124[16]; // [rsp+E8h] [rbp-360h] BYREF
  __int64 v125; // [rsp+F8h] [rbp-350h]
  __int64 v126; // [rsp+108h] [rbp-340h]
  char v127; // [rsp+110h] [rbp-338h]
  _BYTE v128[24]; // [rsp+120h] [rbp-328h] BYREF
  _OWORD v129[3]; // [rsp+138h] [rbp-310h] BYREF
  PVOID P; // [rsp+170h] [rbp-2D8h] BYREF
  _BYTE v131[320]; // [rsp+178h] [rbp-2D0h] BYREF
  int v132; // [rsp+2B8h] [rbp-190h]
  char *v133; // [rsp+2C0h] [rbp-188h] BYREF
  char v134; // [rsp+2C8h] [rbp-180h] BYREF
  int v135; // [rsp+408h] [rbp-40h]

  v111 = a1;
  v119 = a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2115);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( !ProcessDxgProcess )
  {
    v11 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
LABEL_6:
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      goto LABEL_8;
    return 3221225485LL;
  }
  v15 = 0;
  v109 = 0LL;
  if ( a2 )
  {
    v8 = MmUserProbeAddress;
    v16 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v16 = (struct D3DDDI_MAKERESIDENT *)MmUserProbeAddress;
    v129[0] = *(_OWORD *)&v16->hPagingQueue;
    v129[1] = *(_OWORD *)&v16->PriorityList;
    v129[2] = *(_OWORD *)&v16->PagingFenceValue;
    v17 = (struct D3DDDI_MAKERESIDENT *)v129;
    v109 = (struct D3DDDI_MAKERESIDENT *)v129;
  }
  else
  {
    v17 = a1;
    v109 = a1;
  }
  if ( !v17->NumAllocations )
  {
    v18 = WdLogNewEntry5_WdWarning(v8, v7, ProcessDxgProcess, v10);
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v18);
    goto LABEL_6;
  }
  if ( !v17->AllocationList )
  {
    v19 = WdLogNewEntry5_WdWarning(v8, v7, ProcessDxgProcess, v10);
    *(_QWORD *)(v19 + 24) = 457LL;
    WdLogEvent5_WdWarning(v19);
    goto LABEL_6;
  }
  if ( (v17->Flags.Value & 0xFFFFFFFC) != 0 )
  {
    v20 = WdLogNewEntry5_WdWarning(v8, v7, ProcessDxgProcess, v10);
    *(_QWORD *)(v20 + 24) = 464LL;
    WdLogEvent5_WdWarning(v20);
    goto LABEL_6;
  }
  v114 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE(
    (DXGPAGINGQUEUEBYHANDLE *)v107,
    v17->hPagingQueue,
    ProcessDxgProcess,
    &v114);
  v25 = v114;
  if ( !v114 )
  {
    v26 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
    *(_QWORD *)(v26 + 24) = v17->hPagingQueue;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v26);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v107);
    goto LABEL_6;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,40>::PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v133);
  P = 0LL;
  v132 = 0;
  NumAllocations = v17->NumAllocations;
  if ( (unsigned int)NumAllocations <= 0x28 )
  {
    v28 = &v134;
    goto LABEL_34;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / NumAllocations < 8 )
  {
    v28 = 0LL;
    goto LABEL_36;
  }
  v29 = 8LL * (unsigned int)NumAllocations;
  if ( !is_mul_ok((unsigned int)NumAllocations, 8uLL) )
    v29 = -1LL;
  v30 = __CFADD__(v29, 8LL);
  v31 = v29 + 8;
  if ( v30 )
    v31 = -1LL;
  v32 = (char *)operator new[](v31, 0x4B677844u, PagedPool);
  if ( v32 )
  {
    *(_QWORD *)v32 = NumAllocations;
    v28 = v32 + 8;
    `vector constructor iterator'(
      v32 + 8,
      8LL,
      NumAllocations,
      (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
LABEL_34:
    v133 = v28;
    goto LABEL_35;
  }
  v28 = 0LL;
  v133 = 0LL;
LABEL_35:
  v135 = NumAllocations;
LABEL_36:
  v33 = v17->NumAllocations;
  if ( (unsigned int)v33 <= 0x28 )
  {
    PoolWithTag = v131;
    P = v131;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v33 < 8 )
    {
      PoolWithTag = 0LL;
LABEL_43:
      v110 = PoolWithTag;
      goto LABEL_44;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v33, 0x4B677844u);
    P = PoolWithTag;
  }
  v110 = PoolWithTag;
  v132 = v33;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8 * v33);
    PoolWithTag = P;
    goto LABEL_43;
  }
LABEL_44:
  if ( !v28 || !PoolWithTag )
  {
    v103 = WdLogNewEntry5_WdLowResource(PoolWithTag);
    *(_QWORD *)(v103 + 24) = 499LL;
    WdLogEvent5_WdLowResource(v103);
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&P);
    PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v133);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v107);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v104, &EventProfilerExit, v105, 2115);
    return 3221225495LL;
  }
  AllocationList = (unsigned int *)v17->AllocationList;
  v118 = &AllocationList[v17->NumAllocations];
  v115 = (ULONG_PTR *)PoolWithTag;
  v36 = *((_QWORD *)v25 + 2);
  v116 = v36;
  v112 = v36;
  v37 = *(_QWORD *)(*(_QWORD *)(v36 + 16) + 16LL);
  if ( *(int *)(v37 + 1792) >= 0x2000 || *(_BYTE *)(v37 + 2076) )
    v38 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 191);
  else
    v38 = 0;
  v113 = v38;
  v39 = *(_QWORD *)(v36 + 16);
  if ( *(_DWORD *)(v36 + 304) == 2 )
  {
    if ( KeReadStateEvent((PRKEVENT)(v39 + 80)) )
      goto LABEL_56;
    v40 = (void *)(v39 + 80);
  }
  else
  {
    if ( KeReadStateEvent((PRKEVENT)(v39 + 56)) )
      goto LABEL_56;
    v40 = (void *)(v39 + 56);
  }
  KeWaitForSingleObject(v40, Executive, 0, 0, 0LL);
LABEL_56:
  KeEnterCriticalRegion();
  if ( v38 )
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v36 + 88, 0LL) )
    {
      KeLeaveCriticalRegion();
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v36 + 16) + 16LL) + 96LL));
      v42 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v36 + 16) + 16LL));
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v36 + 88));
LABEL_64:
      if ( v42 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v36 + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v36 + 16) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v36 + 80), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v36 + 16) + 16LL) + 96LL));
    v42 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v36 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v43, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v36 + 80), 1u);
    goto LABEL_64;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v120, v36, 0, v41, 0);
  if ( v123 )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v45, v44, v46);
    v47[3] = 275LL;
    v47[4] = 4LL;
    v47[5] = v121;
    v47[6] = 0LL;
    v47[7] = 0LL;
    WdLogEvent5_WdCriticalError(v47);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v122 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v122 + 2) )
      KeWaitForSingleObject((char *)v122 + 48, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v122);
  }
  v123 = 1;
  v48 = *(unsigned int *)(v126 + 376);
  if ( (_DWORD)v48 != 1 )
    goto LABEL_77;
  if ( v127 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v124);
    v48 = *(unsigned int *)(v125 + 176);
    if ( (_DWORD)v48 != 1 )
    {
      COREACCESS::Release((COREACCESS *)v124);
LABEL_77:
      COREACCESS::Release((COREACCESS *)v121);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v120);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v112);
      PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&P);
      PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v133);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v107);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v49, &EventProfilerExit, v50, 2115);
      return 3221226166LL;
    }
  }
  v51 = PsGetCurrentProcess(v48);
  v53 = (struct _KTHREAD **)PsGetProcessDxgProcess(v51, v52);
  v108 = v53;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v128, v53);
  while ( 1 )
  {
    if ( AllocationList == v118 )
    {
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v128);
      v87 = v114;
      v88 = *((_QWORD *)v114 + 2);
      if ( *(_BYTE *)(v88 + 2874)
        || *(_DWORD *)(v88 + 304) == 2
        && (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v88 + 16) + 16LL)) >= 2000 )
      {
        v91 = v109;
        Value = (struct D3DDDI_MAKERESIDENT_FLAGS::$2E662C15F8525AEEECC7862586193CD2::$C41099F84E8AA7AB57942996F31C279B)v109->Flags.Value;
        if ( (*(_BYTE *)&Value & 1) != 0 )
          v15 = 1;
        if ( (*(_BYTE *)&Value & 2) != 0 )
          v15 |= 2u;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          Template_ppqq(
            *(_QWORD *)(*((_QWORD *)v87 + 5) + 32LL),
            &EventMakeResidentBegin,
            v86,
            v87,
            *(_QWORD *)(*((_QWORD *)v87 + 5) + 32LL),
            v109->NumAllocations,
            v109->Flags.Value);
        v93 = *(_QWORD *)(v88 + 16);
        p_PagingFenceValue = &v91->PagingFenceValue;
        v90 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, _QWORD, int, UINT64 *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(v93 + 400) + 8LL)
                                                                                                  + 768LL))(
                *(_QWORD *)(v93 + 408),
                *((_QWORD *)v87 + 4),
                v110,
                v91->NumAllocations,
                v15,
                &v91->PagingFenceValue,
                &v91->NumBytesToTrim);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          Template_qxx(v96, v95, v97, v90, v91->NumBytesToTrim, *p_PagingFenceValue);
        if ( v90 >= 0 && a2 )
        {
          v98 = v111;
          v99 = &v111->PagingFenceValue;
          if ( (unsigned __int64)&v111->PagingFenceValue >= MmUserProbeAddress )
            v99 = (_QWORD *)MmUserProbeAddress;
          *v99 = *p_PagingFenceValue;
          goto LABEL_142;
        }
      }
      else
      {
        v89 = WdLogNewEntry5_WdError(v85);
        *(_QWORD *)(v89 + 24) = v87;
        WdLogEvent5_WdError(v89);
        v90 = -1073741637;
        v91 = v109;
      }
      v98 = v111;
LABEL_142:
      if ( a2 )
      {
        p_NumBytesToTrim = &v98->NumBytesToTrim;
        if ( (unsigned __int64)&v98->NumBytesToTrim >= MmUserProbeAddress )
          p_NumBytesToTrim = (_QWORD *)MmUserProbeAddress;
        *p_NumBytesToTrim = v91->NumBytesToTrim;
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v120);
      if ( v113 )
        ExReleasePushLockSharedEx(v112 + 88, 0LL);
      else
        ExReleaseResourceLite(*(PERESOURCE *)(v112 + 80));
      KeLeaveCriticalRegion();
      if ( P != v131 && P )
        ExFreePoolWithTag(P, 0);
      PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v133);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v107);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v101, &EventProfilerExit, v102, 2115);
      return (unsigned int)v90;
    }
    if ( a2 )
    {
      v54 = AllocationList;
      if ( (unsigned __int64)AllocationList >= MmUserProbeAddress )
        v54 = (unsigned int *)MmUserProbeAddress;
      v55 = *v54;
      v117 = *v54;
    }
    else
    {
      v55 = *AllocationList;
    }
    DXGPROCESS::GetAllocationUnsafe((__int64)v53, (DXGALLOCATIONREFERENCE *)&v106, v55);
    if ( !v106 )
    {
      v60 = WdLogNewEntry5_WdError(v57);
      *(_QWORD *)(v60 + 24) = v106;
      goto LABEL_91;
    }
    if ( v106[1].Count != v36 )
      break;
    Count = v106[3].Count;
    if ( !Count )
    {
      v62 = WdLogNewEntry5_WdWarning(v57, v56, v58, v59);
      *(_QWORD *)(v62 + 24) = v106;
      WdLogEvent5_WdWarning(v62);
    }
    DXGALLOCATIONREFERENCE::MoveAssign(v28, &v106);
    v63 = v115;
    *v115 = Count;
    v28 += 8;
    v115 = v63 + 1;
    ++AllocationList;
    v64 = v106;
    if ( v106 )
      ExReleaseRundownProtection(v106 + 11);
    v65 = DXGGLOBAL::m_pGlobal;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v66 = WdLogNewEntry5_WdAssertion(v64);
      *(_QWORD *)(v66 + 24) = 982LL;
      WdLogEvent5_WdAssertion(v66);
      v65 = DXGGLOBAL::m_pGlobal;
    }
    v53 = v108;
    if ( *((_DWORD *)v65 + 191) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v68 = WdLogNewEntry5_WdAssertion(v64);
        *(_QWORD *)(v68 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v68);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      if ( CurrentProcessSessionId )
      {
        v70 = (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId;
        v53 = v108;
        if ( v70 )
        {
          v71 = 0LL;
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v71 = *ThreadWin32Thread;
          v74 = v71 ? *(_QWORD *)(v71 + 80) : 0LL;
          v53 = v108;
          if ( v74 )
          {
            v75 = KeGetCurrentThread();
            if ( !v75 )
            {
              v76 = WdLogNewEntry5_WdAssertion(v73);
              *(_QWORD *)(v76 + 24) = 94LL;
              WdLogEvent5_WdAssertion(v76);
            }
            v79 = PsGetCurrentProcessSessionId();
            if ( !v79 || (unsigned int)PsGetThreadSessionId(v75) != v79 )
              goto LABEL_121;
            v81 = 0LL;
            v82 = (__int64 *)PsGetThreadWin32Thread(v75);
            if ( v82 )
              v81 = *v82;
            if ( v81 )
              v83 = *(_QWORD *)(v81 + 80);
            else
LABEL_121:
              v83 = 0LL;
            if ( *(_DWORD *)(v83 + 136) )
            {
              v84 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v78, v77, v80);
              v84[3] = 275LL;
              v84[4] = 25LL;
              v84[5] = *(int *)(v83 + 136);
              v84[6] = 0LL;
              v84[7] = 0LL;
              WdLogEvent5_WdCriticalError(v84);
            }
            goto LABEL_82;
          }
        }
      }
      else
      {
LABEL_82:
        v53 = v108;
      }
    }
  }
  v60 = WdLogNewEntry5_WdError(v57);
  *(_QWORD *)(v60 + 24) = v36;
  *(struct _EX_RUNDOWN_REF *)(v60 + 32) = v106[1];
LABEL_91:
  WdLogEvent5_WdError(v60);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v106);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v128);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v120);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v112);
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&P);
  PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v133);
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v107);
  if ( (qword_1C0056840 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
    return 3221225485LL;
LABEL_8:
  Template_q(v12, &EventProfilerExit, v13, 2115);
  return 3221225485LL;
}

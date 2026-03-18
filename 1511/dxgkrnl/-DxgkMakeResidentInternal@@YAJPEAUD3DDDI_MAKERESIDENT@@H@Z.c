/*
 * XREFs of ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C00B4110
 * Callers:
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z @ 0x1C00B4060 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z.c)
 *     DxgkMakeResident @ 0x1C00B4100 (DxgkMakeResident.c)
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0001650 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C0001750 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001794 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0003358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?RemoveReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0004288 (-RemoveReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C000B17C (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C000D158 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C000D210 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0010E38 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     Template_ppqq @ 0x1C001E9F0 (Template_ppqq.c)
 *     Template_qxx @ 0x1C001EA7C (Template_qxx.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0079FD0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C009D388 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C0124A90 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C0124ACC (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C012C2B8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkMakeResidentInternal(struct D3DDDI_MAKERESIDENT *a1, int a2, __int64 a3)
{
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGPROCESS *v11; // r8
  int v12; // edi
  struct D3DDDI_MAKERESIDENT *v13; // rax
  struct D3DDDI_MAKERESIDENT *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct DXGPAGINGQUEUE *v24; // r13
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // r8
  unsigned __int64 NumAllocations; // rsi
  struct _EX_RUNDOWN_REF **v29; // r12
  __int64 v30; // rax
  bool v31; // cf
  SIZE_T v32; // rax
  char *v33; // rax
  __int64 v34; // r9
  unsigned __int64 v35; // rsi
  _BYTE *PoolWithTag; // rcx
  unsigned int *AllocationList; // r15
  __int64 v38; // r14
  __int64 v39; // rcx
  int v40; // ebx
  __int64 v41; // rsi
  void *v42; // rcx
  __int64 v43; // r9
  unsigned __int8 v44; // bl
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  _QWORD *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  struct DXGPROCESS *v59; // r13
  __int64 v60; // rax
  unsigned int *v61; // rax
  unsigned int v62; // r8d
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  struct _EX_RUNDOWN_REF *v67; // rbx
  struct _EX_RUNDOWN_REF *v68; // rax
  int v69; // r9d
  ULONG_PTR Count; // rsi
  __int64 v71; // rax
  struct _EX_RUNDOWN_REF *v72; // rcx
  _QWORD *v73; // rax
  ULONG_PTR *v74; // rax
  struct DXGGLOBAL *v75; // rax
  __int64 v76; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v78; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v80; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rax
  struct _KTHREAD *v87; // rsi
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  int v91; // ebx
  __int64 v92; // r8
  __int64 v93; // rbx
  __int64 *v94; // rax
  __int64 v95; // rbx
  _QWORD *v96; // rax
  __int64 v97; // rcx
  __int64 v98; // r8
  struct DXGPAGINGQUEUE *v99; // rbx
  __int64 v100; // r14
  __int64 v101; // rax
  int v102; // ebx
  struct D3DDDI_MAKERESIDENT *v103; // rsi
  int v104; // r8d
  struct D3DDDI_MAKERESIDENT_FLAGS::$2E662C15F8525AEEECC7862586193CD2::$C41099F84E8AA7AB57942996F31C279B Value; // edx
  __int64 v106; // rax
  UINT64 *p_PagingFenceValue; // r14
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  struct D3DDDI_MAKERESIDENT *v111; // r9
  _QWORD *v112; // rdx
  _QWORD *p_NumBytesToTrim; // rdx
  __int64 v114; // r8
  DXGPAGINGQUEUE *v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // rax
  __int64 v120; // rax
  struct _EX_RUNDOWN_REF *v121; // [rsp+40h] [rbp-3E8h] BYREF
  int v122; // [rsp+48h] [rbp-3E0h]
  DXGPAGINGQUEUE *v123; // [rsp+50h] [rbp-3D8h] BYREF
  struct D3DDDI_MAKERESIDENT *v124; // [rsp+58h] [rbp-3D0h]
  struct D3DDDI_MAKERESIDENT *v125; // [rsp+60h] [rbp-3C8h]
  __int64 v126; // [rsp+68h] [rbp-3C0h] BYREF
  int v127; // [rsp+70h] [rbp-3B8h]
  _BYTE *v128; // [rsp+78h] [rbp-3B0h]
  struct DXGPAGINGQUEUE *v129; // [rsp+80h] [rbp-3A8h] BYREF
  ULONG_PTR *v130; // [rsp+88h] [rbp-3A0h]
  __int64 v131; // [rsp+90h] [rbp-398h]
  char v132[8]; // [rsp+A0h] [rbp-388h] BYREF
  char v133[8]; // [rsp+A8h] [rbp-380h] BYREF
  DXGADAPTER *v134; // [rsp+B0h] [rbp-378h]
  char v135; // [rsp+B8h] [rbp-370h]
  char v136[8]; // [rsp+C0h] [rbp-368h] BYREF
  __int64 v137; // [rsp+C8h] [rbp-360h]
  __int64 v138; // [rsp+D8h] [rbp-350h]
  char v139; // [rsp+E0h] [rbp-348h]
  struct D3DDDI_MAKERESIDENT *v140; // [rsp+F0h] [rbp-338h]
  unsigned int v141; // [rsp+F8h] [rbp-330h]
  unsigned int *v142; // [rsp+100h] [rbp-328h]
  _BYTE v143[24]; // [rsp+108h] [rbp-320h] BYREF
  _OWORD v144[3]; // [rsp+120h] [rbp-308h] BYREF
  PVOID P; // [rsp+150h] [rbp-2D8h] BYREF
  _BYTE v146[320]; // [rsp+158h] [rbp-2D0h] BYREF
  int v147; // [rsp+298h] [rbp-190h]
  struct _EX_RUNDOWN_REF **v148; // [rsp+2A0h] [rbp-188h] BYREF
  char v149; // [rsp+2A8h] [rbp-180h] BYREF
  int v150; // [rsp+3E8h] [rbp-40h]

  v125 = a1;
  v140 = a1;
  v122 = 2115;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2115);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v119 = WdLogNewEntry5_WdEvent(v8, v7, v9, v10);
    *(_QWORD *)(v119 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v119);
    goto LABEL_167;
  }
  v11 = *(struct DXGPROCESS **)(ProcessWin32Process + 248);
  if ( !v11 )
  {
LABEL_167:
    v120 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v120 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v120);
    goto LABEL_168;
  }
  v12 = 0;
  v124 = 0LL;
  if ( a2 )
  {
    v8 = MmUserProbeAddress;
    v13 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v13 = (struct D3DDDI_MAKERESIDENT *)MmUserProbeAddress;
    v144[0] = *(_OWORD *)&v13->hPagingQueue;
    v144[1] = *(_OWORD *)&v13->PriorityList;
    v144[2] = *(_OWORD *)&v13->PagingFenceValue;
    v14 = (struct D3DDDI_MAKERESIDENT *)v144;
    v124 = (struct D3DDDI_MAKERESIDENT *)v144;
  }
  else
  {
    v14 = a1;
    v124 = a1;
  }
  if ( !v14->NumAllocations )
  {
    v15 = WdLogNewEntry5_WdWarning(v8, v7, v11, v10);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
LABEL_168:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    {
      v69 = 2115;
LABEL_171:
      Template_q(v16, &EventProfilerExit, v17, v69);
    }
    return 3221225485LL;
  }
  if ( !v14->AllocationList )
  {
    v18 = WdLogNewEntry5_WdWarning(v8, v7, v11, v10);
    *(_QWORD *)(v18 + 24) = 458LL;
    WdLogEvent5_WdWarning(v18);
    goto LABEL_168;
  }
  if ( (v14->Flags.Value & 0xFFFFFFFC) != 0 )
  {
    v19 = WdLogNewEntry5_WdWarning(v8, v7, v11, v10);
    *(_QWORD *)(v19 + 24) = 465LL;
    WdLogEvent5_WdWarning(v19);
    goto LABEL_168;
  }
  v129 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v123, v14->hPagingQueue, v11, &v129);
  v24 = v129;
  if ( !v129 )
  {
    v25 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    *(_QWORD *)(v25 + 24) = v14->hPagingQueue;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v25);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE(&v123);
    goto LABEL_168;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,40>::PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v148);
  P = 0LL;
  v147 = 0;
  NumAllocations = v14->NumAllocations;
  if ( (unsigned int)NumAllocations <= 0x28 )
  {
    v29 = (struct _EX_RUNDOWN_REF **)&v149;
    goto LABEL_30;
  }
  v26 = 0xFFFFFFFFFFFFFFFFuLL % NumAllocations;
  if ( 0xFFFFFFFFFFFFFFFFuLL / NumAllocations < 8 )
  {
    v29 = 0LL;
    goto LABEL_32;
  }
  v30 = 8LL * (unsigned int)NumAllocations;
  if ( !is_mul_ok((unsigned int)NumAllocations, 8uLL) )
    v30 = -1LL;
  v31 = __CFADD__(v30, 8LL);
  v32 = v30 + 8;
  if ( v31 )
    v32 = -1LL;
  v33 = (char *)operator new[](v32, 0x4B677844u, PagedPool);
  if ( v33 )
  {
    *(_DWORD *)v33 = NumAllocations;
    v29 = (struct _EX_RUNDOWN_REF **)(v33 + 8);
    `vector constructor iterator'(
      v33 + 8,
      8LL,
      NumAllocations,
      (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
LABEL_30:
    v148 = v29;
    goto LABEL_31;
  }
  v29 = 0LL;
  v148 = 0LL;
LABEL_31:
  v150 = NumAllocations;
LABEL_32:
  v34 = 1LL;
  v35 = v14->NumAllocations;
  if ( (unsigned int)v35 <= 0x28 )
  {
    PoolWithTag = v146;
    P = v146;
  }
  else
  {
    v26 = 0xFFFFFFFFFFFFFFFFuLL % v35;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v35 < 8 )
    {
      PoolWithTag = 0LL;
LABEL_39:
      v128 = PoolWithTag;
      goto LABEL_40;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v35, 0x4B677844u);
    P = PoolWithTag;
  }
  v128 = PoolWithTag;
  v147 = v35;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8 * v35);
    PoolWithTag = P;
    goto LABEL_39;
  }
LABEL_40:
  if ( !v29 || !PoolWithTag )
  {
    v116 = WdLogNewEntry5_WdLowResource(PoolWithTag, v26, v27, v34);
    *(_QWORD *)(v116 + 24) = 500LL;
    WdLogEvent5_WdLowResource(v116);
    PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&P);
    PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v148);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE(&v123);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v117, &EventProfilerExit, v118, 2115);
    return 3221225495LL;
  }
  AllocationList = (unsigned int *)v14->AllocationList;
  v142 = &AllocationList[v14->NumAllocations];
  v130 = (ULONG_PTR *)PoolWithTag;
  v38 = *((_QWORD *)v24 + 2);
  v131 = v38;
  v126 = v38;
  v39 = *(_QWORD *)(*(_QWORD *)(v38 + 16) + 16LL);
  if ( *(int *)(v39 + 1656) >= 0x2000 || *(_BYTE *)(v39 + 1940) )
    v40 = *((_DWORD *)DXGGLOBAL::GetGlobal(v39) + 231);
  else
    v40 = 0;
  v127 = v40;
  v41 = *(_QWORD *)(v38 + 16);
  if ( *(_DWORD *)(v38 + 280) == 2 )
  {
    if ( KeReadStateEvent((PRKEVENT)(v41 + 80)) )
      goto LABEL_52;
    v42 = (void *)(v41 + 80);
  }
  else
  {
    if ( KeReadStateEvent((PRKEVENT)(v41 + 56)) )
      goto LABEL_52;
    v42 = (void *)(v41 + 56);
  }
  KeWaitForSingleObject(v42, Executive, 0, 0, 0LL);
LABEL_52:
  KeEnterCriticalRegion();
  if ( v40 )
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v38 + 88, 0LL) )
    {
      KeLeaveCriticalRegion();
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 16LL) + 80LL));
      v44 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v38 + 16) + 16LL));
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v38 + 88));
LABEL_60:
      if ( v44 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v38 + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 16LL) + 80LL, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v38 + 80), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 16LL) + 80LL));
    v44 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v38 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v45, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v38 + 80), 1u);
    goto LABEL_60;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v132, v38, 0, v43, 0);
  if ( v135 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v47, v46, v48);
    v49[3] = 275LL;
    v49[4] = 4LL;
    v49[5] = v133;
    v49[6] = 0LL;
    v49[7] = 0LL;
    WdLogEvent5_WdCriticalError(v49);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v134 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v134 + 32)) )
      KeWaitForSingleObject((char *)v134 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v134);
  }
  v135 = 1;
  if ( *(_DWORD *)(v138 + 352) != 1 )
    goto LABEL_73;
  if ( v139 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v136);
    if ( *(_DWORD *)(v137 + 160) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v136);
LABEL_73:
      COREACCESS::Release((COREACCESS *)v133);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v132);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v126);
      PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&P);
      PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v148);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE(&v123);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v50, &EventProfilerExit, v51, 2115);
      return 3221226166LL;
    }
  }
  v53 = PsGetCurrentProcess();
  v54 = PsGetProcessWin32Process(v53);
  if ( v54 )
  {
    v59 = *(struct DXGPROCESS **)(v54 + 248);
  }
  else
  {
    v60 = WdLogNewEntry5_WdEvent(v56, v55, v57, v58);
    *(_QWORD *)(v60 + 24) = v53;
    WdLogEvent5_WdEvent(v60);
    v59 = 0LL;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v143, v59);
  while ( 1 )
  {
    if ( AllocationList == v142 )
    {
      DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v143);
      v99 = v129;
      v100 = *((_QWORD *)v129 + 2);
      if ( *(_BYTE *)(v100 + 2850)
        || *(_DWORD *)(v100 + 280) == 2
        && (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v100 + 16) + 16LL)) >= 2000 )
      {
        v103 = v124;
        Value = (struct D3DDDI_MAKERESIDENT_FLAGS::$2E662C15F8525AEEECC7862586193CD2::$C41099F84E8AA7AB57942996F31C279B)v124->Flags.Value;
        if ( (*(_BYTE *)&Value & 1) != 0 )
          v12 = 1;
        if ( (*(_BYTE *)&Value & 2) != 0 )
          v12 |= 2u;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
          Template_ppqq(
            *(_QWORD *)(*((_QWORD *)v99 + 5) + 32LL),
            &EventMakeResidentBegin,
            v98,
            v99,
            *(_QWORD *)(*((_QWORD *)v99 + 5) + 32LL),
            v124->NumAllocations,
            v124->Flags.Value);
        v106 = *(_QWORD *)(v100 + 16);
        p_PagingFenceValue = &v103->PagingFenceValue;
        v102 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, _QWORD, int, UINT64 *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(v106 + 424) + 8LL) + 752LL))(
                 *(_QWORD *)(v106 + 432),
                 *((_QWORD *)v99 + 4),
                 v128,
                 v103->NumAllocations,
                 v12,
                 &v103->PagingFenceValue,
                 &v103->NumBytesToTrim);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
          Template_qxx(v109, v108, v110, v102, v103->NumBytesToTrim, *p_PagingFenceValue);
        v104 = a2;
        if ( v102 >= 0 && a2 )
        {
          v111 = v125;
          v112 = &v125->PagingFenceValue;
          if ( (unsigned __int64)&v125->PagingFenceValue >= MmUserProbeAddress )
            v112 = (_QWORD *)MmUserProbeAddress;
          *v112 = *p_PagingFenceValue;
          goto LABEL_146;
        }
      }
      else
      {
        v101 = WdLogNewEntry5_WdError(v97);
        *(_QWORD *)(v101 + 24) = v99;
        WdLogEvent5_WdError(v101);
        v102 = -1073741637;
        v103 = v124;
        v104 = a2;
      }
      v111 = v125;
LABEL_146:
      if ( v104 )
      {
        p_NumBytesToTrim = &v111->NumBytesToTrim;
        if ( (unsigned __int64)&v111->NumBytesToTrim >= MmUserProbeAddress )
          p_NumBytesToTrim = (_QWORD *)MmUserProbeAddress;
        *p_NumBytesToTrim = v103->NumBytesToTrim;
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v132);
      if ( v127 )
        ExReleasePushLockSharedEx(v126 + 88, 0LL);
      else
        ExReleaseResourceLite(*(PERESOURCE *)(v126 + 80));
      KeLeaveCriticalRegion();
      if ( P != v146 && P )
        ExFreePoolWithTag(P, 0);
      PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v148);
      v115 = v123;
      if ( v123 )
        DXGPAGINGQUEUE::RemoveReference(v123);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q((__int64)v115, &EventProfilerExit, v114, v122);
      return (unsigned int)v102;
    }
    if ( a2 )
    {
      v61 = AllocationList;
      if ( (unsigned __int64)AllocationList >= MmUserProbeAddress )
        v61 = (unsigned int *)MmUserProbeAddress;
      v62 = *v61;
      v141 = *v61;
    }
    else
    {
      v62 = *AllocationList;
    }
    DXGPROCESS::GetAllocationUnsafe((__int64)v59, (DXGALLOCATIONREFERENCE *)&v121, v62);
    v67 = v121;
    if ( !v121 )
    {
      v68 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(v64);
      v68[3].Count = (ULONG_PTR)v121;
      goto LABEL_89;
    }
    if ( v121[1].Count != v38 )
      break;
    Count = v121[3].Count;
    if ( !Count )
    {
      v71 = WdLogNewEntry5_WdWarning(v64, v63, v65, v66);
      *(_QWORD *)(v71 + 24) = v121;
      WdLogEvent5_WdWarning(v71);
      v67 = v121;
    }
    v72 = *v29;
    if ( *v29 )
    {
      ExReleaseRundownProtection(v72 + 11);
      v67 = v121;
    }
    *v29 = v67;
    if ( v67 )
    {
      if ( !ExAcquireRundownProtection(v67 + 11) )
      {
        v73 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v72, v63, v65);
        v73[3] = 275LL;
        v73[4] = 25LL;
        v73[5] = v67;
        v73[6] = 0LL;
        v73[7] = 0LL;
        WdLogEvent5_WdCriticalError(v73);
      }
      v67 = v121;
    }
    v74 = v130;
    *v130 = Count;
    ++v29;
    v130 = v74 + 1;
    ++AllocationList;
    if ( v67 )
      ExReleaseRundownProtection(v67 + 11);
    v75 = DXGGLOBAL::m_pGlobal;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v76 = WdLogNewEntry5_WdAssertion(v72);
      *(_QWORD *)(v76 + 24) = 1016LL;
      WdLogEvent5_WdAssertion(v76);
      v75 = DXGGLOBAL::m_pGlobal;
    }
    if ( *((_DWORD *)v75 + 231) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v78 = WdLogNewEntry5_WdAssertion(v72);
        *(_QWORD *)(v78 + 24) = 92LL;
        WdLogEvent5_WdAssertion(v78);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v72, v63, v65, v66);
      if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
      {
        v80 = 0LL;
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v80 = *ThreadWin32Thread;
        if ( v80 )
          v86 = *(_QWORD *)(v80 + 80);
        else
          v86 = 0LL;
        if ( v86 )
        {
          v87 = KeGetCurrentThread();
          if ( !v87 )
          {
            v88 = WdLogNewEntry5_WdAssertion(v83);
            *(_QWORD *)(v88 + 24) = 92LL;
            WdLogEvent5_WdAssertion(v88);
          }
          v91 = PsGetCurrentProcessSessionId(v83, v82, v84, v85);
          if ( !v91 || (unsigned int)PsGetThreadSessionId(v87) != v91 )
            goto LABEL_125;
          v93 = 0LL;
          v94 = (__int64 *)PsGetThreadWin32Thread(v87);
          if ( v94 )
            v93 = *v94;
          if ( v93 )
            v95 = *(_QWORD *)(v93 + 80);
          else
LABEL_125:
            v95 = 0LL;
          if ( *(_DWORD *)(v95 + 136) )
          {
            v96 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v90, v89, v92);
            v96[3] = 275LL;
            v96[4] = 25LL;
            v96[5] = *(int *)(v95 + 136);
            v96[6] = 0LL;
            v96[7] = 0LL;
            WdLogEvent5_WdCriticalError(v96);
          }
        }
      }
    }
  }
  v68 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(v64);
  v68[3].Count = v38;
  v68[4].Count = v121[1].Count;
LABEL_89:
  WdLogEvent5_WdError(v68);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v121);
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v143);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v132);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v126);
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&P);
  PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v148);
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE(&v123);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
  {
    v69 = v122;
    goto LABEL_171;
  }
  return 3221225485LL;
}

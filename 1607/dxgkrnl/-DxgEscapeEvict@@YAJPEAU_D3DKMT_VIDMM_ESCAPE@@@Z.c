/*
 * XREFs of ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0167C5C
 * Callers:
 *     DxgkEscape @ 0x1C00B5410 (DxgkEscape.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009964 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000C9E4 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ??1DXGPROCESSDEVICECREATIONLOCK@@QEAA@XZ @ 0x1C001D2CC (--1DXGPROCESSDEVICECREATIONLOCK@@QEAA@XZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0021384 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C00223F0 (-VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MU.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00A5A60 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00A5A90 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00A75D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0151998 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01519D0 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?EvictAllAllocations@DXGDEVICE@@QEAAJXZ @ 0x1C015DD2C (-EvictAllAllocations@DXGDEVICE@@QEAAJXZ.c)
 */

__int64 __fastcall DxgEscapeEvict(struct _D3DKMT_VIDMM_ESCAPE *a1)
{
  __int64 v2; // rsi
  __int64 CurrentProcess; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 ProcessDxgProcess; // r14
  __int64 v7; // rax
  D3DKMT_HANDLE AllocationHandle; // eax
  _QWORD *v10; // rdi
  __int64 Current; // rax
  __int64 v12; // r9
  DXGDEVICE *v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rax
  D3DKMT_HANDLE v19; // ecx
  __int64 v20; // r9
  int v21; // r8d
  struct _EX_RUNDOWN_REF *v22; // rdx
  struct _EX_RUNDOWN_REF *v23; // rbx
  ULONG_PTR Count; // rdx
  signed __int64 v25; // rax
  signed __int64 v26; // rtt
  D3DKMT_HANDLE v27; // r8d
  __int64 v28; // rax
  __int64 v29; // r9
  int v30; // edx
  __int64 v31; // rdi
  int v32; // eax
  unsigned __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rax
  ULONG_PTR v39; // rcx
  __int64 v40; // rax
  __int64 v41; // r8
  unsigned __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rax
  ULONG_PTR v48; // rcx
  ULONG v49; // ecx
  __int64 v50; // r9
  int v51; // r8d
  struct DXGRESOURCE *v52; // rdx
  struct _EX_RUNDOWN_REF *v53; // rdi
  ULONG_PTR v54; // rdx
  signed __int64 v55; // rax
  signed __int64 v56; // rtt
  struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051 Value; // r8d
  __int64 v58; // rax
  __int64 v59; // r9
  int v60; // edx
  __int64 v61; // r15
  int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // rax
  int DriverVersion; // eax
  struct _EX_RUNDOWN_REF *v66; // rbx
  struct DXGFASTMUTEX *v67; // rdx
  ULONG_PTR j; // rbx
  int v69; // eax
  __int64 v70; // rcx
  __int64 v71; // rax
  DXGPROCESSCOPYPROTECTIONMUTEX *v72; // rcx
  ULONG_PTR i; // rbx
  unsigned __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // r8
  __int64 v77; // rcx
  __int64 v78; // rbx
  __int64 v79; // rax
  ULONG_PTR v80; // rcx
  struct _EX_RUNDOWN_REF *v81; // [rsp+30h] [rbp-D0h] BYREF
  struct _EX_RUNDOWN_REF *v82; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v83[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v84[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v85[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v86[24]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v87[24]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v88[80]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v89[80]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v90[144]; // [rsp+140h] [rbp+40h] BYREF
  struct _EX_RUNDOWN_REF *v91; // [rsp+1E8h] [rbp+E8h] BYREF
  struct _EX_RUNDOWN_REF *v92; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v93; // [rsp+1F8h] [rbp+F8h] BYREF

  LODWORD(v2) = 0;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v4);
  if ( !ProcessDxgProcess )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    LODWORD(v2) = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    return (unsigned int)v2;
  }
  AllocationHandle = a1->Evict.AllocationHandle;
  if ( !AllocationHandle && !a1->SetFault.Value )
  {
    v93 = ProcessDxgProcess;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(ProcessDxgProcess + 136, 0LL);
    *(_QWORD *)(ProcessDxgProcess + 144) = KeGetCurrentThread();
    v10 = *(_QWORD **)(ProcessDxgProcess + 240);
    v83[0] = ProcessDxgProcess + 240;
    while ( 1 )
    {
      v83[1] = v10;
      Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v83);
      v13 = (DXGDEVICE *)Current;
      if ( !Current )
        break;
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v90, Current, 0, v12, 0);
      v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v90);
      v2 = v14;
      if ( v14 < 0
        || ((int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL)) < 2000
          ? (v17 = DXGDEVICE::EvictAllAllocations(v13))
          : (v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v16 + 400) + 8LL)
                                                                             + 872LL))(
                     *(_QWORD *)(v16 + 408),
                     *((_QWORD *)v13 + 70),
                     0LL,
                     0LL)),
            v2 = v17,
            v17 < 0) )
      {
        v18 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v18 + 24) = v2;
        WdLogEvent5_WdError(v18);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v90);
        break;
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v90);
      v10 = (_QWORD *)*v10;
    }
    DXGPROCESSDEVICECREATIONLOCK::~DXGPROCESSDEVICECREATIONLOCK((DXGPROCESSDEVICECREATIONLOCK *)&v93);
    return (unsigned int)v2;
  }
  if ( AllocationHandle )
  {
    v91 = 0LL;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v86,
      (struct DXGPROCESS *)ProcessDxgProcess);
    v19 = (a1->Evict.AllocationHandle >> 6) & 0xFFFFFF;
    if ( v19 < *(_DWORD *)(ProcessDxgProcess + 224)
      && (v20 = *(_QWORD *)(ProcessDxgProcess + 208),
          v21 = *(_DWORD *)(v20 + 16LL * v19 + 8),
          ((a1->Evict.AllocationHandle >> 26) & 0x30) == (*(_BYTE *)(v20 + 16LL * v19 + 8) & 0x30))
      && (v21 & 0x1000) == 0
      && (v21 & 0xF) != 0
      && (*(_BYTE *)(v20 + 16LL * v19 + 8) & 0xF) == 5 )
    {
      v22 = *(struct _EX_RUNDOWN_REF **)(v20 + 16LL * v19);
    }
    else
    {
      v22 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v81, v22);
    DXGALLOCATIONREFERENCE::MoveAssign(&v91, &v81);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v81);
    v23 = v91;
    if ( v91 )
    {
      Count = v91[1].Count;
      if ( Count )
      {
        _m_prefetchw((const void *)(Count + 64));
        v25 = *(_QWORD *)(Count + 64);
        while ( v25 )
        {
          v26 = v25;
          v25 = _InterlockedCompareExchange64((volatile signed __int64 *)(Count + 64), v25 + 1, v25);
          if ( v26 == v25 )
          {
            v27 = a1->Evict.AllocationHandle;
            v28 = (v27 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v28 < *(_DWORD *)(ProcessDxgProcess + 224) )
            {
              v29 = *(_QWORD *)(ProcessDxgProcess + 208);
              v30 = *(_DWORD *)(v29 + 16 * v28 + 8);
              if ( ((v27 >> 26) & 0x30) == (*(_BYTE *)(v29 + 16 * v28 + 8) & 0x30)
                && (v30 & 0x1000) == 0
                && (v30 & 0xF) != 0 )
              {
                *(_DWORD *)(v29 + 16 * (((unsigned __int64)v27 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
              }
            }
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v86);
            v31 = *(_QWORD *)(v23[1].Count + 16);
            if ( v31 )
            {
              COREADAPTERACCESS::COREADAPTERACCESS(
                (COREADAPTERACCESS *)v89,
                *(struct DXGADAPTER *const *)(v31 + 16),
                0LL);
              v32 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v89);
              v2 = v32;
              if ( v32 < 0 )
              {
                v33 = a1->Evict.AllocationHandle;
                DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(ProcessDxgProcess + 184));
                v34 = ((unsigned int)v33 >> 6) & 0xFFFFFF;
                if ( (unsigned int)v34 < *(_DWORD *)(ProcessDxgProcess + 224) )
                {
                  v35 = *(_QWORD *)(ProcessDxgProcess + 208);
                  v36 = ((unsigned int)v33 >> 26) & 0x30;
                  if ( (((unsigned int)v33 >> 26) & 0x30) == (*(_BYTE *)(v35 + 16 * v34 + 8) & 0x30)
                    && (*(_DWORD *)(v35 + 16 * v34 + 8) & 0xF) != 0 )
                  {
                    v37 = 2 * ((v33 >> 6) & 0xFFFFFF);
                    if ( (*(_DWORD *)(v35 + 8 * v37 + 8) & 0x1000) == 0 )
                    {
                      v38 = WdLogNewEntry5_WdAssertion(v36);
                      *(_QWORD *)(v38 + 24) = 193LL;
                      WdLogEvent5_WdAssertion(v38);
                    }
                    *(_DWORD *)(*(_QWORD *)(ProcessDxgProcess + 208) + 8 * v37 + 8) &= ~0x1000u;
                  }
                }
                *(_QWORD *)(ProcessDxgProcess + 192) = 0LL;
                ExReleasePushLockExclusiveEx(ProcessDxgProcess + 184, 0LL);
                KeLeaveCriticalRegion();
                v39 = v23[1].Count;
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v39 + 16), (struct DXGDEVICE *)v39);
                v40 = WdLogNewEntry5_WdError(v39);
                *(_QWORD *)(v40 + 24) = v2;
                WdLogEvent5_WdError(v40);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v89);
                goto LABEL_30;
              }
              if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v23[1].Count + 16) + 16LL)) < 2000 )
                VIDMM_EXPORT::VidMmEvictAllocation(
                  *(VIDMM_EXPORT **)(v31 + 400),
                  *(struct VIDMM_GLOBAL **)(v31 + 408),
                  (struct _VIDMM_MULTI_ALLOC *)v91[3].Count,
                  0LL,
                  0LL);
              else
                LODWORD(v2) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(*(_QWORD *)(v31 + 400) + 8LL)
                                                                                           + 872LL))(
                                *(_QWORD *)(v31 + 408),
                                *(_QWORD *)(v41 + 560),
                                v91[3].Count,
                                0LL);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v89);
            }
            v42 = a1->Evict.AllocationHandle;
            DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(ProcessDxgProcess + 184));
            v43 = ((unsigned int)v42 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v43 < *(_DWORD *)(ProcessDxgProcess + 224) )
            {
              v44 = *(_QWORD *)(ProcessDxgProcess + 208);
              v45 = ((unsigned int)v42 >> 26) & 0x30;
              if ( (((unsigned int)v42 >> 26) & 0x30) == (*(_BYTE *)(v44 + 16 * v43 + 8) & 0x30)
                && (*(_DWORD *)(v44 + 16 * v43 + 8) & 0xF) != 0 )
              {
                v46 = 2 * ((v42 >> 6) & 0xFFFFFF);
                if ( (*(_DWORD *)(v44 + 8 * v46 + 8) & 0x1000) == 0 )
                {
                  v47 = WdLogNewEntry5_WdAssertion(v45);
                  *(_QWORD *)(v47 + 24) = 193LL;
                  WdLogEvent5_WdAssertion(v47);
                }
                *(_DWORD *)(*(_QWORD *)(ProcessDxgProcess + 208) + 8 * v46 + 8) &= ~0x1000u;
              }
            }
            *(_QWORD *)(ProcessDxgProcess + 192) = 0LL;
            ExReleasePushLockExclusiveEx(ProcessDxgProcess + 184, 0LL);
            KeLeaveCriticalRegion();
            v48 = v23[1].Count;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v48 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v48 + 16), (struct DXGDEVICE *)v48);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v91);
            goto LABEL_60;
          }
        }
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v86);
    LODWORD(v2) = -1073741811;
LABEL_30:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v91);
    return (unsigned int)v2;
  }
LABEL_60:
  if ( !a1->SetFault.Value )
    return (unsigned int)v2;
  v92 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v87,
    (struct DXGPROCESS *)ProcessDxgProcess);
  v49 = (a1->SetFault.Value >> 6) & 0xFFFFFF;
  if ( v49 < *(_DWORD *)(ProcessDxgProcess + 224)
    && (v50 = *(_QWORD *)(ProcessDxgProcess + 208),
        v51 = *(_DWORD *)(v50 + 16LL * v49 + 8),
        ((a1->SetFault.Value >> 26) & 0x30) == (*(_BYTE *)(v50 + 16LL * v49 + 8) & 0x30))
    && (v51 & 0x1000) == 0
    && (v51 & 0xF) != 0
    && (*(_BYTE *)(v50 + 16LL * v49 + 8) & 0xF) == 4 )
  {
    v52 = *(struct DXGRESOURCE **)(v50 + 16LL * v49);
  }
  else
  {
    v52 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v82, v52);
  DXGRESOURCEREFERENCE::MoveAssign(&v92, &v82);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v82);
  v53 = v92;
  if ( v92 )
  {
    v54 = v92[1].Count;
    if ( v54 )
    {
      _m_prefetchw((const void *)(v54 + 64));
      v55 = *(_QWORD *)(v54 + 64);
      while ( v55 )
      {
        v56 = v55;
        v55 = _InterlockedCompareExchange64((volatile signed __int64 *)(v54 + 64), v55 + 1, v55);
        if ( v56 == v55 )
        {
          Value = (struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051)a1->SetFault.Value;
          v58 = (*(unsigned int *)&Value >> 6) & 0xFFFFFF;
          if ( (unsigned int)v58 < *(_DWORD *)(ProcessDxgProcess + 224) )
          {
            v59 = *(_QWORD *)(ProcessDxgProcess + 208);
            v60 = *(_DWORD *)(v59 + 16 * v58 + 8);
            if ( ((*(unsigned int *)&Value >> 26) & 0x30) == (*(_BYTE *)(v59 + 16 * v58 + 8) & 0x30)
              && (v60 & 0x1000) == 0
              && (v60 & 0xF) != 0 )
            {
              *(_DWORD *)(v59 + 16 * (((unsigned __int64)*(unsigned int *)&Value >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
            }
          }
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v87);
          v61 = *(_QWORD *)(v53[1].Count + 16);
          if ( v61 )
          {
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v88, *(struct DXGADAPTER *const *)(v61 + 16), 0LL);
            v62 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v88);
            v2 = v62;
            if ( v62 >= 0 )
            {
              DriverVersion = DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v53[1].Count + 16) + 16LL));
              v66 = v92;
              v67 = (struct DXGFASTMUTEX *)&v92[10];
              if ( DriverVersion < 2000 )
              {
                DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v85, v67);
                if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_387928376_59283803_FeatureDescriptorDetails) )
                  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v85);
                for ( i = v66[3].Count; i; i = *(_QWORD *)(i + 64) )
                  VIDMM_EXPORT::VidMmEvictAllocation(
                    *(VIDMM_EXPORT **)(v61 + 400),
                    *(struct VIDMM_GLOBAL **)(v61 + 408),
                    *(struct _VIDMM_MULTI_ALLOC **)(i + 24),
                    0LL,
                    0LL);
                v72 = (DXGPROCESSCOPYPROTECTIONMUTEX *)v85;
              }
              else
              {
                DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v84, v67);
                if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_387928376_59283803_FeatureDescriptorDetails) )
                  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v84);
                for ( j = v66[3].Count; j; j = *(_QWORD *)(j + 64) )
                {
                  v69 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v61 + 400)
                                                                                              + 8LL)
                                                                                  + 872LL))(
                          *(_QWORD *)(v61 + 408),
                          *(_QWORD *)(v53[1].Count + 560),
                          *(_QWORD *)(j + 24),
                          0LL);
                  v2 = v69;
                  if ( v69 < 0 )
                  {
                    v71 = WdLogNewEntry5_WdError(v70);
                    *(_QWORD *)(v71 + 24) = v2;
                    WdLogEvent5_WdError(v71);
                    break;
                  }
                }
                v72 = (DXGPROCESSCOPYPROTECTIONMUTEX *)v84;
              }
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX(v72);
            }
            else
            {
              v64 = WdLogNewEntry5_WdError(v63);
              *(_QWORD *)(v64 + 24) = v2;
              WdLogEvent5_WdError(v64);
            }
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v88);
          }
          v74 = a1->SetFault.Value;
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(ProcessDxgProcess + 184));
          v75 = ((unsigned int)v74 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v75 < *(_DWORD *)(ProcessDxgProcess + 224) )
          {
            v76 = *(_QWORD *)(ProcessDxgProcess + 208);
            v77 = ((unsigned int)v74 >> 26) & 0x30;
            if ( (((unsigned int)v74 >> 26) & 0x30) == (*(_BYTE *)(v76 + 16 * v75 + 8) & 0x30)
              && (*(_DWORD *)(v76 + 16 * v75 + 8) & 0xF) != 0 )
            {
              v78 = 2 * ((v74 >> 6) & 0xFFFFFF);
              if ( (*(_DWORD *)(v76 + 8 * v78 + 8) & 0x1000) == 0 )
              {
                v79 = WdLogNewEntry5_WdAssertion(v77);
                *(_QWORD *)(v79 + 24) = 193LL;
                WdLogEvent5_WdAssertion(v79);
              }
              *(_DWORD *)(*(_QWORD *)(ProcessDxgProcess + 208) + 8 * v78 + 8) &= ~0x1000u;
            }
          }
          *(_QWORD *)(ProcessDxgProcess + 192) = 0LL;
          ExReleasePushLockExclusiveEx(ProcessDxgProcess + 184, 0LL);
          KeLeaveCriticalRegion();
          v80 = v53[1].Count;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v80 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v80 + 16), (struct DXGDEVICE *)v80);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v92);
          return (unsigned int)v2;
        }
      }
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v87);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v92);
  return -1073741811LL;
}

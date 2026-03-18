/*
 * XREFs of ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C012A050
 * Callers:
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004214 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000C1CC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C001BC4C (-VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MU.c)
 *     ?Assign@DXGRESOURCEREFERENCE@@QEAAAEAV1@AEBV1@@Z @ 0x1C0065DC4 (-Assign@DXGRESOURCEREFERENCE@@QEAAAEAV1@AEBV1@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0065E00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0065F40 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Assign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@AEBV1@@Z @ 0x1C0076A24 (-Assign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@AEBV1@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0076A70 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?EvictAllAllocations@DXGDEVICE@@QEAAJXZ @ 0x1C013A5C0 (-EvictAllAllocations@DXGDEVICE@@QEAAJXZ.c)
 */

__int64 __fastcall DxgEscapeEvict(struct _D3DKMT_VIDMM_ESCAPE *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v5; // rax
  D3DKMT_HANDLE AllocationHandle; // eax
  char *v8; // rbx
  _QWORD *v9; // r14
  __int64 v10; // rax
  __int64 v11; // r9
  DXGDEVICE *v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rax
  D3DKMT_HANDLE v18; // ecx
  __int64 v19; // r9
  int v20; // r8d
  struct _EX_RUNDOWN_REF *v21; // rdx
  struct _EX_RUNDOWN_REF *v22; // rbx
  ULONG_PTR Count; // rdx
  signed __int64 v24; // rax
  signed __int64 v25; // rtt
  D3DKMT_HANDLE v26; // r8d
  __int64 v27; // rax
  __int64 v28; // r9
  int v29; // edx
  __int64 v30; // r14
  int v31; // eax
  unsigned __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r14
  __int64 v37; // rax
  ULONG_PTR v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r8
  unsigned __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // r14
  __int64 v46; // rax
  ULONG_PTR v47; // rcx
  ULONG v48; // ecx
  __int64 v49; // r9
  int v50; // r8d
  struct DXGRESOURCE *v51; // rdx
  struct _EX_RUNDOWN_REF *v52; // rbx
  ULONG_PTR v53; // rdx
  signed __int64 v54; // rax
  signed __int64 v55; // rtt
  struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051 Value; // r8d
  __int64 v57; // rax
  __int64 v58; // r9
  int v59; // edx
  __int64 v60; // r15
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rax
  int DriverVersion; // eax
  ULONG_PTR v65; // r14
  int v66; // eax
  unsigned __int64 v67; // r14
  __int64 v68; // rax
  __int64 v69; // r8
  __int64 v70; // rcx
  __int64 v71; // r14
  __int64 v72; // rax
  ULONG_PTR v73; // rcx
  struct DXGRESOURCE *v74; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v75[2]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v76[24]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v77[24]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v78[56]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v79[64]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v80[128]; // [rsp+F0h] [rbp-10h] BYREF
  struct _EX_RUNDOWN_REF *v81; // [rsp+188h] [rbp+88h] BYREF
  struct _EX_RUNDOWN_REF *v82; // [rsp+190h] [rbp+90h] BYREF
  struct DXGALLOCATION *v83; // [rsp+198h] [rbp+98h] BYREF

  LODWORD(v2) = 0;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v5 = WdLogNewEntry5_WdError(v3);
    LODWORD(v2) = -1073741811;
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v5);
    return (unsigned int)v2;
  }
  AllocationHandle = a1->Evict.AllocationHandle;
  if ( !AllocationHandle && !a1->SetFault.Value )
  {
    v8 = (char *)Current + 144;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)Current + 144, 0LL);
    *((_QWORD *)Current + 19) = KeGetCurrentThread();
    v9 = (_QWORD *)*((_QWORD *)Current + 31);
    v75[0] = (char *)Current + 248;
    while ( 1 )
    {
      v75[1] = v9;
      v10 = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v75);
      v12 = (DXGDEVICE *)v10;
      if ( !v10 )
        break;
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v80, v10, 0, v11, 0);
      v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v80);
      v2 = v13;
      if ( v13 < 0
        || ((int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL)) < 2000
          ? (v16 = DXGDEVICE::EvictAllAllocations(v12))
          : (v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v15 + 424) + 8LL)
                                                                             + 856LL))(
                     *(_QWORD *)(v15 + 432),
                     *((_QWORD *)v12 + 67),
                     0LL,
                     0LL)),
            v2 = v16,
            v16 < 0) )
      {
        v17 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v17 + 24) = v2;
        WdLogEvent5_WdError(v17);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v80);
        break;
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v80);
      v9 = (_QWORD *)*v9;
    }
    *((_QWORD *)v8 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v2;
  }
  if ( AllocationHandle )
  {
    v81 = 0LL;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v77, Current);
    v18 = (a1->Evict.AllocationHandle >> 6) & 0xFFFFFF;
    if ( v18 < *((_DWORD *)Current + 58)
      && (v19 = *((_QWORD *)Current + 27),
          v20 = *(_DWORD *)(v19 + 16LL * v18 + 8),
          ((a1->Evict.AllocationHandle >> 26) & 0x30) == (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0x30))
      && (v20 & 0x1000) == 0
      && (v20 & 0xF) != 0
      && (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0xF) == 5 )
    {
      v21 = *(struct _EX_RUNDOWN_REF **)(v19 + 16LL * v18);
    }
    else
    {
      v21 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v83, v21);
    DXGALLOCATIONREFERENCE::Assign(&v81, &v83);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v83);
    v22 = v81;
    if ( v81 )
    {
      Count = v81[1].Count;
      if ( Count )
      {
        _m_prefetchw((const void *)(Count + 64));
        v24 = *(_QWORD *)(Count + 64);
        while ( v24 )
        {
          v25 = v24;
          v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(Count + 64), v24 + 1, v24);
          if ( v25 == v24 )
          {
            v26 = a1->Evict.AllocationHandle;
            v27 = (v26 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v27 < *((_DWORD *)Current + 58) )
            {
              v28 = *((_QWORD *)Current + 27);
              v29 = *(_DWORD *)(v28 + 16 * v27 + 8);
              if ( ((v26 >> 26) & 0x30) == (*(_BYTE *)(v28 + 16 * v27 + 8) & 0x30)
                && (v29 & 0x1000) == 0
                && (v29 & 0xF) != 0 )
              {
                *(_DWORD *)(v28 + 16 * (((unsigned __int64)v26 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
              }
            }
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v77);
            v30 = *(_QWORD *)(v22[1].Count + 16);
            if ( v30 )
            {
              COREADAPTERACCESS::COREADAPTERACCESS(
                (COREADAPTERACCESS *)v79,
                *(struct DXGADAPTER *const *)(v30 + 16),
                0LL);
              v31 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v79);
              v2 = v31;
              if ( v31 < 0 )
              {
                v32 = a1->Evict.AllocationHandle;
                DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 192));
                v33 = ((unsigned int)v32 >> 6) & 0xFFFFFF;
                if ( (unsigned int)v33 < *((_DWORD *)Current + 58) )
                {
                  v34 = *((_QWORD *)Current + 27);
                  v35 = ((unsigned int)v32 >> 26) & 0x30;
                  if ( (((unsigned int)v32 >> 26) & 0x30) == (*(_BYTE *)(v34 + 16 * v33 + 8) & 0x30)
                    && (*(_DWORD *)(v34 + 16 * v33 + 8) & 0xF) != 0 )
                  {
                    v36 = 2 * ((v32 >> 6) & 0xFFFFFF);
                    if ( (*(_DWORD *)(v34 + 8 * v36 + 8) & 0x1000) == 0 )
                    {
                      v37 = WdLogNewEntry5_WdAssertion(v35);
                      *(_QWORD *)(v37 + 24) = 188LL;
                      WdLogEvent5_WdAssertion(v37);
                    }
                    *(_DWORD *)(*((_QWORD *)Current + 27) + 8 * v36 + 8) &= ~0x1000u;
                  }
                }
                *((_QWORD *)Current + 25) = 0LL;
                ExReleasePushLockExclusiveEx((char *)Current + 192, 0LL);
                KeLeaveCriticalRegion();
                v38 = v22[1].Count;
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v38 + 16), (struct DXGDEVICE *)v38);
                v39 = WdLogNewEntry5_WdError(v38);
                *(_QWORD *)(v39 + 24) = v2;
                WdLogEvent5_WdError(v39);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v79);
                goto LABEL_30;
              }
              if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v22[1].Count + 16) + 16LL)) < 2000 )
                VIDMM_EXPORT::VidMmEvictAllocation(
                  *(VIDMM_EXPORT **)(v30 + 424),
                  *(struct VIDMM_GLOBAL **)(v30 + 432),
                  (struct _VIDMM_MULTI_ALLOC *)v81[3].Count,
                  0LL,
                  0LL);
              else
                LODWORD(v2) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(*(_QWORD *)(v30 + 424) + 8LL)
                                                                                           + 856LL))(
                                *(_QWORD *)(v30 + 432),
                                *(_QWORD *)(v40 + 536),
                                v81[3].Count,
                                0LL);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v79);
            }
            v41 = a1->Evict.AllocationHandle;
            DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 192));
            v42 = ((unsigned int)v41 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v42 < *((_DWORD *)Current + 58) )
            {
              v43 = *((_QWORD *)Current + 27);
              v44 = ((unsigned int)v41 >> 26) & 0x30;
              if ( (((unsigned int)v41 >> 26) & 0x30) == (*(_BYTE *)(v43 + 16 * v42 + 8) & 0x30)
                && (*(_DWORD *)(v43 + 16 * v42 + 8) & 0xF) != 0 )
              {
                v45 = 2 * ((v41 >> 6) & 0xFFFFFF);
                if ( (*(_DWORD *)(v43 + 8 * v45 + 8) & 0x1000) == 0 )
                {
                  v46 = WdLogNewEntry5_WdAssertion(v44);
                  *(_QWORD *)(v46 + 24) = 188LL;
                  WdLogEvent5_WdAssertion(v46);
                }
                *(_DWORD *)(*((_QWORD *)Current + 27) + 8 * v45 + 8) &= ~0x1000u;
              }
            }
            *((_QWORD *)Current + 25) = 0LL;
            ExReleasePushLockExclusiveEx((char *)Current + 192, 0LL);
            KeLeaveCriticalRegion();
            v47 = v22[1].Count;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v47 + 16), (struct DXGDEVICE *)v47);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v81);
            goto LABEL_60;
          }
        }
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v77);
    LODWORD(v2) = -1073741811;
LABEL_30:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v81);
    return (unsigned int)v2;
  }
LABEL_60:
  if ( !a1->SetFault.Value )
    return (unsigned int)v2;
  v82 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v76, Current);
  v48 = (a1->SetFault.Value >> 6) & 0xFFFFFF;
  if ( v48 < *((_DWORD *)Current + 58)
    && (v49 = *((_QWORD *)Current + 27),
        v50 = *(_DWORD *)(v49 + 16LL * v48 + 8),
        ((a1->SetFault.Value >> 26) & 0x30) == (*(_BYTE *)(v49 + 16LL * v48 + 8) & 0x30))
    && (v50 & 0x1000) == 0
    && (v50 & 0xF) != 0
    && (*(_BYTE *)(v49 + 16LL * v48 + 8) & 0xF) == 4 )
  {
    v51 = *(struct DXGRESOURCE **)(v49 + 16LL * v48);
  }
  else
  {
    v51 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v74, v51);
  DXGRESOURCEREFERENCE::Assign(&v82, &v74);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v74);
  v52 = v82;
  if ( v82 )
  {
    v53 = v82[1].Count;
    if ( v53 )
    {
      _m_prefetchw((const void *)(v53 + 64));
      v54 = *(_QWORD *)(v53 + 64);
      while ( v54 )
      {
        v55 = v54;
        v54 = _InterlockedCompareExchange64((volatile signed __int64 *)(v53 + 64), v54 + 1, v54);
        if ( v55 == v54 )
        {
          Value = (struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051)a1->SetFault.Value;
          v57 = (*(unsigned int *)&Value >> 6) & 0xFFFFFF;
          if ( (unsigned int)v57 < *((_DWORD *)Current + 58) )
          {
            v58 = *((_QWORD *)Current + 27);
            v59 = *(_DWORD *)(v58 + 16 * v57 + 8);
            if ( ((*(unsigned int *)&Value >> 26) & 0x30) == (*(_BYTE *)(v58 + 16 * v57 + 8) & 0x30)
              && (v59 & 0x1000) == 0
              && (v59 & 0xF) != 0 )
            {
              *(_DWORD *)(v58 + 16 * (((unsigned __int64)*(unsigned int *)&Value >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
            }
          }
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v76);
          v60 = *(_QWORD *)(v52[1].Count + 16);
          if ( v60 )
          {
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v78, *(struct DXGADAPTER *const *)(v60 + 16), 0LL);
            v61 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v78);
            v2 = v61;
            if ( v61 >= 0 )
            {
              DriverVersion = DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v52[1].Count + 16) + 16LL));
              v65 = v82[3].Count;
              if ( DriverVersion < 2000 )
              {
                while ( v65 )
                {
                  VIDMM_EXPORT::VidMmEvictAllocation(
                    *(VIDMM_EXPORT **)(v60 + 424),
                    *(struct VIDMM_GLOBAL **)(v60 + 432),
                    *(struct _VIDMM_MULTI_ALLOC **)(v65 + 24),
                    0LL,
                    0LL);
                  v65 = *(_QWORD *)(v65 + 64);
                }
              }
              else
              {
                while ( v65 )
                {
                  v66 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v60 + 424)
                                                                                              + 8LL)
                                                                                  + 856LL))(
                          *(_QWORD *)(v60 + 432),
                          *(_QWORD *)(v52[1].Count + 536),
                          *(_QWORD *)(v65 + 24),
                          0LL);
                  v2 = v66;
                  if ( v66 < 0 )
                    goto LABEL_81;
                  v65 = *(_QWORD *)(v65 + 64);
                }
              }
            }
            else
            {
LABEL_81:
              v63 = WdLogNewEntry5_WdError(v62);
              *(_QWORD *)(v63 + 24) = v2;
              WdLogEvent5_WdError(v63);
            }
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v78);
          }
          v67 = a1->SetFault.Value;
          DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 192));
          v68 = ((unsigned int)v67 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v68 < *((_DWORD *)Current + 58) )
          {
            v69 = *((_QWORD *)Current + 27);
            v70 = ((unsigned int)v67 >> 26) & 0x30;
            if ( (((unsigned int)v67 >> 26) & 0x30) == (*(_BYTE *)(v69 + 16 * v68 + 8) & 0x30)
              && (*(_DWORD *)(v69 + 16 * v68 + 8) & 0xF) != 0 )
            {
              v71 = 2 * ((v67 >> 6) & 0xFFFFFF);
              if ( (*(_DWORD *)(v69 + 8 * v71 + 8) & 0x1000) == 0 )
              {
                v72 = WdLogNewEntry5_WdAssertion(v70);
                *(_QWORD *)(v72 + 24) = 188LL;
                WdLogEvent5_WdAssertion(v72);
              }
              *(_DWORD *)(*((_QWORD *)Current + 27) + 8 * v71 + 8) &= ~0x1000u;
            }
          }
          *((_QWORD *)Current + 25) = 0LL;
          ExReleasePushLockExclusiveEx((char *)Current + 192, 0LL);
          KeLeaveCriticalRegion();
          v73 = v52[1].Count;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v73 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v73 + 16), (struct DXGDEVICE *)v73);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v82);
          return (unsigned int)v2;
        }
      }
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v76);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v82);
  return -1073741811LL;
}

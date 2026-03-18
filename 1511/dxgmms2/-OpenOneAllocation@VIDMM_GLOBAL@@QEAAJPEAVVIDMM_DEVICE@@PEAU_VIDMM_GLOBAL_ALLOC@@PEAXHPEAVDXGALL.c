/*
 * XREFs of ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C004D7B0
 * Callers:
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C003DBCC (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004A9A0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@IPEAXHPEAVDXGALLOCATION@@PEAPEAU_VIDMM_MULTI_ALLOC@@PEAIPEAE@Z @ 0x1C004FC14 (-OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@IPEAXHPEAVDX.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0051730 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C0060494 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011EF0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0014F68 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     Template_pppppppppppp @ 0x1C001CE90 (Template_pppppppppppp.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C0049FFC (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C004A228 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C004BB00 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C004C7CC (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C0051AE0 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0051B80 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0079A08 (-NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OpenOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        unsigned __int64 a4,
        int a5,
        struct DXGALLOCATION *a6,
        struct VIDMM_ALLOC **a7,
        unsigned __int8 *a8)
{
  __int64 v8; // r15
  __int64 v13; // rdi
  char *v14; // rax
  __int64 v15; // rcx
  char *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  bool v22; // zf
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // r9d
  struct VIDMM_DEVICE *v28; // rax
  struct VIDMM_DEVICE *v29; // rbx
  struct VIDMM_DEVICE **v30; // rdx
  void **v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  void **v34; // r12
  bool v35; // al
  void *v36; // rax
  __int64 CurrentProcess; // rax
  int v38; // eax
  __int64 v39; // rcx
  _QWORD *v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  void ***v45; // rdx
  void **v46; // rcx
  DXGFASTMUTEX *v47; // rcx
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rax
  unsigned int v56; // ecx
  void *v57; // r12
  __int64 v58; // rcx
  __int64 v59; // rax
  struct _VIDSCH_SYNC_OBJECT **v60; // rbx
  int Resident; // eax
  __int64 v62; // rax
  int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rbx
  _QWORD *v69; // rax
  VIDMM_GLOBAL *v70; // rcx
  __int64 v71; // r9
  char *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  __int64 v78; // rbx
  HANDLE CurrentProcessId; // r9
  __int64 v80; // rax
  __int64 v81; // rax
  unsigned int v83; // [rsp+80h] [rbp-80h]
  unsigned int v84; // [rsp+84h] [rbp-7Ch]
  void **v85; // [rsp+88h] [rbp-78h]
  __int64 v86; // [rsp+88h] [rbp-78h]
  struct _VIDSCH_SYNC_OBJECT *v87; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v88; // [rsp+98h] [rbp-68h] BYREF
  void *v89; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v90; // [rsp+A8h] [rbp-58h]
  __int64 v91; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v92; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v93; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v94; // [rsp+C8h] [rbp-38h] BYREF
  struct _VIDMM_MULTI_ALLOC *v95; // [rsp+D0h] [rbp-30h] BYREF
  char v96[8]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v97; // [rsp+E0h] [rbp-20h]
  int v98; // [rsp+E8h] [rbp-18h]
  _QWORD v99[10]; // [rsp+F0h] [rbp-10h] BYREF
  struct VIDMM_ALLOC **v101; // [rsp+1A0h] [rbp+A0h]

  v8 = 0LL;
  v83 = 0;
  v84 = 0;
  v90 = 0LL;
  *a7 = 0LL;
  LODWORD(v13) = 0;
  v14 = (char *)operator new(0xE8uLL, 0x33306956u, (POOL_TYPE)512);
  v16 = v14;
  if ( !v14 )
  {
    _InterlockedIncrement(&dword_1C002F4D8);
    v81 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v81 + 24) = 3756LL;
    WdLogEvent5_WdLowResource(v81);
    LODWORD(v13) = -1073741801;
    return (unsigned int)v13;
  }
  memset(v14, 0, 0xE8uLL);
  KeInitializeEvent((PRKEVENT)v16 + 3, NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)v16 + 7, SynchronizationEvent, 0);
  v16[36] ^= (v16[36] ^ ((VIDMM_GLOBAL::_Config & 4) != 0)) & 1;
  v21 = *((_QWORD *)a2 + 2);
  if ( v21 )
  {
    v22 = v21 == -304;
    v23 = v21 + 304;
    v97 = v23;
    if ( !v22 && *(struct _KTHREAD **)(v23 + 8) == KeGetCurrentThread() )
    {
      v24 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
      *(_QWORD *)(v24 + 24) = 1155LL;
      WdLogEvent5_WdAssertion(v24);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v23, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v27 = *(_DWORD *)(v23 + 16);
        if ( v27 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v25, &EventBlockThread, v26, v27);
      }
      ExAcquirePushLockExclusiveEx(v23, 0LL);
    }
    *(_QWORD *)(v23 + 8) = KeGetCurrentThread();
    v28 = (struct VIDMM_DEVICE *)(v16 + 112);
    v29 = a2;
    v98 = 2;
    v30 = (struct VIDMM_DEVICE **)*((_QWORD *)a2 + 20);
    *((_QWORD *)v16 + 14) = (char *)a2 + 152;
    *((_QWORD *)v16 + 15) = v30;
    if ( *v30 != (struct VIDMM_DEVICE *)((char *)a2 + 152) )
      __fastfail(3u);
    *v30 = v28;
    *((_QWORD *)a2 + 20) = v28;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v96);
  }
  else
  {
    v29 = a2;
  }
  *((_DWORD *)v16 + 8) ^= (*((_DWORD *)v16 + 8) ^ (4 * *((_DWORD *)a3 + 19))) & 0xFC;
  DXGFASTMUTEX::Acquire(*((union _LARGE_INTEGER **)a3 + 39));
  if ( *((_BYTE *)a3 + 93) == 1 )
  {
    LODWORD(v13) = -1071775482;
LABEL_70:
    VIDMM_DEVICE::NotifyAllocationClosed(a2, (struct VIDMM_ALLOC *)v16);
    operator delete(v16);
    DXGFASTMUTEX::Release(*((DXGFASTMUTEX **)a3 + 39), v74, v75, v76);
    return (unsigned int)v13;
  }
  if ( (*((_BYTE *)a3 + 84) & 1) != 0 )
  {
    LODWORD(v13) = -1071775470;
    goto LABEL_70;
  }
  v31 = VIDMM_GLOBAL::OpenLocalAllocation(this, a3, *((struct VIDMM_PROCESS **)v29 + 1), a4, a8);
  v85 = v31;
  v34 = v31;
  if ( !v31 )
  {
    LODWORD(v13) = -1071775488;
    goto LABEL_70;
  }
  *(_QWORD *)v16 = v31;
  *((_QWORD *)v16 + 2) = a6;
  *((_QWORD *)v16 + 1) = v29;
  *((_QWORD *)v16 + 12) = *((_QWORD *)a3 + 59);
  v92 = **((_DWORD **)a3 + 59);
  *((_DWORD *)v16 + 7) ^= (*((_DWORD *)v16 + 7) ^ (v92 >> 26)) & 8;
  LOBYTE(v32) = a5 != 0;
  v16[24] = a5 != 0;
  if ( a5 && (**((_DWORD **)a3 + 59) & 0x200000) != 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a6 + 1) + 40LL) + 314LL) )
  {
    v35 = a5 != 0;
    if ( *((_DWORD *)this + 1604) > 1u )
      v35 = 0;
    v16[24] = v35;
  }
  *((_QWORD *)v16 + 18) = 0LL;
  *((_QWORD *)v16 + 17) = v16 + 128;
  *((_QWORD *)v16 + 16) = v16 + 128;
  if ( (*((_BYTE *)this + 40608) & 2) != 0 )
  {
    if ( (**((_DWORD **)a3 + 59) & 0x10000008) != 0 )
    {
      v89 = 0LL;
      v91 = 0LL;
      CurrentProcess = PsGetCurrentProcess();
      v38 = MmMapViewOfSection(
              *((_QWORD *)a3 + 44),
              CurrentProcess,
              &v89,
              0LL,
              *((_QWORD *)a3 + 1),
              &v91,
              (char *)a3 + 8,
              2,
              0,
              4);
      v13 = v38;
      if ( v38 < 0 )
      {
        _InterlockedIncrement(&dword_1C002F4EC);
        v40 = (_QWORD *)WdLogNewEntry5_WdLowResource(v39);
        v40[3] = a3;
        v41 = PsGetCurrentProcess();
        v40[5] = v13;
        v40[4] = v41;
        WdLogEvent5_WdLowResource(v40);
        DXGFASTMUTEX::Release(*((DXGFASTMUTEX **)a3 + 39), v42, v43, v44);
LABEL_63:
        memset(v99, 0, sizeof(v99));
        v62 = *((_DWORD *)a3 + 19) & 0x3F;
        LODWORD(v99[0]) = 200;
        v99[2] = v16;
        v63 = VIDMM_GLOBAL::QueueDeferredCommand(
                this,
                (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)v16 + 1) + 64LL) + 160 * v62),
                (struct _VIDMM_DEFERRED_COMMAND *)v99,
                1,
                0LL);
        v68 = v63;
        if ( v63 < 0 )
        {
          v69 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v65, v64, v66, v67);
          v69[3] = 270LL;
          v69[4] = 5LL;
          v69[5] = 200LL;
          v69[6] = v68;
          v69[7] = 0LL;
          WdLogEvent5_WdCriticalError(v69);
        }
        KeWaitForSingleObject(v16 + 72, Executive, 0, 0, 0LL);
        DXGFASTMUTEX::Acquire(*((union _LARGE_INTEGER **)a3 + 39));
        v72 = v16 + 40;
        if ( *((_QWORD *)v16 + 5) )
        {
          v73 = *(_QWORD *)v72;
          v70 = (VIDMM_GLOBAL *)*((_QWORD *)v16 + 6);
          if ( *(char **)(*(_QWORD *)v72 + 8LL) != v72 || *(char **)v70 != v72 )
            __fastfail(3u);
          *(_QWORD *)v70 = v73;
          *(_QWORD *)(v73 + 8) = v70;
        }
        VIDMM_GLOBAL::CloseLocalAllocation(v70, (struct _VIDMM_LOCAL_ALLOC *)v34, 1LL, v71);
        goto LABEL_70;
      }
      v36 = v89;
      v29 = a2;
    }
    else
    {
      v36 = v34[2];
    }
    *((_QWORD *)v16 + 18) = v36;
  }
  v45 = (void ***)v34[6];
  v46 = (void **)(v16 + 40);
  *((_QWORD *)v16 + 5) = v34 + 5;
  *((_QWORD *)v16 + 6) = v45;
  if ( *v45 != v34 + 5 )
    __fastfail(3u);
  *v45 = v46;
  v34[6] = v46;
  v47 = (DXGFASTMUTEX *)*((_QWORD *)a3 + 39);
  if ( (**((_DWORD **)a3 + 59) & 0x40000000) != 0 )
  {
    DXGFASTMUTEX::Release(v47, (__int64)v45, v32, v33);
    if ( (gVidMmGlobalFault & 0x8000) != 0
      && (**((_DWORD **)*v34 + 59) & 0x20000000) != 0
      && v34 == *((void ***)*v34 + 12) )
    {
      LODWORD(v13) = -1071775487;
      goto LABEL_63;
    }
    v48 = VIDMM_GLOBAL::PinOneAllocation(this, (VIDMM_DEVICE **)v16);
    v13 = v48;
    if ( v48 < 0 )
    {
      _InterlockedIncrement(&dword_1C002F558);
      v50 = WdLogNewEntry5_WdLowResource(v49);
      *(_QWORD *)(v50 + 24) = v16;
      *(_QWORD *)(v50 + 32) = v13;
      WdLogEvent5_WdLowResource(v50);
      goto LABEL_63;
    }
    DXGFASTMUTEX::Acquire(*((union _LARGE_INTEGER **)a3 + 39));
    if ( *((_BYTE *)a3 + 93) == 1 )
    {
      LODWORD(v13) = -1071775482;
      DXGFASTMUTEX::Release(*((DXGFASTMUTEX **)a3 + 39), v51, v52, v53);
      goto LABEL_63;
    }
    if ( (*((_BYTE *)a3 + 84) & 1) != 0 )
    {
      LODWORD(v13) = -1071775470;
      DXGFASTMUTEX::Release(*((DXGFASTMUTEX **)a3 + 39), v51, v52, v53);
      goto LABEL_63;
    }
    DXGFASTMUTEX::Release(*((DXGFASTMUTEX **)a3 + 39), v51, v52, v53);
  }
  else
  {
    DXGFASTMUTEX::Release(v47, (__int64)v45, v32, v33);
    v58 = *((_QWORD *)v29 + 3);
    if ( v58
      && (!*(_BYTE *)(v58 + 2850)
       && (*(_DWORD *)(v58 + 280) != 2
        || (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v58 + 16) + 16LL)) < 2000)
       || (*((_DWORD *)a3 + 20) & 0x20) != 0) )
    {
      v59 = *((_DWORD *)a3 + 19) & 0x3F;
      v88 = 0LL;
      v93 = 0LL;
      v95 = (struct _VIDMM_MULTI_ALLOC *)v16;
      v60 = (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(*((_QWORD *)v16 + 1) + 64LL) + 160 * v59);
      Resident = VIDMM_GLOBAL::MakeResident(this, (struct VIDMM_PAGING_QUEUE *)v60, &v95, 1uLL, 0, &v88, &v93);
      LODWORD(v13) = Resident;
      if ( Resident == 259 )
      {
        v87 = v60[11];
        v94 = v88;
        VIDMM_GLOBAL::WaitForFences(this, &v87, &v94, 1u, 0LL);
        LODWORD(v13) = 0;
      }
      else if ( Resident < 0 )
      {
        goto LABEL_63;
      }
    }
  }
  v22 = bTracingEnabled == 0;
  *a7 = (struct VIDMM_ALLOC *)v16;
  if ( !v22 )
  {
    v54 = *((_QWORD *)v16 + 2);
    if ( v54 )
    {
      v83 = *(_DWORD *)(v54 + 16);
      v55 = *(_QWORD *)(v54 + 40);
      if ( v55 )
      {
        v56 = *(_DWORD *)(v55 + 16);
        v90 = *(_QWORD *)(v55 + 48);
        v84 = v56;
      }
    }
    if ( (**((_DWORD **)a3 + 59) & 8) != 0 )
      v57 = (void *)*((_QWORD *)a3 + 45);
    else
      v57 = v34[2];
    if ( v54 && (v77 = *(_QWORD *)(v54 + 40)) != 0 )
      v78 = *(_QWORD *)(v77 + 56);
    else
      v78 = 0LL;
    if ( v54 )
      v8 = *(_QWORD *)(v54 + 40);
    v87 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)a2 + 3);
    v101 = (struct VIDMM_ALLOC **)v85[3];
    v86 = *((_QWORD *)this + 3);
    CurrentProcessId = PsGetCurrentProcessId();
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      Template_pppppppppppp(
        v84,
        &EventCreateDeviceAllocation,
        (__int64)v101,
        CurrentProcessId,
        v87,
        v86,
        v16,
        a3,
        v8,
        v78,
        v83,
        v84,
        v90,
        v57,
        v101);
  }
  v80 = *((_QWORD *)a3 + 2);
  ++*((_DWORD *)this + 1906);
  *((_QWORD *)this + 954) += v80;
  return (unsigned int)v13;
}

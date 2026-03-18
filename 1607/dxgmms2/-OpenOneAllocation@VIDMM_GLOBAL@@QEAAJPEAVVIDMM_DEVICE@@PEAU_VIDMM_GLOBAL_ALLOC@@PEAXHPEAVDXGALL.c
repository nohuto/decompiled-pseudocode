/*
 * XREFs of ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C0055C30
 * Callers:
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00418A8 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C004B450 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@IPEAXHPEAVDXGALLOCATION@@PEAPEAU_VIDMM_MULTI_ALLOC@@PEAIPEAE@Z @ 0x1C00575C0 (-OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@IPEAXHPEAVDX.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0058CD8 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsWarpAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000FD90 (-IsWarpAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0012D6C (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ??0VIDMM_ALLOC@@QEAA@XZ @ 0x1C001D09C (--0VIDMM_ALLOC@@QEAA@XZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     Template_pppppppppppp @ 0x1C001E204 (Template_pppppppppppp.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C00523D4 (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C0052534 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0053A70 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C005907C (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0059120 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C00690C0 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00875F0 (-NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OpenOneAllocation(
        DXGADAPTER **this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        __int64 a4,
        int a5,
        struct DXGALLOCATION *a6,
        struct VIDMM_ALLOC **a7,
        unsigned __int8 *a8)
{
  _BYTE *v8; // rax
  __int64 v9; // r14
  __int64 v10; // rbp
  __int64 v15; // rax
  VIDMM_ALLOC *v16; // rax
  __int64 v17; // rcx
  VIDMM_ALLOC *v18; // rdi
  VIDMM_ALLOC *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // r9d
  struct VIDMM_DEVICE *v28; // rcx
  struct VIDMM_DEVICE **v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  struct _VIDMM_LOCAL_ALLOC *v34; // rax
  struct _VIDMM_LOCAL_ALLOC *v35; // r12
  bool v36; // al
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 CurrentProcess; // rax
  int v42; // eax
  __int64 v43; // rcx
  _QWORD *v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  struct _VIDMM_LOCAL_ALLOC **v50; // rdx
  struct _VIDMM_LOCAL_ALLOC *v51; // rcx
  struct _KTHREAD **v52; // rcx
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  bool v60; // zf
  __int64 v61; // rdx
  __int64 v62; // rax
  unsigned int v63; // ecx
  __int64 v64; // r12
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rbx
  __int64 v68; // rax
  struct _VIDSCH_SYNC_OBJECT **v69; // rbx
  int Resident; // eax
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rax
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rbx
  _QWORD *v80; // rax
  VIDMM_GLOBAL *v81; // rcx
  __int64 v82; // r9
  char *v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rax
  __int64 v89; // rbx
  __int64 v90; // r13
  HANDLE CurrentProcessId; // r9
  __int64 v92; // rax
  __int64 v93; // rax
  unsigned int v95; // [rsp+80h] [rbp-D8h]
  unsigned int v96; // [rsp+84h] [rbp-D4h]
  struct _VIDMM_LOCAL_ALLOC *v97; // [rsp+88h] [rbp-D0h]
  __int64 v98; // [rsp+88h] [rbp-D0h]
  __int64 v99; // [rsp+90h] [rbp-C8h] BYREF
  unsigned __int64 v100; // [rsp+98h] [rbp-C0h] BYREF
  __int64 v101; // [rsp+A0h] [rbp-B8h]
  unsigned int v102; // [rsp+A8h] [rbp-B0h]
  __int64 v103; // [rsp+B0h] [rbp-A8h] BYREF
  unsigned __int64 v104; // [rsp+B8h] [rbp-A0h] BYREF
  struct _VIDMM_MULTI_ALLOC *v105; // [rsp+C0h] [rbp-98h] BYREF
  unsigned __int64 v106; // [rsp+C8h] [rbp-90h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v107; // [rsp+D0h] [rbp-88h] BYREF
  _QWORD v108[15]; // [rsp+E0h] [rbp-78h] BYREF
  struct VIDMM_ALLOC **v109; // [rsp+190h] [rbp+38h]

  v8 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
  v9 = 0LL;
  LODWORD(v10) = 0;
  v96 = 0;
  v95 = 0;
  v101 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v15 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v15 + 24) = a3;
    *(_QWORD *)(v15 + 32) = a2;
    v8 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
  }
  *a7 = 0LL;
  if ( *v8 )
  {
    v16 = (VIDMM_ALLOC *)operator new(0x128uLL, 0x33306956u, (POOL_TYPE)512);
    v18 = v16;
    if ( v16 )
    {
      memset(v16, 0, 0xF8uLL);
      KeInitializeEvent((PRKEVENT)v18 + 3, NotificationEvent, 0);
      KeInitializeEvent((PRKEVENT)((char *)v18 + 184), SynchronizationEvent, 0);
      *((_DWORD *)v18 + 7) |= 0x20u;
      *((_QWORD *)v18 + 31) = 0LL;
      *((_QWORD *)v18 + 32) = 0LL;
      *((_QWORD *)v18 + 33) = 0LL;
      *((_QWORD *)v18 + 34) = 0LL;
      *((_QWORD *)v18 + 35) = 0LL;
      *((_QWORD *)v18 + 36) = 0LL;
      goto LABEL_8;
    }
LABEL_100:
    _InterlockedIncrement(&dword_1C0035558);
    v93 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v93 + 24) = 3398LL;
    WdLogEvent5_WdLowResource(v93);
    LODWORD(v10) = -1073741801;
    return (unsigned int)v10;
  }
  v19 = (VIDMM_ALLOC *)operator new(0xF8uLL, 0x33306956u, (POOL_TYPE)512);
  if ( !v19 )
    goto LABEL_100;
  v18 = VIDMM_ALLOC::VIDMM_ALLOC(v19);
LABEL_8:
  if ( !v18 )
    goto LABEL_100;
  v21 = *((unsigned __int8 *)v18 + 36);
  v20 = *((_DWORD *)this + 1616) >> 13;
  LOBYTE(v20) = ((_DWORD)this[808] & 0x2000) != 0;
  LOBYTE(v21) = (v20 ^ v21) & 1;
  *((_BYTE *)v18 + 36) ^= v21;
  v22 = *((_QWORD *)a2 + 2);
  if ( v22 )
  {
    v23 = v22 + 328;
    if ( v23 && *(struct _KTHREAD **)(v23 + 8) == KeGetCurrentThread() )
    {
      v24 = WdLogNewEntry5_WdAssertion(v21, v20);
      *(_QWORD *)(v24 + 24) = 1142LL;
      WdLogEvent5_WdAssertion(v24);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v23, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v27 = *(_DWORD *)(v23 + 16);
        if ( v27 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v25, &EventBlockThread, v26, v27);
      }
      ExAcquirePushLockExclusiveEx(v23, 0LL);
    }
    v28 = (VIDMM_ALLOC *)((char *)v18 + 112);
    *(_QWORD *)(v23 + 8) = KeGetCurrentThread();
    v29 = (struct VIDMM_DEVICE **)*((_QWORD *)a2 + 21);
    if ( *v29 != (struct VIDMM_DEVICE *)((char *)a2 + 160) )
      __fastfail(3u);
    *((_QWORD *)v18 + 15) = v29;
    *(_QWORD *)v28 = (char *)a2 + 160;
    *v29 = v28;
    *((_QWORD *)a2 + 21) = v28;
    *(_QWORD *)(v23 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v23, 0LL);
    KeLeaveCriticalRegion();
  }
  *((_DWORD *)v18 + 8) ^= (*((_DWORD *)v18 + 8) ^ (4 * *((_DWORD *)a3 + 19))) & 0xFC;
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a3 + 40));
  if ( *((_BYTE *)a3 + 96) == 1 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v31, v30, v32, v33) + 24) = a3;
    LODWORD(v10) = -1071775482;
    goto LABEL_88;
  }
  if ( (*((_BYTE *)a3 + 84) & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v31, v30, v32, v33) + 24) = a3;
    LODWORD(v10) = -1071775470;
    goto LABEL_88;
  }
  v34 = VIDMM_GLOBAL::OpenLocalAllocation((VIDMM_GLOBAL *)this, a3, *((struct VIDMM_PROCESS **)a2 + 1), a4, a8);
  v97 = v34;
  v35 = v34;
  if ( !v34 )
  {
    LODWORD(v10) = -1071775488;
LABEL_88:
    VIDMM_DEVICE::NotifyAllocationClosed(a2, v18);
    operator delete(v18);
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 40), v85, v86, v87);
    return (unsigned int)v10;
  }
  *(_QWORD *)v18 = v34;
  *((_QWORD *)v18 + 2) = a6;
  *((_QWORD *)v18 + 1) = a2;
  *((_QWORD *)v18 + 12) = *((_QWORD *)a3 + 63);
  v102 = **((_DWORD **)a3 + 63);
  *((_DWORD *)v18 + 7) ^= (*((_DWORD *)v18 + 7) ^ (v102 >> 26)) & 8;
  *((_BYTE *)v18 + 24) = a5 != 0;
  if ( a5 && (**((_DWORD **)a3 + 63) & 0x200000) != 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a6 + 1) + 40LL) + 290LL) )
  {
    v36 = a5 != 0;
    if ( *((_DWORD *)this + 1604) > 1u )
      v36 = 0;
    *((_BYTE *)v18 + 24) = v36;
  }
  *((_QWORD *)v18 + 20) = 0LL;
  *((_QWORD *)v18 + 17) = (char *)v18 + 128;
  *((_QWORD *)v18 + 16) = (char *)v18 + 128;
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a) )
  {
    *((_QWORD *)v18 + 19) = (char *)v18 + 144;
    *((_QWORD *)v18 + 18) = (char *)v18 + 144;
  }
  if ( ((_BYTE)this[5109] & 2) != 0 )
  {
    if ( (**((_DWORD **)a3 + 63) & 0x10000008) != 0 )
    {
      if ( DXGADAPTER::IsWarpAdapter(this[3]) )
      {
        v39 = *((_QWORD *)a3 + 47);
      }
      else
      {
        v99 = 0LL;
        v103 = 0LL;
        CurrentProcess = PsGetCurrentProcess(v40);
        v42 = MmMapViewOfSection(
                *((_QWORD *)a3 + 46),
                CurrentProcess,
                &v99,
                0LL,
                *((_QWORD *)a3 + 1),
                &v103,
                (char *)a3 + 8,
                2,
                0,
                4);
        v10 = v42;
        if ( v42 < 0 )
        {
          _InterlockedIncrement(&dword_1C003556C);
          v44 = (_QWORD *)WdLogNewEntry5_WdLowResource(v43);
          v44[3] = a3;
          v46 = PsGetCurrentProcess(v45);
          v44[5] = v10;
          v44[4] = v46;
          WdLogEvent5_WdLowResource(v44);
          DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 40), v47, v48, v49);
LABEL_81:
          memset(v108, 0, 0x50uLL);
          v71 = *((_DWORD *)a3 + 19) & 0x3F;
          LODWORD(v108[0]) = 200;
          v72 = 168 * v71;
          v73 = *((_QWORD *)v18 + 1);
          v108[2] = v18;
          v74 = VIDMM_GLOBAL::QueueDeferredCommand(
                  (VIDMM_GLOBAL *)this,
                  (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(v73 + 72) + v72),
                  (struct _VIDMM_DEFERRED_COMMAND *)v108,
                  1,
                  0LL);
          v79 = v74;
          if ( v74 < 0 )
          {
            v80 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v76, v75, v77, v78);
            v80[3] = 270LL;
            v80[4] = 5LL;
            v80[5] = 200LL;
            v80[6] = v79;
            v80[7] = 0LL;
            WdLogEvent5_WdCriticalError(v80);
          }
          KeWaitForSingleObject((char *)v18 + 72, Executive, 0, 0, 0LL);
          DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a3 + 40));
          v83 = (char *)v18 + 40;
          if ( *((_QWORD *)v18 + 5) )
          {
            v84 = *(_QWORD *)v83;
            v81 = (VIDMM_GLOBAL *)*((_QWORD *)v18 + 6);
            if ( *(char **)(*(_QWORD *)v83 + 8LL) != v83 || *(char **)v81 != v83 )
              __fastfail(3u);
            *(_QWORD *)v81 = v84;
            *(_QWORD *)(v84 + 8) = v81;
          }
          VIDMM_GLOBAL::CloseLocalAllocation(v81, v35, 1LL, v82);
          goto LABEL_88;
        }
        v39 = v99;
      }
    }
    else
    {
      v39 = *((_QWORD *)v35 + 2);
    }
    *((_QWORD *)v18 + 20) = v39;
  }
  v50 = (struct _VIDMM_LOCAL_ALLOC **)*((_QWORD *)v35 + 6);
  v51 = (VIDMM_ALLOC *)((char *)v18 + 40);
  if ( *v50 != (struct _VIDMM_LOCAL_ALLOC *)((char *)v35 + 40) )
    __fastfail(3u);
  *(_QWORD *)v51 = (char *)v35 + 40;
  *((_QWORD *)v18 + 6) = v50;
  *v50 = v51;
  *((_QWORD *)v35 + 6) = v51;
  v52 = (struct _KTHREAD **)*((_QWORD *)a3 + 40);
  if ( (**((_DWORD **)a3 + 63) & 0x40000000) != 0 )
  {
    DXGFASTMUTEX::Release(v52, (__int64)v50, v37, v38);
    if ( ((_DWORD)this[808] & 2) != 0
      && (**(_DWORD **)(*(_QWORD *)v35 + 504LL) & 0x20000000) != 0
      && v35 == *(struct _VIDMM_LOCAL_ALLOC **)(*(_QWORD *)v35 + 104LL) )
    {
      LODWORD(v10) = -1071775487;
      goto LABEL_81;
    }
    v53 = VIDMM_GLOBAL::PinOneAllocation((VIDMM_GLOBAL *)this, v18);
    v10 = v53;
    if ( v53 < 0 )
    {
      _InterlockedIncrement(&dword_1C00355D8);
      v55 = WdLogNewEntry5_WdLowResource(v54);
      *(_QWORD *)(v55 + 24) = v18;
      *(_QWORD *)(v55 + 32) = v10;
      WdLogEvent5_WdLowResource(v55);
      goto LABEL_81;
    }
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a3 + 40));
    if ( *((_BYTE *)a3 + 96) == 1 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v57, v56, v58, v59) + 24) = a3;
      LODWORD(v10) = -1071775482;
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 40), v56, v58, v59);
      goto LABEL_81;
    }
    if ( (*((_BYTE *)a3 + 84) & 1) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v57, v56, v58, v59) + 24) = a3;
      LODWORD(v10) = -1071775470;
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 40), v56, v58, v59);
      goto LABEL_81;
    }
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 40), v56, v58, v59);
  }
  else
  {
    DXGFASTMUTEX::Release(v52, (__int64)v50, v37, v38);
    v65 = *((_QWORD *)a2 + 3);
    if ( v65
      && (!*(_BYTE *)(v65 + 2874)
       && (*(_DWORD *)(v65 + 304) != 2
        || (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v65 + 16) + 16LL)) < 2000)
       || (*((_DWORD *)a3 + 20) & 0x20) != 0) )
    {
      v66 = *((_DWORD *)a3 + 19) & 0x3F;
      v100 = 0LL;
      v67 = 168 * v66;
      v68 = *((_QWORD *)v18 + 1);
      v104 = 0LL;
      v105 = v18;
      v69 = (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(v68 + 72) + v67);
      Resident = VIDMM_GLOBAL::MakeResident(
                   (VIDMM_GLOBAL *)this,
                   (struct VIDMM_PAGING_QUEUE *)v69,
                   &v105,
                   1uLL,
                   0,
                   &v100,
                   &v104);
      LODWORD(v10) = Resident;
      if ( Resident == 259 )
      {
        v107 = v69[11];
        v106 = v100;
        VIDMM_GLOBAL::WaitForFences((VIDMM_GLOBAL *)this, &v107, &v106, 1u, 0LL);
        LODWORD(v10) = 0;
      }
      else if ( Resident < 0 )
      {
        goto LABEL_81;
      }
    }
  }
  *((_DWORD *)v18 + 7) |= 0x40u;
  v60 = bTracingEnabled == 0;
  *a7 = v18;
  if ( !v60 )
  {
    v61 = *((_QWORD *)v18 + 2);
    if ( v61 )
    {
      v96 = *(_DWORD *)(v61 + 16);
      v62 = *(_QWORD *)(v61 + 40);
      if ( v62 )
      {
        v63 = *(_DWORD *)(v62 + 16);
        v101 = *(_QWORD *)(v62 + 48);
        v95 = v63;
      }
    }
    if ( (**((_DWORD **)a3 + 63) & 8) != 0 )
      v64 = *((_QWORD *)a3 + 47);
    else
      v64 = *((_QWORD *)v35 + 2);
    if ( v61 && (v88 = *(_QWORD *)(v61 + 40)) != 0 )
      v89 = *(_QWORD *)(v88 + 56);
    else
      v89 = 0LL;
    if ( v61 )
      v9 = *(_QWORD *)(v61 + 40);
    v90 = *((_QWORD *)a2 + 3);
    v109 = (struct VIDMM_ALLOC **)*((_QWORD *)v97 + 3);
    v98 = (__int64)this[3];
    CurrentProcessId = PsGetCurrentProcessId();
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      Template_pppppppppppp(
        v95,
        &EventCreateDeviceAllocation,
        (__int64)v109,
        CurrentProcessId,
        v90,
        v98,
        v18,
        a3,
        v9,
        v89,
        v96,
        v95,
        v101,
        v64,
        v109);
  }
  v92 = *((_QWORD *)a3 + 2);
  ++*((_DWORD *)this + 1906);
  this[954] = (DXGADAPTER *)((char *)this[954] + v92);
  return (unsigned int)v10;
}

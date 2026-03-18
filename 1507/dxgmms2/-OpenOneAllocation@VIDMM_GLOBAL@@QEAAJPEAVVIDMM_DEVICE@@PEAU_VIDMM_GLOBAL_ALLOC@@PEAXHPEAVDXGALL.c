/*
 * XREFs of ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00341E0
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C002F6E0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@IPEAXHPEAVDXGALLOCATION@@PEAPEAU_VIDMM_MULTI_ALLOC@@PEAIPEAE@Z @ 0x1C0030FA8 (-OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@IPEAXHPEAVDX.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00400F4 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C004C4FC (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C005EB98 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005B60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ?IsWarpAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00060A8 (-IsWarpAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0006AB8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     Template_pppppppppppp @ 0x1C000F46C (Template_pppppppppppp.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C002F508 (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C003241C (-NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C003397C (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0035A78 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?NotifyAllocationOpened@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00380B0 (-NotifyAllocationOpened@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C004F3F0 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C00510D0 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00518BC (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OpenOneAllocation(
        DXGADAPTER **this,
        struct VIDMM_PROCESS **a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        unsigned __int64 a4,
        int a5,
        struct DXGALLOCATION *a6,
        struct VIDMM_ALLOC **a7,
        unsigned __int8 *a8)
{
  __int64 v8; // rdi
  struct VIDMM_PROCESS **v10; // r12
  __int64 v13; // r14
  char *v14; // rax
  __int64 v15; // rcx
  char *v16; // rsi
  __int64 v17; // rax
  void **v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  void **v21; // r12
  int v22; // eax
  void *v23; // rax
  __int64 CurrentProcess; // rax
  int v25; // eax
  __int64 v26; // rcx
  _QWORD *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  void ***v32; // rdx
  void **v33; // rcx
  struct _KTHREAD **v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  struct VIDMM_DEVICE *v38; // r8
  bool v39; // zf
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned int v42; // ecx
  struct VIDMM_ALLOC **v43; // rax
  struct VIDMM_PROCESS *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rax
  struct _VIDSCH_SYNC_OBJECT **v48; // rbx
  int Resident; // eax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rbx
  _QWORD *v57; // rax
  VIDMM_GLOBAL *v58; // rcx
  char *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  __int64 v65; // rbx
  void *v66; // r12
  HANDLE CurrentProcessId; // r9
  __int64 v68; // rax
  unsigned int v70; // [rsp+88h] [rbp-80h]
  unsigned int v71; // [rsp+8Ch] [rbp-7Ch]
  struct _VIDSCH_SYNC_OBJECT *v72; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v73; // [rsp+98h] [rbp-70h] BYREF
  __int64 v74; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v75; // [rsp+A8h] [rbp-60h] BYREF
  void *v76; // [rsp+B0h] [rbp-58h] BYREF
  struct _VIDMM_MULTI_ALLOC *v77; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v78; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v79; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v80; // [rsp+D0h] [rbp-38h]
  _QWORD v81[10]; // [rsp+D8h] [rbp-30h] BYREF
  struct VIDMM_ALLOC **v83; // [rsp+188h] [rbp+80h]

  v8 = 0LL;
  v70 = 0;
  v10 = a2;
  v71 = 0;
  v74 = 0LL;
  *a7 = 0LL;
  LODWORD(v13) = 0;
  v14 = (char *)operator new(0xE8uLL, 0x33306956u, (POOL_TYPE)512);
  v16 = v14;
  if ( v14 )
  {
    memset(v14, 0, 0xE8uLL);
    KeInitializeEvent((PRKEVENT)v16 + 3, NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)v16 + 7, SynchronizationEvent, 0);
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v16 )
  {
    _InterlockedIncrement(&dword_1C00274C8);
    v17 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v17 + 24) = 3647LL;
    WdLogEvent5_WdLowResource(v17);
    LODWORD(v13) = -1073741801;
    return (unsigned int)v13;
  }
  v16[36] ^= (((VIDMM_GLOBAL::_Config & 4) != 0) ^ v16[36]) & 1;
  VIDMM_DEVICE::NotifyAllocationOpened((VIDMM_DEVICE *)v10, (struct VIDMM_ALLOC *)v16);
  *((_DWORD *)v16 + 8) ^= (*((_DWORD *)v16 + 8) ^ (4 * *((_DWORD *)a3 + 19))) & 0xFC;
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a3 + 39));
  if ( *((_BYTE *)a3 + 93) == 1 )
  {
    LODWORD(v13) = -1071775482;
LABEL_59:
    VIDMM_DEVICE::NotifyAllocationClosed((VIDMM_DEVICE *)v10, (struct VIDMM_ALLOC *)v16);
    operator delete(v16);
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 39), v61, v62, v63);
    return (unsigned int)v13;
  }
  if ( (*((_BYTE *)a3 + 84) & 1) != 0 )
  {
    LODWORD(v13) = -1071775470;
    goto LABEL_59;
  }
  v18 = VIDMM_GLOBAL::OpenLocalAllocation((VIDMM_GLOBAL *)this, a3, v10[1], a4, a8);
  v21 = v18;
  if ( !v18 )
  {
    LODWORD(v13) = -1071775488;
LABEL_58:
    v10 = a2;
    goto LABEL_59;
  }
  *(_QWORD *)v16 = v18;
  *((_QWORD *)v16 + 1) = a2;
  *((_QWORD *)v16 + 2) = a6;
  *((_QWORD *)v16 + 12) = *((_QWORD *)a3 + 59);
  v80 = **((_DWORD **)a3 + 59);
  v22 = (*((_DWORD *)v16 + 7) ^ (v80 >> 26)) & 8;
  *((_QWORD *)v16 + 18) = 0LL;
  *((_DWORD *)v16 + 7) ^= v22;
  v16[24] = a5 != 0;
  *((_QWORD *)v16 + 17) = v16 + 128;
  *((_QWORD *)v16 + 16) = v16 + 128;
  if ( ((_BYTE)this[5069] & 2) != 0 )
  {
    if ( (**((_DWORD **)a3 + 59) & 0x10000008) != 0 )
    {
      if ( DXGADAPTER::IsWarpAdapter(this[3]) )
      {
        v23 = (void *)*((_QWORD *)a3 + 45);
      }
      else
      {
        v76 = 0LL;
        v78 = 0LL;
        CurrentProcess = PsGetCurrentProcess();
        v25 = MmMapViewOfSection(
                *((_QWORD *)a3 + 44),
                CurrentProcess,
                &v76,
                0LL,
                *((_QWORD *)a3 + 1),
                &v78,
                (char *)a3 + 8,
                2,
                0,
                4);
        v13 = v25;
        if ( v25 < 0 )
        {
          _InterlockedIncrement(&dword_1C00274DC);
          v27 = (_QWORD *)WdLogNewEntry5_WdLowResource(v26);
          v27[3] = a3;
          v28 = PsGetCurrentProcess();
          v27[5] = v13;
          v27[4] = v28;
          WdLogEvent5_WdLowResource(v27);
LABEL_34:
          DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 39), v29, v30, v31);
          goto LABEL_51;
        }
        v23 = v76;
      }
    }
    else
    {
      v23 = v21[2];
    }
    *((_QWORD *)v16 + 18) = v23;
  }
  v32 = (void ***)v21[6];
  v33 = (void **)(v16 + 40);
  *((_QWORD *)v16 + 5) = v21 + 5;
  *((_QWORD *)v16 + 6) = v32;
  if ( *v32 != v21 + 5 )
    __fastfail(3u);
  *v32 = v33;
  v21[6] = v33;
  v34 = (struct _KTHREAD **)*((_QWORD *)a3 + 39);
  if ( (**((_DWORD **)a3 + 59) & 0x40000000) != 0 )
  {
    DXGFASTMUTEX::Release(v34, (__int64)v32, v19, v20);
    if ( (gVidMmGlobalFault & 0x8000) != 0
      && (**((_DWORD **)*v21 + 59) & 0x20000000) != 0
      && v21 == *((void ***)*v21 + 12) )
    {
      LODWORD(v13) = -1071775487;
LABEL_51:
      memset(v81, 0, sizeof(v81));
      v50 = *((_DWORD *)a3 + 19) & 0x3F;
      LODWORD(v81[0]) = 200;
      v51 = 152 * v50;
      v52 = *((_QWORD *)v16 + 1);
      v81[2] = v16;
      v53 = VIDMM_GLOBAL::QueueDeferredCommand(
              (VIDMM_GLOBAL *)this,
              (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(v52 + 64) + v51),
              (struct _VIDMM_DEFERRED_COMMAND *)v81,
              1,
              0LL);
      v56 = v53;
      if ( v53 < 0 )
      {
        v57 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v55, v54);
        v57[3] = 270LL;
        v57[4] = 5LL;
        v57[5] = 200LL;
        v57[6] = v56;
        v57[7] = 0LL;
        WdLogEvent5_WdCriticalError(v57);
      }
      KeWaitForSingleObject(v16 + 72, Executive, 0, 0, 0LL);
      DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a3 + 39));
      v59 = v16 + 40;
      if ( *((_QWORD *)v16 + 5) )
      {
        v60 = *(_QWORD *)v59;
        v58 = (VIDMM_GLOBAL *)*((_QWORD *)v16 + 6);
        if ( *(char **)(*(_QWORD *)v59 + 8LL) != v59 || *(char **)v58 != v59 )
          __fastfail(3u);
        *(_QWORD *)v58 = v60;
        *(_QWORD *)(v60 + 8) = v58;
      }
      VIDMM_GLOBAL::CloseLocalAllocation(v58, (struct _VIDMM_LOCAL_ALLOC *)v21, 1);
      goto LABEL_58;
    }
    v35 = VIDMM_GLOBAL::PinOneAllocation((VIDMM_GLOBAL *)this, (struct VIDMM_ALLOC *)v16);
    v13 = v35;
    if ( v35 < 0 )
    {
      _InterlockedIncrement(&dword_1C0027548);
      v37 = WdLogNewEntry5_WdLowResource(v36);
      *(_QWORD *)(v37 + 24) = v16;
      *(_QWORD *)(v37 + 32) = v13;
      WdLogEvent5_WdLowResource(v37);
      goto LABEL_51;
    }
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a3 + 39));
    if ( *((_BYTE *)a3 + 93) == 1 )
    {
      LODWORD(v13) = -1071775482;
      goto LABEL_34;
    }
    if ( (*((_BYTE *)a3 + 84) & 1) != 0 )
    {
      LODWORD(v13) = -1071775470;
      goto LABEL_34;
    }
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 39), v29, v30, v31);
  }
  else
  {
    DXGFASTMUTEX::Release(v34, (__int64)v32, v19, v20);
    v38 = (struct VIDMM_DEVICE *)a2;
    v44 = a2[3];
    if ( !v44
      || (*((_BYTE *)v44 + 18722)
       || *((_DWORD *)v44 + 70) == 2
       && (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)v44 + 2) + 16LL)) >= 2000)
      && (*((_DWORD *)a3 + 20) & 0x20) == 0 )
    {
      goto LABEL_37;
    }
    v45 = *((_DWORD *)a3 + 19) & 0x3F;
    v75 = 0LL;
    v46 = 152 * v45;
    v47 = *((_QWORD *)v16 + 1);
    v79 = 0LL;
    v77 = (struct _VIDMM_MULTI_ALLOC *)v16;
    v48 = (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(v47 + 64) + v46);
    Resident = VIDMM_GLOBAL::MakeResident(
                 (VIDMM_GLOBAL *)this,
                 (struct VIDMM_PAGING_QUEUE *)v48,
                 &v77,
                 1uLL,
                 0,
                 &v75,
                 &v79);
    LODWORD(v13) = Resident;
    if ( Resident == 259 )
    {
      v72 = v48[11];
      v73 = v75;
      VIDMM_GLOBAL::WaitForFences((VIDMM_GLOBAL *)this, &v72, &v73, 1u, 0LL);
      LODWORD(v13) = 0;
    }
    else if ( Resident < 0 )
    {
      goto LABEL_51;
    }
  }
  v38 = (struct VIDMM_DEVICE *)a2;
LABEL_37:
  v39 = bTracingEnabled == 0;
  *a7 = (struct VIDMM_ALLOC *)v16;
  if ( !v39 )
  {
    v40 = *((_QWORD *)v16 + 2);
    if ( v40 )
    {
      v70 = *(_DWORD *)(v40 + 16);
      v41 = *(_QWORD *)(v40 + 40);
      if ( v41 )
      {
        v42 = *(_DWORD *)(v41 + 16);
        v74 = *(_QWORD *)(v41 + 48);
        v71 = v42;
      }
    }
    if ( (**((_DWORD **)a3 + 59) & 8) != 0 )
      v43 = (struct VIDMM_ALLOC **)*((_QWORD *)a3 + 45);
    else
      v43 = (struct VIDMM_ALLOC **)v21[2];
    v83 = v43;
    if ( v40 && (v64 = *(_QWORD *)(v40 + 40)) != 0 )
      v65 = *(_QWORD *)(v64 + 56);
    else
      v65 = 0LL;
    if ( v40 )
      v8 = *(_QWORD *)(v40 + 40);
    v66 = v21[3];
    v73 = *((_QWORD *)v38 + 3);
    v72 = this[3];
    CurrentProcessId = PsGetCurrentProcessId();
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      Template_pppppppppppp(
        v71,
        &EventCreateDeviceAllocation,
        (__int64)v83,
        CurrentProcessId,
        v73,
        v72,
        v16,
        a3,
        v8,
        v65,
        v70,
        v71,
        v74,
        v83,
        v66);
  }
  v68 = *((_QWORD *)a3 + 2);
  ++*((_DWORD *)this + 1906);
  this[954] = (DXGADAPTER *)((char *)this[954] + v68);
  return (unsigned int)v13;
}

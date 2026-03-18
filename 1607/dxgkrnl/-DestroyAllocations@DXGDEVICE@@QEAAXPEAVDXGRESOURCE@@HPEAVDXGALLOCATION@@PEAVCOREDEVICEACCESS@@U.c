/*
 * XREFs of ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009BB8C
 * Callers:
 *     ?DrainAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C00951AC (-DrainAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0099060 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009BB04 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009C300 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 * Callees:
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x1C0006F28 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00072BC (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0007318 (-VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAU_VIDMM.c)
 *     ?VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00073A0 (-VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_.c)
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0007554 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000757C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0007DD4 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00082B8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0008570 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C000D7DC (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C008F6D0 (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1C0091A8C (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C00925B8 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00929C8 (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1C0096760 (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00967F4 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x1C00D2A78 (--1DXGALLOCATION@@QEAA@XZ.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C015E928 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C016CA50 (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllocations(
        DXGDEVICE *this,
        unsigned __int64 a2,
        int a3,
        struct DXGALLOCATION *a4,
        PERESOURCE **a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  __int64 v6; // rax
  PERESOURCE **v8; // rdi
  struct DXGALLOCATION *v10; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGALLOCATION *v15; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  HANDLE *v18; // r12
  __int64 v19; // rax
  struct DXGALLOCATION *v20; // r14
  __int64 v21; // rax
  unsigned int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rax
  ADAPTER_RENDER *v25; // rcx
  DXGOVERLAY *i; // rbx
  unsigned int v27; // ebx
  unsigned int v28; // ebx
  struct DXGALLOCATION *v29; // r9
  struct _VIDMM_MULTI_ALLOC *v30; // r8
  __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rbx
  struct _KTHREAD **Current; // rax
  int v36; // ebx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  void *v40; // rdx
  ADAPTER_RENDER *v41; // rcx
  void *v42; // rcx
  char v43; // di
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned int v53; // r8d
  struct DXGALLOCATION *v54; // rbx
  struct DXGALLOCATION *v55; // r14
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v59; // r9
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  DXGADAPTERALLOCATION *v63; // rbx
  __int64 v64; // rcx
  __int64 v65; // rax
  struct DXGALLOCATION *v66; // rbx
  HANDLE *v68; // [rsp+38h] [rbp-C8h]
  void *v69; // [rsp+38h] [rbp-C8h]
  char v70[8]; // [rsp+48h] [rbp-B8h] BYREF
  char v71; // [rsp+50h] [rbp-B0h]
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  _DXGKARG_CLOSEALLOCATION v73; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGKARG_DESTROYALLOCATION v74; // [rsp+70h] [rbp-90h] BYREF
  char v75[8]; // [rsp+90h] [rbp-70h] BYREF
  struct DXGALLOCATION *v76; // [rsp+98h] [rbp-68h]
  struct DXGALLOCATION *v77; // [rsp+A0h] [rbp-60h]
  _BYTE v78[128]; // [rsp+B0h] [rbp-50h] BYREF

  v6 = *((_QWORD *)this + 2);
  v8 = a5;
  v10 = a4;
  v77 = a4;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v6 + 16)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v16 + 24) = 1153LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10));
  v17 = a2 & -(__int64)(a3 != 0);
  if ( !v17 || (v18 = *(HANDLE **)((a2 & -(__int64)(a3 != 0)) + 0x40), (v68 = v18) == 0LL) )
  {
    v18 = (HANDLE *)v78;
    v68 = (HANDLE *)v78;
  }
  v73.NumAllocations = 0;
  if ( a2 && a3 )
  {
    v19 = WdLogNewEntry5_WdTrace(v17, v12, v14, v15);
    *(_QWORD *)(v19 + 24) = a2;
    v17 = *(_QWORD *)(a2 + 8);
    v12 = *(_QWORD *)(v17 + 40);
    *(_QWORD *)(v19 + 32) = v12;
  }
  v20 = v10;
  if ( v10 )
  {
    do
    {
      v76 = (struct DXGALLOCATION *)*((_QWORD *)v20 + 8);
      v21 = WdLogNewEntry5_WdTrace(v17, v12, v14, v15);
      *(_QWORD *)(v21 + 24) = v20;
      *(_QWORD *)(v21 + 32) = *(_QWORD *)(*((_QWORD *)v20 + 1) + 40LL);
      v22 = *(_DWORD *)(*((_QWORD *)v20 + 6) + 4LL);
      if ( (v22 & 1) != 0 )
      {
        v23 = (v22 >> 6) & 0xF;
        if ( (unsigned int)v23 >= *((_DWORD *)this + 716) )
        {
          v24 = WdLogNewEntry5_WdAssertion(v23);
          *(_QWORD *)(v24 + 24) = 1219LL;
          WdLogEvent5_WdAssertion(v24);
        }
        DXGDEVICE::RemovePrimaryAllocation((DXGADAPTER **)this, v20);
      }
      v25 = (ADAPTER_RENDER *)*(unsigned int *)(*((_QWORD *)v20 + 6) + 4LL);
      if ( ((unsigned __int8)v25 & 8) != 0 )
      {
        DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v70, *((struct ADAPTER_RENDER **)this + 2));
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v70);
        for ( i = (DXGOVERLAY *)*((_QWORD *)this + 41); i != (DXGDEVICE *)((char *)this + 328) && i; i = *(DXGOVERLAY **)i )
        {
          if ( *((struct DXGALLOCATION **)i + 6) == v20 )
            DXGOVERLAY::Destroy(i);
        }
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v70);
        if ( v71 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v70);
        v8 = a5;
      }
      v27 = *(_DWORD *)(*((_QWORD *)v20 + 6) + 4LL);
      if ( (v27 & 0x2000) != 0 && *((_QWORD *)v20 + 3) )
      {
        v28 = (v27 >> 6) & 0xF;
        DXGDEVICE::RemoveDirectFlipAllocationFromList(this, v28, v20);
        DXGDEVICE::TestAndSetDisplayedPrimary((struct _KTHREAD **)this, v28, v20, v29);
      }
      v30 = (struct _VIDMM_MULTI_ALLOC *)*((_QWORD *)v20 + 3);
      if ( v30 && (*((_DWORD *)v20 + 18) & 0x800) != 0 )
      {
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
          v30);
        *((_DWORD *)v20 + 18) &= ~0x800u;
      }
      ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(v25, v20, v8);
      v31 = *((_QWORD *)v20 + 3);
      if ( v31 )
      {
        v32 = *((_QWORD *)this + 2);
        Object = 0LL;
        v33 = *(_QWORD *)(v32 + 408);
        v34 = *(_QWORD *)(v32 + 400);
        Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
        DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)v75, Current);
        v36 = (*(__int64 (__fastcall **)(__int64, __int64, PVOID *, _QWORD))(*(_QWORD *)(v34 + 8) + 168LL))(
                v33,
                v31,
                &Object,
                a6.Value);
        DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)v75);
        if ( v36 >= 0 )
        {
          v8 = a5;
        }
        else
        {
          if ( v36 != -1071775486 )
          {
            v38 = WdLogNewEntry5_WdAssertion(v37);
            *(_QWORD *)(v38 + 24) = 1287LL;
            WdLogEvent5_WdAssertion(v38);
          }
          v39 = WdLogNewEntry5_WdTrace(v37, v12, v14, v15);
          v8 = a5;
          *(_QWORD *)(v39 + 24) = *((_QWORD *)this + 70);
          *(_QWORD *)(v39 + 32) = *((_QWORD *)v20 + 3);
          if ( a5 && !DXGADAPTER::IsCoreResourceExclusiveOwner(a5[3]) )
          {
            COREDEVICEACCESS::Release((COREDEVICEACCESS *)a5);
            if ( Object )
            {
              if ( KeWaitForSingleObject(Object, Executive, 0, 1u, 0LL) == 257 )
              {
                DXGDEVICE::FlushScheduler(this, 3);
                KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
              }
            }
            else
            {
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                              + 400LL)
                                                                                  + 8LL)
                                                                      + 608LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 408LL),
                *((_QWORD *)v20 + 3),
                0LL,
                4LL);
            }
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a5);
          }
          VIDMM_EXPORT::VidMmCloseAllocation(
            *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
            *((struct _VIDMM_MULTI_ALLOC **)v20 + 3),
            0LL,
            a6);
        }
        *((_QWORD *)v20 + 3) = 0LL;
      }
      v17 = *((_QWORD *)v20 + 4);
      v18 = v68;
      if ( v17 )
      {
        v68[v73.NumAllocations++] = (HANDLE)v17;
        *((_QWORD *)v20 + 4) = 0LL;
      }
      v20 = v76;
    }
    while ( v76 );
  }
  if ( v73.NumAllocations )
  {
    v40 = (void *)*((_QWORD *)this + 48);
    v41 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
    v73.pOpenHandleList = v18;
    ADAPTER_RENDER::DdiCloseAllocation(v41, v40, &v73);
  }
  v42 = 0LL;
  v69 = 0LL;
  v43 = 1;
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 4) & 1) != 0 )
    {
      v44 = *(_QWORD *)(a2 + 56);
      if ( v44 )
      {
        v45 = *(_QWORD *)(v44 + 144);
        if ( v45 )
        {
          if ( *(DXGDEVICE **)(v45 + 72) == this && (*(_DWORD *)(v45 + 64))-- == 1 )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)v70,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 144LL) + 8LL));
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v70);
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 144LL) + 72LL) = 0LL;
            if ( v71 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v70);
          }
        }
        v47 = *(_QWORD *)(a2 + 56);
        v48 = *(_QWORD *)(v47 + 128);
        if ( (*(_DWORD *)(v48 - 44) & 2) != 0 )
        {
          if ( *(_DWORD *)(v47 + 124) != 1 )
          {
            v47 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
            if ( *(_DWORD *)(v47 + 248) <= 1u || !DXGADAPTER::IsDxgmms2((DXGADAPTER *)v47) )
            {
              v49 = WdLogNewEntry5_WdAssertion(v47);
              *(_QWORD *)(v49 + 24) = 1403LL;
              WdLogEvent5_WdAssertion(v49);
            }
          }
          if ( ((*(_DWORD *)(v48 - 44) >> 6) & 0xFu) >= *((_DWORD *)this + 716) )
          {
            v50 = WdLogNewEntry5_WdAssertion(v47);
            *(_QWORD *)(v50 + 24) = 1404LL;
            WdLogEvent5_WdAssertion(v50);
          }
          v51 = (*(_DWORD *)(v48 - 44) >> 6) & 0xF;
          if ( *((_QWORD *)this + v51 + 54) == a2 )
          {
            *((_QWORD *)this + v51 + 54) = 0LL;
            DXGDEVICE::TestAndSetDisplayedPrimary(
              (struct _KTHREAD **)this,
              (*(_DWORD *)(v48 - 44) >> 6) & 0xF,
              *(const struct DXGALLOCATION **)(a2 + 24),
              v15);
          }
        }
        v52 = *(_QWORD *)(a2 + 24);
        v53 = 0;
        while ( v52 )
        {
          v52 = *(_QWORD *)(v52 + 64);
          ++v53;
        }
        DXGSHAREDRESOURCE::ReleaseReference(*(DXGSHAREDRESOURCE **)(a2 + 56), v18, v53);
        *(_QWORD *)(a2 + 56) = 0LL;
        v42 = 0LL;
      }
      v43 = 0;
    }
    else
    {
      v42 = *(void **)(a2 + 56);
      v69 = v42;
    }
  }
  v74.NumAllocations = 0;
  v54 = v10;
  if ( v10 )
  {
    while ( 1 )
    {
      v55 = (struct DXGALLOCATION *)*((_QWORD *)v54 + 8);
      if ( (*((_DWORD *)v54 + 18) & 0x800) != 0 )
      {
        v56 = WdLogNewEntry5_WdAssertion(v42);
        *(_QWORD *)(v56 + 24) = 1458LL;
        WdLogEvent5_WdAssertion(v56);
      }
      if ( (*((_DWORD *)v54 + 18) & 0x7FE) != 0 )
      {
        v57 = WdLogNewEntry5_WdAssertion(v42);
        *(_QWORD *)(v57 + 24) = 1459LL;
        WdLogEvent5_WdAssertion(v57);
      }
      v58 = *((_QWORD *)v54 + 6);
      if ( v58 )
      {
        if ( !v43 )
          goto LABEL_86;
        v59 = *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v58 + 8);
        if ( v59 )
        {
          VIDMM_EXPORT::VidMmDestroyAllocation(
            *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
            *((struct VIDMM_DEVICE **)this + 70),
            0LL,
            v59);
          *(_QWORD *)(*((_QWORD *)v54 + 6) + 8LL) = 0LL;
        }
        v42 = *(void **)(*((_QWORD *)v54 + 6) + 16LL);
        if ( v42 )
        {
          v18[v74.NumAllocations++] = v42;
          *(_QWORD *)(*((_QWORD *)v54 + 6) + 16LL) = 0LL;
        }
      }
      else if ( !v43 )
      {
LABEL_86:
        if ( !a2 )
        {
          v60 = WdLogNewEntry5_WdAssertion(v42);
          *(_QWORD *)(v60 + 24) = 1487LL;
          WdLogEvent5_WdAssertion(v60);
        }
        if ( (*(_DWORD *)(a2 + 4) & 1) == 0 )
        {
          v61 = WdLogNewEntry5_WdAssertion(v42);
          *(_QWORD *)(v61 + 24) = 1488LL;
          WdLogEvent5_WdAssertion(v61);
        }
        if ( !a3 )
        {
          v62 = WdLogNewEntry5_WdAssertion(v42);
          *(_QWORD *)(v62 + 24) = 1489LL;
          WdLogEvent5_WdAssertion(v62);
        }
      }
      v63 = (DXGADAPTERALLOCATION *)*((_QWORD *)v54 + 6);
      if ( (!a2 || (*(_DWORD *)(a2 + 4) & 1) == 0) && v63 )
      {
        DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(v63);
        operator delete(v63);
      }
      v54 = v55;
      if ( !v55 )
      {
        v10 = v77;
        v42 = v69;
        break;
      }
    }
  }
  if ( v43 )
  {
    v74.Flags.Value = 0;
    if ( a2 )
      v74.Flags.Value = a3 != 0;
    v74.hResource = v42;
    if ( v74.NumAllocations )
    {
      v74.pAllocationList = v18;
    }
    else
    {
      v74.pAllocationList = 0LL;
      if ( !a3 || !v42 )
        goto LABEL_111;
    }
    ADAPTER_RENDER::DdiDestroyAllocation(*((ADAPTER_RENDER **)this + 2), &v74, v14);
    if ( a2 && !a3 )
    {
      if ( (*(_DWORD *)(a2 + 4) & 1) != 0 )
      {
        v65 = WdLogNewEntry5_WdAssertion(v64);
        *(_QWORD *)(v65 + 24) = 1537LL;
        WdLogEvent5_WdAssertion(v65);
      }
      *(_QWORD *)(a2 + 56) = v74.hResource;
    }
  }
LABEL_111:
  if ( v10 )
  {
    do
    {
      v66 = (struct DXGALLOCATION *)*((_QWORD *)v10 + 8);
      DXGALLOCATION::~DXGALLOCATION(v10);
      ExFreePoolWithTag(v10, 0);
      v10 = v66;
    }
    while ( v66 );
  }
}

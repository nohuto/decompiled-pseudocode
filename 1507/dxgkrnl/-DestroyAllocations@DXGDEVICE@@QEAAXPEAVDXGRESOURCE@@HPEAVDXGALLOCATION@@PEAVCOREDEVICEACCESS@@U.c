/*
 * XREFs of ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00800E0
 * Callers:
 *     ?DrainAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C0079D3C (-DrainAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007D760 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0080050 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00808F0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001B44 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001E0C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002474 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0005380 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C000B49C (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C000B650 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C000B670 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C00904BC (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00906EC (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009206C (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1C009265C (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C00932EC (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z.c)
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x1C00A8CEC (--1DXGALLOCATION@@QEAA@XZ.c)
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1C00B7AE0 (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C0136A8C (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C01423A0 (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllocations(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        int a3,
        struct DXGALLOCATION *a4,
        PERESOURCE **a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  __int64 v8; // rax
  struct DXGALLOCATION *v9; // r13
  unsigned __int64 v10; // rsi
  const HANDLE *v11; // rdx
  __int64 v12; // rcx
  struct _VIDMM_MULTI_ALLOC *v13; // r8
  struct DXGALLOCATION *v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  HANDLE *v17; // r15
  __int64 v18; // rax
  struct DXGALLOCATION *v19; // rdi
  COREDEVICEACCESS *v20; // r12
  __int64 v21; // rax
  ADAPTER_RENDER *v22; // rcx
  __int64 v23; // r8
  unsigned int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  DXGOVERLAY *i; // rbx
  unsigned int v29; // ebx
  unsigned int v30; // ebx
  struct DXGALLOCATION *v31; // r9
  __int64 v32; // rax
  __int64 v33; // r12
  __int64 v34; // r15
  __int64 v35; // r13
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v37; // rbx
  __int64 v38; // rcx
  int v39; // r15d
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // r12
  __int64 v45; // r15
  __int64 v46; // r13
  struct DXGPROCESS *v47; // rax
  struct DXGPROCESS *v48; // rbx
  void *v49; // rdx
  ADAPTER_RENDER *v50; // rcx
  COREDEVICEACCESS *v51; // rcx
  char v52; // r12
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  volatile signed __int32 *v62; // rcx
  struct DXGALLOCATION *v63; // r15
  struct DXGALLOCATION *v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // r13
  __int64 v69; // rdi
  __int64 v70; // rbx
  struct _KTHREAD **v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  void *v76; // rbx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rax
  struct DXGALLOCATION *v82; // rbx
  COREDEVICEACCESS *v83; // [rsp+30h] [rbp-D0h]
  COREDEVICEACCESS *v84; // [rsp+30h] [rbp-D0h]
  const HANDLE *v86; // [rsp+40h] [rbp-C0h]
  struct DXGALLOCATION *v88; // [rsp+48h] [rbp-B8h]
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  _DXGKARG_CLOSEALLOCATION v90; // [rsp+58h] [rbp-A8h] BYREF
  _DXGKARG_DESTROYALLOCATION v91; // [rsp+68h] [rbp-98h] BYREF
  struct DXGALLOCATION *v92; // [rsp+88h] [rbp-78h]
  _BYTE v93[16]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v94; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v95[24]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v96[128]; // [rsp+C0h] [rbp-40h] BYREF

  v8 = *((_QWORD *)this + 2);
  v9 = a4;
  v92 = a4;
  v10 = (unsigned __int64)a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v8 + 16)) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v15 + 24) = 1123LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10));
  v16 = v10 & -(__int64)(a3 != 0);
  if ( !v16 || (v17 = *(HANDLE **)((v10 & -(__int64)(a3 != 0)) + 0x40), (v86 = v17) == 0LL) )
  {
    v17 = (HANDLE *)v96;
    v86 = (const HANDLE *)v96;
  }
  v90.NumAllocations = 0;
  if ( v10 && a3 )
  {
    v18 = WdLogNewEntry5_WdTrace(v16, v11, v13, v14);
    *(_QWORD *)(v18 + 24) = v10;
    v16 = *(_QWORD *)(v10 + 8);
    v11 = *(const HANDLE **)(v16 + 40);
    *(_QWORD *)(v18 + 32) = v11;
  }
  v19 = v9;
  if ( v9 )
  {
    do
    {
      v20 = (COREDEVICEACCESS *)*((_QWORD *)v19 + 8);
      v83 = v20;
      v21 = WdLogNewEntry5_WdTrace(v16, v11, v13, v14);
      *(_QWORD *)(v21 + 24) = v19;
      v22 = (ADAPTER_RENDER *)*((_QWORD *)v19 + 1);
      *(_QWORD *)(v21 + 32) = *((_QWORD *)v22 + 5);
      ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(v22, v19, (struct COREDEVICEACCESS *)a5);
      v24 = *(_DWORD *)(*((_QWORD *)v19 + 6) + 4LL);
      if ( (v24 & 1) != 0 )
      {
        v25 = (v24 >> 6) & 0xF;
        if ( (unsigned int)v25 >= *((_DWORD *)this + 4678) )
        {
          v26 = WdLogNewEntry5_WdAssertion(v25, v11, v23, v14);
          *(_QWORD *)(v26 + 24) = 1191LL;
          WdLogEvent5_WdAssertion(v26);
        }
        DXGDEVICE::RemovePrimaryAllocation(this, v19);
      }
      v27 = *(unsigned int *)(*((_QWORD *)v19 + 6) + 4LL);
      if ( (v27 & 8) != 0 )
      {
        DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v93, *((struct ADAPTER_RENDER **)this + 2));
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v93);
        for ( i = (DXGOVERLAY *)*((_QWORD *)this + 38); i != (DXGDEVICE *)((char *)this + 304) && i; i = *(DXGOVERLAY **)i )
        {
          if ( *((struct DXGALLOCATION **)i + 6) == v19 )
            DXGOVERLAY::Destroy(i);
        }
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v93);
        if ( v93[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v93);
      }
      v29 = *(_DWORD *)(*((_QWORD *)v19 + 6) + 4LL);
      if ( (v29 & 0x2000) != 0 && *((_QWORD *)v19 + 3) )
      {
        v30 = (v29 >> 6) & 0xF;
        DXGDEVICE::RemoveDirectFlipAllocationFromList(this, v30, v19);
        DXGDEVICE::TestAndSetDisplayedPrimary(this, v30, v19, v31);
      }
      v13 = (struct _VIDMM_MULTI_ALLOC *)*((_QWORD *)v19 + 3);
      if ( v13 )
      {
        if ( (*((_DWORD *)v19 + 18) & 0x100) != 0 )
        {
          VIDMM_EXPORT::VidMmUnpinAllocation(
            *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
            v13);
          *((_DWORD *)v19 + 18) &= ~0x100u;
        }
        v32 = *((_QWORD *)this + 2);
        Object = 0LL;
        v33 = *((_QWORD *)v19 + 3);
        v34 = *(_QWORD *)(v32 + 408);
        v35 = *(_QWORD *)(v32 + 400);
        Current = DXGPROCESS::GetCurrent(v27);
        v37 = Current;
        if ( Current )
        {
          if ( *((struct _KTHREAD **)Current + 16) == KeGetCurrentThread() )
            v37 = 0LL;
          else
            DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 120));
        }
        v39 = (*(__int64 (__fastcall **)(__int64, __int64, PVOID *, _QWORD))(*(_QWORD *)(v35 + 8) + 168LL))(
                v34,
                v33,
                &Object,
                a6.Value);
        if ( v37 )
        {
          *((_QWORD *)v37 + 16) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v37 + 120, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( v39 < 0 )
        {
          if ( v39 != -1071775486 )
          {
            v40 = WdLogNewEntry5_WdAssertion(v38, v11, v13, v14);
            *(_QWORD *)(v40 + 24) = 1250LL;
            WdLogEvent5_WdAssertion(v40);
          }
          v41 = WdLogNewEntry5_WdTrace(v38, v11, v13, v14);
          *(_QWORD *)(v41 + 24) = *((_QWORD *)this + 67);
          v42 = *((_QWORD *)v19 + 3);
          *(_QWORD *)(v41 + 32) = v42;
          if ( a5 && !DXGADAPTER::IsCoreResourceExclusiveOwner(a5[2]) )
          {
            COREDEVICEACCESS::Release((COREDEVICEACCESS *)a5);
            if ( Object )
              KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
            else
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                              + 400LL)
                                                                                  + 8LL)
                                                                      + 592LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 408LL),
                *((_QWORD *)v19 + 3),
                0LL,
                4LL);
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a5);
          }
          v43 = *((_QWORD *)this + 2);
          v44 = *((_QWORD *)v19 + 3);
          v45 = *(_QWORD *)(v43 + 408);
          v46 = *(_QWORD *)(v43 + 400);
          v47 = DXGPROCESS::GetCurrent(v42);
          v48 = v47;
          if ( v47 )
          {
            if ( *((struct _KTHREAD **)v47 + 16) == KeGetCurrentThread() )
              v48 = 0LL;
            else
              DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v47 + 120));
          }
          (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)(v46 + 8) + 160LL))(
            v45,
            v44,
            0LL,
            a6.Value);
          if ( v48 )
          {
            *((_QWORD *)v48 + 16) = 0LL;
            ExReleasePushLockExclusiveEx((char *)v48 + 120, 0LL);
            KeLeaveCriticalRegion();
          }
        }
        *((_QWORD *)v19 + 3) = 0LL;
        v20 = v83;
      }
      v16 = *((_QWORD *)v19 + 4);
      v17 = (HANDLE *)v86;
      if ( v16 )
      {
        v86[v90.NumAllocations++] = (const HANDLE)v16;
        *((_QWORD *)v19 + 4) = 0LL;
      }
      v19 = v20;
    }
    while ( v20 );
    v10 = (unsigned __int64)a2;
    v9 = v92;
  }
  if ( v90.NumAllocations )
  {
    v49 = (void *)*((_QWORD *)this + 45);
    v50 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
    v90.pOpenHandleList = v17;
    ADAPTER_RENDER::DdiCloseAllocation(v50, v49, &v90);
  }
  v51 = 0LL;
  v84 = 0LL;
  v52 = 1;
  if ( v10 )
  {
    if ( (*(_DWORD *)(v10 + 4) & 1) != 0 )
    {
      v53 = *(_QWORD *)(v10 + 56);
      if ( v53 )
      {
        v54 = *(_QWORD *)(v53 + 136);
        if ( v54 )
        {
          if ( *(DXGDEVICE **)(v54 + 72) == this && (*(_DWORD *)(v54 + 64))-- == 1 )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)v95,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(v10 + 56) + 136LL) + 8LL));
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v95);
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 56) + 136LL) + 72LL) = 0LL;
            if ( v95[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v95);
          }
        }
        v56 = *(_QWORD *)(v10 + 56);
        v57 = *(_QWORD *)(v56 + 120);
        if ( (*(_DWORD *)(v57 - 44) & 2) != 0 )
        {
          if ( *(_DWORD *)(v56 + 116) != 1 )
          {
            v56 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
            if ( *(_DWORD *)(v56 + 232) <= 1u || !DXGADAPTER::IsDxgmms2((DXGADAPTER *)v56) )
            {
              v58 = WdLogNewEntry5_WdAssertion(v56, v11, v13, v14);
              *(_QWORD *)(v58 + 24) = 1349LL;
              WdLogEvent5_WdAssertion(v58);
            }
          }
          if ( ((*(_DWORD *)(v57 - 44) >> 6) & 0xFu) >= *((_DWORD *)this + 4678) )
          {
            v59 = WdLogNewEntry5_WdAssertion(v56, v11, v13, v14);
            *(_QWORD *)(v59 + 24) = 1350LL;
            WdLogEvent5_WdAssertion(v59);
          }
          v60 = (*(_DWORD *)(v57 - 44) >> 6) & 0xF;
          if ( *((_QWORD *)this + v60 + 51) == v10 )
          {
            *((_QWORD *)this + v60 + 51) = 0LL;
            DXGDEVICE::TestAndSetDisplayedPrimary(
              this,
              (*(_DWORD *)(v57 - 44) >> 6) & 0xF,
              *(const struct DXGALLOCATION **)(v10 + 24),
              v14);
          }
        }
        v61 = *(_QWORD *)(v10 + 24);
        v13 = 0LL;
        while ( v61 )
        {
          v61 = *(_QWORD *)(v61 + 64);
          v13 = (struct _VIDMM_MULTI_ALLOC *)(unsigned int)((_DWORD)v13 + 1);
        }
        v62 = *(volatile signed __int32 **)(v10 + 56);
        if ( _InterlockedExchangeAdd(v62 + 15, 0xFFFFFFFF) == 1 )
          DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v62, v17, (unsigned int)v13);
        *(_QWORD *)(v10 + 56) = 0LL;
        v51 = 0LL;
      }
      v52 = 0;
    }
    else
    {
      v51 = *(COREDEVICEACCESS **)(v10 + 56);
      v84 = v51;
    }
  }
  v91.NumAllocations = 0;
  v63 = v9;
  if ( v9 )
  {
    while ( 1 )
    {
      v64 = (struct DXGALLOCATION *)*((_QWORD *)v63 + 8);
      v88 = v64;
      if ( (*((_DWORD *)v63 + 18) & 0x100) != 0 )
      {
        v65 = WdLogNewEntry5_WdAssertion(v51, v11, v13, v14);
        *(_QWORD *)(v65 + 24) = 1404LL;
        WdLogEvent5_WdAssertion(v65);
      }
      if ( (*((_DWORD *)v63 + 18) & 0xFE) != 0 )
      {
        v66 = WdLogNewEntry5_WdAssertion(v51, v11, v13, v14);
        *(_QWORD *)(v66 + 24) = 1405LL;
        WdLogEvent5_WdAssertion(v66);
      }
      v67 = *((_QWORD *)v63 + 6);
      if ( v67 )
      {
        if ( !v52 )
          goto LABEL_98;
        v68 = *(_QWORD *)(v67 + 8);
        if ( v68 )
        {
          v69 = *((_QWORD *)this + 67);
          v70 = *(_QWORD *)(*((_QWORD *)this + 2) + 400LL);
          v71 = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)v51);
          DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v94, v71);
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v70 + 8) + 128LL))(v69, 0LL, v68);
          if ( v94 )
          {
            v72 = v94 + 120;
            *(_QWORD *)(v94 + 128) = 0LL;
            ExReleasePushLockExclusiveEx(v72, 0LL);
            KeLeaveCriticalRegion();
          }
          v64 = v88;
          *(_QWORD *)(*((_QWORD *)v63 + 6) + 8LL) = 0LL;
        }
        v51 = *(COREDEVICEACCESS **)(*((_QWORD *)v63 + 6) + 16LL);
        if ( v51 )
        {
          v11 = v86;
          v86[v91.NumAllocations++] = v51;
          *(_QWORD *)(*((_QWORD *)v63 + 6) + 16LL) = 0LL;
        }
      }
      else if ( !v52 )
      {
LABEL_98:
        if ( !v10 )
        {
          v73 = WdLogNewEntry5_WdAssertion(v51, v11, v13, v14);
          *(_QWORD *)(v73 + 24) = 1433LL;
          WdLogEvent5_WdAssertion(v73);
        }
        if ( (*(_DWORD *)(v10 + 4) & 1) == 0 )
        {
          v74 = WdLogNewEntry5_WdAssertion(v51, v11, v13, v14);
          *(_QWORD *)(v74 + 24) = 1434LL;
          WdLogEvent5_WdAssertion(v74);
        }
        if ( !a3 )
        {
          v75 = WdLogNewEntry5_WdAssertion(v51, v11, v13, v14);
          *(_QWORD *)(v75 + 24) = 1435LL;
          WdLogEvent5_WdAssertion(v75);
        }
      }
      v76 = (void *)*((_QWORD *)v63 + 6);
      if ( (!v10 || (*(_DWORD *)(v10 + 4) & 1) == 0) && v76 )
      {
        DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(*((DXGADAPTERALLOCATION **)v63 + 6));
        operator delete(v76);
      }
      v63 = v64;
      if ( !v64 )
      {
        v9 = v92;
        v51 = v84;
        break;
      }
    }
  }
  if ( v52 )
  {
    v91.Flags.Value = 0;
    if ( v10 )
      v91.Flags.Value = a3 != 0;
    v91.hResource = v51;
    if ( v91.NumAllocations )
    {
      v91.pAllocationList = v86;
    }
    else
    {
      v91.pAllocationList = 0LL;
      if ( !a3 || !v51 )
        goto LABEL_123;
    }
    ADAPTER_RENDER::DdiDestroyAllocation(*((ADAPTER_RENDER **)this + 2), &v91);
    if ( v10 && !a3 )
    {
      if ( (*(_DWORD *)(v10 + 4) & 1) != 0 )
      {
        v81 = WdLogNewEntry5_WdAssertion(v78, v77, v79, v80);
        *(_QWORD *)(v81 + 24) = 1483LL;
        WdLogEvent5_WdAssertion(v81);
      }
      *(_QWORD *)(v10 + 56) = v91.hResource;
    }
  }
LABEL_123:
  if ( v9 )
  {
    do
    {
      v82 = (struct DXGALLOCATION *)*((_QWORD *)v9 + 8);
      DXGALLOCATION::~DXGALLOCATION(v9);
      ExFreePoolWithTag(v9, 0);
      v9 = v82;
    }
    while ( v82 );
  }
}

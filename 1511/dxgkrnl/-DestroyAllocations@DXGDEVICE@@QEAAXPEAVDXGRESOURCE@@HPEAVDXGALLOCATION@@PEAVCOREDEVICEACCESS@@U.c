/*
 * XREFs of ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00742C4
 * Callers:
 *     ?DrainAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C006CDAC (-DrainAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0070760 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0074234 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0074AD0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 * Callees:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0002258 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0003150 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0004604 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000481C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C000CFA8 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C0065BE4 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1C0069020 (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C0069BA8 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C006B0FC (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1C006E120 (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C0094580 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00BC0E0 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C013B158 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C0147E00 (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllocations(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        int a3,
        struct DXGALLOCATION *a4,
        struct COREDEVICEACCESS *a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  struct DXGALLOCATION *v7; // r12
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // r8
  struct DXGALLOCATION *v13; // r9
  const HANDLE *v14; // rbx
  struct DXGALLOCATION *v15; // rdi
  __int64 v16; // rax
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  struct _VIDMM_MULTI_ALLOC *v19; // r8
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v22; // r15
  __int64 v23; // rcx
  __int64 v24; // r8
  char v25; // bl
  __int64 v26; // r12
  __int64 v27; // rax
  struct DXGPROCESS *Current; // rbx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  int v32; // r15d
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r12
  struct DXGPROCESS *v36; // rax
  struct DXGPROCESS *v37; // rbx
  char *v38; // r15
  __int64 v39; // rcx
  __int64 v40; // r8
  void *v41; // rdx
  ADAPTER_RENDER *v42; // rcx
  void *v43; // rcx
  char v44; // r15
  struct DXGALLOCATION *v45; // r13
  __int64 v46; // rax
  __int64 v47; // r12
  __int64 v48; // rdi
  __int64 v49; // rbx
  struct _KTHREAD **v50; // rax
  __int64 v51; // rcx
  void *v52; // rcx
  void *v53; // rbx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // rax
  volatile signed __int32 *v61; // rcx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  DXGOVERLAY *i; // rbx
  unsigned int v68; // ebx
  struct DXGALLOCATION *v69; // r9
  __int64 v70; // rax
  int v71; // r9d
  int v72; // r9d
  __int64 v73; // rax
  int v74; // r9d
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // [rsp+30h] [rbp-D0h]
  __int64 v84; // [rsp+30h] [rbp-D0h]
  void *v85; // [rsp+30h] [rbp-D0h]
  void **v87; // [rsp+40h] [rbp-C0h]
  struct DXGALLOCATION *P; // [rsp+48h] [rbp-B8h]
  __int64 v89; // [rsp+50h] [rbp-B0h]
  __int64 v90; // [rsp+50h] [rbp-B0h]
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  _DXGKARG_CLOSEALLOCATION v92; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGKARG_DESTROYALLOCATION v93; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v94[16]; // [rsp+90h] [rbp-70h] BYREF
  struct DXGALLOCATION *v95; // [rsp+A0h] [rbp-60h]
  __int64 v96; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v97[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v98[128]; // [rsp+C0h] [rbp-40h] BYREF

  v7 = a4;
  P = a4;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v65 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v65 + 24) = 1122LL;
    WdLogEvent5_WdAssertion(v65);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10));
  if ( !a2 || (v14 = (const HANDLE *)*((_QWORD *)a2 + 8), (v87 = (void **)v14) == 0LL) )
  {
    v14 = (const HANDLE *)v98;
    v87 = (void **)v98;
  }
  v92.NumAllocations = 0;
  if ( a2 && a3 )
  {
    v55 = WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
    *(_QWORD *)(v55 + 24) = a2;
    v11 = (_QWORD *)*((_QWORD *)a2 + 1);
    v10 = v11[5];
    *(_QWORD *)(v55 + 32) = v10;
  }
  v15 = v7;
  if ( v7 )
  {
    do
    {
      v95 = (struct DXGALLOCATION *)*((_QWORD *)v15 + 8);
      v16 = WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
      *(_QWORD *)(v16 + 24) = v15;
      *(_QWORD *)(v16 + 32) = *(_QWORD *)(*((_QWORD *)v15 + 1) + 40LL);
      v17 = *(_DWORD *)(*((_QWORD *)v15 + 6) + 4LL);
      if ( (v17 & 1) != 0 )
      {
        v63 = (v17 >> 6) & 0xF;
        if ( (unsigned int)v63 >= *((_DWORD *)this + 710) )
        {
          v66 = WdLogNewEntry5_WdAssertion(v63);
          *(_QWORD *)(v66 + 24) = 1168LL;
          WdLogEvent5_WdAssertion(v66);
        }
        DXGDEVICE::RemovePrimaryAllocation((DXGADAPTER **)this, v15);
      }
      if ( (*(_DWORD *)(*((_QWORD *)v15 + 6) + 4LL) & 8) != 0 )
      {
        DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v94, *((struct ADAPTER_RENDER **)this + 2));
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v94);
        for ( i = (DXGOVERLAY *)*((_QWORD *)this + 38); i != (DXGDEVICE *)((char *)this + 304) && i; i = *(DXGOVERLAY **)i )
        {
          if ( *((struct DXGALLOCATION **)i + 6) == v15 )
            DXGOVERLAY::Destroy(i);
        }
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v94);
        if ( v94[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v94);
      }
      v18 = *(_DWORD *)(*((_QWORD *)v15 + 6) + 4LL);
      if ( (v18 & 0x2000) != 0 && *((_QWORD *)v15 + 3) )
      {
        v68 = (v18 >> 6) & 0xF;
        DXGDEVICE::RemoveDirectFlipAllocationFromList(this, v68, v15);
        DXGDEVICE::TestAndSetDisplayedPrimary(this, v68, v15, v69);
      }
      v19 = (struct _VIDMM_MULTI_ALLOC *)*((_QWORD *)v15 + 3);
      if ( v19 && (*((_DWORD *)v15 + 18) & 0x800) != 0 )
      {
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 424LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 432LL),
          v19);
        *((_DWORD *)v15 + 18) &= ~0x800u;
      }
      CurrentProcess = PsGetCurrentProcess();
      ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
      if ( ProcessWin32Process )
      {
        v22 = *(_QWORD *)(ProcessWin32Process + 248);
      }
      else
      {
        v70 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v70 + 24) = CurrentProcess;
        WdLogEvent5_WdEvent(v70);
        v22 = 0LL;
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v22 + 192, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v71 = *(_DWORD *)(v22 + 208);
          if ( v71 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_q(v23, &EventBlockThread, v24, v71);
        }
        ExAcquirePushLockExclusiveEx(v22 + 192, 0LL);
      }
      *(_QWORD *)(v22 + 200) = KeGetCurrentThread();
      HMGRTABLE::FreeHandle((HMGRTABLE *)(v22 + 216), *((_DWORD *)v15 + 4));
      DxgkUnreferenceDxgAllocation(v15);
      *(_QWORD *)(v22 + 200) = 0LL;
      ExReleasePushLockExclusiveEx(v22 + 192, 0LL);
      KeLeaveCriticalRegion();
      v25 = 0;
      if ( a5 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)a5 + 2)) )
      {
        v25 = 1;
        if ( *((_BYTE *)a5 + 64) )
          COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a5 + 32));
        COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a5 + 8));
      }
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v15 + 11);
      if ( v25 )
      {
        COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a5 + 8));
        if ( *((_BYTE *)a5 + 64) )
          COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a5 + 32));
      }
      v26 = *((_QWORD *)v15 + 3);
      if ( v26 )
      {
        v27 = *((_QWORD *)this + 2);
        Object = 0LL;
        v83 = *(_QWORD *)(v27 + 424);
        v89 = *(_QWORD *)(v27 + 432);
        Current = DXGPROCESS::GetCurrent();
        if ( Current )
        {
          if ( *((struct _KTHREAD **)Current + 16) == KeGetCurrentThread() )
          {
            Current = 0LL;
          }
          else
          {
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)Current + 120, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v72 = *((_DWORD *)Current + 34);
                if ( v72 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                  Template_q(v29, &EventBlockThread, v30, v72);
              }
              ExAcquirePushLockExclusiveEx((char *)Current + 120, 0LL);
            }
            *((_QWORD *)Current + 16) = KeGetCurrentThread();
          }
        }
        v32 = (*(__int64 (__fastcall **)(__int64, __int64, PVOID *, _QWORD))(*(_QWORD *)(v83 + 8) + 168LL))(
                v89,
                v26,
                &Object,
                a6.Value);
        if ( Current )
        {
          *((_QWORD *)Current + 16) = 0LL;
          ExReleasePushLockExclusiveEx((char *)Current + 120, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( v32 < 0 )
        {
          if ( v32 != -1071775486 )
          {
            v73 = WdLogNewEntry5_WdAssertion(v31);
            *(_QWORD *)(v73 + 24) = 1236LL;
            WdLogEvent5_WdAssertion(v73);
          }
          v33 = WdLogNewEntry5_WdTrace(v31, v10, v12, v13);
          *(_QWORD *)(v33 + 24) = *((_QWORD *)this + 67);
          *(_QWORD *)(v33 + 32) = *((_QWORD *)v15 + 3);
          if ( a5 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)a5 + 2)) )
          {
            if ( *((_BYTE *)a5 + 64) )
              COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a5 + 32));
            COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a5 + 8));
            if ( Object )
              KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
            else
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                              + 424LL)
                                                                                  + 8LL)
                                                                      + 592LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 432LL),
                *((_QWORD *)v15 + 3),
                0LL,
                4LL);
            COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a5 + 8));
            if ( *((_BYTE *)a5 + 64) )
              COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a5 + 32));
          }
          v34 = *((_QWORD *)this + 2);
          v35 = *(_QWORD *)(v34 + 432);
          v90 = *(_QWORD *)(v34 + 424);
          v84 = *((_QWORD *)v15 + 3);
          v36 = DXGPROCESS::GetCurrent();
          v37 = v36;
          if ( v36 )
          {
            v38 = (char *)v36 + 120;
            if ( *((struct _KTHREAD **)v36 + 16) == KeGetCurrentThread() )
            {
              v37 = 0LL;
            }
            else
            {
              KeEnterCriticalRegion();
              if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v38, 0LL) )
              {
                if ( bTracingEnabled )
                {
                  v74 = *((_DWORD *)v38 + 4);
                  if ( v74 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                    Template_q(v39, &EventBlockThread, v40, v74);
                }
                ExAcquirePushLockExclusiveEx(v38, 0LL);
              }
              *((_QWORD *)v38 + 1) = KeGetCurrentThread();
            }
          }
          (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)(v90 + 8) + 160LL))(
            v35,
            v84,
            0LL,
            a6.Value);
          if ( v37 )
          {
            *((_QWORD *)v37 + 16) = 0LL;
            ExReleasePushLockExclusiveEx((char *)v37 + 120, 0LL);
            KeLeaveCriticalRegion();
          }
        }
        *((_QWORD *)v15 + 3) = 0LL;
      }
      v11 = (_QWORD *)*((_QWORD *)v15 + 4);
      v14 = v87;
      if ( v11 )
      {
        v87[v92.NumAllocations++] = v11;
        *((_QWORD *)v15 + 4) = 0LL;
      }
      v15 = v95;
    }
    while ( v95 );
    v7 = P;
  }
  if ( v92.NumAllocations )
  {
    v41 = (void *)*((_QWORD *)this + 45);
    v42 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
    v92.pOpenHandleList = v14;
    ADAPTER_RENDER::DdiCloseAllocation(v42, v41, &v92);
  }
  v43 = 0LL;
  v85 = 0LL;
  v44 = 1;
  if ( a2 )
  {
    if ( (*((_DWORD *)a2 + 1) & 1) != 0 )
    {
      v56 = *((_QWORD *)a2 + 7);
      if ( v56 )
      {
        v57 = *(_QWORD *)(v56 + 136);
        if ( v57 )
        {
          if ( *(DXGDEVICE **)(v57 + 96) == this && (*(_DWORD *)(v57 + 88))-- == 1 )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)v97,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 136LL) + 8LL));
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v97);
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 136LL) + 96LL) = 0LL;
            if ( v97[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v97);
          }
        }
        v58 = *((_QWORD *)a2 + 7);
        v59 = *(_QWORD *)(v58 + 120);
        if ( (*(_DWORD *)(v59 - 44) & 2) != 0 )
        {
          if ( *(_DWORD *)(v58 + 116) != 1 )
          {
            v58 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
            if ( *(_DWORD *)(v58 + 232) <= 1u || !DXGADAPTER::IsDxgmms2((DXGADAPTER *)v58) )
            {
              v75 = WdLogNewEntry5_WdAssertion(v58);
              *(_QWORD *)(v75 + 24) = 1335LL;
              WdLogEvent5_WdAssertion(v75);
            }
          }
          if ( ((*(_DWORD *)(v59 - 44) >> 6) & 0xFu) >= *((_DWORD *)this + 710) )
          {
            v76 = WdLogNewEntry5_WdAssertion(v58);
            *(_QWORD *)(v76 + 24) = 1336LL;
            WdLogEvent5_WdAssertion(v76);
          }
          v64 = (*(_DWORD *)(v59 - 44) >> 6) & 0xF;
          if ( *((struct DXGRESOURCE **)this + v64 + 51) == a2 )
          {
            *((_QWORD *)this + v64 + 51) = 0LL;
            DXGDEVICE::TestAndSetDisplayedPrimary(
              this,
              (*(_DWORD *)(v59 - 44) >> 6) & 0xF,
              *((const struct DXGALLOCATION **)a2 + 3),
              v13);
          }
        }
        v60 = *((_QWORD *)a2 + 3);
        v12 = 0LL;
        while ( v60 )
        {
          v60 = *(_QWORD *)(v60 + 64);
          v12 = (unsigned int)(v12 + 1);
        }
        v61 = (volatile signed __int32 *)*((_QWORD *)a2 + 7);
        if ( _InterlockedExchangeAdd(v61 + 15, 0xFFFFFFFF) == 1 )
          DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v61, v87, v12);
        *((_QWORD *)a2 + 7) = 0LL;
        v43 = 0LL;
      }
      v44 = 0;
    }
    else
    {
      v43 = (void *)*((_QWORD *)a2 + 7);
      v85 = v43;
    }
  }
  v93.NumAllocations = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      v45 = (struct DXGALLOCATION *)*((_QWORD *)v7 + 8);
      if ( (*((_DWORD *)v7 + 18) & 0x800) != 0 )
      {
        v77 = WdLogNewEntry5_WdAssertion(v43);
        *(_QWORD *)(v77 + 24) = 1390LL;
        WdLogEvent5_WdAssertion(v77);
      }
      if ( (*((_DWORD *)v7 + 18) & 0x7FE) != 0 )
      {
        v78 = WdLogNewEntry5_WdAssertion(v43);
        *(_QWORD *)(v78 + 24) = 1391LL;
        WdLogEvent5_WdAssertion(v78);
      }
      v46 = *((_QWORD *)v7 + 6);
      if ( v46 )
      {
        if ( !v44 )
          goto LABEL_100;
        v47 = *(_QWORD *)(v46 + 8);
        if ( v47 )
        {
          v48 = *((_QWORD *)this + 67);
          v49 = *(_QWORD *)(*((_QWORD *)this + 2) + 424LL);
          v50 = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
          DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v96, v50);
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v49 + 8) + 128LL))(v48, 0LL, v47);
          if ( v96 )
          {
            v51 = v96 + 120;
            *(_QWORD *)(v96 + 128) = 0LL;
            ExReleasePushLockExclusiveEx(v51, 0LL);
            KeLeaveCriticalRegion();
          }
          v7 = P;
          *(_QWORD *)(*((_QWORD *)P + 6) + 8LL) = 0LL;
        }
        else
        {
          v7 = P;
        }
        v52 = *(void **)(*((_QWORD *)v7 + 6) + 16LL);
        if ( v52 )
        {
          v87[v93.NumAllocations++] = v52;
          *(_QWORD *)(*((_QWORD *)v7 + 6) + 16LL) = 0LL;
        }
      }
      else if ( !v44 )
      {
LABEL_100:
        if ( !a2 )
        {
          v79 = WdLogNewEntry5_WdAssertion(v43);
          *(_QWORD *)(v79 + 24) = 1419LL;
          WdLogEvent5_WdAssertion(v79);
        }
        if ( (*((_DWORD *)a2 + 1) & 1) == 0 )
        {
          v80 = WdLogNewEntry5_WdAssertion(v43);
          *(_QWORD *)(v80 + 24) = 1420LL;
          WdLogEvent5_WdAssertion(v80);
        }
        if ( !a3 )
        {
          v81 = WdLogNewEntry5_WdAssertion(v43);
          *(_QWORD *)(v81 + 24) = 1421LL;
          WdLogEvent5_WdAssertion(v81);
        }
      }
      if ( !a2 || (*((_DWORD *)a2 + 1) & 1) == 0 )
      {
        v53 = (void *)*((_QWORD *)v7 + 6);
        if ( v53 )
        {
          DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(*((DXGADAPTERALLOCATION **)v7 + 6));
          operator delete(v53);
        }
      }
      ExFreePoolWithTag(v7, 0);
      P = v45;
      v7 = v45;
      if ( !v45 )
      {
        v43 = v85;
        break;
      }
    }
  }
  if ( v44 )
  {
    v93.Flags.Value = 0;
    if ( a2 )
      v93.Flags.Value = a3 != 0;
    v93.hResource = v43;
    if ( v93.NumAllocations )
    {
      v93.pAllocationList = v87;
    }
    else
    {
      v93.pAllocationList = 0LL;
      if ( !a3 || !v43 )
        return;
    }
    ADAPTER_RENDER::DdiDestroyAllocation(*((ADAPTER_RENDER **)this + 2), &v93, v12);
    if ( a2 && !a3 )
    {
      if ( (*((_DWORD *)a2 + 1) & 1) != 0 )
      {
        v82 = WdLogNewEntry5_WdAssertion(v54);
        *(_QWORD *)(v82 + 24) = 1469LL;
        WdLogEvent5_WdAssertion(v82);
      }
      *((_QWORD *)a2 + 7) = v93.hResource;
    }
  }
}

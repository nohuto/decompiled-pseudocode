/*
 * XREFs of ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBI@Z @ 0x1C0063440
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0062C10 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0003150 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003614 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003694 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003914 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003D78 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0006F38 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0007070 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0007088 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0007090 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007098 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsMonitorVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007C7C (-IsMonitorVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000AE8C (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000AED8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??_GDXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAPEAXI@Z @ 0x1C000AF94 (--_GDXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAPEAXI@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C000D2D0 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C0064390 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C006E298 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0074AD0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C0075E14 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0079FD0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C009A900 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z @ 0x1C009AF4C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z.c)
 *     ?ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00B047C (-ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C00B04D8 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00B0504 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00B059C (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00B06F0 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00B0870 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00CC590 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C0123E58 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01298A4 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?DisableTransitionalPrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129B60 (-DisableTransitionalPrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PE.c)
 *     ?IsGpuAccessToAllocationsPending@DXGDEVICE@@QEAAHIPEAVDXGRESOURCE@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C01332E8 (-IsGpuAccessToAllocationsPending@DXGDEVICE@@QEAAHIPEAVDXGRESOURCE@@PEAPEAVDXGALLOCATION@@@Z.c)
 *     ?WaitUntilAllocationsNotBusy@DXGDEVICE@@QEAAXIPEAVDXGRESOURCE@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C01335F4 (-WaitUntilAllocationsNotBusy@DXGDEVICE@@QEAAXIPEAVDXGRESOURCE@@PEAPEAVDXGALLOCATION@@@Z.c)
 *     DxgkDestroyClientAllocation @ 0x1C0133CB4 (DxgkDestroyClientAllocation.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0145430 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C014B818 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkDestroyAllocationInternal(
        struct DXGPROCESS *a1,
        struct DXGDEVICE *this,
        unsigned int *a3,
        struct DXGALLOCATION **a4,
        unsigned int a5,
        const unsigned int **a6,
        unsigned int a7,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a8,
        const unsigned int *a9)
{
  __int64 i; // r9
  unsigned int *v14; // r8
  unsigned int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v22; // r14
  bool v23; // r12
  struct DXGPROCESS *Current; // rax
  const struct DXGALLOCATION *v25; // rdi
  unsigned int v26; // edx
  __int64 v27; // rax
  int v28; // eax
  volatile signed __int64 *v29; // rcx
  signed __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  ADAPTER_DISPLAY *v40; // rcx
  __int64 v41; // r15
  struct DXGRESOURCE *v42; // r13
  __int64 v43; // rax
  struct DXGALLOCATION *j; // rdi
  __int64 v45; // rcx
  __int64 v46; // rax
  unsigned int v47; // r8d
  unsigned int v48; // r8d
  ADAPTER_DISPLAY *v49; // rcx
  unsigned int v50; // r15d
  struct DXGALLOCATION **v51; // rsi
  __int64 v52; // r14
  struct DXGALLOCATION *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned int v56; // r8d
  unsigned int v57; // r8d
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v58; // r13
  __int64 v59; // rax
  __int64 v60; // rcx
  int v61; // edi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v63; // rcx
  __int64 v64; // rdi
  __int64 v65; // rax
  volatile signed __int64 *v66; // rdi
  __int64 v67; // rax
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  struct DXGRESOURCE *v73; // rdi
  __int64 v74; // rax
  unsigned int v75; // edi
  __int64 v76; // rcx
  struct ADAPTER_RENDER *v77; // rdx
  __int64 v78; // rax
  struct DXGALLOCATION *v79; // rdi
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rax
  struct DXGALLOCATION *v87; // r8
  char v88; // r12
  __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // rax
  struct DXGALLOCATION *v92; // rdi
  struct DXGRESOURCE *v93; // rdx
  struct DXGALLOCATION *v94; // r9
  _QWORD *v95; // rax
  struct DXGDEVICE *v96; // rdi
  __int64 v97; // rcx
  struct DXGADAPTER *v98; // rbx
  __int64 v99; // rsi
  __int64 v100; // rax
  char v101; // bl
  __int64 v102; // rax
  char v103; // [rsp+40h] [rbp-328h] BYREF
  char v104; // [rsp+41h] [rbp-327h]
  bool v105; // [rsp+42h] [rbp-326h]
  unsigned __int8 v106; // [rsp+43h] [rbp-325h] BYREF
  char v107; // [rsp+44h] [rbp-324h]
  unsigned __int8 v108[3]; // [rsp+45h] [rbp-323h] BYREF
  unsigned int v109; // [rsp+48h] [rbp-320h]
  struct DXGDEVICE *v110; // [rsp+50h] [rbp-318h] BYREF
  unsigned int v111; // [rsp+58h] [rbp-310h]
  struct DXGRESOURCE *v112; // [rsp+60h] [rbp-308h] BYREF
  struct DXGADAPTER *v113; // [rsp+68h] [rbp-300h] BYREF
  char v114; // [rsp+70h] [rbp-2F8h]
  struct DXGALLOCATION **v115; // [rsp+78h] [rbp-2F0h]
  struct DXGALLOCATION *v116; // [rsp+80h] [rbp-2E8h]
  struct _LUID v117; // [rsp+88h] [rbp-2E0h] BYREF
  struct DXGALLOCATION *v118; // [rsp+90h] [rbp-2D8h] BYREF
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v119; // [rsp+98h] [rbp-2D0h]
  _BYTE v120[16]; // [rsp+A0h] [rbp-2C8h] BYREF
  int v121; // [rsp+B0h] [rbp-2B8h]
  char v122[8]; // [rsp+C0h] [rbp-2A8h] BYREF
  char v123; // [rsp+C8h] [rbp-2A0h] BYREF
  DXGADAPTER *v124; // [rsp+D0h] [rbp-298h]
  char v125; // [rsp+D8h] [rbp-290h]
  _BYTE v126[48]; // [rsp+E0h] [rbp-288h] BYREF
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v127; // [rsp+110h] [rbp-258h]
  _BYTE v128[80]; // [rsp+120h] [rbp-248h] BYREF
  _QWORD v129[2]; // [rsp+170h] [rbp-1F8h] BYREF
  int v130; // [rsp+180h] [rbp-1E8h]
  _BYTE v131[256]; // [rsp+188h] [rbp-1E0h] BYREF
  __int64 v132; // [rsp+288h] [rbp-E0h]
  __int64 v133; // [rsp+290h] [rbp-D8h]
  __int64 v134; // [rsp+298h] [rbp-D0h]
  __int64 v135; // [rsp+2A0h] [rbp-C8h]
  __int64 v136; // [rsp+2A8h] [rbp-C0h]
  __int64 v137; // [rsp+2B0h] [rbp-B8h]
  __int64 v138; // [rsp+2B8h] [rbp-B0h]
  __int64 v139; // [rsp+2C0h] [rbp-A8h]
  __int64 v140; // [rsp+2C8h] [rbp-A0h]
  __int64 v141; // [rsp+2D0h] [rbp-98h]
  __int64 v142; // [rsp+2D8h] [rbp-90h]
  __int64 v143; // [rsp+2E0h] [rbp-88h]
  __int64 v144; // [rsp+2E8h] [rbp-80h]
  __int64 v145; // [rsp+2F0h] [rbp-78h]
  __int64 v146; // [rsp+2F8h] [rbp-70h]
  __int64 v147; // [rsp+300h] [rbp-68h]
  __int64 v148; // [rsp+308h] [rbp-60h]
  __int64 v149; // [rsp+310h] [rbp-58h]

  v115 = a4;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v121 = i;
    if ( (unsigned int)i >= a7 )
      break;
    v14 = (unsigned int *)&a9[i];
    if ( (unsigned __int64)v14 >= MmUserProbeAddress )
      v14 = (unsigned int *)MmUserProbeAddress;
    a3[i] = *v14;
  }
  *a6 = a3;
  v112 = 0LL;
  v15 = a7;
  if ( (int)ValidateDestroyAllocation(a1, this, a5, a3, a7, a4, &v112) < 0 )
  {
    v20 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    *(_QWORD *)(v20 + 24) = this;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v20);
    return 3221225485LL;
  }
  v22 = (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)*((_QWORD *)this + 354);
  v119 = v22;
  v23 = 0;
  if ( (a8.Value & 0x80000000) != 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v128, (__int64)this, 2, v19, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v128);
    if ( DXGADAPTER::IsDxgmms2(v22) )
    {
      if ( *((_DWORD *)this + 70) == 1 )
      {
        Current = DXGPROCESS::GetCurrent();
        if ( (*(unsigned int (**)(void))(*((_QWORD *)Current + 10) + 216LL))() )
        {
          if ( v112 )
          {
            v25 = (const struct DXGALLOCATION *)*((_QWORD *)v112 + 3);
            v26 = *(_DWORD *)(*((_QWORD *)v25 + 6) + 4LL);
            if ( (v26 & 1) != 0
              && *((_QWORD *)this + 354) == *(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
              && !*((_QWORD *)v25 + 8) )
            {
              v23 = v25 != DXGDEVICE::GetDisplayedPrimary(this, (v26 >> 6) & 0xF);
            }
          }
        }
      }
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v128);
    v15 = a7;
  }
  if ( v22 )
  {
    v27 = *((_QWORD *)v22 + 248);
    v22 = 0LL;
  }
  else
  {
    v27 = 0LL;
  }
  v129[0] = v27;
  v129[1] = a1;
  if ( v27 )
    v28 = *(_DWORD *)(v27 + 104);
  else
    v28 = 0;
  v130 = 4 * v28;
  memset(v131, 0, sizeof(v131));
  v132 = 0LL;
  v133 = 0LL;
  v134 = 0LL;
  v135 = 0LL;
  v136 = 0LL;
  v137 = 0LL;
  v138 = 0LL;
  v139 = 0LL;
  v140 = 0LL;
  v141 = 0LL;
  v142 = 0LL;
  v143 = 0LL;
  v144 = 0LL;
  v145 = 0LL;
  v146 = 0LL;
  v147 = 0LL;
  v148 = 0LL;
  v149 = 0LL;
  v29 = *(volatile signed __int64 **)(*((_QWORD *)this + 2) + 16LL);
  v113 = (struct DXGADAPTER *)v29;
  v30 = _InterlockedExchangeAdd64(v29 + 3, 1uLL);
  if ( (v30 + 1 < 0) ^ __OFADD__(1LL, v30) | (v30 == -1) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v29);
    *(_QWORD *)(v31 + 24) = 1141LL;
    WdLogEvent5_WdAssertion(v31);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v113 + 104, 0LL);
  v114 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v122, (__int64)this, 2, v32, 0);
  if ( v125 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v33, v35);
    v36[3] = 275LL;
    v36[4] = 4LL;
    v36[5] = &v123;
    v36[6] = 0LL;
    v36[7] = 0LL;
    WdLogEvent5_WdCriticalError(v36);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v124 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v124 + 32)) )
      KeWaitForSingleObject((char *)v124 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v124);
  }
  v125 = 1;
  if ( v126[32] )
    COREACCESS::AcquireShared((COREACCESS *)v126);
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 160LL) == 4 )
  {
    v37 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v37 + 24) = this;
    WdLogEvent5_WdEvent(v37);
LABEL_36:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
LABEL_37:
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v113);
LABEL_38:
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v129);
    return 0LL;
  }
  if ( *((_DWORD *)this + 88) == 4 )
  {
    v38 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v38 + 24) = this;
    WdLogEvent5_WdEvent(v38);
    DxgkDestroyClientAllocation(v39, this, v15, a4, v112);
    goto LABEL_36;
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 176LL) + 64LL) + 40LL)
                 + 28LL) < 0x5015u )
    a8.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(a8.Value & 0xFFFFFFFE);
  v104 = 0;
  v107 = 0;
  v105 = 0;
  v111 = 0;
  v116 = 0LL;
  v109 = -1;
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v103);
  v110 = 0LL;
  v127 = 0LL;
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX(
    (DXGPROCESSCOPYPROTECTIONMUTEX *)v120,
    (struct DXGFASTMUTEX *const *)a1);
  v41 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v42 = v112;
  if ( v112 )
  {
    if ( *((struct DXGDEVICE **)v112 + 1) != this )
    {
      v43 = WdLogNewEntry5_WdAssertion(v40);
      *(_QWORD *)(v43 + 24) = 7095LL;
      WdLogEvent5_WdAssertion(v43);
    }
    for ( j = (struct DXGALLOCATION *)*((_QWORD *)v42 + 3); j; j = (struct DXGALLOCATION *)*((_QWORD *)j + 8) )
    {
      v45 = *(_DWORD *)(*((_QWORD *)j + 6) + 4LL) & 1;
      if ( (int)(v45
               + ((*(_DWORD *)(*((_QWORD *)j + 6) + 4LL) >> 13) & 1)
               + (((unsigned __int8)*(_DWORD *)(*((_QWORD *)j + 6) + 4LL) >> 1) & 1)) > 1 )
      {
        v46 = WdLogNewEntry5_WdAssertion(v45);
        *(_QWORD *)(v46 + 24) = 7104LL;
        WdLogEvent5_WdAssertion(v46);
      }
      v47 = *(_DWORD *)(*((_QWORD *)j + 6) + 4LL);
      if ( (v47 & 1) != 0
        && (DXGDEVICE::IsVidPnSourcePrimaryValid(this, (v47 >> 6) & 0xF)
         || v41 && (v49 = *(ADAPTER_DISPLAY **)(v41 + 1984)) != 0LL && !ADAPTER_DISPLAY::IsMonitorVisible(v49, v48))
        && !v23 )
      {
        v104 = 1;
        v105 = 0;
        v116 = j;
        v50 = (*(_DWORD *)(*((_QWORD *)j + 6) + 4LL) >> 6) & 0xF;
        v40 = (ADAPTER_DISPLAY *)v50;
        v111 = 1 << ((*(_DWORD *)(*((_QWORD *)j + 6) + 4LL) >> 6) & 0xF);
        goto LABEL_76;
      }
      v40 = (ADAPTER_DISPLAY *)*(unsigned int *)(*((_QWORD *)j + 6) + 4LL);
      if ( ((unsigned __int8)v40 & 2) != 0 )
      {
        v107 = 1;
        break;
      }
    }
  }
  else if ( v15 )
  {
    v51 = v115;
    v52 = v15;
    do
    {
      v53 = *v51;
      if ( !*v51 )
      {
        v54 = WdLogNewEntry5_WdAssertion(v40);
        *(_QWORD *)(v54 + 24) = 7169LL;
        WdLogEvent5_WdAssertion(v54);
      }
      if ( *((struct DXGDEVICE **)v53 + 1) != this )
      {
        v55 = WdLogNewEntry5_WdAssertion(v40);
        *(_QWORD *)(v55 + 24) = 7170LL;
        WdLogEvent5_WdAssertion(v55);
      }
      v56 = *(_DWORD *)(*((_QWORD *)v53 + 6) + 4LL);
      if ( (v56 & 1) != 0
        && (DXGDEVICE::IsVidPnSourcePrimaryValid(this, (v56 >> 6) & 0xF)
         || v41 && (v40 = *(ADAPTER_DISPLAY **)(v41 + 1984)) != 0LL && !ADAPTER_DISPLAY::IsMonitorVisible(v40, v57)) )
      {
        v104 = 1;
        v105 = v116 != 0LL;
        v116 = v53;
        v109 = (*(_DWORD *)(*((_QWORD *)v53 + 6) + 4LL) >> 6) & 0xF;
        v40 = (ADAPTER_DISPLAY *)v109;
        v111 |= 1 << v109;
      }
      ++v51;
      --v52;
    }
    while ( v52 );
    v22 = v127;
  }
  v50 = v109;
LABEL_76:
  if ( !v104 )
  {
    if ( v23 )
    {
      v87 = (struct DXGALLOCATION *)*((_QWORD *)v42 + 3);
      v58 = v119;
      ADAPTER_DISPLAY::DisableTransitionalPrimaryAllocation(
        *((ADAPTER_DISPLAY **)v119 + 248),
        this,
        v87,
        (struct COREDEVICEACCESS *)v122);
    }
    else
    {
      v58 = v119;
    }
LABEL_127:
    v88 = v107;
    if ( v107 )
    {
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v124) )
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)v122);
      DXGDEVICE::FlushScheduler(this, 6LL);
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v124) )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v122);
    }
    v89 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v89 + 144)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v89 + 128)) )
    {
      v91 = WdLogNewEntry5_WdAssertion(v90);
      *(_QWORD *)(v91 + 24) = 4888LL;
      WdLogEvent5_WdAssertion(v91);
    }
    if ( !*((_DWORD *)this + 18) )
      ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10));
    if ( v112 )
    {
      DXGDEVICE::TerminateAllocations(
        this,
        v112,
        1,
        *((struct DXGALLOCATION **)v112 + 3),
        (struct COREDEVICEACCESS *)v122,
        a8);
    }
    else
    {
      v118 = 0LL;
      DXGDEVICE::RemoveAllocationsAndTransferToList(this, v115, a7, &v118);
      v92 = v118;
      if ( v118 )
      {
        v93 = (struct DXGRESOURCE *)*((_QWORD *)v118 + 5);
        if ( v93 )
        {
          DXGDEVICE::TerminateAllocations(this, v93, 0, v118, (struct COREDEVICEACCESS *)v122, a8);
        }
        else
        {
          do
          {
            v94 = v92;
            v95 = (_QWORD *)((char *)v92 + 64);
            v92 = (struct DXGALLOCATION *)*((_QWORD *)v92 + 8);
            v118 = v92;
            *v95 = 0LL;
            DXGDEVICE::TerminateAllocations(this, 0LL, 0, v94, (struct COREDEVICEACCESS *)v122, a8);
          }
          while ( v92 );
        }
      }
    }
    if ( v88 )
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, (struct COREDEVICEACCESS *)v122);
    v106 = 0;
    v108[0] = 0;
    if ( v104 )
    {
      v96 = v110;
      if ( v110 )
        ADAPTER_DISPLAY::EnsureGdiOutput(
          *((ADAPTER_DISPLAY **)v58 + 248),
          v110,
          (struct COREDEVICEACCESS *)v122,
          &v106,
          v108);
      MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v129, v106);
      if ( v96 )
      {
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)v122);
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v113);
        if ( v22 )
        {
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v120);
          DXGDEVICEACCESSLOCKEXCLUSIVECDD::`scalar deleting destructor'(v22);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v96 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v110 + 2), v110);
        }
        DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v103);
        if ( v106 && v108[0] )
          (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this + 5) + 80LL) + 192LL))();
      }
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v120);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v103);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
    if ( v114 )
    {
      v98 = v113;
      ExReleasePushLockSharedEx((char *)v113 + 104, 0LL);
      KeLeaveCriticalRegion();
      v99 = _InterlockedDecrement64((volatile signed __int64 *)v98 + 3);
      if ( !v99 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v113 + 2), v113);
      if ( v99 < 0 )
      {
        v100 = WdLogNewEntry5_WdAssertion(v97);
        *(_QWORD *)(v100 + 24) = 1158LL;
        WdLogEvent5_WdAssertion(v100);
      }
    }
    v101 = v130;
    if ( (v130 & 2) != 0 )
    {
      v102 = WdLogNewEntry5_WdAssertion(v97);
      *(_QWORD *)(v102 + 24) = 203LL;
      WdLogEvent5_WdAssertion(v102);
    }
    if ( (v101 & 1) != 0 )
      MANAGEDPRIMARIESTRACKER::ReleaseWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v129);
    return 0LL;
  }
  v58 = v119;
  if ( !v119 || !*((_QWORD *)v119 + 248) )
  {
    v59 = WdLogNewEntry5_WdAssertion(v40);
    *(_QWORD *)(v59 + 24) = 7212LL;
    WdLogEvent5_WdAssertion(v59);
  }
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v122);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v113);
  DXGDEVICE::FlushScheduler(this, 5LL);
  a8.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(a8.Value | 1);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v129);
  v61 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v103, 1);
  if ( v61 >= 0 )
  {
    while ( 1 )
    {
      v117 = *(struct _LUID *)((char *)v58 + 252);
      CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(&v117, &v110, 0LL);
      v64 = CddDeviceAndContextForCurrentSession;
      if ( CddDeviceAndContextForCurrentSession < 0 )
      {
        v65 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v65 + 24) = v64;
        WdLogEvent5_WdEvent(v65);
      }
      v66 = (volatile signed __int64 *)v110;
      if ( v110 )
      {
        if ( *((_QWORD *)v110 + 2) != *((_QWORD *)this + 2) )
        {
          v67 = WdLogNewEntry5_WdAssertion(v63);
          *(_QWORD *)(v67 + 24) = 7270LL;
          WdLogEvent5_WdAssertion(v67);
        }
        if ( v66 )
        {
          v68 = (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)operator new[](0x10uLL, 0x4B677844u, PagedPool);
          if ( !v68
            || (v22 = DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(v68, (struct DXGDEVICE *)v66)) == 0LL )
          {
            v74 = WdLogNewEntry5_WdLowResource(v70, v69, v71, v72);
            *(_QWORD *)(v74 + 24) = -1073741801LL;
            WdLogEvent5_WdLowResource(v74);
            if ( _InterlockedExchangeAdd64(v66 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v110 + 2), v110);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v120);
            DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v103);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
            if ( v114 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v113);
            MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v129);
            return 3221225495LL;
          }
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v120);
        }
      }
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v113);
      COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v122);
      if ( *((_DWORD *)this + 88) == 4 )
        break;
      if ( (*(_BYTE *)&a8.0 & 1) != 0
        || (v73 = v112, !(unsigned int)DXGDEVICE::IsGpuAccessToAllocationsPending(this, a7, v112, v115)) )
      {
        v75 = v111;
        MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v129, this, v111);
        v77 = (struct ADAPTER_RENDER *)*((_QWORD *)this + 2);
        if ( *((_QWORD *)this + 354) == *((_QWORD *)v77 + 2) )
        {
          if ( ((v75 - 1) & v75) != 0 )
          {
            ADAPTER_DISPLAY::DisableAllPrimaries(*((ADAPTER_DISPLAY **)v58 + 248), v77);
          }
          else if ( v105 )
          {
            if ( v50 == -1 )
            {
              v78 = WdLogNewEntry5_WdAssertion(v76);
              *(_QWORD *)(v78 + 24) = 7357LL;
              WdLogEvent5_WdAssertion(v78);
            }
            ADAPTER_DISPLAY::DisablePrimaryOnDevice(*((ADAPTER_DISPLAY **)v58 + 248), this, v50);
          }
          else
          {
            v79 = v116;
            v80 = *(unsigned int *)(*((_QWORD *)v116 + 6) + 4LL);
            if ( (v80 & 1) == 0 )
            {
              v81 = WdLogNewEntry5_WdAssertion(v80);
              *(_QWORD *)(v81 + 24) = 7365LL;
              WdLogEvent5_WdAssertion(v81);
            }
            v82 = (*(_DWORD *)(*((_QWORD *)v79 + 6) + 4LL) >> 6) & 0xF;
            if ( (_DWORD)v82 != v50 )
            {
              v83 = WdLogNewEntry5_WdAssertion(v82);
              *(_QWORD *)(v83 + 24) = 7366LL;
              WdLogEvent5_WdAssertion(v83);
            }
            ADAPTER_DISPLAY::DisablePrimaryAllocation(*((ADAPTER_DISPLAY **)v58 + 248), this, v79);
          }
        }
        goto LABEL_127;
      }
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v122);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v113);
      if ( v22 )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v120);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::`scalar deleting destructor'(v22);
        v22 = 0LL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v110 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v110 + 2), v110);
        v110 = 0LL;
        v73 = v112;
      }
      DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v103);
      MANAGEDPRIMARIESTRACKER::ReleaseWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v129);
      DXGDEVICE::WaitUntilAllocationsNotBusy(this, a7, v73, v115);
      MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v129);
      v61 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v103, 1);
      if ( v61 < 0 )
        goto LABEL_121;
    }
    v84 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v84 + 24) = this;
    WdLogEvent5_WdEvent(v84);
    if ( v22 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::`scalar deleting destructor'(v22);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v110 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v110 + 2), v110);
    }
    DxgkDestroyClientAllocation(v85, this, a7, v115, v112);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v120);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v103);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
    if ( !v114 )
      goto LABEL_38;
    goto LABEL_37;
  }
LABEL_121:
  v86 = WdLogNewEntry5_WdError(v60);
  *(_QWORD *)(v86 + 24) = v61;
  WdLogEvent5_WdError(v86);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v120);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v103);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v122);
  if ( v114 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v113);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v129);
  return (unsigned int)v61;
}

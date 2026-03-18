/*
 * XREFs of ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBI@Z @ 0x1C005C690
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C005C100 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00010D0 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001B44 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001BC4 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001E0C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002474 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000286C (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0004D18 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0004D30 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0004D38 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000A784 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??_GDXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAPEAXI@Z @ 0x1C000AB08 (--_GDXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAPEAXI@Z.c)
 *     ?IsMonitorVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000AFDC (-IsMonitorVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C000B57C (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000F92C (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C005D620 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C005E564 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00789F0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C007B294 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C007B38C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00808F0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00B51B4 (-ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C00B5210 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00B523C (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00B52D4 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00B5424 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00B5A5C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00B5D3C (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00B5DE8 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z @ 0x1C00B60B8 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C00B7C74 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?DisableTransitionalPrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0123C68 (-DisableTransitionalPrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PE.c)
 *     ?IsGpuAccessToAllocationsPending@DXGDEVICE@@QEAAHIPEAVDXGRESOURCE@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C012CFA0 (-IsGpuAccessToAllocationsPending@DXGDEVICE@@QEAAHIPEAVDXGRESOURCE@@PEAPEAVDXGALLOCATION@@@Z.c)
 *     ?WaitUntilAllocationsNotBusy@DXGDEVICE@@QEAAXIPEAVDXGRESOURCE@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C012DFCC (-WaitUntilAllocationsNotBusy@DXGDEVICE@@QEAAXIPEAVDXGRESOURCE@@PEAPEAVDXGALLOCATION@@@Z.c)
 *     DxgkDestroyClientAllocation @ 0x1C012E524 (DxgkDestroyClientAllocation.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C013EFB8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0147AFC (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
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
  unsigned int v15; // ebx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v23; // r14
  bool v24; // r12
  struct DXGPROCESS *Current; // rax
  const struct DXGALLOCATION *v26; // rbx
  unsigned int v27; // edx
  __int64 v28; // rax
  int v29; // eax
  volatile signed __int64 *v30; // rcx
  signed __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  ADAPTER_DISPLAY *v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r15
  struct DXGRESOURCE *v46; // r13
  __int64 v47; // rax
  struct DXGALLOCATION *j; // rbx
  unsigned int v49; // edx
  __int64 v50; // rcx
  int v51; // eax
  __int64 v52; // rax
  ADAPTER_DISPLAY *v53; // rcx
  unsigned int v54; // r15d
  struct DXGALLOCATION **v55; // rsi
  __int64 v56; // r14
  struct DXGALLOCATION *v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rax
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v60; // r13
  __int64 v61; // rax
  __int64 v62; // rcx
  int v63; // ebx
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rbx
  __int64 v70; // rax
  volatile signed __int64 *v71; // rbx
  __int64 v72; // rax
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v73; // rax
  __int64 v74; // rcx
  struct DXGRESOURCE *v75; // rbx
  __int64 v76; // rax
  unsigned int v77; // ebx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  struct ADAPTER_RENDER *v81; // rdx
  __int64 v82; // rax
  struct DXGALLOCATION *v83; // rbx
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rax
  struct DXGALLOCATION *v91; // r8
  char v92; // r15
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rax
  struct DXGALLOCATION *v99; // rbx
  struct DXGRESOURCE *v100; // r14
  struct DXGALLOCATION *v101; // r9
  _QWORD *v102; // rax
  struct DXGALLOCATION *v103; // r9
  _QWORD *v104; // rax
  struct DXGDEVICE *v105; // rbx
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v106; // r14
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  struct DXGADAPTER *v111; // rbx
  __int64 v112; // rsi
  __int64 v113; // rax
  char v114; // bl
  __int64 v115; // rax
  char v116; // [rsp+40h] [rbp-318h] BYREF
  char v117; // [rsp+41h] [rbp-317h]
  bool v118; // [rsp+42h] [rbp-316h]
  unsigned __int8 v119; // [rsp+43h] [rbp-315h] BYREF
  char v120; // [rsp+44h] [rbp-314h]
  unsigned __int8 v121[3]; // [rsp+45h] [rbp-313h] BYREF
  unsigned int v122; // [rsp+48h] [rbp-310h]
  struct DXGDEVICE *v123; // [rsp+50h] [rbp-308h]
  unsigned int v124; // [rsp+58h] [rbp-300h]
  struct DXGRESOURCE *v125; // [rsp+60h] [rbp-2F8h] BYREF
  struct DXGADAPTER *v126; // [rsp+68h] [rbp-2F0h] BYREF
  char v127; // [rsp+70h] [rbp-2E8h]
  struct DXGALLOCATION **v128; // [rsp+78h] [rbp-2E0h]
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v129; // [rsp+80h] [rbp-2D8h]
  struct DXGALLOCATION *v130; // [rsp+88h] [rbp-2D0h]
  struct DXGALLOCATION *v131; // [rsp+90h] [rbp-2C8h] BYREF
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v132; // [rsp+98h] [rbp-2C0h]
  struct _LUID v133; // [rsp+A0h] [rbp-2B8h] BYREF
  _BYTE v134[16]; // [rsp+A8h] [rbp-2B0h] BYREF
  int v135; // [rsp+B8h] [rbp-2A0h]
  char v136[8]; // [rsp+C0h] [rbp-298h] BYREF
  char v137; // [rsp+C8h] [rbp-290h] BYREF
  DXGADAPTER *v138; // [rsp+D0h] [rbp-288h]
  char v139; // [rsp+D8h] [rbp-280h]
  _BYTE v140[48]; // [rsp+E0h] [rbp-278h] BYREF
  _BYTE v141[80]; // [rsp+110h] [rbp-248h] BYREF
  _QWORD v142[2]; // [rsp+160h] [rbp-1F8h] BYREF
  int v143; // [rsp+170h] [rbp-1E8h]
  _BYTE v144[256]; // [rsp+178h] [rbp-1E0h] BYREF
  __int64 v145; // [rsp+278h] [rbp-E0h]
  __int64 v146; // [rsp+280h] [rbp-D8h]
  __int64 v147; // [rsp+288h] [rbp-D0h]
  __int64 v148; // [rsp+290h] [rbp-C8h]
  __int64 v149; // [rsp+298h] [rbp-C0h]
  __int64 v150; // [rsp+2A0h] [rbp-B8h]
  __int64 v151; // [rsp+2A8h] [rbp-B0h]
  __int64 v152; // [rsp+2B0h] [rbp-A8h]
  __int64 v153; // [rsp+2B8h] [rbp-A0h]
  __int64 v154; // [rsp+2C0h] [rbp-98h]
  __int64 v155; // [rsp+2C8h] [rbp-90h]
  __int64 v156; // [rsp+2D0h] [rbp-88h]
  __int64 v157; // [rsp+2D8h] [rbp-80h]
  __int64 v158; // [rsp+2E0h] [rbp-78h]
  __int64 v159; // [rsp+2E8h] [rbp-70h]
  __int64 v160; // [rsp+2F0h] [rbp-68h]
  __int64 v161; // [rsp+2F8h] [rbp-60h]
  __int64 v162; // [rsp+300h] [rbp-58h]

  v128 = a4;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v135 = i;
    if ( (unsigned int)i >= a7 )
      break;
    v14 = (unsigned int *)&a9[i];
    if ( (unsigned __int64)v14 >= MmUserProbeAddress )
      v14 = (unsigned int *)MmUserProbeAddress;
    a3[i] = *v14;
  }
  *a6 = a3;
  v125 = 0LL;
  v15 = a7;
  v16 = ValidateDestroyAllocation(a1, this, a5, a3, a7, a4, &v125);
  if ( v16 == 255 )
    return 0LL;
  if ( v16 < 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
    *(_QWORD *)(v21 + 24) = this;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v21);
    return 3221225485LL;
  }
  v23 = (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)*((_QWORD *)this + 2338);
  v129 = v23;
  v24 = 0;
  if ( (a8.Value & 0x80000000) != 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v141, (__int64)this, 2, v20, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v141);
    if ( DXGADAPTER::IsDxgmms2(v23) )
    {
      if ( *((_DWORD *)this + 70) == 1 )
      {
        Current = DXGPROCESS::GetCurrent();
        if ( (*(unsigned int (**)(void))(*((_QWORD *)Current + 10) + 216LL))() )
        {
          if ( v125 )
          {
            v26 = (const struct DXGALLOCATION *)*((_QWORD *)v125 + 3);
            v27 = *(_DWORD *)(*((_QWORD *)v26 + 6) + 4LL);
            if ( (v27 & 1) != 0
              && *((_QWORD *)this + 2338) == *(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
              && !*((_QWORD *)v26 + 8) )
            {
              v24 = v26 != DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)this, (v27 >> 6) & 0xF);
            }
          }
        }
      }
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v141);
    v15 = a7;
  }
  if ( v23 )
  {
    v28 = *((_QWORD *)v23 + 247);
    v23 = 0LL;
  }
  else
  {
    v28 = 0LL;
  }
  v142[0] = v28;
  v142[1] = a1;
  if ( v28 )
    v29 = *(_DWORD *)(v28 + 80);
  else
    v29 = 0;
  v143 = 4 * v29;
  memset(v144, 0, sizeof(v144));
  v145 = 0LL;
  v146 = 0LL;
  v147 = 0LL;
  v148 = 0LL;
  v149 = 0LL;
  v150 = 0LL;
  v151 = 0LL;
  v152 = 0LL;
  v153 = 0LL;
  v154 = 0LL;
  v155 = 0LL;
  v156 = 0LL;
  v157 = 0LL;
  v158 = 0LL;
  v159 = 0LL;
  v160 = 0LL;
  v161 = 0LL;
  v162 = 0LL;
  v30 = *(volatile signed __int64 **)(*((_QWORD *)this + 2) + 16LL);
  v126 = (struct DXGADAPTER *)v30;
  v31 = _InterlockedExchangeAdd64(v30 + 3, 1uLL);
  if ( (v31 + 1 < 0) ^ __OFADD__(1LL, v31) | (v31 == -1) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v30, v17, v19, v20);
    *(_QWORD *)(v32 + 24) = 1050LL;
    WdLogEvent5_WdAssertion(v32);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v126 + 104, 0LL);
  v127 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v136, (__int64)this, 2, v33, 0);
  if ( v139 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, v34, v36);
    v37[3] = 275LL;
    v37[4] = 4LL;
    v37[5] = &v137;
    v37[6] = 0LL;
    v37[7] = 0LL;
    WdLogEvent5_WdCriticalError(v37);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v138 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v138 + 32)) )
      KeWaitForSingleObject((char *)v138 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v138);
  }
  v139 = 1;
  if ( v140[32] )
    COREACCESS::AcquireShared((COREACCESS *)v140);
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 160LL) == 4 )
  {
    v38 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v38 + 24) = this;
    WdLogEvent5_WdEvent(v38);
LABEL_37:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v136);
LABEL_38:
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v126);
LABEL_39:
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v142);
    return 0LL;
  }
  if ( *((_DWORD *)this + 88) == 4 )
  {
    v39 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v39 + 24) = this;
    WdLogEvent5_WdEvent(v39);
    DxgkDestroyClientAllocation(v40, this, v15, a4, v125);
    goto LABEL_37;
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 176LL) + 64LL) + 40LL)
                 + 28LL) < 0x5015u )
    a8.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(a8.Value & 0xFFFFFFFE);
  v117 = 0;
  v120 = 0;
  v118 = 0;
  v124 = 0;
  v130 = 0LL;
  v122 = -1;
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v116);
  v123 = 0LL;
  v132 = 0LL;
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX(
    (DXGPROCESSCOPYPROTECTIONMUTEX *)v134,
    (struct DXGFASTMUTEX *const *)a1);
  v45 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v46 = v125;
  if ( v125 )
  {
    if ( *((struct DXGDEVICE **)v125 + 1) != this )
    {
      v47 = WdLogNewEntry5_WdAssertion(v42, v41, v43, v44);
      *(_QWORD *)(v47 + 24) = 7368LL;
      WdLogEvent5_WdAssertion(v47);
    }
    for ( j = (struct DXGALLOCATION *)*((_QWORD *)v46 + 3); j; j = (struct DXGALLOCATION *)*((_QWORD *)j + 8) )
    {
      v49 = *(_DWORD *)(*((_QWORD *)j + 6) + 4LL);
      v50 = v49 & 1;
      v51 = ((unsigned __int8)v49 >> 1) & 1;
      v41 = (v49 >> 13) & 1;
      if ( (int)v50 + (int)v41 + v51 > 1 )
      {
        v52 = WdLogNewEntry5_WdAssertion(v50, v41, v43, v44);
        *(_QWORD *)(v52 + 24) = 7377LL;
        WdLogEvent5_WdAssertion(v52);
      }
      v43 = *(unsigned int *)(*((_QWORD *)j + 6) + 4LL);
      if ( (v43 & 1) != 0
        && (DXGDEVICE::IsVidPnSourcePrimaryValid(this, ((unsigned int)v43 >> 6) & 0xF)
         || v45 && (v53 = *(ADAPTER_DISPLAY **)(v45 + 1976)) != 0LL && !ADAPTER_DISPLAY::IsMonitorVisible(v53, v43))
        && !v24 )
      {
        v117 = 1;
        v118 = 0;
        v130 = j;
        v54 = (*(_DWORD *)(*((_QWORD *)j + 6) + 4LL) >> 6) & 0xF;
        v42 = (ADAPTER_DISPLAY *)v54;
        v124 = 1 << ((*(_DWORD *)(*((_QWORD *)j + 6) + 4LL) >> 6) & 0xF);
        goto LABEL_77;
      }
      v42 = (ADAPTER_DISPLAY *)*(unsigned int *)(*((_QWORD *)j + 6) + 4LL);
      if ( ((unsigned __int8)v42 & 2) != 0 )
      {
        v120 = 1;
        break;
      }
    }
  }
  else if ( v15 )
  {
    v55 = v128;
    v56 = v15;
    do
    {
      v57 = *v55;
      if ( !*v55 )
      {
        v58 = WdLogNewEntry5_WdAssertion(v42, v41, v43, v44);
        *(_QWORD *)(v58 + 24) = 7437LL;
        WdLogEvent5_WdAssertion(v58);
      }
      if ( *((struct DXGDEVICE **)v57 + 1) != this )
      {
        v59 = WdLogNewEntry5_WdAssertion(v42, v41, v43, v44);
        *(_QWORD *)(v59 + 24) = 7438LL;
        WdLogEvent5_WdAssertion(v59);
      }
      v43 = *(unsigned int *)(*((_QWORD *)v57 + 6) + 4LL);
      if ( (v43 & 1) != 0
        && (DXGDEVICE::IsVidPnSourcePrimaryValid(this, ((unsigned int)v43 >> 6) & 0xF)
         || v45 && (v42 = *(ADAPTER_DISPLAY **)(v45 + 1976)) != 0LL && !ADAPTER_DISPLAY::IsMonitorVisible(v42, v43)) )
      {
        v117 = 1;
        v118 = v130 != 0LL;
        v130 = v57;
        v122 = (*(_DWORD *)(*((_QWORD *)v57 + 6) + 4LL) >> 6) & 0xF;
        v42 = (ADAPTER_DISPLAY *)v122;
        v124 |= 1 << v122;
      }
      ++v55;
      --v56;
    }
    while ( v56 );
    v23 = v132;
  }
  v54 = v122;
LABEL_77:
  if ( !v117 )
  {
    if ( v24 )
    {
      v91 = (struct DXGALLOCATION *)*((_QWORD *)v46 + 3);
      v60 = v129;
      ADAPTER_DISPLAY::DisableTransitionalPrimaryAllocation(
        *((ADAPTER_DISPLAY **)v129 + 247),
        this,
        v91,
        (struct COREDEVICEACCESS *)v136);
    }
    else
    {
      v60 = v129;
    }
LABEL_128:
    v92 = v120;
    if ( v120 )
    {
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v138) )
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)v136);
      DXGDEVICE::FlushScheduler(this, 3LL);
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v138) )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v136);
    }
    v93 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v93 + 144)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v93 + 128)) )
    {
      v98 = WdLogNewEntry5_WdAssertion(v95, v94, v96, v97);
      *(_QWORD *)(v98 + 24) = 5007LL;
      WdLogEvent5_WdAssertion(v98);
    }
    if ( !*((_DWORD *)this + 18) )
      ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10));
    if ( v125 )
    {
      DXGDEVICE::TerminateAllocations(
        this,
        v125,
        1,
        *((struct DXGALLOCATION **)v125 + 3),
        (struct COREDEVICEACCESS *)v136,
        a8);
    }
    else
    {
      v131 = 0LL;
      DXGDEVICE::RemoveAllocationsAndTransferToList(this, v128, a7, &v131);
      v99 = v131;
      if ( v131 )
      {
        v100 = (struct DXGRESOURCE *)*((_QWORD *)v131 + 5);
        if ( v100 )
        {
          do
          {
            v101 = v99;
            v102 = (_QWORD *)((char *)v99 + 64);
            v99 = (struct DXGALLOCATION *)*((_QWORD *)v99 + 8);
            v131 = v99;
            *v102 = 0LL;
            DXGDEVICE::TerminateAllocations(this, v100, 0, v101, (struct COREDEVICEACCESS *)v136, a8);
          }
          while ( v99 );
        }
        else
        {
          do
          {
            v103 = v99;
            v104 = (_QWORD *)((char *)v99 + 64);
            v99 = (struct DXGALLOCATION *)*((_QWORD *)v99 + 8);
            v131 = v99;
            *v104 = 0LL;
            DXGDEVICE::TerminateAllocations(this, 0LL, 0, v103, (struct COREDEVICEACCESS *)v136, a8);
          }
          while ( v99 );
        }
      }
    }
    if ( v92 )
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, (struct COREDEVICEACCESS *)v136);
    v119 = 0;
    v121[0] = 0;
    if ( v117 )
    {
      v105 = v123;
      if ( v123 )
        ADAPTER_DISPLAY::EnsureGdiOutput(
          *((ADAPTER_DISPLAY **)v60 + 247),
          v123,
          (struct COREDEVICEACCESS *)v136,
          &v119,
          v121);
      MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v142, v119);
      if ( v105 )
      {
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)v136);
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v126);
        v106 = v132;
        if ( v132 )
        {
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v134);
          DXGDEVICEACCESSLOCKEXCLUSIVECDD::`scalar deleting destructor'(v106);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v105 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v123 + 2), v123);
        }
        DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v116);
        if ( v119 && v121[0] )
          (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this + 5) + 80LL) + 192LL))();
      }
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v134);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v116);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v136);
    if ( v127 )
    {
      v111 = v126;
      ExReleasePushLockSharedEx((char *)v126 + 104, 0LL);
      KeLeaveCriticalRegion();
      v112 = _InterlockedDecrement64((volatile signed __int64 *)v111 + 3);
      if ( !v112 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v126 + 2), v126);
      if ( v112 < 0 )
      {
        v113 = WdLogNewEntry5_WdAssertion(v108, v107, v109, v110);
        *(_QWORD *)(v113 + 24) = 1067LL;
        WdLogEvent5_WdAssertion(v113);
      }
    }
    v114 = v143;
    if ( (v143 & 2) != 0 )
    {
      v115 = WdLogNewEntry5_WdAssertion(v108, v107, v109, v110);
      *(_QWORD *)(v115 + 24) = 203LL;
      WdLogEvent5_WdAssertion(v115);
    }
    if ( (v114 & 1) != 0 )
      MANAGEDPRIMARIESTRACKER::ReleaseWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v142);
    return 0LL;
  }
  v60 = v129;
  if ( !v129 || !*((_QWORD *)v129 + 247) )
  {
    v61 = WdLogNewEntry5_WdAssertion(v42, v41, v43, v44);
    *(_QWORD *)(v61 + 24) = 7480LL;
    WdLogEvent5_WdAssertion(v61);
  }
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v136);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v126);
  DXGDEVICE::FlushScheduler(this, 1LL);
  a8.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(a8.Value | 1);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v142);
  v63 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v116, 1);
  if ( v63 >= 0 )
  {
    while ( 1 )
    {
      v133 = *(struct _LUID *)((char *)v60 + 252);
      CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(&v133);
      v69 = CddDeviceAndContextForCurrentSession;
      if ( CddDeviceAndContextForCurrentSession < 0 )
      {
        v70 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v70 + 24) = v69;
        WdLogEvent5_WdEvent(v70);
      }
      v71 = (volatile signed __int64 *)v123;
      if ( v123 )
      {
        if ( *((_QWORD *)v123 + 2) != *((_QWORD *)this + 2) )
        {
          v72 = WdLogNewEntry5_WdAssertion(v66, v65, v67, v68);
          *(_QWORD *)(v72 + 24) = 7538LL;
          WdLogEvent5_WdAssertion(v72);
        }
        if ( v71 )
        {
          v73 = (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)operator new[](8uLL, 0x4B677844u, PagedPool);
          if ( !v73
            || (v23 = DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(v73, (struct DXGDEVICE *)v71),
                (v132 = v23) == 0LL) )
          {
            v76 = WdLogNewEntry5_WdLowResource(v74);
            *(_QWORD *)(v76 + 24) = -1073741801LL;
            WdLogEvent5_WdLowResource(v76);
            if ( _InterlockedExchangeAdd64(v71 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v123 + 2), v123);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v134);
            DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v116);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v136);
            if ( v127 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v126);
            MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v142);
            return 3221225495LL;
          }
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v134);
        }
      }
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v126);
      COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v136);
      if ( *((_DWORD *)this + 88) == 4 )
        break;
      if ( (*(_BYTE *)&a8.0 & 1) != 0
        || (v75 = v125, !(unsigned int)DXGDEVICE::IsGpuAccessToAllocationsPending(this, a7, v125, v128)) )
      {
        v77 = v124;
        MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v142, this, v124);
        v81 = (struct ADAPTER_RENDER *)*((_QWORD *)this + 2);
        if ( *((_QWORD *)this + 2338) == *((_QWORD *)v81 + 2) )
        {
          if ( ((v77 - 1) & v77) != 0 )
          {
            ADAPTER_DISPLAY::DisableAllPrimaries(*((ADAPTER_DISPLAY **)v60 + 247), v81);
          }
          else if ( v118 )
          {
            if ( v54 == -1 )
            {
              v82 = WdLogNewEntry5_WdAssertion(v78, v81, v79, v80);
              *(_QWORD *)(v82 + 24) = 7625LL;
              WdLogEvent5_WdAssertion(v82);
            }
            ADAPTER_DISPLAY::DisablePrimaryOnDevice(*((ADAPTER_DISPLAY **)v60 + 247), this, v54);
          }
          else
          {
            v83 = v130;
            v84 = *(unsigned int *)(*((_QWORD *)v130 + 6) + 4LL);
            if ( (v84 & 1) == 0 )
            {
              v85 = WdLogNewEntry5_WdAssertion(v84, v81, v79, v80);
              *(_QWORD *)(v85 + 24) = 7633LL;
              WdLogEvent5_WdAssertion(v85);
            }
            v86 = (*(_DWORD *)(*((_QWORD *)v83 + 6) + 4LL) >> 6) & 0xF;
            if ( (_DWORD)v86 != v54 )
            {
              v87 = WdLogNewEntry5_WdAssertion(v86, v81, v79, v80);
              *(_QWORD *)(v87 + 24) = 7634LL;
              WdLogEvent5_WdAssertion(v87);
            }
            ADAPTER_DISPLAY::DisablePrimaryAllocation(*((ADAPTER_DISPLAY **)v60 + 247), this, v83);
          }
        }
        goto LABEL_128;
      }
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v136);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v126);
      if ( v23 )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v134);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::`scalar deleting destructor'(v23);
        v23 = 0LL;
        v132 = 0LL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v123 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v123 + 2), v123);
        v123 = 0LL;
        v75 = v125;
      }
      DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v116);
      MANAGEDPRIMARIESTRACKER::ReleaseWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v142);
      DXGDEVICE::WaitUntilAllocationsNotBusy(this, a7, v75, v128);
      MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v142);
      v63 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v116, 1);
      if ( v63 < 0 )
        goto LABEL_122;
    }
    v88 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v88 + 24) = this;
    WdLogEvent5_WdEvent(v88);
    if ( v23 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::`scalar deleting destructor'(v23);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v123 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v123 + 2), v123);
    }
    DxgkDestroyClientAllocation(v89, this, a7, v128, v125);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v134);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v116);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v136);
    if ( !v127 )
      goto LABEL_39;
    goto LABEL_38;
  }
LABEL_122:
  v90 = WdLogNewEntry5_WdError(v62);
  *(_QWORD *)(v90 + 24) = v63;
  WdLogEvent5_WdError(v90);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v134);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v116);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v136);
  if ( v127 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v126);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v142);
  return (unsigned int)v63;
}

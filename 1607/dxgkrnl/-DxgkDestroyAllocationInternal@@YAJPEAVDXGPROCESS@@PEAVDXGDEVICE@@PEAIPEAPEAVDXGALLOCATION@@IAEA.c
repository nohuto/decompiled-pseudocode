/*
 * XREFs of ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0075550
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0074C00 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 * Callees:
 *     ??_GDXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAPEAXI@Z @ 0x1C00014AC (--_GDXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAPEAXI@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00014CC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001588 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00016F4 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C00017E4 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00017FC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsMonitorVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000694C (-IsMonitorVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00082B8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00082DC (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0008570 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C000EC48 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C00114D8 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C00114E0 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0021384 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z @ 0x1C0021598 (-IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0073DD0 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C0073E68 (-ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C0073EC4 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C0073EF0 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C0073F88 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00740D0 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C0076580 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0087360 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0087994 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z @ 0x1C00881A8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00967F4 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C0096A8C (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009C300 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C009E994 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00DDEF0 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00E1A24 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisableTransitionalPrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01476F8 (-DisableTransitionalPrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PE.c)
 *     ?IsGpuAccessToAllocationsPending@DXGDEVICE@@QEAAHIPEAVDXGRESOURCE@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C01518A0 (-IsGpuAccessToAllocationsPending@DXGDEVICE@@QEAAHIPEAVDXGRESOURCE@@PEAPEAVDXGALLOCATION@@@Z.c)
 *     ?WaitUntilAllocationsNotBusy@DXGDEVICE@@QEAAXIPEAVDXGRESOURCE@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C01528F8 (-WaitUntilAllocationsNotBusy@DXGDEVICE@@QEAAXIPEAVDXGRESOURCE@@PEAPEAVDXGALLOCATION@@@Z.c)
 *     DxgkDestroyClientAllocation @ 0x1C0153078 (DxgkDestroyClientAllocation.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0170C1C (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
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
        const unsigned int *a9,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a10)
{
  __int64 i; // r9
  unsigned int *v14; // r8
  struct DXGALLOCATION **v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  DXGADAPTER *v23; // r15
  bool v24; // r13
  __int64 CurrentProcess; // rax
  __int64 v26; // rdx
  struct DXGRESOURCE *v27; // rbx
  const struct DXGALLOCATION *v28; // rbx
  unsigned int v29; // edx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned __int8 v40; // r8
  ADAPTER_DISPLAY *v41; // rcx
  __int64 v42; // r15
  struct DXGRESOURCE *v43; // rbx
  __int64 v44; // rax
  struct DXGALLOCATION *j; // rbx
  __int64 v46; // rcx
  __int64 v47; // rax
  unsigned int v48; // r8d
  unsigned int v49; // r8d
  ADAPTER_DISPLAY *v50; // rcx
  unsigned int v51; // r14d
  struct DXGALLOCATION **v52; // rsi
  struct DXGALLOCATION *v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned int v56; // r8d
  unsigned int v57; // r8d
  unsigned int v58; // r14d
  DXGADAPTER *v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rcx
  int v62; // ebx
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v64; // rcx
  __int64 v65; // rbx
  __int64 v66; // rax
  volatile signed __int64 *v67; // rbx
  __int64 v68; // rax
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v69; // rax
  __int64 v70; // rcx
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v71; // r15
  struct DXGRESOURCE *v72; // rbx
  __int64 v73; // rax
  unsigned int v74; // ebx
  __int64 v75; // rcx
  struct ADAPTER_RENDER *v76; // rdx
  DXGADAPTER *v77; // r15
  __int64 v78; // rax
  struct DXGALLOCATION *v79; // rbx
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rax
  char v87; // r13
  int v88; // eax
  __int64 v89; // rcx
  __int64 v90; // rbx
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rcx
  __int64 v94; // rax
  struct DXGALLOCATION *v95; // rbx
  struct DXGRESOURCE *v96; // rsi
  struct DXGALLOCATION *v97; // r9
  _QWORD *v98; // rax
  struct DXGALLOCATION *v99; // r9
  _QWORD *v100; // rax
  struct DXGDEVICE *v101; // rbx
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v102; // rsi
  __int64 v103; // rcx
  struct DXGADAPTER *v104; // rbx
  char v105; // bl
  __int64 v106; // rax
  char v107; // [rsp+40h] [rbp-358h] BYREF
  char v108; // [rsp+41h] [rbp-357h]
  bool v109; // [rsp+42h] [rbp-356h]
  unsigned __int8 v110; // [rsp+43h] [rbp-355h] BYREF
  char v111; // [rsp+44h] [rbp-354h]
  char v112; // [rsp+45h] [rbp-353h]
  char v113; // [rsp+46h] [rbp-352h]
  unsigned __int8 v114; // [rsp+47h] [rbp-351h] BYREF
  unsigned int v115; // [rsp+48h] [rbp-350h]
  struct DXGRESOURCE *v116; // [rsp+50h] [rbp-348h] BYREF
  struct DXGDEVICE *v117; // [rsp+58h] [rbp-340h] BYREF
  unsigned int v118; // [rsp+60h] [rbp-338h]
  DXGADAPTER *v119; // [rsp+68h] [rbp-330h]
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v120; // [rsp+70h] [rbp-328h]
  struct DXGALLOCATION **v121; // [rsp+78h] [rbp-320h]
  struct DXGALLOCATION *v122; // [rsp+80h] [rbp-318h]
  __int64 v123; // [rsp+88h] [rbp-310h] BYREF
  struct DXGADAPTER *v124; // [rsp+90h] [rbp-308h]
  char v125; // [rsp+98h] [rbp-300h]
  struct DXGALLOCATION *v126; // [rsp+A0h] [rbp-2F8h] BYREF
  int v127; // [rsp+A8h] [rbp-2F0h]
  _BYTE v128[16]; // [rsp+B0h] [rbp-2E8h] BYREF
  char v129[8]; // [rsp+C0h] [rbp-2D8h] BYREF
  char v130; // [rsp+C8h] [rbp-2D0h] BYREF
  DXGADAPTER *v131; // [rsp+D8h] [rbp-2C0h]
  char v132; // [rsp+E0h] [rbp-2B8h]
  _BYTE v133[56]; // [rsp+E8h] [rbp-2B0h] BYREF
  _BYTE v134[16]; // [rsp+120h] [rbp-278h] BYREF
  _BYTE v135[16]; // [rsp+130h] [rbp-268h] BYREF
  _BYTE v136[96]; // [rsp+140h] [rbp-258h] BYREF
  _QWORD v137[2]; // [rsp+1A0h] [rbp-1F8h] BYREF
  int v138; // [rsp+1B0h] [rbp-1E8h]
  _BYTE v139[400]; // [rsp+1B8h] [rbp-1E0h] BYREF

  v121 = a4;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v127 = i;
    if ( (unsigned int)i >= a7 )
      break;
    v14 = (unsigned int *)&a9[i];
    if ( (unsigned __int64)v14 >= MmUserProbeAddress )
      v14 = (unsigned int *)MmUserProbeAddress;
    a3[i] = *v14;
  }
  *a6 = a3;
  v116 = 0LL;
  v15 = v121;
  v16 = ValidateDestroyAllocation(a1, this, a5, a3, a7, v121, &v116);
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
  v23 = (DXGADAPTER *)*((_QWORD *)this + 357);
  v119 = v23;
  v24 = 0;
  if ( (a8.Value & 0x80000000) != 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v136, (__int64)this, 2, v20, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v136);
    if ( DXGADAPTER::IsDxgmms2(v23) )
    {
      if ( *((_DWORD *)this + 76) == 1 )
      {
        CurrentProcess = PsGetCurrentProcess();
        if ( *(_BYTE *)(PsGetProcessDxgProcess(CurrentProcess, v26) + 290) )
        {
          v27 = v116;
          if ( v116 )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v134, (struct DXGRESOURCE *)((char *)v116 + 80));
            if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_387928376_59283803_FeatureDescriptorDetails) )
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v134);
            v28 = (const struct DXGALLOCATION *)*((_QWORD *)v27 + 3);
            v29 = *(_DWORD *)(*((_QWORD *)v28 + 6) + 4LL);
            if ( (v29 & 1) != 0
              && *((_QWORD *)this + 357) == *(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
              && !*((_QWORD *)v28 + 8) )
            {
              v24 = v28 != DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)this, (v29 >> 6) & 0xF);
              v23 = v119;
            }
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v134);
          }
        }
      }
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v136);
    v15 = v121;
  }
  if ( v23 )
    v30 = *((_QWORD *)v23 + 266);
  else
    v30 = 0LL;
  v137[0] = v30;
  v137[1] = a1;
  if ( v30 )
    v31 = *(_DWORD *)(v30 + 80);
  else
    v31 = 0;
  v138 = 4 * v31;
  memset(v139, 0, sizeof(v139));
  v124 = *(struct DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v124 + 3);
  v123 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v124 + 120, 0LL);
  v125 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v129, (__int64)this, 2, v32, 0);
  if ( v132 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v33, v35);
    v36[3] = 275LL;
    v36[4] = 4LL;
    v36[5] = &v130;
    v36[6] = 0LL;
    v36[7] = 0LL;
    WdLogEvent5_WdCriticalError(v36);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v131 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v131 + 2) )
      KeWaitForSingleObject((char *)v131 + 48, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v131);
  }
  v132 = 1;
  if ( v133[40] )
    COREACCESS::AcquireShared((COREACCESS *)v133);
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 176LL) == 4 )
  {
    v37 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v37 + 24) = this;
    WdLogEvent5_WdEvent(v37);
LABEL_38:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v129);
LABEL_39:
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v123);
LABEL_40:
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v137);
    return 0LL;
  }
  if ( *((_DWORD *)this + 94) == 4 )
  {
    v38 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v38 + 24) = this;
    WdLogEvent5_WdEvent(v38);
    DxgkDestroyClientAllocation(v39, this, a7, v15, v116);
    goto LABEL_38;
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 192LL) + 64LL) + 40LL)
                 + 28LL) < 0x5015u )
    a8.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(a8.Value & 0xFFFFFFFE);
  v112 = 0;
  v113 = 0;
  v108 = 0;
  v111 = 0;
  v109 = 0;
  v115 = 0;
  v122 = 0LL;
  v118 = -1;
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v107);
  v117 = 0LL;
  v120 = 0LL;
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX(
    (DXGPROCESSCOPYPROTECTIONMUTEX *)v128,
    (struct DXGFASTMUTEX *const *)a1,
    v40);
  v42 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v43 = v116;
  if ( v116 )
  {
    if ( *((struct DXGDEVICE **)v116 + 1) != this )
    {
      v44 = WdLogNewEntry5_WdAssertion(v41);
      *(_QWORD *)(v44 + 24) = 7545LL;
      WdLogEvent5_WdAssertion(v44);
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v135, (struct DXGRESOURCE *)((char *)v43 + 80));
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_387928376_59283803_FeatureDescriptorDetails) )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v135);
    for ( j = (struct DXGALLOCATION *)*((_QWORD *)v43 + 3); j; j = (struct DXGALLOCATION *)*((_QWORD *)j + 8) )
    {
      v46 = *(_DWORD *)(*((_QWORD *)j + 6) + 4LL) & 1;
      if ( (int)(v46
               + ((*(_DWORD *)(*((_QWORD *)j + 6) + 4LL) >> 13) & 1)
               + (((unsigned __int8)*(_DWORD *)(*((_QWORD *)j + 6) + 4LL) >> 1) & 1)) > 1 )
      {
        v47 = WdLogNewEntry5_WdAssertion(v46);
        *(_QWORD *)(v47 + 24) = 7560LL;
        WdLogEvent5_WdAssertion(v47);
      }
      v48 = *(_DWORD *)(*((_QWORD *)j + 6) + 4LL);
      if ( (v48 & 1) != 0
        && (DXGDEVICE::IsVidPnSourcePrimaryValid(this, (v48 >> 6) & 0xF)
         || v42 && (v50 = *(ADAPTER_DISPLAY **)(v42 + 2128)) != 0LL && !ADAPTER_DISPLAY::IsMonitorVisible(v50, v49))
        && !v24 )
      {
        v108 = 1;
        v109 = 0;
        v122 = j;
        v118 = (*(_DWORD *)(*((_QWORD *)j + 6) + 4LL) >> 6) & 0xF;
        v115 = 1 << v118;
        break;
      }
      if ( (*(_DWORD *)(*((_QWORD *)j + 6) + 4LL) & 2) != 0 )
      {
        v111 = 1;
        break;
      }
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v135);
LABEL_85:
    v58 = v118;
    goto LABEL_86;
  }
  if ( !a7 )
  {
    v58 = v118;
    goto LABEL_87;
  }
  v51 = 0;
  v52 = v121;
  while ( 1 )
  {
    v53 = *v52;
    if ( !*v52 )
    {
      v54 = WdLogNewEntry5_WdAssertion(v41);
      *(_QWORD *)(v54 + 24) = 7590LL;
      WdLogEvent5_WdAssertion(v54);
    }
    if ( *((struct DXGDEVICE **)v53 + 1) != this )
    {
      v55 = WdLogNewEntry5_WdAssertion(v41);
      *(_QWORD *)(v55 + 24) = 7591LL;
      WdLogEvent5_WdAssertion(v55);
    }
    if ( g_IsMobileCore )
    {
      v41 = (ADAPTER_DISPLAY *)*(unsigned int *)(*((_QWORD *)v53 + 6) + 4LL);
      if ( ((unsigned __int8)v41 & 8) != 0 )
        break;
    }
    v56 = *(_DWORD *)(*((_QWORD *)v53 + 6) + 4LL);
    if ( (v56 & 1) != 0
      && (DXGDEVICE::IsVidPnSourcePrimaryValid(this, (v56 >> 6) & 0xF)
       || v42 && (v41 = *(ADAPTER_DISPLAY **)(v42 + 2128)) != 0LL && !ADAPTER_DISPLAY::IsMonitorVisible(v41, v57)) )
    {
      v108 = 1;
      v109 = v122 != 0LL;
      v122 = v53;
      v118 = (*(_DWORD *)(*((_QWORD *)v53 + 6) + 4LL) >> 6) & 0xF;
      v41 = (ADAPTER_DISPLAY *)v118;
      v115 |= 1 << v118;
    }
    ++v51;
    ++v52;
    if ( v51 >= a7 )
      goto LABEL_85;
  }
  v112 = 1;
  if ( !DXGDEVICE::IsDisplayedPrimary((struct _KTHREAD **)this, ((unsigned int)v41 >> 6) & 0xF, v53) )
    goto LABEL_85;
  v113 = 1;
  v108 = 1;
  v109 = v122 != 0LL;
  v122 = v53;
  v58 = (*(_DWORD *)(*((_QWORD *)v53 + 6) + 4LL) >> 6) & 0xF;
  v41 = (ADAPTER_DISPLAY *)v58;
  v115 |= 1 << ((*(_DWORD *)(*((_QWORD *)v53 + 6) + 4LL) >> 6) & 0xF);
LABEL_86:
  v43 = v116;
LABEL_87:
  if ( !v108 )
  {
    v77 = v119;
    if ( v24 )
      ADAPTER_DISPLAY::DisableTransitionalPrimaryAllocation(
        *((ADAPTER_DISPLAY **)v119 + 266),
        this,
        *((struct DXGALLOCATION **)v43 + 3),
        (struct COREDEVICEACCESS *)v129);
LABEL_139:
    v87 = v111;
    if ( v111 || v112 )
    {
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v131) )
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)v129);
      if ( v113 )
      {
        v88 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*((ADAPTER_DISPLAY **)v77 + 266), v58, 0, 0x10u, this, 1u, 0);
        v90 = v88;
        if ( v88 < 0 )
        {
          v91 = WdLogNewEntry5_WdError(v89);
          *(_QWORD *)(v91 + 24) = v58;
          *(_QWORD *)(v91 + 32) = v90;
          WdLogEvent5_WdError(v91);
        }
      }
      DXGDEVICE::FlushScheduler(this, 6LL);
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v131) )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v129);
    }
    v92 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v92 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v92 + 144)) )
    {
      v94 = WdLogNewEntry5_WdAssertion(v93);
      *(_QWORD *)(v94 + 24) = 5160LL;
      WdLogEvent5_WdAssertion(v94);
    }
    if ( !*((_DWORD *)this + 18) )
      ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10));
    if ( v116 )
    {
      DXGDEVICE::TerminateAllocations(
        this,
        v116,
        1,
        *((struct DXGALLOCATION **)v116 + 3),
        (struct COREDEVICEACCESS *)v129,
        a8);
    }
    else
    {
      v126 = 0LL;
      DXGDEVICE::RemoveAllocationsAndTransferToList(this, v121, a7, &v126);
      v95 = v126;
      if ( v126 )
      {
        v96 = (struct DXGRESOURCE *)*((_QWORD *)v126 + 5);
        if ( v96 )
        {
          do
          {
            v97 = v95;
            v98 = (_QWORD *)((char *)v95 + 64);
            v95 = (struct DXGALLOCATION *)*((_QWORD *)v95 + 8);
            v126 = v95;
            *v98 = 0LL;
            DXGDEVICE::TerminateAllocations(this, v96, 0, v97, (struct COREDEVICEACCESS *)v129, a8);
          }
          while ( v95 );
        }
        else
        {
          do
          {
            v99 = v95;
            v100 = (_QWORD *)((char *)v95 + 64);
            v95 = (struct DXGALLOCATION *)*((_QWORD *)v95 + 8);
            v126 = v95;
            *v100 = 0LL;
            DXGDEVICE::TerminateAllocations(this, 0LL, 0, v99, (struct COREDEVICEACCESS *)v129, a8);
          }
          while ( v95 );
        }
      }
    }
    if ( v87 )
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, (struct COREDEVICEACCESS *)v129);
    v110 = 0;
    v114 = 0;
    if ( v108 )
    {
      v101 = v117;
      if ( v117 )
        ADAPTER_DISPLAY::EnsureGdiOutput(
          *((ADAPTER_DISPLAY **)v77 + 266),
          v117,
          (struct COREDEVICEACCESS *)v129,
          &v110,
          &v114,
          a10);
      MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v137, v110);
      if ( v101 )
      {
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)v129);
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v123);
        v102 = v120;
        if ( v120 )
        {
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v128);
          DXGDEVICEACCESSLOCKEXCLUSIVECDD::`scalar deleting destructor'(v102);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v101 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v117 + 2), v117);
        }
        DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v107);
        if ( v110 && v114 )
          (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this + 5) + 72LL) + 192LL))();
      }
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v128);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v107);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v129);
    if ( v125 )
    {
      v104 = v124;
      ExReleasePushLockSharedEx((char *)v124 + 120, 0LL);
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v104 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v124 + 2), v124);
    }
    v105 = v138;
    if ( (v138 & 2) != 0 )
    {
      v106 = WdLogNewEntry5_WdAssertion(v103);
      *(_QWORD *)(v106 + 24) = 217LL;
      WdLogEvent5_WdAssertion(v106);
    }
    if ( (v105 & 1) != 0 )
      MANAGEDPRIMARIESTRACKER::ReleaseWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v137);
    return 0LL;
  }
  v59 = v119;
  if ( !v119 || !*((_QWORD *)v119 + 266) )
  {
    v60 = WdLogNewEntry5_WdAssertion(v41);
    *(_QWORD *)(v60 + 24) = 7634LL;
    WdLogEvent5_WdAssertion(v60);
  }
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v129);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v123);
  DXGDEVICE::FlushScheduler(this, 5LL);
  a8.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(a8.Value | 1);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v137);
  v62 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v107, 1);
  if ( v62 >= 0 )
  {
    while ( 1 )
    {
      CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                               (struct _LUID *)((char *)v59 + 268),
                                               &v117,
                                               0LL);
      v65 = CddDeviceAndContextForCurrentSession;
      if ( CddDeviceAndContextForCurrentSession < 0 )
      {
        v66 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v66 + 24) = v65;
        WdLogEvent5_WdEvent(v66);
      }
      v67 = (volatile signed __int64 *)v117;
      if ( !v117 )
        goto LABEL_101;
      if ( *((_QWORD *)v117 + 2) != *((_QWORD *)this + 2) )
      {
        v68 = WdLogNewEntry5_WdAssertion(v64);
        *(_QWORD *)(v68 + 24) = 7692LL;
        WdLogEvent5_WdAssertion(v68);
      }
      if ( v67 )
      {
        v69 = (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)operator new(0x10uLL, 0x4B677844u, PagedPool);
        if ( !v69
          || (v71 = DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(v69, (struct DXGDEVICE *)v67),
              (v120 = v71) == 0LL) )
        {
          v73 = WdLogNewEntry5_WdLowResource(v70);
          *(_QWORD *)(v73 + 24) = -1073741801LL;
          WdLogEvent5_WdLowResource(v73);
          if ( _InterlockedExchangeAdd64(v67 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v117 + 2), v117);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v128);
          DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v107);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v129);
          if ( v125 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v123);
          MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v137);
          return 3221225495LL;
        }
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v128);
      }
      else
      {
LABEL_101:
        v71 = v120;
      }
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v123);
      COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v129);
      if ( *((_DWORD *)this + 94) == 4 )
        break;
      if ( (*(_BYTE *)&a8.0 & 1) != 0
        || (v72 = v116, !(unsigned int)DXGDEVICE::IsGpuAccessToAllocationsPending(this, a7, v116, v121)) )
      {
        v74 = v115;
        MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState(
          (MANAGEDPRIMARIESTRACKER *)v137,
          (struct _KTHREAD **)this,
          v115);
        v76 = (struct ADAPTER_RENDER *)*((_QWORD *)this + 2);
        if ( *((_QWORD *)this + 357) == *((_QWORD *)v76 + 2) )
        {
          if ( ((v74 - 1) & v74) != 0 )
          {
            v77 = v59;
            ADAPTER_DISPLAY::DisableAllPrimaries(*((ADAPTER_DISPLAY **)v59 + 266), v76);
          }
          else if ( v109 )
          {
            if ( v58 == -1 )
            {
              v78 = WdLogNewEntry5_WdAssertion(v75);
              *(_QWORD *)(v78 + 24) = 7779LL;
              WdLogEvent5_WdAssertion(v78);
            }
            v77 = v59;
            ADAPTER_DISPLAY::DisablePrimaryOnDevice(*((ADAPTER_DISPLAY **)v59 + 266), this, v58);
          }
          else
          {
            v79 = v122;
            v80 = *(unsigned int *)(*((_QWORD *)v122 + 6) + 4LL);
            if ( (v80 & 1) == 0 )
            {
              v81 = WdLogNewEntry5_WdAssertion(v80);
              *(_QWORD *)(v81 + 24) = 7787LL;
              WdLogEvent5_WdAssertion(v81);
            }
            v82 = (*(_DWORD *)(*((_QWORD *)v79 + 6) + 4LL) >> 6) & 0xF;
            if ( (_DWORD)v82 != v58 )
            {
              v83 = WdLogNewEntry5_WdAssertion(v82);
              *(_QWORD *)(v83 + 24) = 7788LL;
              WdLogEvent5_WdAssertion(v83);
            }
            v77 = v59;
            ADAPTER_DISPLAY::DisablePrimaryAllocation(*((ADAPTER_DISPLAY **)v59 + 266), this, v79);
          }
        }
        else
        {
          v77 = v59;
        }
        goto LABEL_139;
      }
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v129);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v123);
      if ( v71 )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v128);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::`scalar deleting destructor'(v71);
        v120 = 0LL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v117 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v117 + 2), v117);
        v117 = 0LL;
        v72 = v116;
      }
      DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v107);
      MANAGEDPRIMARIESTRACKER::ReleaseWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v137);
      DXGDEVICE::WaitUntilAllocationsNotBusy(this, a7, v72, v121);
      MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v137);
      v62 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v107, 1);
      if ( v62 < 0 )
        goto LABEL_133;
    }
    v84 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v84 + 24) = this;
    WdLogEvent5_WdEvent(v84);
    if ( v71 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::`scalar deleting destructor'(v71);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v117 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v117 + 2), v117);
    }
    DxgkDestroyClientAllocation(v85, this, a7, v121, v116);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v128);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v107);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v129);
    if ( !v125 )
      goto LABEL_40;
    goto LABEL_39;
  }
LABEL_133:
  v86 = WdLogNewEntry5_WdError(v61);
  *(_QWORD *)(v86 + 24) = v62;
  WdLogEvent5_WdError(v86);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v128);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v107);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v129);
  if ( v125 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v123);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v137);
  return (unsigned int)v62;
}

/*
 * XREFs of ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0073484
 * Callers:
 *     DxgkSetVidPnSourceOwner @ 0x1C0070880 (DxgkSetVidPnSourceOwner.c)
 *     DxgkSetVidPnSourceOwner1 @ 0x1C0073160 (DxgkSetVidPnSourceOwner1.c)
 * Callees:
 *     ??_GDXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAPEAXI@Z @ 0x1C00014AC (--_GDXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAPEAXI@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00014CC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001588 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C00015B4 (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001668 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C00017E4 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00017FC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00069EC (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0006A38 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0006A94 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0006AE0 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00082B8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C000838C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C00114D8 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C00114E0 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     DxgkStatusChangeNotify @ 0x1C00728B0 (DxgkStatusChangeNotify.c)
 *     DxgkShutdownBootGraphics @ 0x1C0073320 (DxgkShutdownBootGraphics.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0073DD0 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C0073EC4 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C0073EF0 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C0073F88 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00740D0 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00875FC (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0087994 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C0087D48 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAJH@Z @ 0x1C0095958 (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAJH@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C00DE19C (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall SetVidPnSourceOwnerInternal(
        const struct _D3DKMT_SETVIDPNSOURCEOWNER *a1,
        struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  struct DXGFASTMUTEX *const *ProcessDxgProcess; // rax
  __int64 v8; // rcx
  unsigned __int8 v9; // r8
  struct _KTHREAD **v10; // r13
  __int64 v11; // rcx
  unsigned int v12; // r12d
  const void *v13; // rsi
  __int64 v14; // rdi
  _QWORD *v15; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rcx
  struct DXGDEVICE *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // r15
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rsi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rsi
  volatile signed __int64 *v31; // rsi
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v32; // r13
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // r15d
  __int64 v37; // r13
  ADAPTER_DISPLAY *v38; // r13
  char v39; // cl
  __int64 v40; // rcx
  int v41; // edx
  int v42; // edx
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v43; // rbx
  __int64 v44; // rcx
  int v45; // edx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned int v49; // ebx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  char v59; // [rsp+30h] [rbp-378h] BYREF
  unsigned __int8 v60; // [rsp+31h] [rbp-377h] BYREF
  unsigned __int8 v61[6]; // [rsp+32h] [rbp-376h] BYREF
  char v62[8]; // [rsp+38h] [rbp-370h] BYREF
  struct DXGDEVICE *v63; // [rsp+40h] [rbp-368h]
  _QWORD v64[2]; // [rsp+48h] [rbp-360h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v65; // [rsp+58h] [rbp-350h]
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v66; // [rsp+60h] [rbp-348h]
  struct DXGDEVICE *v67; // [rsp+68h] [rbp-340h] BYREF
  _BYTE v68[16]; // [rsp+70h] [rbp-338h] BYREF
  struct DXGFASTMUTEX *const *v69; // [rsp+80h] [rbp-328h]
  void *Src[2]; // [rsp+88h] [rbp-320h]
  void *v71[2]; // [rsp+98h] [rbp-310h]
  __int64 v72; // [rsp+A8h] [rbp-300h]
  _BYTE v73[24]; // [rsp+B0h] [rbp-2F8h] BYREF
  int v74; // [rsp+C8h] [rbp-2E0h] BYREF
  __int64 v75; // [rsp+D0h] [rbp-2D8h]
  _BYTE v76[96]; // [rsp+E0h] [rbp-2C8h] BYREF
  _BYTE v77[432]; // [rsp+140h] [rbp-268h] BYREF
  _D3DKMT_VIDPNSOURCEOWNER_TYPE v78[16]; // [rsp+2F0h] [rbp-B8h] BYREF
  unsigned int v79[16]; // [rsp+330h] [rbp-78h] BYREF

  v65 = a3;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct DXGFASTMUTEX *const *)PsGetProcessDxgProcess(CurrentProcess, v6);
  v10 = (struct _KTHREAD **)ProcessDxgProcess;
  v69 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v48 = WdLogNewEntry5_WdError(v8);
    v49 = -1073741811;
    *(_QWORD *)(v48 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v48);
    return v49;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX(
    (DXGPROCESSCOPYPROTECTIONMUTEX *)v68,
    ProcessDxgProcess,
    v9);
  v79[0] = 0;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct _D3DKMT_SETVIDPNSOURCEOWNER *)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)&a1->hDevice;
  *(_OWORD *)v71 = *(_OWORD *)&a1->pVidPnSourceId;
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v71, 8));
  if ( v12 )
  {
    if ( v12 > 0x10 )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdError(v11);
      v15[3] = LODWORD(Src[0]);
      v15[4] = v12;
      v15[5] = -1073741811LL;
      WdLogEvent5_WdError(v15);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v68);
      return 3221225485LL;
    }
    v13 = Src[1];
    if ( !Src[1] || !v71[0] )
    {
      v17 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v17 + 24) = LODWORD(Src[0]);
      *(_QWORD *)(v17 + 32) = v12;
      *(_QWORD *)(v17 + 40) = v13;
      *(void **)(v17 + 48) = v71[0];
      *(_QWORD *)(v17 + 56) = -1073741811LL;
      WdLogEvent5_WdError(v17);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v68);
      return 3221225485LL;
    }
    v14 = 4LL * v12;
    if ( (char *)Src[1] + v14 < Src[1] || (char *)Src[1] + v14 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v78, v13, 4LL * v12);
    if ( (char *)v71[0] + v14 < v71[0] || (char *)v71[0] + v14 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v79, v71[0], 4LL * v12);
  }
  if ( (unsigned int)_guard_dispatch_icall_fptr() )
  {
    v45 = 0;
    if ( v12 )
    {
      while ( (unsigned int)(v78[v45] - 2) > 1 )
      {
        if ( ++v45 >= v12 )
          goto LABEL_18;
      }
      v49 = -1071774910;
      goto LABEL_87;
    }
  }
LABEL_18:
  v18 = LODWORD(Src[0]);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v62, (unsigned int)Src[0], v10, &v67);
  v20 = v67;
  if ( !v67 )
  {
    v50 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v50 + 24) = v18;
    v49 = -1073741811;
    *(_QWORD *)(v50 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v50);
LABEL_91:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v62);
LABEL_87:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v68);
    return v49;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v64, v67);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v73, (struct _KTHREAD **)v20 + 11);
  v22 = *((_QWORD *)v20 + 357);
  v72 = v22;
  if ( !v22 )
  {
    v51 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v51 + 24) = v18;
    v49 = -1073741637;
    *(_QWORD *)(v51 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v51);
LABEL_94:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v73);
    if ( v64[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v64);
    goto LABEL_91;
  }
  DxgkShutdownBootGraphics(v22, v18);
  if ( *((_BYTE *)v20 + 2904) )
  {
    v52 = WdLogNewEntry5_WdAssertion(v23);
    *(_QWORD *)(v52 + 24) = 2584LL;
    WdLogEvent5_WdAssertion(v52);
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v77,
    *(struct ADAPTER_DISPLAY **)(v22 + 2128),
    (struct DXGPROCESS *)v10);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v77);
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v59);
  v24 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v59, 1);
  v26 = v24;
  if ( v24 < 0 )
  {
    v53 = WdLogNewEntry5_WdError(v25);
    *(_QWORD *)(v53 + 24) = v26;
    WdLogEvent5_WdError(v53);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v59);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v77);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v73);
    if ( v64[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v64);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v62);
    v49 = v26;
    goto LABEL_87;
  }
  v63 = 0LL;
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(v22 + 268));
  v30 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    v46 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v46 + 24) = v30;
    WdLogEvent5_WdEvent(v46);
  }
  v31 = (volatile signed __int64 *)v63;
  if ( v63 && (*((_QWORD *)v63 + 2) != *((_QWORD *)v20 + 2) || *((_QWORD *)v63 + 357) != *((_QWORD *)v20 + 357)) )
  {
    v54 = WdLogNewEntry5_WdAssertion(v28);
    *(_QWORD *)(v54 + 24) = 2632LL;
    WdLogEvent5_WdAssertion(v54);
  }
  v32 = 0LL;
  v66 = 0LL;
  if ( v31 )
  {
    v33 = (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)operator new(0x10uLL, 0x4B677844u, PagedPool);
    if ( v33 )
      v32 = DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(v33, (struct DXGDEVICE *)v31);
    v66 = v32;
    if ( v32 )
    {
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v68);
      goto LABEL_33;
    }
    v55 = WdLogNewEntry5_WdLowResource(v34);
    v49 = -1073741801;
    *(_QWORD *)(v55 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v55);
    if ( _InterlockedExchangeAdd64(v31 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v63 + 2), v63);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v59);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v77);
    goto LABEL_94;
  }
LABEL_33:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v76, (__int64)v20, 1, v29, 0);
  v36 = COREDEVICEACCESS::AcquireExclusive((__int64)v76);
  if ( v36 < 0 )
  {
    if ( v32 )
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::`scalar deleting destructor'(v32);
    if ( v31 && _InterlockedExchangeAdd64(v31 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v63 + 2), v63);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v76);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v59);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v77);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v73);
    if ( v64[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v64);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v62);
    v49 = v36;
    goto LABEL_87;
  }
  v37 = v72;
  if ( !*(_QWORD *)(v72 + 2128) )
  {
    v47 = WdLogNewEntry5_WdAssertion(v35);
    *(_QWORD *)(v47 + 24) = 2674LL;
    WdLogEvent5_WdAssertion(v47);
  }
  v38 = *(ADAPTER_DISPLAY **)(v37 + 2128);
  v39 = 0;
  if ( !v12 || v78[0] == D3DKMT_VIDPNSOURCEOWNER_UNOWNED && v12 == 1 && v79[0] < *((_DWORD *)v38 + 20) )
    v39 = 1;
  if ( v39 )
  {
    if ( !v12
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner(v38, v20) || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v38, v20))
      || v12 == 1
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner((DXGADAPTER **)v38, v20, v79[0])
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((DXGADAPTER **)v38, v20, v79[0])) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v77, v20, 0xFFFFFFFF);
      if ( v12 )
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(v38, v20, v79[0]);
      else
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(v38, v20);
      goto LABEL_68;
    }
  }
  else
  {
    if ( (unsigned int)_guard_dispatch_icall_fptr()
      && (v78[0] != D3DKMT_VIDPNSOURCEOWNER_SHARED && v78[0] != D3DKMT_VIDPNSOURCEOWNER_EMULATED
       || (unsigned int)_guard_dispatch_icall_fptr()) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v77, 0LL, 0xFFFFFFFF);
      v36 = ADAPTER_DISPLAY::AcquireVidPnSourceOwner(v38, v20, v78, v79, v12, a2);
      if ( v36 < 0 )
        goto LABEL_46;
      if ( v78[0] == D3DKMT_VIDPNSOURCEOWNER_SHARED )
      {
        v41 = 3;
LABEL_45:
        DXGDEVICE::SetSchedulingPriorityAdjustment(v20, v41);
        goto LABEL_46;
      }
      if ( v78[0] > D3DKMT_VIDPNSOURCEOWNER_SHARED )
      {
        v41 = 3;
        if ( v78[0] <= D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI )
        {
          v41 = 7;
          goto LABEL_45;
        }
        if ( v78[0] == D3DKMT_VIDPNSOURCEOWNER_EMULATED )
          goto LABEL_45;
      }
      v56 = WdLogNewEntry5_WdAssertion(v40);
      *(_QWORD *)(v56 + 24) = 2742LL;
      WdLogEvent5_WdAssertion(v56);
LABEL_68:
      v41 = 0;
      goto LABEL_45;
    }
    v57 = WdLogNewEntry5_WdEvent();
    v36 = -1073741790;
    *(_QWORD *)(v57 + 24) = -1073741790LL;
    WdLogEvent5_WdEvent(v57);
  }
LABEL_46:
  v60 = 0;
  v61[0] = 0;
  if ( v36 < 0 )
    goto LABEL_69;
  if ( v31 )
    ADAPTER_DISPLAY::EnsureGdiOutput(v38, (struct DXGDEVICE *)v31, (struct COREDEVICEACCESS *)v76, &v60, v61, v65);
  if ( v60 )
    v42 = 1;
  else
LABEL_69:
    v42 = 0;
  MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v77, v42);
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v76);
  v43 = v66;
  if ( v66 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v68);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::`scalar deleting destructor'(v43);
    if ( _InterlockedExchangeAdd64(v31 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v63 + 2), v63);
  }
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v59);
  if ( v36 >= 0 )
  {
    if ( v61[0] && v60 )
      _guard_dispatch_icall_fptr();
    _guard_dispatch_icall_fptr();
    v74 = 1;
    v75 = 0LL;
    if ( (int)DxgkStatusChangeNotify(&v74) < 0 )
    {
      v58 = WdLogNewEntry5_WdAssertion(v44);
      *(_QWORD *)(v58 + 24) = 2847LL;
      WdLogEvent5_WdAssertion(v58);
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v76);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v59);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v77);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v73);
  if ( v64[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v64);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v62);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v68);
  return (unsigned int)v36;
}

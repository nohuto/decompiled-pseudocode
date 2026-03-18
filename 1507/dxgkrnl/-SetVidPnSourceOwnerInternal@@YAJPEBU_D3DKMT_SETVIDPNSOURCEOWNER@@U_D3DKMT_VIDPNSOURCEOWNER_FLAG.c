/*
 * XREFs of ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00B47FC
 * Callers:
 *     DxgkSetVidPnSourceOwner1 @ 0x1C00B46A0 (DxgkSetVidPnSourceOwner1.c)
 *     DxgkSetVidPnSourceOwner @ 0x1C00BE4D0 (DxgkSetVidPnSourceOwner.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00010D0 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001B44 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001B68 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000286C (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002AA0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0004D18 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0004D30 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0004D38 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00067E0 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000682C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0006888 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C00068D4 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000A784 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??_GDXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAPEAXI@Z @ 0x1C000AB08 (--_GDXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAPEAXI@Z.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C000AB70 (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000B628 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000F92C (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C005E564 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C00ACF40 (DxgkStatusChangeNotify.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C00B3744 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C00B5210 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00B523C (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00B52D4 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00B5424 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z @ 0x1C00B60B8 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00B644C (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAJH@Z @ 0x1C00B7970 (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAJH@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00BDB08 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall SetVidPnSourceOwnerInternal(
        const struct _D3DKMT_SETVIDPNSOURCEOWNER *a1,
        struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS a2)
{
  const struct _D3DKMT_SETVIDPNSOURCEOWNER *v3; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rcx
  struct _KTHREAD **v6; // r14
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v7; // r12
  __int64 v8; // rcx
  unsigned int v9; // r15d
  const void *v10; // rsi
  __int64 v11; // rdi
  _QWORD *v12; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  struct DXGDEVICE *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r13
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rsi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rsi
  volatile signed __int64 *v29; // rsi
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // r14d
  ADAPTER_DISPLAY *v37; // r13
  char v38; // cl
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  int v47; // edx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned int v58; // ebx
  __int64 v59; // rax
  __int64 v60; // rax
  bool v61; // zf
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  char v68; // [rsp+30h] [rbp-358h] BYREF
  unsigned __int8 v69; // [rsp+31h] [rbp-357h] BYREF
  unsigned __int8 v70[6]; // [rsp+32h] [rbp-356h] BYREF
  struct DXGDEVICE *v71; // [rsp+38h] [rbp-350h] BYREF
  _QWORD v72[2]; // [rsp+40h] [rbp-348h] BYREF
  struct _LUID v73; // [rsp+50h] [rbp-338h] BYREF
  struct DXGDEVICE *v74; // [rsp+58h] [rbp-330h] BYREF
  _BYTE v75[16]; // [rsp+60h] [rbp-328h] BYREF
  _BYTE v76[8]; // [rsp+70h] [rbp-318h] BYREF
  struct DXGPROCESS *v77; // [rsp+78h] [rbp-310h]
  void *Src[2]; // [rsp+80h] [rbp-308h]
  void *v79[2]; // [rsp+90h] [rbp-2F8h]
  _BYTE v80[24]; // [rsp+A0h] [rbp-2E8h] BYREF
  int v81; // [rsp+B8h] [rbp-2D0h] BYREF
  __int64 v82; // [rsp+C0h] [rbp-2C8h]
  _BYTE v83[80]; // [rsp+D0h] [rbp-2B8h] BYREF
  _BYTE v84[432]; // [rsp+120h] [rbp-268h] BYREF
  unsigned int v85[16]; // [rsp+2D0h] [rbp-B8h] BYREF
  _D3DKMT_VIDPNSOURCEOWNER_TYPE v86[16]; // [rsp+310h] [rbp-78h] BYREF

  v3 = a1;
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  v6 = (struct _KTHREAD **)Current;
  v77 = Current;
  v7 = 0LL;
  if ( !Current )
  {
    v57 = WdLogNewEntry5_WdError(v5);
    v58 = -1073741811;
    *(_QWORD *)(v57 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v57);
    return v58;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX(
    (DXGPROCESSCOPYPROTECTIONMUTEX *)v75,
    (struct DXGFASTMUTEX *const *)Current);
  v85[0] = 0;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (const struct _D3DKMT_SETVIDPNSOURCEOWNER *)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)&v3->hDevice;
  *(_OWORD *)v79 = *(_OWORD *)&v3->pVidPnSourceId;
  v9 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v79, 8));
  if ( v9 )
  {
    if ( v9 > 0x10 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdError(v8);
      v12[3] = LODWORD(Src[0]);
      v12[4] = v9;
      v12[5] = -1073741811LL;
      WdLogEvent5_WdError(v12);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v75);
      return 3221225485LL;
    }
    v10 = Src[1];
    if ( !Src[1] || !v79[0] )
    {
      v14 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v14 + 24) = LODWORD(Src[0]);
      *(_QWORD *)(v14 + 32) = v9;
      *(_QWORD *)(v14 + 40) = v10;
      *(void **)(v14 + 48) = v79[0];
      *(_QWORD *)(v14 + 56) = -1073741811LL;
      WdLogEvent5_WdError(v14);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v75);
      return 3221225485LL;
    }
    v11 = 4LL * v9;
    if ( (char *)Src[1] + v11 < Src[1] || (char *)Src[1] + v11 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v86, v10, 4LL * v9);
    if ( (char *)v79[0] + v11 < v79[0] || (char *)v79[0] + v11 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v85, v79[0], 4LL * v9);
  }
  v15 = LODWORD(Src[0]);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v76, (unsigned int)Src[0], v6, &v74);
  v17 = v74;
  if ( !v74 )
  {
    v59 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v59 + 24) = v15;
    v58 = -1073741811;
    *(_QWORD *)(v59 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v59);
LABEL_81:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v76);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v75);
    return v58;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v72, v74);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v80, (struct _KTHREAD **)v17 + 11);
  v19 = *((_QWORD *)v17 + 2338);
  if ( !v19 )
  {
    v60 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v60 + 24) = v15;
    v58 = -1073741637;
    *(_QWORD *)(v60 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v60);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v80);
    v61 = v72[0] == 0LL;
    goto LABEL_86;
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v84,
    *(struct ADAPTER_DISPLAY **)(v19 + 1976),
    (struct DXGPROCESS *)v6);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v84);
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v68);
  v20 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v68, 1);
  v22 = v20;
  if ( v20 < 0 )
  {
    v62 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v62 + 24) = v22;
    WdLogEvent5_WdError(v62);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v68);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v84);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v80);
    if ( v72[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v72);
    v58 = v22;
    goto LABEL_81;
  }
  v71 = 0LL;
  v73 = *(struct _LUID *)(v19 + 252);
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(&v73, &v71, 0LL);
  v28 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    v55 = WdLogNewEntry5_WdEvent(v25, v24, v26, v27);
    *(_QWORD *)(v55 + 24) = v28;
    WdLogEvent5_WdEvent(v55);
  }
  v29 = (volatile signed __int64 *)v71;
  if ( v71 )
  {
    if ( *((_QWORD *)v71 + 2) != *((_QWORD *)v17 + 2) || *((_QWORD *)v71 + 2338) != *((_QWORD *)v17 + 2338) )
    {
      v63 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
      *(_QWORD *)(v63 + 24) = 2383LL;
      WdLogEvent5_WdAssertion(v63);
    }
    if ( v29 )
    {
      v30 = (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)operator new[](8uLL, 0x4B677844u, PagedPool);
      if ( v30 )
        v7 = DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(v30, (struct DXGDEVICE *)v29);
      else
        v7 = 0LL;
      if ( v7 )
      {
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v75);
        goto LABEL_30;
      }
      v64 = WdLogNewEntry5_WdLowResource(v31);
      v58 = -1073741801;
      *(_QWORD *)(v64 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v64);
      if ( _InterlockedExchangeAdd64(v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v71 + 2), v71);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v68);
      MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v84);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v80);
      v61 = v72[0] == 0LL;
LABEL_86:
      if ( !v61 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v72);
      goto LABEL_81;
    }
  }
LABEL_30:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v83, (__int64)v17, 1, v27, 0);
  v36 = COREDEVICEACCESS::AcquireExclusive((__int64)v83);
  if ( v36 < 0 )
  {
    if ( v7 )
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::`scalar deleting destructor'(v7);
    if ( v29 && _InterlockedExchangeAdd64(v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v71 + 2), v71);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v83);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v68);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v84);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v80);
    if ( v72[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v72);
    v58 = v36;
    goto LABEL_81;
  }
  if ( !*(_QWORD *)(v19 + 1976) )
  {
    v56 = WdLogNewEntry5_WdAssertion(v33, v32, v34, v35);
    *(_QWORD *)(v56 + 24) = 2425LL;
    WdLogEvent5_WdAssertion(v56);
  }
  v37 = *(ADAPTER_DISPLAY **)(v19 + 1976);
  v38 = 0;
  if ( !v9 || v86[0] == D3DKMT_VIDPNSOURCEOWNER_UNOWNED && v9 == 1 && v85[0] < *((_DWORD *)v37 + 20) )
    v38 = 1;
  if ( v38 )
  {
    if ( !v9 && (ADAPTER_DISPLAY::IsVidPnSourceOwner(v37, v17) || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v37, v17))
      || v9 == 1
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner((DXGADAPTER **)v37, v17, v85[0])
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((DXGADAPTER **)v37, v17, v85[0])) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v84, v17, 0xFFFFFFFF);
      if ( v9 )
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(v37, v17, v85[0]);
      else
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner((PERESOURCE **)v37, v17);
      LODWORD(v43) = 0;
      goto LABEL_42;
    }
  }
  else
  {
    if ( (unsigned int)_guard_dispatch_icall_fptr()
      && (v86[0] != D3DKMT_VIDPNSOURCEOWNER_SHARED && v86[0] != D3DKMT_VIDPNSOURCEOWNER_EMULATED
       || (unsigned int)_guard_dispatch_icall_fptr()) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v84, 0LL, 0xFFFFFFFF);
      v36 = ADAPTER_DISPLAY::AcquireVidPnSourceOwner(v37, v17, v86, v85, v9, a2);
      if ( v36 < 0 )
        goto LABEL_43;
      if ( v86[0] == D3DKMT_VIDPNSOURCEOWNER_SHARED )
      {
        LODWORD(v43) = 3;
LABEL_42:
        DXGDEVICE::SetSchedulingPriorityAdjustment(v17, v43);
        goto LABEL_43;
      }
      if ( v86[0] > D3DKMT_VIDPNSOURCEOWNER_SHARED )
      {
        v43 = 3LL;
        if ( v86[0] <= D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI )
        {
          LODWORD(v43) = 7;
          goto LABEL_42;
        }
        if ( v86[0] == D3DKMT_VIDPNSOURCEOWNER_EMULATED )
          goto LABEL_42;
      }
      v65 = WdLogNewEntry5_WdAssertion(v44, v43, v45, v46);
      *(_QWORD *)(v65 + 24) = 2480LL;
      WdLogEvent5_WdAssertion(v65);
      LODWORD(v43) = 0;
      goto LABEL_42;
    }
    v66 = WdLogNewEntry5_WdEvent(v40, v39, v41, v42);
    v36 = -1073741790;
    *(_QWORD *)(v66 + 24) = -1073741790LL;
    WdLogEvent5_WdEvent(v66);
  }
LABEL_43:
  v69 = 0;
  v70[0] = 0;
  if ( v36 < 0 )
    goto LABEL_73;
  if ( v29 )
    ADAPTER_DISPLAY::EnsureGdiOutput(v37, (struct DXGDEVICE *)v29, (struct COREDEVICEACCESS *)v83, &v69, v70);
  v47 = 1;
  if ( !v69 )
LABEL_73:
    v47 = 0;
  MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v84, v47);
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v83);
  if ( v7 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v75);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::`scalar deleting destructor'(v7);
    if ( _InterlockedExchangeAdd64(v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v71 + 2), v71);
  }
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v68);
  if ( v36 >= 0 )
  {
    if ( v70[0] && v69 )
      _guard_dispatch_icall_fptr();
    _guard_dispatch_icall_fptr();
    v81 = 1;
    v82 = 0LL;
    if ( (int)DxgkStatusChangeNotify(&v81, v48, v49, v50) < 0 )
    {
      v67 = WdLogNewEntry5_WdAssertion(v52, v51, v53, v54);
      *(_QWORD *)(v67 + 24) = 2583LL;
      WdLogEvent5_WdAssertion(v67);
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v83);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v68);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v84);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v80);
  if ( v72[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v72);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v76);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v75);
  return (unsigned int)v36;
}

/*
 * XREFs of ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00AFD1C
 * Callers:
 *     DxgkSetVidPnSourceOwner @ 0x1C00AEAB0 (DxgkSetVidPnSourceOwner.c)
 *     DxgkSetVidPnSourceOwner1 @ 0x1C00AFBC0 (DxgkSetVidPnSourceOwner1.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00035B8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003614 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003638 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0006F38 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0007070 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0007088 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0007090 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007098 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0007D20 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007D6C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0007DCC (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007E18 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C000ADAC (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000AE48 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000AE8C (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000AED8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??_GDXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAPEAXI@Z @ 0x1C000AF94 (--_GDXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAJH@Z @ 0x1C006D3EC (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAJH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C009AB8C (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z @ 0x1C009AF4C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C009B204 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C00B04D8 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00B0504 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00B059C (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00B06F0 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00B0870 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     DxgkCddDestroyVirtualFrameBuffer @ 0x1C00B0910 (DxgkCddDestroyVirtualFrameBuffer.c)
 *     DxgkStatusChangeNotify @ 0x1C00B1110 (DxgkStatusChangeNotify.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C012E0EC (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall SetVidPnSourceOwnerInternal(
        const struct _D3DKMT_SETVIDPNSOURCEOWNER *a1,
        struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS a2)
{
  struct DXGFASTMUTEX *const *Current; // rax
  __int64 v5; // rcx
  struct _KTHREAD **v6; // r12
  __int64 v7; // rcx
  unsigned int v8; // r15d
  const void *v9; // rsi
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  struct DXGDEVICE *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r13
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rsi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rsi
  volatile signed __int64 *v28; // rsi
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v29; // r13
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  int v36; // r12d
  __int64 v37; // r13
  __int64 v38; // r13
  char v39; // cl
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  int v45; // edx
  int v46; // edx
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v47; // rbx
  __int64 v48; // rcx
  int v49; // edx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned int v53; // ebx
  __int64 v54; // rax
  __int64 v55; // rax
  bool v56; // zf
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  char v63; // [rsp+30h] [rbp-368h] BYREF
  unsigned __int8 v64; // [rsp+31h] [rbp-367h] BYREF
  unsigned __int8 v65[6]; // [rsp+32h] [rbp-366h] BYREF
  _BYTE v66[8]; // [rsp+38h] [rbp-360h] BYREF
  struct DXGDEVICE *v67; // [rsp+40h] [rbp-358h] BYREF
  _QWORD v68[2]; // [rsp+48h] [rbp-350h] BYREF
  __int64 v69; // [rsp+58h] [rbp-340h]
  struct DXGDEVICE *v70; // [rsp+60h] [rbp-338h] BYREF
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v71; // [rsp+68h] [rbp-330h]
  _BYTE v72[16]; // [rsp+70h] [rbp-328h] BYREF
  struct DXGFASTMUTEX *const *v73; // [rsp+80h] [rbp-318h]
  void *Src[2]; // [rsp+88h] [rbp-310h]
  void *v75[2]; // [rsp+98h] [rbp-300h]
  struct _LUID v76; // [rsp+A8h] [rbp-2F0h] BYREF
  _BYTE v77[24]; // [rsp+B0h] [rbp-2E8h] BYREF
  int v78; // [rsp+C8h] [rbp-2D0h] BYREF
  __int64 v79; // [rsp+D0h] [rbp-2C8h]
  _BYTE v80[80]; // [rsp+E0h] [rbp-2B8h] BYREF
  _BYTE v81[432]; // [rsp+130h] [rbp-268h] BYREF
  unsigned int v82[16]; // [rsp+2E0h] [rbp-B8h] BYREF
  _D3DKMT_VIDPNSOURCEOWNER_TYPE v83[16]; // [rsp+320h] [rbp-78h] BYREF

  Current = (struct DXGFASTMUTEX *const *)DXGPROCESS::GetCurrent();
  v6 = (struct _KTHREAD **)Current;
  v73 = Current;
  if ( !Current )
  {
    v52 = WdLogNewEntry5_WdError(v5);
    v53 = -1073741811;
    *(_QWORD *)(v52 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v52);
    return v53;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v72, Current);
  v82[0] = 0;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct _D3DKMT_SETVIDPNSOURCEOWNER *)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)&a1->hDevice;
  *(_OWORD *)v75 = *(_OWORD *)&a1->pVidPnSourceId;
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v75, 8));
  if ( v8 )
  {
    if ( v8 > 0x10 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdError(v7);
      v11[3] = LODWORD(Src[0]);
      v11[4] = v8;
      v11[5] = -1073741811LL;
      WdLogEvent5_WdError(v11);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v72);
      return 3221225485LL;
    }
    v9 = Src[1];
    if ( !Src[1] || !v75[0] )
    {
      v13 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v13 + 24) = LODWORD(Src[0]);
      *(_QWORD *)(v13 + 32) = v8;
      *(_QWORD *)(v13 + 40) = v9;
      *(void **)(v13 + 48) = v75[0];
      *(_QWORD *)(v13 + 56) = -1073741811LL;
      WdLogEvent5_WdError(v13);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v72);
      return 3221225485LL;
    }
    v10 = 4LL * v8;
    if ( (char *)Src[1] + v10 < Src[1] || (char *)Src[1] + v10 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v83, v9, 4LL * v8);
    if ( (char *)v75[0] + v10 < v75[0] || (char *)v75[0] + v10 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v82, v75[0], 4LL * v8);
  }
  if ( (unsigned int)_guard_dispatch_icall_fptr() )
  {
    v49 = 0;
    if ( v8 )
    {
      while ( (unsigned int)(v83[v49] - 2) > 1 )
      {
        if ( ++v49 >= v8 )
          goto LABEL_18;
      }
      v53 = -1071774910;
      goto LABEL_82;
    }
  }
LABEL_18:
  v14 = LODWORD(Src[0]);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v66, (unsigned int)Src[0], v6, &v70);
  v16 = v70;
  if ( !v70 )
  {
    v54 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v54 + 24) = v14;
    v53 = -1073741811;
    *(_QWORD *)(v54 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v54);
LABEL_86:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v66);
LABEL_82:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v72);
    return v53;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v68, v70);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v77, (struct _KTHREAD **)v16 + 11);
  v18 = *((_QWORD *)v16 + 354);
  v69 = v18;
  if ( !v18 )
  {
    v55 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v55 + 24) = v14;
    v53 = -1073741637;
    *(_QWORD *)(v55 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v55);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v77);
    v56 = v68[0] == 0LL;
LABEL_89:
    if ( !v56 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v68);
    goto LABEL_86;
  }
  DxgkCddDestroyVirtualFrameBuffer();
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v81,
    *(struct ADAPTER_DISPLAY **)(v18 + 1984),
    (struct DXGPROCESS *)v6);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v81);
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v63);
  v19 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v63, 1);
  v21 = v19;
  if ( v19 < 0 )
  {
    v57 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v57 + 24) = v21;
    WdLogEvent5_WdError(v57);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v63);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v81);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v77);
    if ( v68[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v68);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v66);
    v53 = v21;
    goto LABEL_82;
  }
  v67 = 0LL;
  v76 = *(struct _LUID *)(v18 + 252);
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(&v76, &v67, 0LL);
  v27 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    v50 = WdLogNewEntry5_WdEvent(v24, v23, v25, v26);
    *(_QWORD *)(v50 + 24) = v27;
    WdLogEvent5_WdEvent(v50);
  }
  v28 = (volatile signed __int64 *)v67;
  if ( v67 && (*((_QWORD *)v67 + 2) != *((_QWORD *)v16 + 2) || *((_QWORD *)v67 + 354) != *((_QWORD *)v16 + 354)) )
  {
    v58 = WdLogNewEntry5_WdAssertion(v24);
    *(_QWORD *)(v58 + 24) = 2406LL;
    WdLogEvent5_WdAssertion(v58);
  }
  v29 = 0LL;
  v71 = 0LL;
  if ( v28 )
  {
    v30 = (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)operator new[](0x10uLL, 0x4B677844u, PagedPool);
    if ( v30 )
      v29 = DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(v30, (struct DXGDEVICE *)v28);
    v71 = v29;
    if ( v29 )
    {
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v72);
      goto LABEL_31;
    }
    v59 = WdLogNewEntry5_WdLowResource(v32, v31, v33, v34);
    v53 = -1073741801;
    *(_QWORD *)(v59 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v59);
    if ( _InterlockedExchangeAdd64(v28 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v67 + 2), v67);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v63);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v81);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v77);
    v56 = v68[0] == 0LL;
    goto LABEL_89;
  }
LABEL_31:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v80, (__int64)v16, 1, v26, 0);
  v36 = COREDEVICEACCESS::AcquireExclusive((__int64)v80);
  if ( v36 < 0 )
  {
    if ( v29 )
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::`scalar deleting destructor'(v29);
    if ( v28 && _InterlockedExchangeAdd64(v28 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v67 + 2), v67);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v80);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v63);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v81);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v77);
    if ( v68[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v68);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v66);
    v53 = v36;
    goto LABEL_82;
  }
  v37 = v69;
  if ( !*(_QWORD *)(v69 + 1984) )
  {
    v51 = WdLogNewEntry5_WdAssertion(v35);
    *(_QWORD *)(v51 + 24) = 2448LL;
    WdLogEvent5_WdAssertion(v51);
  }
  v38 = *(_QWORD *)(v37 + 1984);
  v39 = 0;
  if ( !v8 || v83[0] == D3DKMT_VIDPNSOURCEOWNER_UNOWNED && v8 == 1 && v82[0] < *(_DWORD *)(v38 + 104) )
    v39 = 1;
  if ( v39 )
  {
    if ( !v8
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner((ADAPTER_DISPLAY *)v38, v16)
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((ADAPTER_DISPLAY *)v38, v16))
      || v8 == 1
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner((DXGADAPTER **)v38, v16, v82[0])
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((DXGADAPTER **)v38, v16, v82[0])) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v81, v16, 0xFFFFFFFF);
      if ( v8 )
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner((PERESOURCE **)v38, v16, v82[0]);
      else
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner((ADAPTER_DISPLAY *)v38, v16);
      goto LABEL_71;
    }
  }
  else
  {
    if ( (unsigned int)_guard_dispatch_icall_fptr()
      && (v83[0] != D3DKMT_VIDPNSOURCEOWNER_SHARED && v83[0] != D3DKMT_VIDPNSOURCEOWNER_EMULATED
       || (unsigned int)_guard_dispatch_icall_fptr()) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v81, 0LL, 0xFFFFFFFF);
      v36 = ADAPTER_DISPLAY::AcquireVidPnSourceOwner((PERESOURCE **)v38, v16, v83, (__int64)v82, v8, a2);
      if ( v36 < 0 )
        goto LABEL_44;
      if ( v83[0] == D3DKMT_VIDPNSOURCEOWNER_SHARED )
      {
        v45 = 3;
        goto LABEL_43;
      }
      if ( v83[0] > D3DKMT_VIDPNSOURCEOWNER_SHARED )
      {
        v45 = 3;
        if ( v83[0] <= D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI )
        {
          v45 = 7;
          goto LABEL_43;
        }
        if ( v83[0] == D3DKMT_VIDPNSOURCEOWNER_EMULATED )
        {
LABEL_43:
          DXGDEVICE::SetSchedulingPriorityAdjustment(v16, v45);
          goto LABEL_44;
        }
      }
      v60 = WdLogNewEntry5_WdAssertion(v44);
      *(_QWORD *)(v60 + 24) = 2503LL;
      WdLogEvent5_WdAssertion(v60);
LABEL_71:
      v45 = 0;
      goto LABEL_43;
    }
    v61 = WdLogNewEntry5_WdEvent(v41, v40, v42, v43);
    v36 = -1073741790;
    *(_QWORD *)(v61 + 24) = -1073741790LL;
    WdLogEvent5_WdEvent(v61);
  }
LABEL_44:
  v64 = 0;
  v65[0] = 0;
  if ( v36 < 0 )
    goto LABEL_67;
  if ( v28 )
    ADAPTER_DISPLAY::EnsureGdiOutput(
      (ADAPTER_DISPLAY *)v38,
      (struct DXGDEVICE *)v28,
      (struct COREDEVICEACCESS *)v80,
      &v64,
      v65);
  if ( v64 )
    v46 = 1;
  else
LABEL_67:
    v46 = 0;
  MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v81, v46);
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v80);
  v47 = v71;
  if ( v71 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v72);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::`scalar deleting destructor'(v47);
    if ( _InterlockedExchangeAdd64(v28 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v67 + 2), v67);
  }
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v63);
  if ( v36 >= 0 )
  {
    if ( v65[0] && v64 )
      _guard_dispatch_icall_fptr();
    _guard_dispatch_icall_fptr();
    v78 = 1;
    v79 = 0LL;
    if ( (int)DxgkStatusChangeNotify(&v78) < 0 )
    {
      v62 = WdLogNewEntry5_WdAssertion(v48);
      *(_QWORD *)(v62 + 24) = 2606LL;
      WdLogEvent5_WdAssertion(v62);
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v80);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v63);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v81);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v77);
  if ( v68[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v68);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v66);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v72);
  return (unsigned int)v36;
}

/*
 * XREFs of ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z @ 0x1C0135970
 * Callers:
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXXZ @ 0x1C0084BFC (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXXZ.c)
 *     DxgkDestroyDevice @ 0x1C0094C60 (DxgkDestroyDevice.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00010D0 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001B44 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001BC4 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0004D18 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0004D38 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00067E0 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0006888 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000A784 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??_GDXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAPEAXI@Z @ 0x1C000AB08 (--_GDXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAPEAXI@Z.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C000AB70 (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C005E564 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C00B3744 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C00B5210 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00B523C (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00B52D4 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00B5424 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z @ 0x1C00B60B8 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z.c)
 */

void __fastcall DxgkReleaseVidPnSourceOwnerAndRestartCdds(struct DXGDEVICE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  int ProcessSessionId; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rax
  struct _LUID v34; // rax
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rbx
  __int64 v41; // rax
  volatile signed __int64 *v42; // rbx
  __int64 v43; // rax
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v44; // r14
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  volatile signed __int64 *v52; // rbx
  __int64 v53; // rax
  __int64 v54; // r9
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned __int8 v60; // [rsp+30h] [rbp-D0h] BYREF
  char v61; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int8 v62[6]; // [rsp+32h] [rbp-CEh] BYREF
  struct DXGDEVICE *v63; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v64[16]; // [rsp+40h] [rbp-C0h] BYREF
  struct _LUID v65; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v66[80]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v67[432]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = *((_QWORD *)a1 + 2338);
  v60 = 0;
  v62[0] = 0;
  if ( !v4 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 2094LL;
    WdLogEvent5_WdAssertion(v6);
  }
  ProcessSessionId = PsGetProcessSessionId(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL));
  if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId(v9, v8, v10, v11) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v16 + 24) = 2100LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a1 + 2) + 16LL)) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    *(_QWORD *)(v21 + 24) = 2102LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v4 + 1976) + 16LL)) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
    *(_QWORD *)(v26 + 24) = 2103LL;
    WdLogEvent5_WdAssertion(v26);
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v67,
    *(struct ADAPTER_DISPLAY **)(v4 + 1976),
    *((struct DXGPROCESS **)a1 + 5));
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX(
    (DXGPROCESSCOPYPROTECTIONMUTEX *)v64,
    *((struct DXGFASTMUTEX *const **)a1 + 5));
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v67, v27, v28, v29);
  v61 = 0;
  v30 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v61, 1);
  v32 = v30;
  if ( v30 >= 0 )
  {
    v34 = *(struct _LUID *)(v4 + 252);
    v63 = 0LL;
    v65 = v34;
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(&v65, &v63, 0LL);
    v40 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v41 = WdLogNewEntry5_WdEvent(v37, v36, v38, v39);
      *(_QWORD *)(v41 + 24) = v40;
      WdLogEvent5_WdEvent(v41);
    }
    v42 = (volatile signed __int64 *)v63;
    if ( v63 && *((_QWORD *)v63 + 2) != *((_QWORD *)a1 + 2) )
    {
      v43 = WdLogNewEntry5_WdAssertion(v37, v36, v38, v39);
      *(_QWORD *)(v43 + 24) = 2142LL;
      WdLogEvent5_WdAssertion(v43);
    }
    v44 = 0LL;
    if ( v42 )
    {
      v45 = (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)operator new[](8uLL, 0x4B677844u, PagedPool);
      if ( v45 )
        v44 = DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(v45, (struct DXGDEVICE *)v42);
      if ( !v44 )
      {
        v47 = WdLogNewEntry5_WdLowResource(v46);
        *(_QWORD *)(v47 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v47);
        if ( _InterlockedExchangeAdd64(v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v63 + 2), v63);
        v63 = 0LL;
      }
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v64);
    }
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v66, (__int64)a1, 1, v39, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v66);
    v52 = (volatile signed __int64 *)v63;
    if ( *(_DWORD *)(v4 + 160) == 1 )
    {
      if ( !*(_QWORD *)(v4 + 1976) )
      {
        v53 = WdLogNewEntry5_WdAssertion(v49, v48, v50, v51);
        *(_QWORD *)(v53 + 24) = 2177LL;
        WdLogEvent5_WdAssertion(v53);
      }
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v4 + 1976), a1)
        || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v4 + 1976), a1) )
      {
        MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState(
          (MANAGEDPRIMARIESTRACKER *)v67,
          (struct _KTHREAD **)a1,
          0xFFFFFFFFLL,
          v54);
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(*(PERESOURCE ***)(v4 + 1976), a1);
        if ( v52 )
          ADAPTER_DISPLAY::EnsureGdiOutput(
            *(ADAPTER_DISPLAY **)(v4 + 1976),
            (struct DXGDEVICE *)v52,
            (struct COREDEVICEACCESS *)v66,
            &v60,
            v62);
        MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v67, v60, v55, v56);
      }
    }
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v66);
    if ( v44 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v64);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::`scalar deleting destructor'(v44);
      if ( _InterlockedExchangeAdd64(v52 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v63 + 2), v63);
    }
    DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v61);
    if ( v60 && v62[0] )
      (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 80LL) + 192LL))();
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v66);
  }
  else
  {
    v33 = WdLogNewEntry5_WdError(v31);
    *(_QWORD *)(v33 + 24) = v32;
    WdLogEvent5_WdError(v33);
  }
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v61);
  if ( v64[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v64);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v67, v57, v58, v59);
}

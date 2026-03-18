/*
 * XREFs of ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z @ 0x1C013A090
 * Callers:
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXXZ @ 0x1C0067A34 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXXZ.c)
 *     DxgkDestroyDevice @ 0x1C008B4D0 (DxgkDestroyDevice.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003614 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003694 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0007070 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007098 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0007D20 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0007DCC (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C000ADAC (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000AE8C (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000AED8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??_GDXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAPEAXI@Z @ 0x1C000AF94 (--_GDXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z @ 0x1C009AF4C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C00B04D8 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00B0504 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00B059C (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00B06F0 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00B0870 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C012E0EC (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall DxgkReleaseVidPnSourceOwnerAndRestartCdds(struct DXGDEVICE *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  int ProcessSessionId; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  struct _LUID v19; // rax
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rbx
  __int64 v26; // rax
  volatile signed __int64 *v27; // rbx
  __int64 v28; // rax
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v29; // r14
  DXGDEVICEACCESSLOCKEXCLUSIVECDD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rcx
  volatile signed __int64 *v37; // rbx
  __int64 v38; // rax
  unsigned __int8 v39; // [rsp+30h] [rbp-D0h] BYREF
  char v40; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int8 v41[6]; // [rsp+32h] [rbp-CEh] BYREF
  struct DXGDEVICE *v42; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v43[16]; // [rsp+40h] [rbp-C0h] BYREF
  struct _LUID v44; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v45[80]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v46[432]; // [rsp+B0h] [rbp-50h] BYREF

  v1 = *((_QWORD *)a1 + 354);
  v39 = 0;
  v41[0] = 0;
  if ( !v1 )
  {
    v3 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v3 + 24) = 2094LL;
    WdLogEvent5_WdAssertion(v3);
  }
  ProcessSessionId = PsGetProcessSessionId(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL));
  if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId(v6, v5, v7, v8) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 2100LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a1 + 2) + 16LL)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v12 + 24) = 2102LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v1 + 1984) + 16LL)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v14 + 24) = 2103LL;
    WdLogEvent5_WdAssertion(v14);
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v46,
    *(struct ADAPTER_DISPLAY **)(v1 + 1984),
    *((struct DXGPROCESS **)a1 + 5));
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX(
    (DXGPROCESSCOPYPROTECTIONMUTEX *)v43,
    *((struct DXGFASTMUTEX *const **)a1 + 5));
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v46);
  v40 = 0;
  v15 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v40, 1);
  v17 = v15;
  if ( v15 >= 0 )
  {
    v19 = *(struct _LUID *)(v1 + 252);
    v42 = 0LL;
    v44 = v19;
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(&v44, &v42, 0LL);
    v25 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v26 = WdLogNewEntry5_WdEvent(v22, v21, v23, v24);
      *(_QWORD *)(v26 + 24) = v25;
      WdLogEvent5_WdEvent(v26);
    }
    v27 = (volatile signed __int64 *)v42;
    if ( v42 && *((_QWORD *)v42 + 2) != *((_QWORD *)a1 + 2) )
    {
      v28 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v28 + 24) = 2142LL;
      WdLogEvent5_WdAssertion(v28);
    }
    v29 = 0LL;
    if ( v27 )
    {
      v30 = (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)operator new[](0x10uLL, 0x4B677844u, PagedPool);
      if ( v30 )
        v29 = DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(v30, (struct DXGDEVICE *)v27);
      if ( !v29 )
      {
        v35 = WdLogNewEntry5_WdLowResource(v32, v31, v33, v34);
        *(_QWORD *)(v35 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v35);
        if ( _InterlockedExchangeAdd64(v27 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
        v42 = 0LL;
      }
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v43);
    }
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v45, (__int64)a1, 1, v24, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v45);
    v37 = (volatile signed __int64 *)v42;
    if ( *(_DWORD *)(v1 + 160) == 1 )
    {
      if ( !*(_QWORD *)(v1 + 1984) )
      {
        v38 = WdLogNewEntry5_WdAssertion(v36);
        *(_QWORD *)(v38 + 24) = 2177LL;
        WdLogEvent5_WdAssertion(v38);
      }
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v1 + 1984), a1)
        || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v1 + 1984), a1) )
      {
        MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v46, a1, -1);
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(*(PERESOURCE ***)(v1 + 1984), a1);
        if ( v37 )
          ADAPTER_DISPLAY::EnsureGdiOutput(
            *(ADAPTER_DISPLAY **)(v1 + 1984),
            (struct DXGDEVICE *)v37,
            (struct COREDEVICEACCESS *)v45,
            &v39,
            v41);
        MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v46, v39);
      }
    }
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v45);
    if ( v29 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v43);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::`scalar deleting destructor'(v29);
      if ( _InterlockedExchangeAdd64(v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
    }
    DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v40);
    if ( v39 && v41[0] )
      (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 80LL) + 192LL))();
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v18 + 24) = v17;
    WdLogEvent5_WdError(v18);
  }
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v40);
  if ( v43[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v43);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v46);
}

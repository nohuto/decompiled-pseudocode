/*
 * XREFs of ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015D868
 * Callers:
 *     DxgkDestroyDevice @ 0x1C00786C0 (DxgkDestroyDevice.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A21A4 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001588 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C00015B4 (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C00017E4 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00017FC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00069EC (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0006A94 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00082B8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00082DC (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0073DD0 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C0073EC4 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C0073EF0 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C0073F88 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00740D0 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0087994 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C00DE19C (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall DxgkReleaseVidPnSourceOwnerAndRestartCdds(
        struct DXGDEVICE *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 v2; // rsi
  __int64 v5; // rax
  int ProcessSessionId; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int8 v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rbx
  __int64 v26; // rax
  struct DXGDEVICE *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rcx
  struct DXGDEVICE *v30; // r14
  __int64 v31; // rax
  unsigned __int8 v32; // bl
  unsigned __int8 v33[8]; // [rsp+38h] [rbp-D0h] BYREF
  struct DXGDEVICE *v34; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v35[16]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v36[96]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v37[432]; // [rsp+B8h] [rbp-50h] BYREF

  v2 = *((_QWORD *)a1 + 357);
  v33[0] = 0;
  v33[2] = 0;
  if ( !v2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v5 + 24) = 2214LL;
    WdLogEvent5_WdAssertion(v5);
  }
  ProcessSessionId = PsGetProcessSessionId(*(_QWORD *)(*((_QWORD *)a1 + 5) + 48LL));
  if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId(v8, v7, v9, v10) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v12 + 24) = 2220LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a1 + 2) + 16LL)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v14 + 24) = 2222LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v2 + 2128) + 16LL)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v16 + 24) = 2223LL;
    WdLogEvent5_WdAssertion(v16);
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v37,
    *(struct ADAPTER_DISPLAY **)(v2 + 2128),
    *((struct DXGPROCESS **)a1 + 5));
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX(
    (DXGPROCESSCOPYPROTECTIONMUTEX *)v35,
    *((struct DXGFASTMUTEX *const **)a1 + 5),
    v17);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v37);
  v33[1] = 0;
  v18 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v33[1], 1);
  v20 = v18;
  if ( v18 >= 0 )
  {
    v34 = 0LL;
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v2 + 268),
                                             &v34,
                                             0LL);
    v25 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v26 = WdLogNewEntry5_WdEvent(v23);
      *(_QWORD *)(v26 + 24) = v25;
      WdLogEvent5_WdEvent(v26);
    }
    v27 = v34;
    if ( v34 )
    {
      if ( *((_QWORD *)v34 + 2) != *((_QWORD *)a1 + 2) )
      {
        v28 = WdLogNewEntry5_WdAssertion(v23);
        *(_QWORD *)(v28 + 24) = 2262LL;
        WdLogEvent5_WdAssertion(v28);
      }
      *((_BYTE *)v27 + 2905) = 1;
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
    }
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v36, (__int64)a1, 1, v24, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v36);
    v30 = v34;
    if ( *(_DWORD *)(v2 + 176) != 1 )
      goto LABEL_25;
    if ( !*(_QWORD *)(v2 + 2128) )
    {
      v31 = WdLogNewEntry5_WdAssertion(v29);
      *(_QWORD *)(v31 + 24) = 2294LL;
      WdLogEvent5_WdAssertion(v31);
    }
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v2 + 2128), a1)
      || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v2 + 2128), a1) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v37, (struct _KTHREAD **)a1, -1);
      ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(*(PERESOURCE ***)(v2 + 2128), a1);
      if ( v30 )
        ADAPTER_DISPLAY::EnsureGdiOutput(
          *(ADAPTER_DISPLAY **)(v2 + 2128),
          v30,
          (struct COREDEVICEACCESS *)v36,
          v33,
          &v33[2],
          a2);
      v32 = v33[0];
      MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v37, v33[0]);
    }
    else
    {
LABEL_25:
      v32 = v33[0];
    }
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v36);
    if ( v30 )
    {
      *((_BYTE *)v30 + 2905) = 0;
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v35);
    }
    DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v33[1]);
    if ( v32 && v33[2] )
      (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL) + 192LL))();
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v21 + 24) = v20;
    WdLogEvent5_WdError(v21);
  }
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v33[1]);
  if ( v35[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v35);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v37);
}

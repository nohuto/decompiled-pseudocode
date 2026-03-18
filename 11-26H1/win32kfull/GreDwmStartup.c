/*
 * XREFs of GreDwmStartup @ 0x1402931FC
 * Callers:
 *     ?zzzDwmStartRedirection@@YAJXZ @ 0x1402CF854 (-zzzDwmStartRedirection@@YAJXZ.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14006B768 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$07@@YAXXZ @ 0x14006BD7C (--$GrepAcquireLockValidate@$07@@YAXXZ.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140072EE8 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x14009E784 (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FA80 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0GreAcquireUnownedDMCLockShared@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FAB8 (--0GreAcquireUnownedDMCLockShared@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FB18 (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FB84 (--0-$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1400A3FF4 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ??1ENTER_GRE_DWM_CRIT@@QEAA@XZ @ 0x1400A8A5C (--1ENTER_GRE_DWM_CRIT@@QEAA@XZ.c)
 *     ?GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z @ 0x140200F0C (-GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z.c)
 *     ?bDwmResizeOptimizationOverride@@YAHPEAK00@Z @ 0x1402389D8 (-bDwmResizeOptimizationOverride@@YAHPEAK00@Z.c)
 *     ?bDwmChildWindowDpiIsolationEnabled@@YAHXZ @ 0x140247594 (-bDwmChildWindowDpiIsolationEnabled@@YAHXZ.c)
 *     ?bDwmDeviceBitmapsEnabled@@YAHXZ @ 0x14024F8C8 (-bDwmDeviceBitmapsEnabled@@YAHXZ.c)
 *     ?bDwmDeviceBitmapsEnabledForMultiAdapter@@YAHXZ @ 0x14026CF70 (-bDwmDeviceBitmapsEnabledForMultiAdapter@@YAHXZ.c)
 *     ?bDwmOverlayTestMode@@YAHXZ @ 0x14026E9DC (-bDwmOverlayTestMode@@YAHXZ.c)
 *     ?bDwmDesktopOverlaysEnabled@@YAHXZ @ 0x14026EEC0 (-bDwmDesktopOverlaysEnabled@@YAHXZ.c)
 *     GreSfmDwmStartup @ 0x140328320 (GreSfmDwmStartup.c)
 */

__int64 __fastcall GreDwmStartup(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  BOOL v6; // r15d
  __int64 RectRgn; // rax
  BOOL v8; // r13d
  unsigned int v9; // r12d
  __int64 v10; // rdx
  int v11; // ecx
  BOOL v12; // r14d
  _DWORD *v13; // rdi
  void *v14; // rcx
  Gre::Base *v15; // [rsp+30h] [rbp-69h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-61h] BYREF
  _BYTE v17[16]; // [rsp+70h] [rbp-29h] BYREF
  HSEMAPHORE v18; // [rsp+80h] [rbp-19h] BYREF
  __int64 v19; // [rsp+88h] [rbp-11h] BYREF
  HSEMAPHORE v20; // [rsp+90h] [rbp-9h]
  HSEMAPHORE v21; // [rsp+98h] [rbp-1h] BYREF
  HSEMAPHORE v22; // [rsp+A0h] [rbp+7h] BYREF
  HSEMAPHORE v23; // [rsp+A8h] [rbp+Fh]
  unsigned int v24; // [rsp+100h] [rbp+67h] BYREF
  unsigned int v25; // [rsp+108h] [rbp+6Fh] BYREF
  unsigned int v26; // [rsp+110h] [rbp+77h] BYREF
  __int64 v27; // [rsp+118h] [rbp+7Fh]

  v15 = a1;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  if ( !a1 )
  {
    GrepCaptureLiveMemoryDump(400LL, 76LL, 0LL);
    return 0LL;
  }
  v3 = Gre::Base::Globals(a1);
  GreAcquireUnownedDMCLockShared::GreAcquireUnownedDMCLockShared((GreAcquireUnownedDMCLockShared *)v17, v3);
  SEMOBJ<2>::SEMOBJ<2>(&v18, v3);
  SEMOBJ<3>::SEMOBJ<3>(&v19, v3);
  v20 = (HSEMAPHORE)*((_QWORD *)a1 + 7);
  GreAcquireSemaphoreInternal(v20);
  GrepAcquireLockValidate<4>();
  SEMOBJ<6>::SEMOBJ<6>(&v21, v3);
  SEMOBJ<7>::SEMOBJ<7>(&v22, v3);
  v23 = (HSEMAPHORE)*((_QWORD *)a1 + 6);
  GreAcquireSemaphoreInternal(v23);
  GrepAcquireLockValidate<8>();
  v4 = Win32AllocPoolZInit(344LL, 1935885383LL);
  v5 = v4;
  if ( !v4 )
  {
    EngSetLastError(8u);
LABEL_24:
    v9 = 0;
    goto LABEL_25;
  }
  *(_QWORD *)(v4 + 176) = a1;
  v6 = GrepDwmCreateComposedEvent((wchar_t *)v4) >= 0;
  RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v27 = RectRgn;
  *(_QWORD *)(v5 + 184) = RectRgn;
  v8 = RectRgn != 0;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)v5,
    (PRTL_GENERIC_COMPARE_ROUTINE)HwndLookupCompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)HwndLookupAllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)HwndLookupFreeTableData,
    0LL);
  GreInitializePushLock((struct W32_PUSH_LOCK *)(v5 + 72));
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)(v5 + 88) = v5 + 80;
  *(_QWORD *)(v5 + 80) = v5 + 80;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  *(_QWORD *)(v5 + 112) = v5 + 104;
  *(_QWORD *)(v5 + 104) = v5 + 104;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)(v5 + 128) = v5 + 120;
  *(_QWORD *)(v5 + 120) = v5 + 120;
  *(_QWORD *)(v5 + 336) = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = 1;
  v12 = ZwCreateEvent((PHANDLE)(v5 + 336), 0x1F0003u, &ObjectAttributes, NotificationEvent, 0) >= 0;
  if ( v6 && v27 && v12 )
  {
    *((_QWORD *)v3 + 28) = v5;
    v5 = 0LL;
    SpRenderHint((struct PDEVOBJ *)&v15, 0x10000u, 0LL, 0LL);
    vAccNotify(
      (struct _SURFOBJ *)((*((_QWORD *)a1 + 318) + 24LL) & -(__int64)(*((_QWORD *)a1 + 318) != 0LL)),
      6u,
      (void *)1);
  }
  v13 = *(_DWORD **)(W32GetSessionState(v11, v10) + 96);
  v13[22] = bDwmDeviceBitmapsEnabled();
  v13[25] = bDwmDeviceBitmapsEnabledForMultiAdapter();
  *((_DWORD *)v3 + 54) = bDwmOverlayTestMode();
  *((_DWORD *)v3 + 55) = bDwmDesktopOverlaysEnabled();
  if ( (unsigned int)bDwmResizeOptimizationOverride(&v24, &v25, &v26) )
  {
    v13[27] = v24;
    v13[28] = v25;
    v13[29] = v26;
    v13[26] = 1;
  }
  v13[30] = bDwmChildWindowDpiIsolationEnabled();
  if ( v5 )
  {
    if ( v27 )
      GreDeleteObject(*(_QWORD *)(v5 + 184));
    if ( v6 )
    {
      v14 = *(void **)(v5 + 328);
      if ( v14 )
      {
        ObCloseHandle(v14, 0);
        *(_QWORD *)(v5 + 328) = 0LL;
      }
    }
    if ( v12 )
      ZwClose(*(HANDLE *)(v5 + 336));
    Win32FreePool((void *)v5);
  }
  if ( !v6 || !v8 || !v12 )
    goto LABEL_24;
  GreSfmDwmStartup();
LABEL_25:
  ENTER_GRE_DWM_CRIT::~ENTER_GRE_DWM_CRIT((ENTER_GRE_DWM_CRIT *)v17);
  return v9;
}

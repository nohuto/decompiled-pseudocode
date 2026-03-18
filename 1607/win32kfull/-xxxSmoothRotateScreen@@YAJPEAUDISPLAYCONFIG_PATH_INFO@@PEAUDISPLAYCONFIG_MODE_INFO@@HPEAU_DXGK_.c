/*
 * XREFs of ?xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C9F78
 * Callers:
 *     ?xxxRotateScreen@@YAJKHPEAH@Z @ 0x1C01C9C28 (-xxxRotateScreen@@YAJKHPEAH@Z.c)
 * Callees:
 *     ?GetActivePpi@@YAPEAUtagPROCESSINFO@@XZ @ 0x1C000E4E8 (-GetActivePpi@@YAPEAUtagPROCESSINFO@@XZ.c)
 *     IsCurrentDesktopComposed @ 0x1C00DF580 (IsCurrentDesktopComposed.c)
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     ?ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z @ 0x1C00EC1FC (-ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?IsExtendTopology@@YAHXZ @ 0x1C01C97BC (-IsExtendTopology@@YAHXZ.c)
 *     DwmAsyncNotifyRotationModeChange @ 0x1C025C6F4 (DwmAsyncNotifyRotationModeChange.c)
 */

__int64 __fastcall xxxSmoothRotateScreen(
        struct DISPLAYCONFIG_PATH_INFO *a1,
        struct DISPLAYCONFIG_MODE_INFO *a2,
        unsigned int a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  unsigned int v7; // esi
  struct tagPROCESSINFO *ActivePpi; // rax
  unsigned int v9; // r9d
  int v10; // edi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  void *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  void *v26; // rax
  const GUID *v27; // r8
  const GUID *v28; // r9
  int v30; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v31; // [rsp+68h] [rbp-61h] BYREF
  unsigned int v32; // [rsp+70h] [rbp-59h] BYREF
  unsigned int v33; // [rsp+74h] [rbp-55h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-49h] BYREF
  int *v35; // [rsp+A0h] [rbp-29h]
  int v36; // [rsp+A8h] [rbp-21h]
  int v37; // [rsp+ACh] [rbp-1Dh]
  unsigned int *v38; // [rsp+B0h] [rbp-19h]
  int v39; // [rsp+B8h] [rbp-11h]
  int v40; // [rsp+BCh] [rbp-Dh]
  int *v41; // [rsp+C0h] [rbp-9h]
  int v42; // [rsp+C8h] [rbp-1h]
  int v43; // [rsp+CCh] [rbp+3h]
  unsigned int *v44; // [rsp+D0h] [rbp+7h]
  int v45; // [rsp+D8h] [rbp+Fh]
  int v46; // [rsp+DCh] [rbp+13h]

  v31 = a3;
  v7 = ConvertDisplayConfigRotationToDMDO(*((_DWORD *)a1 + 10));
  ActivePpi = GetActivePpi();
  EtwTraceSmoothRotationStart(v7, v9, ActivePpi);
  DrvLogDiagDisplayChange(0LL, 8LL);
  v10 = IsExtendTopology();
  v11 = IsCurrentDesktopComposed();
  v30 = v11;
  if ( !v11 )
    goto LABEL_9;
  if ( !v10 )
  {
    v16 = (void *)ReferenceDwmApiPort(v13, v12, v14, v15);
    DwmAsyncNotifyRotationModeChange(v16);
    if ( gdwInAtomicOperation )
    {
      v17 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    v18 = UserReferenceDwmApiPort(v17);
    UserSessionSwitchLeaveCrit(v20, v19);
    DwmSyncFlushAndWaitForBatch(v18);
    EnterCrit(0LL, 1LL);
    v11 = v30;
  }
  if ( v11 )
    v21 = 16;
  else
LABEL_9:
    v21 = 0;
  v32 = xxxUserSetDisplayConfig(1LL, a1, 2LL, a2, 672, v21 | 8u, 0, 0LL, 0, 0LL, 0LL, a4);
  if ( v30 && !v10 )
  {
    v26 = (void *)ReferenceDwmApiPort(v23, v22, v24, v25);
    DwmAsyncNotifyRotationModeChange(v26);
  }
  EtwTraceSmoothRotationStop(v7, v31);
  if ( dword_1C0320840 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x200000000001uLL) )
  {
    v37 = 0;
    v40 = 0;
    v43 = 0;
    v46 = 0;
    v35 = (int *)&v33;
    v38 = &v31;
    v41 = &v30;
    v44 = &v32;
    v33 = v7;
    v36 = 4;
    v39 = 4;
    v42 = 4;
    v45 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EE105, v27, v28, 6u, &pData);
  }
  return v32;
}

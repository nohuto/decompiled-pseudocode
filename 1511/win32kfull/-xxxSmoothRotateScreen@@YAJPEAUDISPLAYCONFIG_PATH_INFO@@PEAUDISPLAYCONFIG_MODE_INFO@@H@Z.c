/*
 * XREFs of ?xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@H@Z @ 0x1C01D2528
 * Callers:
 *     ?xxxRotateScreen@@YAJKHPEAH@Z @ 0x1C01D2388 (-xxxRotateScreen@@YAJKHPEAH@Z.c)
 * Callees:
 *     ?GetActivePpi@@YAPEAUtagPROCESSINFO@@XZ @ 0x1C000C8A8 (-GetActivePpi@@YAPEAUtagPROCESSINFO@@XZ.c)
 *     IsCurrentDesktopComposed @ 0x1C00874C0 (IsCurrentDesktopComposed.c)
 *     _TlgKeywordOn @ 0x1C0091E04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0091E28 (_TlgWrite.c)
 *     ?ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z @ 0x1C010CCF4 (-ConvertDisplayConfigRotationToDMDO@@YAKW4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     DwmAsyncNotifyRotationModeChange @ 0x1C025EF74 (DwmAsyncNotifyRotationModeChange.c)
 */

__int64 __fastcall xxxSmoothRotateScreen(
        struct DISPLAYCONFIG_PATH_INFO *a1,
        struct DISPLAYCONFIG_MODE_INFO *a2,
        unsigned int a3)
{
  unsigned int v5; // edi
  struct tagPROCESSINFO *ActivePpi; // rax
  unsigned int v7; // r9d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  void *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  void *v22; // rax
  const struct _TlgProvider_t *v23; // rcx
  const GUID *v24; // r8
  const GUID *v25; // r9
  int v27; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v28; // [rsp+54h] [rbp-55h] BYREF
  unsigned int v29; // [rsp+58h] [rbp-51h] BYREF
  unsigned int v30; // [rsp+60h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-39h] BYREF
  int *v32; // [rsp+90h] [rbp-19h]
  int v33; // [rsp+98h] [rbp-11h]
  int v34; // [rsp+9Ch] [rbp-Dh]
  unsigned int *v35; // [rsp+A0h] [rbp-9h]
  int v36; // [rsp+A8h] [rbp-1h]
  int v37; // [rsp+ACh] [rbp+3h]
  int *v38; // [rsp+B0h] [rbp+7h]
  int v39; // [rsp+B8h] [rbp+Fh]
  int v40; // [rsp+BCh] [rbp+13h]
  unsigned int *v41; // [rsp+C0h] [rbp+17h]
  int v42; // [rsp+C8h] [rbp+1Fh]
  int v43; // [rsp+CCh] [rbp+23h]

  v29 = a3;
  v5 = ConvertDisplayConfigRotationToDMDO(*((_DWORD *)a1 + 10));
  ActivePpi = GetActivePpi();
  EtwTraceSmoothRotationStart(v5, v7, ActivePpi);
  DrvLogDiagDisplayChange(0LL, 8LL);
  v27 = IsCurrentDesktopComposed();
  if ( v27 )
  {
    v12 = (void *)ReferenceDwmApiPort(v9, v8, v10, v11);
    DwmAsyncNotifyRotationModeChange(v12);
    v14 = UserReferenceDwmApiPort(v13);
    UserSessionSwitchLeaveCrit(v16, v15);
    DwmSyncFlushAndWaitForBatch(v14);
    EnterCrit(0LL, 1LL);
    v17 = 16;
  }
  else
  {
    v17 = 0;
  }
  v28 = xxxUserSetDisplayConfig(1LL, a1, 2LL, a2, 672, v17 | 8u, 0, 0LL, 0, 0LL);
  if ( v27 )
  {
    v22 = (void *)ReferenceDwmApiPort(v19, v18, v20, v21);
    DwmAsyncNotifyRotationModeChange(v22);
  }
  EtwTraceSmoothRotationStop(v5, v29);
  if ( (unsigned int)dword_1C031B280 > 5 && TlgKeywordOn(v23, 0x200000000000uLL) )
  {
    v34 = 0;
    v37 = 0;
    v40 = 0;
    v43 = 0;
    v32 = (int *)&v30;
    v35 = &v29;
    v38 = &v27;
    v41 = &v28;
    v30 = v5;
    v33 = 4;
    v36 = 4;
    v39 = 4;
    v42 = 4;
    TlgWrite((TraceLoggingHProvider)4, &unk_1C02E92E9, v24, v25, 6u, &pData);
  }
  return v28;
}

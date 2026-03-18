/*
 * XREFs of ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0066760
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0061490 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0063F40 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C0065134 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00B8A80 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     IsDwmDestroyDeviceSpecificResourcesSupported_0 @ 0x1C00016D8 (IsDwmDestroyDeviceSpecificResourcesSupported_0.c)
 *     DwmDestroyDeviceSpecificResources_0 @ 0x1C00016E0 (DwmDestroyDeviceSpecificResources_0.c)
 *     IsEngBitBltSupported_0 @ 0x1C0001740 (IsEngBitBltSupported_0.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0034504 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0034590 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     GreSuspendDirectDraw @ 0x1C0060EE0 (GreSuspendDirectDraw.c)
 *     bSetDeviceSessionUsage @ 0x1C0066360 (bSetDeviceSessionUsage.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDisableDisplay(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  struct _SURFOBJ *v6; // rdx
  __int64 v7; // r8
  __int64 (__fastcall *v8)(_QWORD, _QWORD); // rax
  unsigned int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v21; // rax
  int v22; // edx
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // r10
  __int64 v26; // [rsp+60h] [rbp-28h] BYREF
  _DWORD v27[4]; // [rsp+68h] [rbp-20h] BYREF

  v2 = (int)a2;
  v26 = a1;
  v4 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v4 + 24) = a1;
  *(_QWORD *)(v4 + 32) = v2;
  WdLogEvent5_WdEvent(v4);
  GreSuspendDirectDraw(a1, 0);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemGreLock", (int)ghsemGreLock, 2);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDCVisRgn", (int)ghsemDCVisRgn, 3);
  EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 72));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemPointer()", *(_QWORD *)(a1 + 72), 4);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
  EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 64));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *(_QWORD *)(a1 + 64), 11);
  if ( (_DWORD)v2 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x400) == 0 )
    {
      v21 = *(_QWORD *)(a1 + 2576);
      v22 = *(_DWORD *)(v21 + 60);
      v23 = *(_DWORD *)(v21 + 56);
      v27[0] = 0;
      v27[1] = 0;
      v27[2] = v23;
      v27[3] = v22;
      if ( (int)IsEngBitBltSupported_0() >= 0 )
      {
        v24 = *(_QWORD *)(a1 + 2576);
        if ( v24 )
          v25 = v24 + 24;
        else
          v25 = 0LL;
        if ( (*(_DWORD *)(v24 + 112) & 1) != 0 )
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)(v24 + 48) + 2864LL))(
            v25,
            0LL,
            0LL,
            0LL,
            0LL,
            v27,
            0LL,
            0LL,
            0LL,
            0LL,
            0);
        else
          ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EngBitBlt_0)(
            v25,
            0LL,
            0LL,
            0LL,
            0LL,
            v27,
            0LL,
            0LL,
            0LL,
            0LL,
            0);
      }
    }
  }
  v5 = *(_QWORD *)(a1 + 2576);
  if ( v5 )
    v6 = (struct _SURFOBJ *)(v5 + 24);
  else
    v6 = 0LL;
  PDEVOBJ::vSync((PDEVOBJ *)&v26, v6, 0LL, 0);
  if ( (int)IsDwmDestroyDeviceSpecificResourcesSupported_0() >= 0 )
    DwmDestroyDeviceSpecificResources_0();
  if ( gProtocolType == -1 )
    *(_DWORD *)(a1 + 2640) = 4;
  v8 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 2760);
  if ( v8 )
    v9 = v8(*(_QWORD *)(a1 + 1824), 0LL);
  else
    v9 = 0;
  *(_DWORD *)(a1 + 2640) = 0;
  if ( v9 )
  {
    bSetDeviceSessionUsage(*(_QWORD *)(a1 + 2600), 0);
    PDEVOBJ::bDisabled((PDEVOBJ *)&v26, 1);
    gtmpAssertModeFailed = 0;
  }
  else
  {
    gtmpAssertModeFailed = 1;
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", *(_QWORD *)(a1 + 64), v7);
  GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(a1 + 64));
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT", (__int64)ghsemHT, v10);
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemHT);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (__int64)ghsemSprite, v11);
  GreReleaseSemaphoreInternal(ghsemSprite);
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemPointer()", *(_QWORD *)(a1 + 72), v12);
  GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(a1 + 72));
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDCVisRgn", (__int64)ghsemDCVisRgn, v13);
  GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock", (__int64)ghsemGreLock, v14);
  GreReleaseSemaphoreInternal(ghsemGreLock);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v15);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  if ( !v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
    DisplayScenarioJournalDisplayUniquenessIncremented();
  }
  v19 = WdLogNewEntry5_WdTrace(v17, v16, v18);
  *(_QWORD *)(v19 + 24) = (int)v9;
  WdLogEvent5_WdTrace(v19);
  return v9;
}

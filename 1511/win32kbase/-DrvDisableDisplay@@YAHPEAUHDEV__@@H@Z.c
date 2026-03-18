/*
 * XREFs of ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0077EF0
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0054368 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0056E20 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C0057FB4 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00BA990 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     IsDwmDestroyDeviceSpecificResourcesSupported_0 @ 0x1C0001678 (IsDwmDestroyDeviceSpecificResourcesSupported_0.c)
 *     DwmDestroyDeviceSpecificResources_0 @ 0x1C0001680 (DwmDestroyDeviceSpecificResources_0.c)
 *     IsEngBitBltSupported_0 @ 0x1C00016E0 (IsEngBitBltSupported_0.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0037F14 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0037FA0 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     GreSuspendDirectDraw @ 0x1C0078370 (GreSuspendDirectDraw.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDisableDisplay(HSEMAPHORE *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  HSEMAPHORE v5; // rax
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
  __int64 v16; // rcx
  __int64 v17; // rax
  HSEMAPHORE v19; // rax
  int v20; // edx
  int v21; // ecx
  HSEMAPHORE v22; // rcx
  HSEMAPHORE v23; // r10
  HSEMAPHORE *v24; // [rsp+60h] [rbp-28h] BYREF
  _DWORD v25[4]; // [rsp+68h] [rbp-20h] BYREF

  v2 = (int)a2;
  v24 = a1;
  v4 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v4 + 24) = a1;
  *(_QWORD *)(v4 + 32) = v2;
  WdLogEvent5_WdEvent(v4);
  GreSuspendDirectDraw(a1, 0LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemGreLock", (int)ghsemGreLock, 2);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDCVisRgn", (int)ghsemDCVisRgn, 3);
  EngAcquireSemaphore(a1[9]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemPointer()", (int)a1[9], 4);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
  EngAcquireSemaphore(a1[8]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", (int)a1[8], 11);
  if ( (_DWORD)v2 )
  {
    if ( ((_DWORD)a1[7] & 0x400) == 0 )
    {
      v19 = a1[322];
      v20 = *((_DWORD *)v19 + 15);
      v21 = *((_DWORD *)v19 + 14);
      v25[0] = 0;
      v25[1] = 0;
      v25[2] = v21;
      v25[3] = v20;
      if ( (int)IsEngBitBltSupported_0() >= 0 )
      {
        v22 = a1[322];
        if ( v22 )
          v23 = v22 + 6;
        else
          v23 = 0LL;
        if ( ((_DWORD)v22[28] & 1) != 0 )
          (*(void (__fastcall **)(HSEMAPHORE, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*((_QWORD *)v22 + 6) + 2864LL))(
            v23,
            0LL,
            0LL,
            0LL,
            0LL,
            v25,
            0LL,
            0LL,
            0LL,
            0LL,
            0);
        else
          ((void (__fastcall *)(HSEMAPHORE, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EngBitBlt_0)(
            v23,
            0LL,
            0LL,
            0LL,
            0LL,
            v25,
            0LL,
            0LL,
            0LL,
            0LL,
            0);
      }
    }
  }
  v5 = a1[322];
  if ( v5 )
    v6 = (struct _SURFOBJ *)(v5 + 6);
  else
    v6 = 0LL;
  PDEVOBJ::vSync((PDEVOBJ *)&v24, v6, 0LL, 0);
  if ( (int)IsDwmDestroyDeviceSpecificResourcesSupported_0() >= 0 )
    DwmDestroyDeviceSpecificResources_0();
  if ( gProtocolType == -1 )
    *((_DWORD *)a1 + 660) = 4;
  v8 = (__int64 (__fastcall *)(_QWORD, _QWORD))a1[345];
  if ( v8 )
    v9 = v8(a1[228], 0LL);
  else
    v9 = 0;
  *((_DWORD *)a1 + 660) = 0;
  if ( v9 )
  {
    PDEVOBJ::bDisabled((PDEVOBJ *)&v24, 1);
    gtmpAssertModeFailed = 0;
  }
  else
  {
    gtmpAssertModeFailed = 1;
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", (__int64)a1[8], v7);
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)a1[8]);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT", (__int64)ghsemHT, v10);
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemHT);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (__int64)ghsemSprite, v11);
  GreReleaseSemaphoreInternal(ghsemSprite);
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemPointer()", (__int64)a1[9], v12);
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)a1[9]);
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
  v17 = WdLogNewEntry5_WdTrace(v16);
  *(_QWORD *)(v17 + 24) = (int)v9;
  WdLogEvent5_WdTrace(v17);
  return v9;
}

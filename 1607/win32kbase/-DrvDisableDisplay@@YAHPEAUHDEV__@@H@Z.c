/*
 * XREFs of ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C007E4B8
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0065BC0 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0068660 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C0069844 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00C6660 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     IsDwmDestroyDeviceSpecificResourcesSupported_0 @ 0x1C00016E8 (IsDwmDestroyDeviceSpecificResourcesSupported_0.c)
 *     DwmDestroyDeviceSpecificResources_0 @ 0x1C00016F0 (DwmDestroyDeviceSpecificResources_0.c)
 *     IsEngBitBltSupported_0 @ 0x1C0001750 (IsEngBitBltSupported_0.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0031B2C (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0031BE0 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     GreSuspendDirectDraw @ 0x1C0065420 (GreSuspendDirectDraw.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDisableDisplay(HSEMAPHORE *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  HSEMAPHORE v5; // rax
  struct _SURFOBJ *v6; // rdx
  __int64 (__fastcall *v7)(_QWORD, _QWORD); // rax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  HSEMAPHORE v12; // rax
  int v13; // edx
  int v14; // ecx
  HSEMAPHORE v15; // rcx
  HSEMAPHORE v16; // r10
  HSEMAPHORE *v17; // [rsp+60h] [rbp-28h] BYREF
  _DWORD v18[4]; // [rsp+68h] [rbp-20h] BYREF

  v2 = (int)a2;
  v17 = a1;
  v4 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v4 + 24) = a1;
  *(_QWORD *)(v4 + 32) = v2;
  WdLogEvent5_WdEvent(v4);
  GreSuspendDirectDraw((__int64)a1, 0);
  EngAcquireSemaphore(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemGreLock", (int)ghsemGreLock, 2);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDCVisRgn", (int)ghsemDCVisRgn, 3);
  EngAcquireSemaphore(a1[9]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemPointer()", (int)a1[9], 4);
  EngAcquireSemaphore(ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
  EngAcquireSemaphore(a1[8]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", (int)a1[8], 11);
  if ( (_DWORD)v2 )
  {
    if ( ((_DWORD)a1[7] & 0x400) == 0 )
    {
      v12 = a1[322];
      v13 = *((_DWORD *)v12 + 15);
      v14 = *((_DWORD *)v12 + 14);
      v18[0] = 0;
      v18[1] = 0;
      v18[2] = v14;
      v18[3] = v13;
      if ( (int)IsEngBitBltSupported_0() >= 0 )
      {
        v15 = a1[322];
        if ( v15 )
          v16 = v15 + 6;
        else
          v16 = 0LL;
        if ( ((_DWORD)v15[28] & 1) != 0 )
          (*(void (__fastcall **)(HSEMAPHORE, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*((_QWORD *)v15 + 6) + 2856LL))(
            v16,
            0LL,
            0LL,
            0LL,
            0LL,
            v18,
            0LL,
            0LL,
            0LL,
            0LL,
            0);
        else
          ((void (__fastcall *)(HSEMAPHORE, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EngBitBlt_0)(
            v16,
            0LL,
            0LL,
            0LL,
            0LL,
            v18,
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
  PDEVOBJ::vSync((PDEVOBJ *)&v17, v6, 0LL, 0);
  if ( (int)IsDwmDestroyDeviceSpecificResourcesSupported_0() >= 0 )
    DwmDestroyDeviceSpecificResources_0();
  if ( gProtocolType == -1 )
    *((_DWORD *)a1 + 660) = 4;
  v7 = (__int64 (__fastcall *)(_QWORD, _QWORD))a1[344];
  if ( v7 )
    v8 = v7(a1[228], 0LL);
  else
    v8 = 0;
  *((_DWORD *)a1 + 660) = 0;
  if ( v8 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&v17, 1);
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)a1[8]);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemHT);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemSprite);
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemPointer()");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)a1[9]);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDCVisRgn");
  GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock");
  GreReleaseSemaphoreInternal(ghsemGreLock);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDynamicModeChange);
  if ( !v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
    DisplayScenarioJournalDisplayUniquenessIncremented();
  }
  v10 = WdLogNewEntry5_WdTrace(v9);
  *(_QWORD *)(v10 + 24) = (int)v8;
  WdLogEvent5_WdTrace(v10);
  return v8;
}

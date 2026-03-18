/*
 * XREFs of ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C006F8F0
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0062A9C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0063F40 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvEnableMDEV @ 0x1C0064CE8 (DrvEnableMDEV.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C0065134 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00B8A80 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0034504 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     bSetDeviceSessionUsage @ 0x1C0066360 (bSetDeviceSessionUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvEnableDisplay(HDEV a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  HDEV v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = a1;
  v2 = 1;
  v4 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v4 + 24) = a1;
  WdLogEvent5_WdEvent(v4);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  EngAcquireSemaphore(*((HSEMAPHORE *)a1 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemPointer()", *((_QWORD *)a1 + 9), 4);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
  EngAcquireSemaphore(*((HSEMAPHORE *)a1 + 8));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *((_QWORD *)a1 + 8), 11);
  bSetDeviceSessionUsage(*((_QWORD *)a1 + 325), 1);
  gtmpAssertModeFailed = 0;
  if ( *((_QWORD *)a1 + 345) )
  {
    while ( !(*((unsigned int (__fastcall **)(_QWORD, __int64))a1 + 345))(*((_QWORD *)a1 + 228), 1LL) )
      gtmpAssertModeFailed = 1;
  }
  else
  {
    v2 = 0;
  }
  PDEVOBJ::bDisabled((PDEVOBJ *)&v11, 0);
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", *((_QWORD *)a1 + 8), v5);
  GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)a1 + 8));
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT", (__int64)ghsemHT, v6);
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemHT);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (__int64)ghsemSprite, v7);
  GreReleaseSemaphoreInternal(ghsemSprite);
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemPointer()", *((_QWORD *)a1 + 9), v8);
  GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)a1 + 9));
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v9);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  _InterlockedAdd((volatile signed __int32 *)gpGdiSharedMemory + 393252, 1u);
  DisplayScenarioJournalDisplayUniquenessIncremented();
  return v2;
}

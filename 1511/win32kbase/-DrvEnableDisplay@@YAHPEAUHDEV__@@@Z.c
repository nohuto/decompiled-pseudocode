/*
 * XREFs of ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C0087564
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0055974 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0056E20 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvEnableMDEV @ 0x1C0057B68 (DrvEnableMDEV.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C0057FB4 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00BA990 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0037F14 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvEnableDisplay(HSEMAPHORE *a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  HSEMAPHORE *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = a1;
  v3 = 1;
  v4 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v4 + 24) = a1;
  WdLogEvent5_WdEvent(v4);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  EngAcquireSemaphore(a1[9]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemPointer()", (int)a1[9], 4);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
  EngAcquireSemaphore(a1[8]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", (int)a1[8], 11);
  gtmpAssertModeFailed = 0;
  if ( a1[345] )
  {
    while ( !((unsigned int (__fastcall *)(HSEMAPHORE, __int64))a1[345])(a1[228], 1LL) )
      gtmpAssertModeFailed = 1;
  }
  else
  {
    v3 = 0;
  }
  PDEVOBJ::bDisabled((PDEVOBJ *)&v11, 0);
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", (__int64)a1[8], v5);
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)a1[8]);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT", (__int64)ghsemHT, v6);
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemHT);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (__int64)ghsemSprite, v7);
  GreReleaseSemaphoreInternal(ghsemSprite);
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemPointer()", (__int64)a1[9], v8);
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)a1[9]);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v9);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
  DisplayScenarioJournalDisplayUniquenessIncremented();
  return v3;
}

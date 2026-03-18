/*
 * XREFs of DrvDisableMDEV @ 0x1C0069650
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0065BC0 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     SafeDisableMDEV @ 0x1C0088CA0 (SafeDisableMDEV.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0031B2C (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     GreSuspendDirectDraw @ 0x1C0065420 (GreSuspendDirectDraw.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C0069844 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 __fastcall DrvDisableMDEV(struct _MDEV *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v4 = (int)a2;
  v6 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = v4;
  WdLogEvent5_WdEvent(v6);
  v7 = *(_QWORD *)a1;
  v13 = *(_QWORD *)a1;
  if ( (_DWORD)v4 )
    GreSuspendDirectDraw(v7, 0);
  EngAcquireSemaphore(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v7 + 72));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"poParent.hsemPointer()", *(_QWORD *)(v7 + 72), 4LL);
  EngAcquireSemaphore(ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemHT", ghsemHT, 6LL);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v7 + 64));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"poParent.hsemDevLock()", *(_QWORD *)(v7 + 64), 11LL);
  v8 = DrvDisableMDEVChildren(a1, v4, a3);
  v9 = v8;
  if ( v8 && (_DWORD)v4 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&v13, 1);
  EtwTraceGreLockReleaseSemaphore(L"poParent.hsemDevLock()");
  GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v7 + 64));
  EtwTraceGreLockReleaseSemaphore(L"ghsemHT");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemHT);
  EtwTraceGreLockReleaseSemaphore(L"ghsemSprite");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemSprite);
  EtwTraceGreLockReleaseSemaphore(L"poParent.hsemPointer()");
  GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v7 + 72));
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDynamicModeChange);
  if ( !(_DWORD)v9 && (_DWORD)v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
    DisplayScenarioJournalDisplayUniquenessIncremented();
  }
  v11 = WdLogNewEntry5_WdTrace(v10);
  *(_QWORD *)(v11 + 24) = v9;
  WdLogEvent5_WdTrace(v11);
  return (unsigned int)v9;
}

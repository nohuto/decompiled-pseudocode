/*
 * XREFs of DrvDisableMDEV @ 0x1C0064F40
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0061490 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     SafeDisableMDEV @ 0x1C0070A00 (SafeDisableMDEV.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0034504 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     GreSuspendDirectDraw @ 0x1C0060EE0 (GreSuspendDirectDraw.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C0065134 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 */

__int64 __fastcall DrvDisableMDEV(struct _MDEV *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v20; // [rsp+30h] [rbp+8h] BYREF

  v4 = (int)a2;
  v6 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = v4;
  WdLogEvent5_WdEvent(v6);
  v7 = *(_QWORD *)a1;
  v20 = *(_QWORD *)a1;
  if ( (_DWORD)v4 )
    GreSuspendDirectDraw(v7, 0);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v7 + 72));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemPointer()", *(_QWORD *)(v7 + 72), 4);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v7 + 64));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemDevLock()", *(_QWORD *)(v7 + 64), 11);
  v8 = DrvDisableMDEVChildren(a1, v4, a3);
  v10 = v8;
  if ( v8 && (_DWORD)v4 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&v20, 1);
  EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemDevLock()", *(_QWORD *)(v7 + 64), v9);
  GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v7 + 64));
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT", (__int64)ghsemHT, v11);
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemHT);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (__int64)ghsemSprite, v12);
  GreReleaseSemaphoreInternal(ghsemSprite);
  EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemPointer()", *(_QWORD *)(v7 + 72), v13);
  GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v7 + 72));
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v14);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  if ( !(_DWORD)v10 && (_DWORD)v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
    DisplayScenarioJournalDisplayUniquenessIncremented();
  }
  v18 = WdLogNewEntry5_WdTrace(v16, v15, v17);
  *(_QWORD *)(v18 + 24) = v10;
  WdLogEvent5_WdTrace(v18);
  return (unsigned int)v10;
}

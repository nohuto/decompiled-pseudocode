/*
 * XREFs of ldevUnloadImage @ 0x1C005C300
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0056E20 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C0059858 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00599A0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ldevLoadDriver @ 0x1C005C400 (ldevLoadDriver.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C00649C0 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ldevUnloadImage(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // rax
  __int64 v6; // rax
  void (*v7)(void); // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx

  EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
  if ( (*(_DWORD *)(a1 + 28))-- == 1 )
  {
    v6 = WdLogNewEntry5_WdTrace(v2);
    WdLogEvent5_WdTrace(v6);
    v7 = *(void (**)(void))(a1 + 128);
    if ( v7 )
      v7();
    v8 = *(_QWORD *)(a1 + 16);
    if ( v8 && (*(_DWORD *)(a1 + 32) & 2) == 0 )
      ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (PVOID)(v8 + 24), 8uLL);
    if ( *(_QWORD *)a1 )
      *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
    v9 = *(_QWORD **)(a1 + 8);
    if ( v9 )
      *v9 = *(_QWORD *)a1;
    else
      gpldevDrivers = *(struct _LDEV **)a1;
    if ( *(_QWORD *)(a1 + 16) )
    {
      Win32FreePool();
      Win32FreePool();
    }
    Win32FreePool();
  }
  else
  {
    v4 = WdLogNewEntry5_WdTrace(v2);
    WdLogEvent5_WdTrace(v4);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
  return GreReleaseSemaphoreInternal(ghsemDriverMgmt);
}

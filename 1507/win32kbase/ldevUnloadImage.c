/*
 * XREFs of ldevUnloadImage @ 0x1C005E930
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C005AC00 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C005E7E0 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     ldevLoadDriver @ 0x1C005EA30 (ldevLoadDriver.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0063F40 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C006CE2C (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ldevUnloadImage(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v9; // rax
  void (*v10)(void); // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx

  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
  if ( (*(_DWORD *)(a1 + 28))-- == 1 )
  {
    v9 = WdLogNewEntry5_WdTrace(v3, v2, v4);
    WdLogEvent5_WdTrace(v9);
    v10 = *(void (**)(void))(a1 + 128);
    if ( v10 )
      v10();
    v11 = *(_QWORD *)(a1 + 16);
    if ( v11 && (*(_DWORD *)(a1 + 32) & 2) == 0 )
      ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (PVOID)(v11 + 24), 8uLL);
    if ( *(_QWORD *)a1 )
      *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
    v12 = *(_QWORD **)(a1 + 8);
    if ( v12 )
      *v12 = *(_QWORD *)a1;
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
    v6 = WdLogNewEntry5_WdTrace(v3, v2, v4);
    WdLogEvent5_WdTrace(v6);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v7);
  return GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
}

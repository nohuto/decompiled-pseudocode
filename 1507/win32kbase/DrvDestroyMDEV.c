/*
 * XREFs of DrvDestroyMDEV @ 0x1C0064C34
 * Callers:
 *     hdcOpenDCW @ 0x1C0053650 (hdcOpenDCW.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0061490 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C006D598 (DrvCleanupAndDestroyMDEV.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00345F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 */

void __fastcall DrvDestroyMDEV(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int i; // esi
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v3 + 24) = a1;
  WdLogEvent5_WdEvent(v3);
  for ( i = 0; i < *(_DWORD *)(a1 + 20); ++i )
  {
    v9 = *(_QWORD *)(32 * (i + 1LL) + a1);
    v5 = v9;
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
    --*(_DWORD *)(v5 + 36);
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v6);
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
    PDEVOBJ::vUnreferencePdev(&v9, 0);
  }
  if ( *(_DWORD *)(a1 + 20) > 1u )
  {
    v9 = *(_QWORD *)a1;
    v7 = v9;
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
    --*(_DWORD *)(v7 + 36);
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v8);
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
    PDEVOBJ::vUnreferencePdev(&v9, 0);
  }
}

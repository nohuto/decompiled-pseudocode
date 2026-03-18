/*
 * XREFs of DrvDestroyMDEV @ 0x1C0057AB4
 * Callers:
 *     hdcOpenDCW @ 0x1C0042710 (hdcOpenDCW.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0054368 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C00767B0 (DrvCleanupAndDestroyMDEV.c)
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038000 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

void __fastcall DrvDestroyMDEV(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int i; // esi
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *v5; // rbx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *v6; // rbx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v3 + 24) = a1;
  WdLogEvent5_WdEvent(v3);
  for ( i = 0; i < *(_DWORD *)(a1 + 20); ++i )
  {
    v7 = *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C **)(32 * (i + 1LL) + a1);
    v5 = v7;
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    --*((_DWORD *)&v5[4] + 1);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
    GreReleaseSemaphoreInternal(ghsemDriverMgmt);
    PDEVOBJ::vUnreferencePdev(&v7, 0);
  }
  if ( *(_DWORD *)(a1 + 20) > 1u )
  {
    v7 = *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C **)a1;
    v6 = v7;
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    --*((_DWORD *)&v6[4] + 1);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
    GreReleaseSemaphoreInternal(ghsemDriverMgmt);
    PDEVOBJ::vUnreferencePdev(&v7, 0);
  }
}

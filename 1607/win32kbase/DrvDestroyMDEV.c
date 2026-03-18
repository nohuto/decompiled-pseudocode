/*
 * XREFs of DrvDestroyMDEV @ 0x1C0069344
 * Callers:
 *     hdcOpenDCW @ 0x1C0020120 (hdcOpenDCW.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0065BC0 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C006CE28 (DrvCleanupAndDestroyMDEV.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031C50 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

void __fastcall DrvDestroyMDEV(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int i; // esi
  struct _LIST_ENTRY *v5; // rbx
  struct _LIST_ENTRY *v6; // rbx
  struct _LIST_ENTRY *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v3 + 24) = a1;
  WdLogEvent5_WdEvent(v3);
  for ( i = 0; i < *(_DWORD *)(a1 + 20); ++i )
  {
    v7 = *(struct _LIST_ENTRY **)(32 * (i + 1LL) + a1);
    v5 = v7;
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    --HIDWORD(v5[2].Flink);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
    PDEVOBJ::vUnreferencePdev(&v7, 0);
  }
  if ( *(_DWORD *)(a1 + 20) > 1u )
  {
    v7 = *(struct _LIST_ENTRY **)a1;
    v6 = v7;
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    --HIDWORD(v6[2].Flink);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
    PDEVOBJ::vUnreferencePdev(&v7, 0);
  }
}

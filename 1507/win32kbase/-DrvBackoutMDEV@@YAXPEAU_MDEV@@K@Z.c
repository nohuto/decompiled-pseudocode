/*
 * XREFs of ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00B8A80
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0061490 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0062A9C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00345F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0066760 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C006F8F0 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 */

void __fastcall DrvBackoutMDEV(struct _MDEV *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int i; // esi
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r8
  unsigned int j; // edi
  HDEV v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v3 + 24) = a1;
  WdLogEvent5_WdEvent(v3);
  for ( i = 0; i < *((_DWORD *)a1 + 5); ++i )
  {
    v12 = *((_QWORD *)a1 + 4 * i + 4);
    v5 = v12;
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
    if ( *(_DWORD *)(v5 + 36) == 1 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v6);
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
      DrvDisableDisplay(v5, 0LL);
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v6);
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
    --*(_DWORD *)(v5 + 36);
    PDEVOBJ::vUnreferencePdev(&v12, 0);
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v7);
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
  }
  for ( j = 0; j < *((_DWORD *)a1 + 5); ++j )
  {
    v9 = (HDEV)*((_QWORD *)a1 + 4 * j + 5);
    if ( v9 )
    {
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
      if ( *((_DWORD *)v9 + 9) == 1 )
      {
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v10);
        GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
        DrvEnableDisplay(v9, v11);
        EngAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v10);
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
    }
  }
}

/*
 * XREFs of ldevLoadInternal @ 0x1C007EA70
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0063F40 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C007EB74 (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall ldevLoadInternal(unsigned int (__fastcall *a1)(__int64, __int64, _BYTE *), int a2)
{
  _DWORD *v4; // rax
  __int64 v5; // r8
  _DWORD *v6; // rbx
  struct _LDEV *v7; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
  v4 = PALLOCMEM2(0x388uLL, 1986292807LL, 1);
  v6 = v4;
  if ( v4 )
  {
    v4[224] = 0;
    *((_QWORD *)v4 + 111) = v4 + 16;
    if ( a1(196865LL, 16LL, v9) && (unsigned int)ldevFillTable(v6, v9) )
    {
      v6[6] = a2;
      v6[7] = 1;
      v7 = gpldevDrivers;
      if ( gpldevDrivers )
      {
        *((_QWORD *)gpldevDrivers + 1) = v6;
        v7 = gpldevDrivers;
      }
      *((_QWORD *)v6 + 1) = 0LL;
      *(_QWORD *)v6 = v7;
      gpldevDrivers = (struct _LDEV *)v6;
      *((_QWORD *)v6 + 2) = 0LL;
    }
    else
    {
      Win32FreePool();
      v6 = 0LL;
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v5);
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
  return v6;
}

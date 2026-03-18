/*
 * XREFs of ldevLoadInternal @ 0x1C005CC50
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0056E20 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C005CD54 (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall ldevLoadInternal(unsigned int (__fastcall *a1)(__int64, __int64, _BYTE *), int a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  struct _LDEV *v6; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
  v4 = PALLOCMEM2(0x388uLL, 1986292807LL, 1);
  v5 = v4;
  if ( v4 )
  {
    v4[224] = 0;
    *((_QWORD *)v4 + 111) = v4 + 16;
    if ( a1(196865LL, 16LL, v8) && (unsigned int)ldevFillTable(v5, v8) )
    {
      v5[6] = a2;
      v5[7] = 1;
      v6 = gpldevDrivers;
      if ( gpldevDrivers )
      {
        *((_QWORD *)gpldevDrivers + 1) = v5;
        v6 = gpldevDrivers;
      }
      *((_QWORD *)v5 + 1) = 0LL;
      *(_QWORD *)v5 = v6;
      gpldevDrivers = (struct _LDEV *)v5;
      *((_QWORD *)v5 + 2) = 0LL;
    }
    else
    {
      Win32FreePool();
      v5 = 0LL;
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
  GreReleaseSemaphoreInternal(ghsemDriverMgmt);
  return v5;
}

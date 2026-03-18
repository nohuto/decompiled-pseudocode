/*
 * XREFs of ldevLoadInternal @ 0x1C006CAC0
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0068660 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C006CBC4 (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall ldevLoadInternal(unsigned int (__fastcall *a1)(__int64, __int64, _BYTE *), int a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  struct _LDEV *v6; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  EngAcquireSemaphore(ghsemDriverMgmt);
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
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
  return v5;
}

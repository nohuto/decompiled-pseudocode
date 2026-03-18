/*
 * XREFs of DrvGetHDEV @ 0x1C0043760
 * Callers:
 *     hdcOpenDCW @ 0x1C0042710 (hdcOpenDCW.c)
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     DrvGetDeviceFromName @ 0x1C0043830 (DrvGetDeviceFromName.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C __fastcall DrvGetHDEV(
        __int64 a1)
{
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v1; // rbx
  __int64 DeviceFromName; // rsi
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v3; // rdi
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v4; // rcx
  __int64 v5; // rax

  v1 = 0LL;
  if ( a1 )
  {
    DeviceFromName = DrvGetDeviceFromName(a1, 0LL);
    if ( DeviceFromName )
    {
      v3 = 0LL;
      EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      v4 = WPP_MAIN_CB.DeviceQueue.1;
      if ( WPP_MAIN_CB.DeviceQueue.1 )
      {
        do
        {
          v5 = *(_QWORD *)(*(_QWORD *)&v4 + 2600LL);
          if ( v5 && v5 == DeviceFromName )
          {
            if ( (*(_DWORD *)(*(_QWORD *)&v4 + 56LL) & 0x400) == 0 )
            {
              ++*(_DWORD *)(*(_QWORD *)&v4 + 32LL);
              v1 = v4;
              goto LABEL_8;
            }
            if ( !*(_QWORD *)&v3 )
              v3 = v4;
          }
          v4 = *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)(*(_QWORD *)&v4 + 24LL);
        }
        while ( v4 );
        if ( v3 )
        {
          ++*(_DWORD *)(*(_QWORD *)&v3 + 32LL);
          *(_QWORD *)(*(_QWORD *)&v3 + 48LL) = 0LL;
          v1 = v3;
        }
      }
LABEL_8:
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
      GreReleaseSemaphoreInternal(ghsemDriverMgmt);
    }
  }
  return v1;
}

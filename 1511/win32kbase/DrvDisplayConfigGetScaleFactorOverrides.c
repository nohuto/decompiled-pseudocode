/*
 * XREFs of DrvDisplayConfigGetScaleFactorOverrides @ 0x1C00BC9C0
 * Callers:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C004C750 (DrvDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 __fastcall DrvDisplayConfigGetScaleFactorOverrides(__int64 a1, int a2)
{
  __int64 v4; // r8
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C i; // rbx
  _DWORD *v6; // rcx
  int v7; // eax

  EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
  for ( i = WPP_MAIN_CB.DeviceQueue.1;
        i;
        i = *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)(*(_QWORD *)&i + 24LL) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)&i + 56LL) & 0x401) == 1 )
    {
      v6 = *(_DWORD **)(*(_QWORD *)&i + 2600LL);
      if ( ((unsigned __int64)(v6 + 1) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
      {
        v7 = v6[40];
        if ( (v7 & 0x800000) != 0 )
        {
          if ( a2 )
          {
            if ( (v7 & 4) != 0 )
              goto LABEL_7;
          }
          else if ( *(_DWORD *)(a1 + 8) == v6[66] && *(_DWORD *)(a1 + 12) == v6[67] && *(_DWORD *)(a1 + 16) == v6[68] )
          {
LABEL_7:
            *(_QWORD *)(a1 + 20) = *(_QWORD *)(*(_QWORD *)&i + 2560LL);
            *(_DWORD *)(a1 + 28) = *(_DWORD *)(*(_QWORD *)&i + 2568LL);
            break;
          }
        }
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v4);
  GreReleaseSemaphoreInternal(ghsemDriverMgmt);
  return i == 0LL ? 0xC000000D : 0;
}

/*
 * XREFs of DrvInitializeDxgkrnlDpiCache @ 0x1C007D7C0
 * Callers:
 *     <none>
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvInitializeDxgkrnlDpiCache(_DWORD *a1)
{
  unsigned int v2; // esi
  __int64 v3; // r8
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C i; // rbx
  __int64 v5; // rdx

  v2 = ((__int64 (*)(void))qword_1C0104528)();
  if ( a1 )
  {
    *a1 = 0;
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
    for ( i = WPP_MAIN_CB.DeviceQueue.1;
          i;
          i = *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)(*(_QWORD *)&i + 24LL) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)&i + 56LL) & 0x401) == 1 )
      {
        v5 = *(_QWORD *)(*(_QWORD *)&i + 2600LL);
        if ( ((v5 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0
          && (*(_DWORD *)(v5 + 160) & 0x800000) != 0
          && ((unsigned int)((__int64 (__fastcall *)(__int64, _QWORD))qword_1C0104530)(
                              v5 + 264,
                              *(unsigned int *)(v5 + 272)) != *(_DWORD *)(*(_QWORD *)&i + 2564LL)
           || (*(_DWORD *)(*(_QWORD *)&i + 2572LL) & 0x20) != 0
           && (96 * *(_DWORD *)(*(_QWORD *)&i + 2488LL) + 50) / 0x64u != gdmLogPixels) )
        {
          *a1 = 1;
          break;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v3);
    GreReleaseSemaphoreInternal(ghsemDriverMgmt);
  }
  return v2;
}

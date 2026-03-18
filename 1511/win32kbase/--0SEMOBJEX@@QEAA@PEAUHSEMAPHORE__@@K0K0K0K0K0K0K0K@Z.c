/*
 * XREFs of ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C0087F68
 * Callers:
 *     HDXDrvEscape @ 0x1C0087E50 (HDXDrvEscape.c)
 *     GreDrvConnect @ 0x1C00B6320 (GreDrvConnect.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

SEMOBJEX *__fastcall SEMOBJEX::SEMOBJEX(
        SEMOBJEX *this,
        HSEMAPHORE a2,
        __int64 a3,
        HSEMAPHORE a4,
        unsigned int a5,
        HSEMAPHORE a6,
        unsigned int a7,
        HSEMAPHORE hsem,
        unsigned int a9,
        HSEMAPHORE a10,
        unsigned int a11,
        HSEMAPHORE a12,
        unsigned int a13)
{
  HSEMAPHORE v13; // rdi
  HSEMAPHORE v15; // rcx
  HSEMAPHORE v16; // rsi

  v13 = (HSEMAPHORE)ghsemDCVisRgn;
  v15 = (HSEMAPHORE)ghsemDynamicModeChange;
  v16 = (HSEMAPHORE)ghsemGreLock;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  if ( v15 )
  {
    *(_QWORD *)this = v15;
    *((_DWORD *)this + 16) = 1;
    EngAcquireSemaphore(v15);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hSem1", *(_QWORD *)this, *((_DWORD *)this + 16));
    if ( v16 )
    {
      *((_QWORD *)this + 1) = v16;
      *((_DWORD *)this + 17) = 2;
      EngAcquireSemaphore(v16);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hSem2", *((_QWORD *)this + 1), *((_DWORD *)this + 17));
      if ( v13 )
      {
        *((_QWORD *)this + 2) = v13;
        *((_DWORD *)this + 18) = 3;
        EngAcquireSemaphore(v13);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hSem3", *((_QWORD *)this + 2), *((_DWORD *)this + 18));
        if ( hsem )
        {
          *((_DWORD *)this + 19) = a9;
          *((_QWORD *)this + 3) = hsem;
          EngAcquireSemaphore(hsem);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hSem4", *((_QWORD *)this + 3), *((_DWORD *)this + 19));
          if ( a10 )
          {
            *((_DWORD *)this + 20) = a11;
            *((_QWORD *)this + 4) = a10;
            EngAcquireSemaphore(a10);
            EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hSem5", *((_QWORD *)this + 4), *((_DWORD *)this + 20));
            if ( a12 )
            {
              *((_DWORD *)this + 21) = a13;
              *((_QWORD *)this + 5) = a12;
              EngAcquireSemaphore(a12);
              EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hSem6", *((_QWORD *)this + 5), *((_DWORD *)this + 21));
            }
          }
        }
      }
    }
  }
  return this;
}

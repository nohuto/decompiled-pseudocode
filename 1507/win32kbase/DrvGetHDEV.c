/*
 * XREFs of DrvGetHDEV @ 0x1C0053C00
 * Callers:
 *     hdcOpenDCW @ 0x1C0053650 (hdcOpenDCW.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     DrvGetDeviceFromName @ 0x1C0053CD0 (DrvGetDeviceFromName.c)
 */

struct PDEV *__fastcall DrvGetHDEV(__int64 a1)
{
  struct PDEV *v1; // rbx
  __int64 DeviceFromName; // rsi
  struct PDEV *v3; // rdi
  __int64 v4; // r8
  struct PDEV *v5; // rcx
  __int64 v6; // rax

  v1 = 0LL;
  if ( a1 )
  {
    DeviceFromName = DrvGetDeviceFromName(a1, 0LL);
    if ( DeviceFromName )
    {
      v3 = 0LL;
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
      v5 = gppdevList;
      if ( gppdevList )
      {
        do
        {
          v6 = *((_QWORD *)v5 + 325);
          if ( v6 && v6 == DeviceFromName )
          {
            if ( (*((_DWORD *)v5 + 14) & 0x400) == 0 )
            {
              ++*((_DWORD *)v5 + 8);
              v1 = v5;
              goto LABEL_8;
            }
            if ( !v3 )
              v3 = v5;
          }
          v5 = (struct PDEV *)*((_QWORD *)v5 + 3);
        }
        while ( v5 );
        if ( v3 )
        {
          ++*((_DWORD *)v3 + 8);
          *((_QWORD *)v3 + 6) = 0LL;
          v1 = v3;
        }
      }
LABEL_8:
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v4);
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
    }
  }
  return v1;
}

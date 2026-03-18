/*
 * XREFs of DrvGetHDEV @ 0x1C0063040
 * Callers:
 *     hdcOpenDCW @ 0x1C0020120 (hdcOpenDCW.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     DrvGetDeviceFromName @ 0x1C0063110 (DrvGetDeviceFromName.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

struct _LIST_ENTRY *__fastcall DrvGetHDEV(__int64 a1)
{
  struct _LIST_ENTRY *v1; // rbx
  __int64 DeviceFromName; // rsi
  struct _LIST_ENTRY *v3; // rdi
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v5; // rax

  v1 = 0LL;
  if ( a1 )
  {
    DeviceFromName = DrvGetDeviceFromName(a1, 0LL);
    if ( DeviceFromName )
    {
      v3 = 0LL;
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      Blink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
      if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink )
      {
        do
        {
          v5 = Blink[162].Blink;
          if ( v5 && v5 == (struct _LIST_ENTRY *)DeviceFromName )
          {
            if ( ((__int64)Blink[3].Blink & 0x400) == 0 )
            {
              ++LODWORD(Blink[2].Flink);
              v1 = Blink;
              goto LABEL_8;
            }
            if ( !v3 )
              v3 = Blink;
          }
          Blink = Blink[1].Blink;
        }
        while ( Blink );
        if ( v3 )
        {
          ++LODWORD(v3[2].Flink);
          v3[3].Flink = 0LL;
          v1 = v3;
        }
      }
LABEL_8:
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
    }
  }
  return v1;
}

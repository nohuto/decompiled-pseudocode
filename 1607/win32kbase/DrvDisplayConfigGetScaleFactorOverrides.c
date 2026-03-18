/*
 * XREFs of DrvDisplayConfigGetScaleFactorOverrides @ 0x1C00C8690
 * Callers:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C004A240 (DrvDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 __fastcall DrvDisplayConfigGetScaleFactorOverrides(__int64 a1, int a2)
{
  struct _LIST_ENTRY *i; // rbx
  struct _LIST_ENTRY *Blink; // rcx
  int Flink; // eax

  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
  for ( i = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink; i; i = i[1].Blink )
  {
    if ( ((__int64)i[3].Blink & 0x401) == 1 )
    {
      Blink = i[162].Blink;
      if ( (((unsigned __int64)&Blink->Flink + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
      {
        Flink = (int)Blink[10].Flink;
        if ( (Flink & 0x800000) != 0 )
        {
          if ( a2 )
          {
            if ( (Flink & 4) != 0 )
              goto LABEL_7;
          }
          else if ( *(_DWORD *)(a1 + 8) == LODWORD(Blink[16].Blink)
                 && *(_DWORD *)(a1 + 12) == HIDWORD(Blink[16].Blink)
                 && *(_DWORD *)(a1 + 16) == LODWORD(Blink[17].Flink) )
          {
LABEL_7:
            *(_QWORD *)(a1 + 20) = i[160].Flink;
            *(_DWORD *)(a1 + 28) = i[160].Blink;
            break;
          }
        }
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
  return i == 0LL ? 0xC000000D : 0;
}

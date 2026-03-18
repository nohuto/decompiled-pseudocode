/*
 * XREFs of DrvInitializeDxgkrnlDpiCache @ 0x1C0080FD0
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvInitializeDxgkrnlDpiCache(_DWORD *a1)
{
  unsigned int v2; // esi
  struct _LIST_ENTRY *i; // rbx
  struct _LIST_ENTRY *Blink; // rdx

  v2 = ((__int64 (*)(void))qword_1C011B878)();
  if ( a1 )
  {
    *a1 = 0;
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
    for ( i = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink; i; i = i[1].Blink )
    {
      if ( ((__int64)i[3].Blink & 0x401) == 1 )
      {
        Blink = i[162].Blink;
        if ( (((unsigned __int64)&Blink->Flink + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0
          && ((__int64)Blink[10].Flink & 0x800000) != 0
          && ((unsigned int)((__int64 (__fastcall *)(struct _LIST_ENTRY **, _QWORD))qword_1C011B880)(
                              &Blink[16].Blink,
                              LODWORD(Blink[17].Flink)) != HIDWORD(i[160].Flink)
           || (HIDWORD(i[160].Blink) & 0x20) != 0 && (96 * LODWORD(i[155].Blink) + 50) / 0x64u != gdmLogPixels) )
        {
          *a1 = 1;
          break;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt");
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
  }
  return v2;
}

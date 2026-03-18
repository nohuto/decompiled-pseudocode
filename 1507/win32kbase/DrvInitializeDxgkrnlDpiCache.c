/*
 * XREFs of DrvInitializeDxgkrnlDpiCache @ 0x1C00835F0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvInitializeDxgkrnlDpiCache(_DWORD *a1)
{
  unsigned int v2; // esi
  __int64 v3; // r8
  struct PDEV *i; // rbx
  __int64 v5; // rdx

  v2 = ((__int64 (*)(void))qword_1C0101710)();
  if ( a1 )
  {
    *a1 = 0;
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
    for ( i = gppdevList; i; i = (struct PDEV *)*((_QWORD *)i + 3) )
    {
      if ( (*((_DWORD *)i + 14) & 0x401) == 1 )
      {
        v5 = *((_QWORD *)i + 325);
        if ( ((v5 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0
          && (*(_DWORD *)(v5 + 160) & 0x800000) != 0
          && ((unsigned int)((__int64 (__fastcall *)(__int64, _QWORD))qword_1C0101718)(
                              v5 + 264,
                              *(unsigned int *)(v5 + 272)) != *((_DWORD *)i + 641)
           || (*((_DWORD *)i + 643) & 0x20) != 0 && (96 * *((_DWORD *)i + 622) + 50) / 0x64u != gdmLogPixels) )
        {
          *a1 = 1;
          break;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v3);
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
  }
  return v2;
}

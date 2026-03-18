/*
 * XREFs of ?GetModuleHandleAndIncrementRefcount@@YAPEAXPEAG@Z @ 0x1C027E0B0
 * Callers:
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1C027E15C (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall GetModuleHandleAndIncrementRefcount(wchar_t *Str1)
{
  if ( GreEngLoadModuleAllocListLock )
  {
    GreAcquireSemaphore(GreEngLoadModuleAllocListLock);
    EtwTraceGreLockReleaseSemaphore(L"GreEngLoadModuleAllocListLock", GreEngLoadModuleAllocListLock);
    GreReleaseSemaphoreInternal(GreEngLoadModuleAllocListLock);
  }
  return 0LL;
}

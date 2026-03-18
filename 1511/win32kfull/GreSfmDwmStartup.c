/*
 * XREFs of GreSfmDwmStartup @ 0x1C00D4F6C
 * Callers:
 *     GreDwmStartup @ 0x1C00D4D7C (GreDwmStartup.c)
 * Callees:
 *     <none>
 */

__int64 GreSfmDwmStartup()
{
  char *v0; // rax
  char *v1; // rdx
  char *v3; // rax

  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  v0 = (char *)gpSfmState + 40;
  v1 = (char *)*((_QWORD *)gpSfmState + 5);
  while ( v1 != v0 )
  {
    v3 = v1 - 32;
    v1 = *(char **)v1;
    if ( !*((_DWORD *)v3 + 63) )
      *((_DWORD *)v3 + 62) |= 0x10u;
    v0 = (char *)gpSfmState + 40;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  return GreReleaseSemaphoreInternal(ghsemDwmState);
}

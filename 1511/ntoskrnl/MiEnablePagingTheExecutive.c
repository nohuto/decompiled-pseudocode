/*
 * XREFs of MiEnablePagingTheExecutive @ 0x14074CD88
 * Callers:
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 * Callees:
 *     MiEnablePagingOfDriver @ 0x140520BB0 (MiEnablePagingOfDriver.c)
 *     MiLockPagableSections @ 0x14074CDD0 (MiLockPagableSections.c)
 */

__int64 MiEnablePagingTheExecutive()
{
  PVOID *i; // rbx
  __int64 result; // rax

  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    *((_DWORD *)i + 26) |= 0x400000u;
    MiEnablePagingOfDriver((__int64)i);
    result = MiLockPagableSections(i, 1LL);
  }
  return result;
}

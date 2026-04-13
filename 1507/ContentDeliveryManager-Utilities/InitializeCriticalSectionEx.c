/*
 * XREFs of InitializeCriticalSectionEx @ 0x180022A74
 * Callers:
 *     _Mtxinit @ 0x180022B18 (_Mtxinit.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall InitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, DWORD Flags)
{
  return __imp_InitializeCriticalSectionEx(lpCriticalSection, dwSpinCount, Flags);
}

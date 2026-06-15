/*
 * XREFs of __crtInitializeCriticalSectionEx @ 0x180042FE4
 * Callers:
 *     _Mtxinit @ 0x180042FD0 (_Mtxinit.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall _crtInitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, DWORD Flags)
{
  return InitializeCriticalSectionEx(lpCriticalSection, dwSpinCount, Flags);
}

/*
 * XREFs of DllEntryPoint @ 0x180025DA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800267B4 @ 0x1800267B4 (sub_1800267B4.c)
 */

BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    sub_1800267B4();
  return sub_180025DE4(hinstDLL, fdwReason, lpReserved);
}

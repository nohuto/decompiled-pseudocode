/*
 * XREFs of ?CitpCleanup@@YAXXZ @ 0x1C00713A4
 * Callers:
 *     CitProcessCallout @ 0x1C00511F4 (CitProcessCallout.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0071124 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitpCleanup(void)
{
  CitpCleanupGlobalImpactContext(&qword_1C0101FE0);
  if ( qword_1C0101FC8 && (wchar_t *)qword_1C0101FC8 != L":RUNDLL32.EXE:DLLHOST.EXE:MMC.EXE:" )
  {
    Win32FreePool();
    qword_1C0101FC8 = (__int64)L":RUNDLL32.EXE:DLLHOST.EXE:MMC.EXE:";
  }
  dword_1C0101FD0 = 0;
  byte_1C0101FD4 = 0;
  byte_1C0101F81 = 1;
}

/*
 * XREFs of EngDeletePath @ 0x1C027C1C0
 * Callers:
 *     EngLineTo @ 0x1C01166A0 (EngLineTo.c)
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C011C458 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 *     ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C028621C (-GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     NtGdiEngDeletePath @ 0x1C02AC120 (NtGdiEngDeletePath.c)
 * Callees:
 *     <none>
 */

void __stdcall EngDeletePath(PATHOBJ *ppo)
{
  if ( ppo )
  {
    EPATHOBJ::vUnlock((EPATHOBJ *)ppo);
    Win32FreePool(ppo);
  }
}

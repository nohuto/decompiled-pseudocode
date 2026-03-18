/*
 * XREFs of EngDeletePath @ 0x1C027B710
 * Callers:
 *     EngLineTo @ 0x1C013CEF0 (EngLineTo.c)
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C0146BB8 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 *     ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C0286564 (-GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     NtGdiEngDeletePath @ 0x1C02AB740 (NtGdiEngDeletePath.c)
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

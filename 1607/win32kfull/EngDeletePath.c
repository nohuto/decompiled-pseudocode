/*
 * XREFs of EngDeletePath @ 0x1C02798F0
 * Callers:
 *     EngLineTo @ 0x1C00100C0 (EngLineTo.c)
 *     ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C02844FC (-GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C0284D28 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 *     NtGdiEngDeletePath @ 0x1C02AD8B0 (NtGdiEngDeletePath.c)
 * Callees:
 *     <none>
 */

void __stdcall EngDeletePath(PATHOBJ *ppo)
{
  __int64 v2; // rdx

  if ( ppo )
  {
    EPATHOBJ::vUnlock((EPATHOBJ *)ppo);
    Win32FreePool(ppo, v2);
  }
}

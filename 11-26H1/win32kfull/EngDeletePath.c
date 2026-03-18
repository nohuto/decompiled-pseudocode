/*
 * XREFs of EngDeletePath @ 0x1400D7FA0
 * Callers:
 *     NtGdiEngDeletePath @ 0x1400D6A70 (NtGdiEngDeletePath.c)
 *     ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1400D865C (-GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     EngLineTo @ 0x1401874C0 (EngLineTo.c)
 *     ?Dereference@UMPDOBJ@@QEAAXXZ @ 0x140290C80 (-Dereference@UMPDOBJ@@QEAAXXZ.c)
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

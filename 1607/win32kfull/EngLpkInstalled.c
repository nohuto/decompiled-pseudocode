/*
 * XREFs of EngLpkInstalled @ 0x1C01572C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL EngLpkInstalled(void)
{
  return *(_DWORD *)(gpGdiSharedMemory + 1573012LL) != 0;
}

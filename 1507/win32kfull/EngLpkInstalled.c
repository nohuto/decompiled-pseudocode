/*
 * XREFs of EngLpkInstalled @ 0x1C0159960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL EngLpkInstalled(void)
{
  return *(_DWORD *)(gpGdiSharedMemory + 1573012LL) != 0;
}

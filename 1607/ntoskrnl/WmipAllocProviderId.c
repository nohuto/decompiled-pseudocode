/*
 * XREFs of WmipAllocProviderId @ 0x1404F130C
 * Callers:
 *     WmipAllocRegEntry @ 0x14012DE98 (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}

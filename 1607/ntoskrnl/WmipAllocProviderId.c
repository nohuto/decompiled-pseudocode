/*
 * XREFs of WmipAllocProviderId @ 0x1404D3400
 * Callers:
 *     WmipAllocRegEntry @ 0x14012E408 (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}

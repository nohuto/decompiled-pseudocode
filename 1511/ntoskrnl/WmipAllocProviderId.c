/*
 * XREFs of WmipAllocProviderId @ 0x1404C57AC
 * Callers:
 *     WmipAllocRegEntry @ 0x140123DB8 (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}

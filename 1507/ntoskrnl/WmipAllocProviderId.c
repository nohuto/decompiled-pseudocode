/*
 * XREFs of WmipAllocProviderId @ 0x14055BDA0
 * Callers:
 *     WmipAllocRegEntry @ 0x140157134 (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}

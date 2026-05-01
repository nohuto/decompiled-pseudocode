/*
 * XREFs of RmAvailabilityCheck @ 0x18000EF60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ @ 0x180006850 (-GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ.c)
 *     ?RmAvailabilityCheck@ResourceManagerProxy@@QEAAJKPEAURmResourceInfo@@KK@Z @ 0x18000EB04 (-RmAvailabilityCheck@ResourceManagerProxy@@QEAAJKPEAURmResourceInfo@@KK@Z.c)
 */

__int64 __fastcall RmAvailabilityCheck(int a1, struct RmResourceInfo *a2, int a3, unsigned int a4)
{
  unsigned int v8; // ebx
  ResourceManagerProxy *ResourceManagerProxy; // rax

  v8 = -2147467259;
  ResourceManagerProxy = GetResourceManagerProxy();
  if ( ResourceManagerProxy )
    return (unsigned int)ResourceManagerProxy::RmAvailabilityCheck(ResourceManagerProxy, a1, a2, a3, a4).Pointer;
  return v8;
}

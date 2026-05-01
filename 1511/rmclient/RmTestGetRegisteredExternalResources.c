/*
 * XREFs of RmTestGetRegisteredExternalResources @ 0x18000FB00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ @ 0x180001B20 (-GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ.c)
 *     ?RmTestGetRegisteredExternalResources@ResourceManagerProxy@@QEAAJQEA_K@Z @ 0x18000F5E0 (-RmTestGetRegisteredExternalResources@ResourceManagerProxy@@QEAAJQEA_K@Z.c)
 */

__int64 __fastcall RmTestGetRegisteredExternalResources(unsigned __int64 *a1)
{
  unsigned int v2; // ebx
  ResourceManagerProxy *ResourceManagerProxy; // rax

  v2 = -2147467259;
  ResourceManagerProxy = GetResourceManagerProxy();
  if ( ResourceManagerProxy )
    return (unsigned int)ResourceManagerProxy::RmTestGetRegisteredExternalResources(ResourceManagerProxy, a1).Pointer;
  return v2;
}

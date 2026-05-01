/*
 * XREFs of RmAccessCheck @ 0x180006750
 * Callers:
 *     <none>
 * Callees:
 *     ?RmAccessCheck@ResourceManagerProxy@@QEAAJW4RmResourceType@@K@Z @ 0x18000679C (-RmAccessCheck@ResourceManagerProxy@@QEAAJW4RmResourceType@@K@Z.c)
 *     ?GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ @ 0x180006850 (-GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ.c)
 */

__int64 __fastcall RmAccessCheck(unsigned int a1, unsigned int a2)
{
  unsigned int v4; // ebx
  struct ResourceManagerProxy *ResourceManagerProxy; // rax

  v4 = -2147467259;
  ResourceManagerProxy = GetResourceManagerProxy();
  if ( ResourceManagerProxy )
    return (unsigned int)ResourceManagerProxy::RmAccessCheck(ResourceManagerProxy, a1, a2);
  return v4;
}

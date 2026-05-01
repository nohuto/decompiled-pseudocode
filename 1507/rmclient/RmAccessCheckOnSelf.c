/*
 * XREFs of RmAccessCheckOnSelf @ 0x18000EF20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ @ 0x180006850 (-GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ.c)
 *     ?RmAccessCheck@ResourceManagerProxy@@QEAAJW4RmResourceType@@@Z @ 0x18000EAA0 (-RmAccessCheck@ResourceManagerProxy@@QEAAJW4RmResourceType@@@Z.c)
 */

__int64 __fastcall RmAccessCheckOnSelf(int a1)
{
  unsigned int v2; // ebx
  struct ResourceManagerProxy *ResourceManagerProxy; // rax

  v2 = -2147467259;
  ResourceManagerProxy = GetResourceManagerProxy();
  if ( ResourceManagerProxy )
    return (unsigned int)ResourceManagerProxy::RmAccessCheck((__int64)ResourceManagerProxy, a1).Pointer;
  return v2;
}

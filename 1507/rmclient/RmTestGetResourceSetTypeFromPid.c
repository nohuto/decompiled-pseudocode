/*
 * XREFs of RmTestGetResourceSetTypeFromPid @ 0x18000F310
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ @ 0x180006850 (-GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ.c)
 *     ?RmTestGetResourceSetTypeFromPid@ResourceManagerProxy@@QEAAJKPEAW4RmResourceSetType@@@Z @ 0x18000EEB0 (-RmTestGetResourceSetTypeFromPid@ResourceManagerProxy@@QEAAJKPEAW4RmResourceSetType@@@Z.c)
 */

__int64 __fastcall RmTestGetResourceSetTypeFromPid(int a1, enum RmResourceSetType *a2)
{
  unsigned int v4; // ebx
  ResourceManagerProxy *ResourceManagerProxy; // rax

  v4 = -2147467259;
  ResourceManagerProxy = GetResourceManagerProxy();
  if ( ResourceManagerProxy )
    return (unsigned int)ResourceManagerProxy::RmTestGetResourceSetTypeFromPid(ResourceManagerProxy, a1, a2).Pointer;
  return v4;
}

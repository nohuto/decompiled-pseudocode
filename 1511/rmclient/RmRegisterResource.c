/*
 * XREFs of RmRegisterResource @ 0x1800017E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmRegisterResource@ResourceManagerProxy@@QEAAJW4RmResourceType@@KH@Z @ 0x180001AD0 (-RmRegisterResource@ResourceManagerProxy@@QEAAJW4RmResourceType@@KH@Z.c)
 *     ?GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ @ 0x180001B20 (-GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ.c)
 */

__int64 __fastcall RmRegisterResource(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx
  struct ResourceManagerProxy *ResourceManagerProxy; // rax

  v6 = -2147467259;
  ResourceManagerProxy = GetResourceManagerProxy();
  if ( ResourceManagerProxy )
    return (unsigned int)ResourceManagerProxy::RmRegisterResource(ResourceManagerProxy, a1, a2, a3);
  return v6;
}

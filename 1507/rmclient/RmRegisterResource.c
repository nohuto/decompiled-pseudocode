/*
 * XREFs of RmRegisterResource @ 0x180001720
 * Callers:
 *     <none>
 * Callees:
 *     ?RmRegisterResource@ResourceManagerProxy@@QEAAJW4RmResourceType@@KH@Z @ 0x1800016CC (-RmRegisterResource@ResourceManagerProxy@@QEAAJW4RmResourceType@@KH@Z.c)
 *     ?GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ @ 0x180006850 (-GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ.c)
 */

__int64 __fastcall RmRegisterResource(int a1, int a2, int a3)
{
  unsigned int v6; // ebx
  struct ResourceManagerProxy *ResourceManagerProxy; // rax

  v6 = -2147467259;
  ResourceManagerProxy = GetResourceManagerProxy();
  if ( ResourceManagerProxy )
    return (unsigned int)ResourceManagerProxy::RmRegisterResource((__int64)ResourceManagerProxy, a1, a2, a3).Pointer;
  return v6;
}

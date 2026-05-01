/*
 * XREFs of SHGetResourceManagementValue @ 0x18000F360
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ @ 0x180006850 (-GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ.c)
 *     ?GetResourceManagementValue@ResourceManagerProxy@@QEAAJKPEA_K@Z @ 0x18000E9B8 (-GetResourceManagementValue@ResourceManagerProxy@@QEAAJKPEA_K@Z.c)
 */

__int64 __fastcall SHGetResourceManagementValue(int a1, unsigned __int64 *a2)
{
  unsigned int v4; // ebx
  ResourceManagerProxy *ResourceManagerProxy; // rax

  v4 = -2147467259;
  ResourceManagerProxy = GetResourceManagerProxy();
  if ( ResourceManagerProxy )
    return (unsigned int)ResourceManagerProxy::GetResourceManagementValue(ResourceManagerProxy, a1, a2).Pointer;
  return v4;
}

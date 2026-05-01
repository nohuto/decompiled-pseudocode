/*
 * XREFs of RmGetMaxResidentCctApplications @ 0x18000EFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ @ 0x180006850 (-GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ.c)
 *     ?RmGetMaxResidentCctApplications@ResourceManagerProxy@@QEAAJPEAK@Z @ 0x18000EB7C (-RmGetMaxResidentCctApplications@ResourceManagerProxy@@QEAAJPEAK@Z.c)
 */

__int64 __fastcall RmGetMaxResidentCctApplications(unsigned int *a1)
{
  unsigned int v2; // ebx
  ResourceManagerProxy *ResourceManagerProxy; // rax

  v2 = -2147467259;
  ResourceManagerProxy = GetResourceManagerProxy();
  if ( ResourceManagerProxy )
    return (unsigned int)ResourceManagerProxy::RmGetMaxResidentCctApplications(ResourceManagerProxy, a1).Pointer;
  return v2;
}

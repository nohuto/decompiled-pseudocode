/*
 * XREFs of RmAcquireResources @ 0x180001840
 * Callers:
 *     <none>
 * Callees:
 *     ?RmAcquireResources@ResourceManagerProxy@@QEAAJKPEAURmResourceInfo@@KKPEAX1HW4RmPend@@PEAHPEA_K@Z @ 0x180001A28 (-RmAcquireResources@ResourceManagerProxy@@QEAAJKPEAURmResourceInfo@@KKPEAX1HW4RmPend@@PEAHPEA_K@.c)
 *     ?GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ @ 0x180001B20 (-GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ.c)
 */

__int64 __fastcall RmAcquireResources(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  unsigned int v14; // ebx
  struct ResourceManagerProxy *ResourceManagerProxy; // rcx

  v14 = -2147467259;
  ResourceManagerProxy = GetResourceManagerProxy();
  if ( ResourceManagerProxy )
    return (unsigned int)ResourceManagerProxy::RmAcquireResources(
                           ResourceManagerProxy,
                           a1,
                           a2,
                           a3,
                           a4,
                           a5,
                           a6,
                           a7,
                           a8,
                           a9,
                           a10);
  return v14;
}

/*
 * XREFs of RmReleaseResources @ 0x180001900
 * Callers:
 *     <none>
 * Callees:
 *     ?RmReleaseResources@ResourceManagerProxy@@QEAAJ_K@Z @ 0x1800019D8 (-RmReleaseResources@ResourceManagerProxy@@QEAAJ_K@Z.c)
 *     ?GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ @ 0x180001B20 (-GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ.c)
 */

__int64 __fastcall RmReleaseResources(unsigned __int64 a1)
{
  unsigned int v2; // ebx
  ResourceManagerProxy *v3; // rcx

  v2 = -2147467259;
  if ( GetResourceManagerProxy() )
    return (unsigned int)ResourceManagerProxy::RmReleaseResources(v3, a1);
  return v2;
}

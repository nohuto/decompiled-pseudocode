/*
 * XREFs of RmReleaseResources @ 0x180001550
 * Callers:
 *     <none>
 * Callees:
 *     ?RmReleaseResources@ResourceManagerProxy@@QEAAJ_K@Z @ 0x18000158C (-RmReleaseResources@ResourceManagerProxy@@QEAAJ_K@Z.c)
 *     ?GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ @ 0x180006850 (-GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ.c)
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

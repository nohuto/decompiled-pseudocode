/*
 * XREFs of RmTestGetResourceSetInfos @ 0x18000F210
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ @ 0x180006850 (-GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ.c)
 *     memset_0 @ 0x180008DF8 (memset_0.c)
 *     ?RmTestGetResourceSetInfos@ResourceManagerProxy@@QEAAJKPEAURmResourceSetInfo@@PEAK@Z @ 0x18000ED60 (-RmTestGetResourceSetInfos@ResourceManagerProxy@@QEAAJKPEAURmResourceSetInfo@@PEAK@Z.c)
 */

__int64 __fastcall RmTestGetResourceSetInfos(unsigned int a1, struct RmResourceSetInfo *a2, unsigned int *a3)
{
  __int64 v4; // rsi
  unsigned int v6; // edi
  ResourceManagerProxy *ResourceManagerProxy; // rbp

  v4 = a1;
  v6 = -2147467259;
  ResourceManagerProxy = GetResourceManagerProxy();
  if ( ResourceManagerProxy )
  {
    if ( a2 )
      memset_0(a2, 0, 2128 * v4);
    return (unsigned int)ResourceManagerProxy::RmTestGetResourceSetInfos(ResourceManagerProxy, v4, a2, a3).Pointer;
  }
  return v6;
}

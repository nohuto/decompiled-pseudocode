/*
 * XREFs of RmTestGetApplicationProperties @ 0x18000FA10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ @ 0x180001B20 (-GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ.c)
 *     ?RmTestGetApplicationProperties@ResourceManagerProxy@@QEAAJPEBGPEAXKKPEAKPEA_K33@Z @ 0x18000F4C4 (-RmTestGetApplicationProperties@ResourceManagerProxy@@QEAAJPEBGPEAXKKPEAKPEA_K33@Z.c)
 */

__int64 __fastcall RmTestGetApplicationProperties(
        unsigned __int16 *a1,
        void *a2,
        int a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  unsigned int v12; // ebx
  ResourceManagerProxy *ResourceManagerProxy; // rcx

  v12 = -2147467259;
  ResourceManagerProxy = GetResourceManagerProxy();
  if ( ResourceManagerProxy )
    return (unsigned int)ResourceManagerProxy::RmTestGetApplicationProperties(
                           ResourceManagerProxy,
                           a1,
                           a2,
                           a3,
                           a4,
                           a5,
                           a6,
                           a7,
                           a8).Pointer;
  return v12;
}

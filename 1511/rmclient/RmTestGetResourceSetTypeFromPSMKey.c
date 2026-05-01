/*
 * XREFs of RmTestGetResourceSetTypeFromPSMKey @ 0x18000FBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ @ 0x180001B20 (-GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ.c)
 *     ?RmTestGetResourceSetTypeFromPSMKey@ResourceManagerProxy@@QEAAJPEBGPEAXKKPEAW4RmResourceSetType@@@Z @ 0x18000F6B0 (-RmTestGetResourceSetTypeFromPSMKey@ResourceManagerProxy@@QEAAJPEBGPEAXKKPEAW4RmResourceSetType@.c)
 */

__int64 __fastcall RmTestGetResourceSetTypeFromPSMKey(
        unsigned __int16 *a1,
        void *a2,
        int a3,
        unsigned int a4,
        enum RmResourceSetType *a5)
{
  unsigned int v9; // ebx
  ResourceManagerProxy *ResourceManagerProxy; // rcx

  v9 = -2147467259;
  ResourceManagerProxy = GetResourceManagerProxy();
  if ( ResourceManagerProxy )
    return (unsigned int)ResourceManagerProxy::RmTestGetResourceSetTypeFromPSMKey(
                           ResourceManagerProxy,
                           a1,
                           a2,
                           a3,
                           a4,
                           a5).Pointer;
  return v9;
}

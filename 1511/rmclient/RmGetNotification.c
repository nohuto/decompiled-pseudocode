/*
 * XREFs of RmGetNotification @ 0x18000F8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ @ 0x180001B20 (-GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ.c)
 *     ?RmGetNotification@ResourceManagerProxy@@QEAAJ_KPEAURmExternalResourceNotification@@@Z @ 0x18000F460 (-RmGetNotification@ResourceManagerProxy@@QEAAJ_KPEAURmExternalResourceNotification@@@Z.c)
 */

__int64 __fastcall RmGetNotification(__int64 a1, struct RmExternalResourceNotification *a2)
{
  unsigned int v4; // ebx
  ResourceManagerProxy *v5; // rcx

  v4 = -2147467259;
  if ( GetResourceManagerProxy() )
    return (unsigned int)ResourceManagerProxy::RmGetNotification(v5, a1, a2).Pointer;
  return v4;
}

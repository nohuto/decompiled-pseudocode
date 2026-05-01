/*
 * XREFs of RmGetNotification @ 0x180001780
 * Callers:
 *     <none>
 * Callees:
 *     ?RmGetNotification@ResourceManagerProxy@@QEAAJ_KPEAURmExternalResourceNotification@@@Z @ 0x1800015DC (-RmGetNotification@ResourceManagerProxy@@QEAAJ_KPEAURmExternalResourceNotification@@@Z.c)
 *     ?GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ @ 0x180006850 (-GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ.c)
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

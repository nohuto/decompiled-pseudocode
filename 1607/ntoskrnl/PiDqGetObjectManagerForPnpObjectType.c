/*
 * XREFs of PiDqGetObjectManagerForPnpObjectType @ 0x1404C1988
 * Callers:
 *     PiPnpRtlObjectEventDispatch @ 0x1404E4EE0 (PiPnpRtlObjectEventDispatch.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404E769C (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     <none>
 */

struct _ERESOURCE *__fastcall PiDqGetObjectManagerForPnpObjectType(int a1)
{
  __int64 v1; // rdx
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  v1 = 0LL;
  v2 = a1 - 1;
  if ( !v2 )
    return &PiDqDeviceManager;
  v4 = v2 - 1;
  if ( !v4 )
    return &PiDqDeviceInstallerClassManager;
  v5 = v4 - 1;
  if ( !v5 )
    return &PiDqDeviceInterfaceManager;
  v6 = v5 - 1;
  if ( !v6 )
    return &PiDqDeviceInterfaceClassManager;
  if ( v6 == 1 )
    return &PiDqDeviceContainerManager;
  return (struct _ERESOURCE *)v1;
}

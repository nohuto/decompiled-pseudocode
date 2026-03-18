/*
 * XREFs of PiDmGetCacheKeys @ 0x1404FF4E4
 * Callers:
 *     PiDmObjectGetCachedObjectReference @ 0x1404DE73C (PiDmObjectGetCachedObjectReference.c)
 *     PiDmObjectRelease @ 0x1404FEFC0 (PiDmObjectRelease.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1404FF354 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1404FFCDC (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectProcessPropertyChange @ 0x14050539C (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectCreate @ 0x1405641DC (PiDmObjectCreate.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x1405663BC (PiDmListUpdateAggregationCountWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall PiDmGetCacheKeys(int a1, DEVPROPKEY ***a2, _DWORD *a3)
{
  int v3; // ecx
  DEVPROPKEY **v4; // rax
  int v5; // ecx

  v3 = a1 - 1;
  if ( !v3 )
  {
    v4 = &PiDmCachedDeviceKeys;
    *a3 = 9;
LABEL_3:
    *a2 = v4;
    return;
  }
  v5 = v3 - 2;
  if ( !v5 )
  {
    v4 = &PiDmCachedDeviceInterfaceKeys;
    *a3 = 1;
    goto LABEL_3;
  }
  if ( v5 == 2 )
  {
    v4 = &PiDmCachedDeviceContainerKeys;
    *a3 = 3;
    goto LABEL_3;
  }
  *a2 = 0LL;
  *a3 = 0;
}

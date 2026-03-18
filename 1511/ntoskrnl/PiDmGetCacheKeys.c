/*
 * XREFs of PiDmGetCacheKeys @ 0x14043D898
 * Callers:
 *     PiDmObjectRelease @ 0x14043D3D0 (PiDmObjectRelease.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x14043D764 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14043DF10 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectProcessPropertyChange @ 0x14045A798 (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectGetCachedObjectReference @ 0x14045CD10 (PiDmObjectGetCachedObjectReference.c)
 *     PiDmObjectCreate @ 0x14051B290 (PiDmObjectCreate.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x140534C28 (PiDmListUpdateAggregationCountWorker.c)
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

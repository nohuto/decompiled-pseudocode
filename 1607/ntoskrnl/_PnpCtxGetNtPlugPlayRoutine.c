/*
 * XREFs of _PnpCtxGetNtPlugPlayRoutine @ 0x1404DE070
 * Callers:
 *     _NtPlugPlayGetDeviceStatus @ 0x1404DB7E0 (_NtPlugPlayGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceInterfaceEnabled @ 0x1404DDFE0 (_NtPlugPlayGetDeviceInterfaceEnabled.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x14050C7CC (_NtPlugPlayGetDeviceProperty.c)
 *     _NtPlugPlayGetDeviceRelatedDevice @ 0x14050CD28 (_NtPlugPlayGetDeviceRelatedDevice.c)
 *     _NtPlugPlayGetDeviceRelationsList @ 0x1406DFF88 (_NtPlugPlayGetDeviceRelationsList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxGetNtPlugPlayRoutine(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a2 >= 6 )
    return (unsigned int)-1073741811;
  else
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 88);
  return v3;
}

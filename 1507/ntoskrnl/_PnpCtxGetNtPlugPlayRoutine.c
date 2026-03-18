/*
 * XREFs of _PnpCtxGetNtPlugPlayRoutine @ 0x140436B48
 * Callers:
 *     _NtPlugPlayGetDeviceInterfaceEnabled @ 0x140436AB8 (_NtPlugPlayGetDeviceInterfaceEnabled.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x1404DCDE0 (_NtPlugPlayGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x1404DE8D8 (_NtPlugPlayGetDeviceProperty.c)
 *     _NtPlugPlayGetDeviceRelatedDevice @ 0x1404DEC0C (_NtPlugPlayGetDeviceRelatedDevice.c)
 *     _NtPlugPlayGetDeviceRelationsList @ 0x140719B50 (_NtPlugPlayGetDeviceRelationsList.c)
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
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 80);
  return v3;
}

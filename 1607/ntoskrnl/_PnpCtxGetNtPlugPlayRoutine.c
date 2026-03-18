/*
 * XREFs of _PnpCtxGetNtPlugPlayRoutine @ 0x1404FB0E4
 * Callers:
 *     _NtPlugPlayGetDeviceProperty @ 0x1404CF700 (_NtPlugPlayGetDeviceProperty.c)
 *     _NtPlugPlayGetDeviceRelatedDevice @ 0x1404CFC5C (_NtPlugPlayGetDeviceRelatedDevice.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x1404F8854 (_NtPlugPlayGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceInterfaceEnabled @ 0x1404FB054 (_NtPlugPlayGetDeviceInterfaceEnabled.c)
 *     _NtPlugPlayGetDeviceRelationsList @ 0x1406DFE50 (_NtPlugPlayGetDeviceRelationsList.c)
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

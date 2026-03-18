/*
 * XREFs of _PnpCtxGetNtPlugPlayRoutine @ 0x14043F424
 * Callers:
 *     _NtPlugPlayGetDeviceInterfaceEnabled @ 0x14043F394 (_NtPlugPlayGetDeviceInterfaceEnabled.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x140441D70 (_NtPlugPlayGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x14045C16C (_NtPlugPlayGetDeviceProperty.c)
 *     _NtPlugPlayGetDeviceRelatedDevice @ 0x1404F1FD0 (_NtPlugPlayGetDeviceRelatedDevice.c)
 *     _NtPlugPlayGetDeviceRelationsList @ 0x140699CF4 (_NtPlugPlayGetDeviceRelationsList.c)
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

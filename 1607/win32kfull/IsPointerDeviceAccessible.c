/*
 * XREFs of IsPointerDeviceAccessible @ 0x1C00E4484
 * Callers:
 *     NtUserGetPointerDeviceProperties @ 0x1C00E3D00 (NtUserGetPointerDeviceProperties.c)
 *     NtUserGetPointerDevices @ 0x1C00E3F80 (NtUserGetPointerDevices.c)
 *     NtUserGetPointerDeviceCursors @ 0x1C014ADF0 (NtUserGetPointerDeviceCursors.c)
 *     NtUserGetPointerDevice @ 0x1C014C620 (NtUserGetPointerDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPointerDeviceAccessible(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( *(_DWORD *)(a1 + 24) != 7 || (*(_BYTE *)(gptiCurrent + 1098LL) & 1) != 0 )
    return 1;
  return v1;
}

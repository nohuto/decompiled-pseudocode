/*
 * XREFs of IsPointerDeviceAccessible @ 0x1C000F3C0
 * Callers:
 *     NtUserGetPointerDevices @ 0x1C000F0E0 (NtUserGetPointerDevices.c)
 *     NtUserGetPointerDeviceProperties @ 0x1C00EEDF0 (NtUserGetPointerDeviceProperties.c)
 *     NtUserGetPointerDeviceCursors @ 0x1C01191E0 (NtUserGetPointerDeviceCursors.c)
 *     NtUserGetPointerDevice @ 0x1C011DC80 (NtUserGetPointerDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPointerDeviceAccessible(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( *(_DWORD *)(a1 + 24) != 8 || (*(_BYTE *)(gptiCurrent + 1082LL) & 1) != 0 )
    return 1;
  return v1;
}

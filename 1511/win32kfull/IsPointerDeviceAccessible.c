/*
 * XREFs of IsPointerDeviceAccessible @ 0x1C011D980
 * Callers:
 *     NtUserGetPointerDeviceProperties @ 0x1C011A8E0 (NtUserGetPointerDeviceProperties.c)
 *     NtUserGetPointerDevices @ 0x1C011D6A0 (NtUserGetPointerDevices.c)
 *     NtUserGetPointerDeviceCursors @ 0x1C0144770 (NtUserGetPointerDeviceCursors.c)
 *     NtUserGetPointerDevice @ 0x1C0147E70 (NtUserGetPointerDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPointerDeviceAccessible(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( *(_DWORD *)(a1 + 24) != 8 || (*(_BYTE *)(gptiCurrent + 1074LL) & 1) != 0 )
    return 1;
  return v1;
}

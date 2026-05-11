/*
 * XREFs of IsDevicePoweredUp @ 0x1C001378C
 * Callers:
 *     PinAddPinToList @ 0x1C0001DF4 (PinAddPinToList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsDevicePoweredUp(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)(a1 + 16) + 512LL) == 1;
}

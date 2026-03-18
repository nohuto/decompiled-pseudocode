/*
 * XREFs of IovDeleteDevice @ 0x1406B5120
 * Callers:
 *     IoDeleteDevice @ 0x1400D0DC8 (IoDeleteDevice.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall IovDeleteDevice(int a1)
{
  return VfIoDeleteDevice(a1);
}

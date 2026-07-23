/*
 * XREFs of IovDeleteDevice @ 0x140700F88
 * Callers:
 *     IoDeleteDevice @ 0x14007F38C (IoDeleteDevice.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall IovDeleteDevice(int a1)
{
  return VfIoDeleteDevice(a1);
}

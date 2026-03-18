/*
 * XREFs of IovDeleteDevice @ 0x1407352B0
 * Callers:
 *     IoDeleteDevice @ 0x140007508 (IoDeleteDevice.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall IovDeleteDevice(int a1)
{
  return VfIoDeleteDevice(a1);
}

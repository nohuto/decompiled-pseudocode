/*
 * XREFs of SharedAlloc @ 0x1C006C120
 * Callers:
 *     HMAllocObject @ 0x1C0041A20 (HMAllocObject.c)
 *     Win32UserInitialize @ 0x1C013B9C4 (Win32UserInitialize.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall SharedAlloc(unsigned int a1)
{
  return RtlAllocateHeap(gpvSharedAlloc, 0, a1);
}

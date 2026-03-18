/*
 * XREFs of SharedAlloc @ 0x1C0018960
 * Callers:
 *     HMAllocObject @ 0x1C004FB70 (HMAllocObject.c)
 *     Win32UserInitialize @ 0x1C0138B1C (Win32UserInitialize.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall SharedAlloc(unsigned int a1)
{
  return RtlAllocateHeap(gpvSharedAlloc, 0, a1);
}

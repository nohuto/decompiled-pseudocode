/*
 * XREFs of SharedAlloc @ 0x1C00548D0
 * Callers:
 *     HMAllocObject @ 0x1C0038CC0 (HMAllocObject.c)
 *     Win32UserInitialize @ 0x1C01556F4 (Win32UserInitialize.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall SharedAlloc(unsigned int a1)
{
  return RtlAllocateHeap(gpvSharedAlloc, 0, a1);
}

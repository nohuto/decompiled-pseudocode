/*
 * XREFs of XdvIoAllocateWorkItem @ 0x14020B964
 * Callers:
 *     VerifierIoAllocateWorkItem @ 0x1406B94DC (VerifierIoAllocateWorkItem.c)
 *     VerifierPortIoAllocateWorkItem @ 0x1406B9844 (VerifierPortIoAllocateWorkItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XdvIoAllocateWorkItem(__int64 a1, __int64 a2, __int64 (*a3)(void))
{
  return a3();
}

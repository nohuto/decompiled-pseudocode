/*
 * XREFs of XdvIoAllocateWorkItem @ 0x14022324C
 * Callers:
 *     VerifierIoAllocateWorkItem @ 0x140705598 (VerifierIoAllocateWorkItem.c)
 *     VerifierPortIoAllocateWorkItem @ 0x1407058E8 (VerifierPortIoAllocateWorkItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XdvIoAllocateWorkItem(__int64 a1, __int64 a2, __int64 (*a3)(void))
{
  return a3();
}

/*
 * XREFs of XdvIoAllocateWorkItem @ 0x140223420
 * Callers:
 *     VerifierIoAllocateWorkItem @ 0x140705568 (VerifierIoAllocateWorkItem.c)
 *     VerifierPortIoAllocateWorkItem @ 0x1407058B8 (VerifierPortIoAllocateWorkItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XdvIoAllocateWorkItem(__int64 a1, __int64 a2, __int64 (*a3)(void))
{
  return a3();
}

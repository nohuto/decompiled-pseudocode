/*
 * XREFs of XdvIoAllocateWorkItem @ 0x14025B000
 * Callers:
 *     VerifierIoAllocateWorkItem @ 0x1407399F8 (VerifierIoAllocateWorkItem.c)
 *     VerifierPortIoAllocateWorkItem @ 0x140739E78 (VerifierPortIoAllocateWorkItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XdvIoAllocateWorkItem(__int64 a1, __int64 a2, __int64 (*a3)(void))
{
  return a3();
}

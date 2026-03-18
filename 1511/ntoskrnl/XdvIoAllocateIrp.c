/*
 * XREFs of XdvIoAllocateIrp @ 0x14020B954
 * Callers:
 *     IovAllocateIrp @ 0x1406B4804 (IovAllocateIrp.c)
 *     VerifierIoAllocateIrp @ 0x1406B93FC (VerifierIoAllocateIrp.c)
 *     VerifierPortIoAllocateIrp @ 0x1406B975C (VerifierPortIoAllocateIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XdvIoAllocateIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 (*a5)(void))
{
  return a5();
}

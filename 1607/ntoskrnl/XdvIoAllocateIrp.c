/*
 * XREFs of XdvIoAllocateIrp @ 0x14022323C
 * Callers:
 *     IovAllocateIrp @ 0x14070066C (IovAllocateIrp.c)
 *     VerifierIoAllocateIrp @ 0x1407054B8 (VerifierIoAllocateIrp.c)
 *     VerifierPortIoAllocateIrp @ 0x140705800 (VerifierPortIoAllocateIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XdvIoAllocateIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 (*a5)(void))
{
  return a5();
}

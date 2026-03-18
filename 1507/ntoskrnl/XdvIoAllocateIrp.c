/*
 * XREFs of XdvIoAllocateIrp @ 0x14025AFF0
 * Callers:
 *     IovAllocateIrp @ 0x140734804 (IovAllocateIrp.c)
 *     VerifierIoAllocateIrp @ 0x140739918 (VerifierIoAllocateIrp.c)
 *     VerifierPortIoAllocateIrp @ 0x140739D90 (VerifierPortIoAllocateIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XdvIoAllocateIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 (*a5)(void))
{
  return a5();
}

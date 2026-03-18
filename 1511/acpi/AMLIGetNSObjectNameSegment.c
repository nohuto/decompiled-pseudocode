/*
 * XREFs of AMLIGetNSObjectNameSegment @ 0x1C000434C
 * Callers:
 *     ACPIGetPnpLocationString @ 0x1C0070990 (ACPIGetPnpLocationString.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C0078CDC (AcpiArblibAllocateArbiterInstance.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C007E1C8 (PnpiUpdateForceActiveBothInterrupts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectNameSegment(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)a1 + 32LL);
}

/*
 * XREFs of AMLIGetNSObjectNameSegment @ 0x1C0003AB4
 * Callers:
 *     ACPIGetPnpLocationString @ 0x1C008E4E0 (ACPIGetPnpLocationString.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C0099468 (AcpiArblibAllocateArbiterInstance.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C009FA38 (PnpiUpdateForceActiveBothInterrupts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectNameSegment(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)a1 + 40LL);
}

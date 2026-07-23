/*
 * XREFs of RtlDebugWalkHeap @ 0x1800EFFE4
 * Callers:
 *     RtlpWalkHeap @ 0x1800916EC (RtlpWalkHeap.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x18002EB04 (RtlpCheckHeapSignature.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeap @ 0x180092BC8 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1800E3178 (RtlpHeapExceptionFilter.c)
 */

char __fastcall RtlDebugWalkHeap(PVOID *BaseAddress)
{
  char v2; // bl

  v2 = 0;
  if ( RtlpCheckHeapSignature(BaseAddress, "RtlWalkHeap") )
    return RtlpValidateHeap(BaseAddress, 0);
  return v2;
}

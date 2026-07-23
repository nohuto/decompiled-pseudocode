/*
 * XREFs of RtlDebugWalkHeap @ 0x1800ED858
 * Callers:
 *     RtlpWalkHeap @ 0x1800DAD88 (RtlpWalkHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlpCheckHeapSignature @ 0x18003479C (RtlpCheckHeapSignature.c)
 *     RtlpHeapExceptionFilter @ 0x1800DD534 (RtlpHeapExceptionFilter.c)
 *     RtlpValidateHeap @ 0x1800EDA3C (RtlpValidateHeap.c)
 */

char __fastcall RtlDebugWalkHeap(_DWORD *BaseAddress)
{
  char v2; // bl

  v2 = 0;
  if ( RtlpCheckHeapSignature(BaseAddress, "RtlWalkHeap") )
    return RtlpValidateHeap(BaseAddress);
  return v2;
}

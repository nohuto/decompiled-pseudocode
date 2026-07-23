/*
 * XREFs of RtlDebugWalkHeap @ 0x1800FB4C8
 * Callers:
 *     RtlpWalkHeap @ 0x18004D474 (RtlpWalkHeap.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x180019D74 (RtlpCheckHeapSignature.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeap @ 0x180091234 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC2D0 (RtlpHeapExceptionFilter.c)
 */

char __fastcall RtlDebugWalkHeap(_DWORD *a1)
{
  char v2; // bl

  v2 = 0;
  if ( RtlpCheckHeapSignature(a1, "RtlWalkHeap") )
    return RtlpValidateHeap((__int64)a1, 0);
  return v2;
}

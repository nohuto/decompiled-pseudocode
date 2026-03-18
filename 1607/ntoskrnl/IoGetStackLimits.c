/*
 * XREFs of IoGetStackLimits @ 0x14004F360
 * Callers:
 *     EtwpEventWriteFull @ 0x140073CE0 (EtwpEventWriteFull.c)
 *     EtwpApplyPayloadFilterInternal @ 0x14022B614 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpWriteUserEvent @ 0x140510920 (EtwpWriteUserEvent.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405620CC (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlEnumKeyWithCallback @ 0x1405624B4 (_RegRtlEnumKeyWithCallback.c)
 *     _RegRtlCopyTreeInternal @ 0x1406E0128 (_RegRtlCopyTreeInternal.c)
 *     ViDeadlockCheckStackLimits @ 0x1407150A8 (ViDeadlockCheckStackLimits.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14004F390 (RtlpGetStackLimits.c)
 */

void __stdcall IoGetStackLimits(PULONG_PTR LowLimit, PULONG_PTR HighLimit)
{
  if ( !(unsigned __int8)RtlpGetStackLimits(LowLimit, HighLimit) )
  {
    *LowLimit = 0LL;
    *HighLimit = 0LL;
  }
}

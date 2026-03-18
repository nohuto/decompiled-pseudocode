/*
 * XREFs of IoGetStackLimits @ 0x1400282E0
 * Callers:
 *     EtwpEventWriteFull @ 0x14009E960 (EtwpEventWriteFull.c)
 *     EtwpApplyPayloadFilterInternal @ 0x140211B20 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpWriteUserEvent @ 0x14041BFD0 (EtwpWriteUserEvent.c)
 *     _RegRtlDeleteTreeInternal @ 0x140531140 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlEnumKeyWithCallback @ 0x140531990 (_RegRtlEnumKeyWithCallback.c)
 *     _RegRtlCopyTreeInternal @ 0x140699E7C (_RegRtlCopyTreeInternal.c)
 *     ViDeadlockCheckStackLimits @ 0x1406CD2C0 (ViDeadlockCheckStackLimits.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x140028310 (RtlpGetStackLimits.c)
 */

void __stdcall IoGetStackLimits(PULONG_PTR LowLimit, PULONG_PTR HighLimit)
{
  if ( !(unsigned __int8)RtlpGetStackLimits(LowLimit, HighLimit) )
  {
    *LowLimit = 0LL;
    *HighLimit = 0LL;
  }
}

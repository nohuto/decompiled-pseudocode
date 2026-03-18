/*
 * XREFs of IoGetStackLimits @ 0x14001D570
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetStackLimits @ 0x14001D5A0 (RtlpGetStackLimits.c)
 */

void __stdcall IoGetStackLimits(PULONG_PTR LowLimit, PULONG_PTR HighLimit)
{
  if ( !(unsigned __int8)RtlpGetStackLimits(LowLimit, HighLimit) )
  {
    *LowLimit = 0LL;
    *HighLimit = 0LL;
  }
}

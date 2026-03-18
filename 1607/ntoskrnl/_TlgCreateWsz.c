/*
 * XREFs of _TlgCreateWsz @ 0x140133CE4
 * Callers:
 *     PopTraceThermalZonePassiveHistogram @ 0x140124B6C (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140209C54 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceZoneCr3Mitigated @ 0x140209F78 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x14020A098 (PopTraceZoneCr3Tripped.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14054A9D8 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpWriteProcessStarted @ 0x14054C744 (EtwpWriteProcessStarted.c)
 *     PnpTraceDeviceConfig @ 0x140648CE4 (PnpTraceDeviceConfig.c)
 *     PopSqmThermalCriticalEvent @ 0x14067687C (PopSqmThermalCriticalEvent.c)
 *     PopSqmThermalZoneEnumeration @ 0x140676B78 (PopSqmThermalZoneEnumeration.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateWsz(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  LPCWSTR v2; // r8
  __int64 v3; // rax

  v2 = (LPCWSTR)&cchOriginalDestLength;
  LODWORD(v3) = 0;
  if ( pwsz )
  {
    v2 = pwsz;
    v3 = -1LL;
    do
      ++v3;
    while ( pwsz[v3] );
  }
  pDesc->Ptr = (ULONGLONG)v2;
  *(_QWORD *)&pDesc->Size = (unsigned int)(2 * v3 + 2);
}

/*
 * XREFs of _TlgCreateWsz @ 0x1400EFFDC
 * Callers:
 *     PopTraceThermalRequestPassiveHistogram @ 0x14023F0BC (PopTraceThermalRequestPassiveHistogram.c)
 *     SeTokenCanImpersonate @ 0x1404798B0 (SeTokenCanImpersonate.c)
 *     EtwTraceProcess @ 0x14050C208 (EtwTraceProcess.c)
 *     PnpTraceDeviceConfig @ 0x1406939B4 (PnpTraceDeviceConfig.c)
 *     PopSqmThermalCriticalEvent @ 0x1406BEA0C (PopSqmThermalCriticalEvent.c)
 *     PopSqmThermalZoneEnumeration @ 0x1406BECDC (PopSqmThermalZoneEnumeration.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateWsz(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  LPCWSTR v2; // r8
  __int64 v3; // rax

  v2 = (LPCWSTR)&word_140196B30;
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

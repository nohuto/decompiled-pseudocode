/*
 * XREFs of _TlgCreateWsz @ 0x140092310
 * Callers:
 *     PopTraceThermalZonePassiveHistogram @ 0x14011A180 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1401F0E14 (PopTraceThermalRequestPassiveHistogram.c)
 *     EtwTraceProcess @ 0x1404497E4 (EtwTraceProcess.c)
 *     PnpTraceDeviceConfig @ 0x140513818 (PnpTraceDeviceConfig.c)
 *     PopSqmThermalCriticalEvent @ 0x14063E108 (PopSqmThermalCriticalEvent.c)
 *     PopSqmThermalZoneEnumeration @ 0x14063E404 (PopSqmThermalZoneEnumeration.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateWsz(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  LPCWSTR v2; // r8
  __int64 v3; // rax

  v2 = (LPCWSTR)&word_140167200;
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

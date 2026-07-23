/*
 * XREFs of EtwpLevelKeywordEnabled @ 0x1400D6090
 * Callers:
 *     EtwWriteEx @ 0x140012EE0 (EtwWriteEx.c)
 *     EtwpEventWriteFull @ 0x140073860 (EtwpEventWriteFull.c)
 *     EtwProviderEnabled @ 0x1400B54FC (EtwProviderEnabled.c)
 *     PpmPerfSelectProcessorState @ 0x1400D2C80 (PpmPerfSelectProcessorState.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     PpmCheckPeriodicStart @ 0x1400D5130 (PpmCheckPeriodicStart.c)
 *     PpmPerfRecordUtility @ 0x1400D5420 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x1400D5640 (PpmParkRecordNodeStatistics.c)
 *     PpmParkSteerInterrupts @ 0x1400D58E0 (PpmParkSteerInterrupts.c)
 *     PpmPerfSnapUtility @ 0x1400D7020 (PpmPerfSnapUtility.c)
 *     EtwWriteString @ 0x1402248AC (EtwWriteString.c)
 *     EtwpFailLogging @ 0x140224BC4 (EtwpFailLogging.c)
 *     EtwpDiskProvTraceDisk @ 0x140226150 (EtwpDiskProvTraceDisk.c)
 *     EtwpWriteUserEvent @ 0x1404F38B0 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpLevelKeywordEnabled(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  unsigned __int8 v3; // al
  bool result; // al

  result = *(_DWORD *)a1
        && ((v3 = *(_BYTE *)(a1 + 4), a2 <= v3) || !v3)
        && ((*(_DWORD *)(a1 + 8) & 0x40) != 0 && !a3
         || (*(_QWORD *)(a1 + 16) & a3) != 0 && (a3 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24));
  return result;
}

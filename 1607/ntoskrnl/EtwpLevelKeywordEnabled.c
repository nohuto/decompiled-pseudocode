/*
 * XREFs of EtwpLevelKeywordEnabled @ 0x1400D81F0
 * Callers:
 *     EtwWriteEx @ 0x140013360 (EtwWriteEx.c)
 *     EtwpEventWriteFull @ 0x140073CE0 (EtwpEventWriteFull.c)
 *     EtwProviderEnabled @ 0x1400B7664 (EtwProviderEnabled.c)
 *     PpmPerfSelectProcessorState @ 0x1400D4DE0 (PpmPerfSelectProcessorState.c)
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
 *     PpmCheckPeriodicStart @ 0x1400D7290 (PpmCheckPeriodicStart.c)
 *     PpmPerfRecordUtility @ 0x1400D7580 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x1400D77A0 (PpmParkRecordNodeStatistics.c)
 *     PpmParkSteerInterrupts @ 0x1400D7A40 (PpmParkSteerInterrupts.c)
 *     PpmPerfSnapUtility @ 0x1400D9180 (PpmPerfSnapUtility.c)
 *     EtwWriteString @ 0x140224A80 (EtwWriteString.c)
 *     EtwpFailLogging @ 0x140224D98 (EtwpFailLogging.c)
 *     EtwpDiskProvTraceDisk @ 0x140226324 (EtwpDiskProvTraceDisk.c)
 *     EtwpWriteUserEvent @ 0x140510920 (EtwpWriteUserEvent.c)
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

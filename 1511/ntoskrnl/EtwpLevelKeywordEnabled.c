/*
 * XREFs of EtwpLevelKeywordEnabled @ 0x140076480
 * Callers:
 *     PpmPerfSnapUtility @ 0x140046280 (PpmPerfSnapUtility.c)
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     PpmParkSteerInterrupts @ 0x140074F40 (PpmParkSteerInterrupts.c)
 *     PpmPerfSelectProcessorState @ 0x1400757F0 (PpmPerfSelectProcessorState.c)
 *     PpmPerfRecordUtility @ 0x140075D60 (PpmPerfRecordUtility.c)
 *     PpmCheckStart @ 0x140075F90 (PpmCheckStart.c)
 *     PpmParkRecordNodeStatistics @ 0x1400761E0 (PpmParkRecordNodeStatistics.c)
 *     EtwWriteEx @ 0x14009DF00 (EtwWriteEx.c)
 *     EtwpEventWriteFull @ 0x14009E960 (EtwpEventWriteFull.c)
 *     EtwProviderEnabled @ 0x1400F5C68 (EtwProviderEnabled.c)
 *     KiIntSteerLogStatus @ 0x1401CAAB4 (KiIntSteerLogStatus.c)
 *     EtwWriteString @ 0x14020CF14 (EtwWriteString.c)
 *     EtwpFailLogging @ 0x14020D250 (EtwpFailLogging.c)
 *     EtwpDiskProvTraceDisk @ 0x14020E470 (EtwpDiskProvTraceDisk.c)
 *     EtwpWriteUserEvent @ 0x14041BFD0 (EtwpWriteUserEvent.c)
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

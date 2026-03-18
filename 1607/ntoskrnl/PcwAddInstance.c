/*
 * XREFs of PcwAddInstance @ 0x1404F1B90
 * Callers:
 *     ExProcessorCounterSetCallback @ 0x140407468 (ExProcessorCounterSetCallback.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x14061E910 (FsRtlAddDiskIOCounterInstance.c)
 *     FsRtlDiskIOCounterSetCallback @ 0x14061E9D4 (FsRtlDiskIOCounterSetCallback.c)
 *     KiSynchCounterSetCallback @ 0x14064F6A0 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x14064F7A0 (KiSynchNumaCounterSetCallback.c)
 *     PoThermalCounterSetCallback @ 0x1406701F4 (PoThermalCounterSetCallback.c)
 *     EtwpEventTracingCounterSetCallback @ 0x1406E84EC (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1400B6E88 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1400B6E94 (ExGetExtensionTable.c)
 *     ExpPcwDisabledStatus @ 0x1406B6A1C (ExpPcwDisabledStatus.c)
 */

NTSTATUS __stdcall PcwAddInstance(PPCW_BUFFER Buffer, PCUNICODE_STRING Name, ULONG Id, ULONG Count, PPCW_DATA Data)
{
  unsigned __int64 ExtensionTable; // r10
  NTSTATUS v10; // ebx

  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  if ( !ExtensionTable )
    return ExpPcwDisabledStatus();
  v10 = (*(__int64 (__fastcall **)(PPCW_BUFFER, PCUNICODE_STRING, _QWORD, _QWORD, PPCW_DATA))(ExtensionTable + 32))(
          Buffer,
          Name,
          Id,
          Count,
          Data);
  ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  return v10;
}

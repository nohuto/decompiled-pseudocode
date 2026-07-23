/*
 * XREFs of PcwAddInstance @ 0x1404D4324
 * Callers:
 *     ExProcessorCounterSetCallback @ 0x140406328 (ExProcessorCounterSetCallback.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x14061E9C4 (FsRtlAddDiskIOCounterInstance.c)
 *     FsRtlDiskIOCounterSetCallback @ 0x14061EA88 (FsRtlDiskIOCounterSetCallback.c)
 *     KiSynchCounterSetCallback @ 0x14064F784 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x14064F884 (KiSynchNumaCounterSetCallback.c)
 *     PoThermalCounterSetCallback @ 0x1406702D8 (PoThermalCounterSetCallback.c)
 *     EtwpEventTracingCounterSetCallback @ 0x1406E8624 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1400B4CB0 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1400B4CBC (ExGetExtensionTable.c)
 *     ExpPcwDisabledStatus @ 0x1406B6B54 (ExpPcwDisabledStatus.c)
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

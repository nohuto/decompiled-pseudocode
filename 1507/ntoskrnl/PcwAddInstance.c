/*
 * XREFs of PcwAddInstance @ 0x14053C6D4
 * Callers:
 *     ExProcessorCounterSetCallback @ 0x1404FA400 (ExProcessorCounterSetCallback.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x14066D64C (FsRtlAddDiskIOCounterInstance.c)
 *     FsRtlDiskIOCounterSetCallback @ 0x14066D714 (FsRtlDiskIOCounterSetCallback.c)
 *     KiSynchCounterSetCallback @ 0x140698A90 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140698B8C (KiSynchNumaCounterSetCallback.c)
 *     PoThermalCounterSetCallback @ 0x1406B7B48 (PoThermalCounterSetCallback.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140721358 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1401207F8 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140120818 (ExGetExtensionTable.c)
 *     ExpPcwDisabledStatus @ 0x1406F8720 (ExpPcwDisabledStatus.c)
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

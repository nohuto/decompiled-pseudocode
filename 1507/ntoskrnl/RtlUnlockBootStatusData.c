/*
 * XREFs of RtlUnlockBootStatusData @ 0x140584278
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     PopClearSleepMarker @ 0x140564C8C (PopClearSleepMarker.c)
 *     PopSetSleepMarker @ 0x140567668 (PopSetSleepMarker.c)
 *     PoClearTransitionMarker @ 0x1405C2574 (PoClearTransitionMarker.c)
 *     PopSetShutdownMarker @ 0x1406B0898 (PopSetShutdownMarker.c)
 *     PdcPoRecordButton @ 0x1406B7644 (PdcPoRecordButton.c)
 *     PopCheckShutdownMarker @ 0x1407E8B40 (PopCheckShutdownMarker.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwFsControlFile @ 0x14017F710 (ZwFsControlFile.c)
 *     ZwFlushBuffersFile @ 0x14017F950 (ZwFlushBuffersFile.c)
 */

NTSTATUS __stdcall RtlUnlockBootStatusData(HANDLE FileHandle)
{
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  __int16 v4; // [rsp+78h] [rbp+10h] BYREF

  v4 = 0;
  ZwFsControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9C040u, &v4, 2u, 0LL, 0);
  ZwFlushBuffersFile(FileHandle, &IoStatusBlock);
  return ZwClose(FileHandle);
}

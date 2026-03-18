/*
 * XREFs of RtlUnlockBootStatusData @ 0x14050CE8C
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     PopClearSleepMarker @ 0x1404F5BA8 (PopClearSleepMarker.c)
 *     PopSetSleepMarker @ 0x1404F899C (PopSetSleepMarker.c)
 *     PoClearTransitionMarker @ 0x14054B15C (PoClearTransitionMarker.c)
 *     PopSetShutdownMarker @ 0x140632328 (PopSetShutdownMarker.c)
 *     PdcPoRecordButton @ 0x1406378B4 (PdcPoRecordButton.c)
 *     PopCheckShutdownMarker @ 0x1407661AC (PopCheckShutdownMarker.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwFsControlFile @ 0x140150D40 (ZwFsControlFile.c)
 *     ZwFlushBuffersFile @ 0x140150F80 (ZwFlushBuffersFile.c)
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

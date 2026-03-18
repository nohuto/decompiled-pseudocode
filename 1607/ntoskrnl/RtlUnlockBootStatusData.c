/*
 * XREFs of RtlUnlockBootStatusData @ 0x140547DAC
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopClearSleepMarker @ 0x14052EC58 (PopClearSleepMarker.c)
 *     PopSetSleepMarker @ 0x140531690 (PopSetSleepMarker.c)
 *     PoClearTransitionMarker @ 0x140580424 (PoClearTransitionMarker.c)
 *     PopClearConnectedStandbyMarker @ 0x14066A310 (PopClearConnectedStandbyMarker.c)
 *     PopRecordPhysicalPowerButton @ 0x14066A420 (PopRecordPhysicalPowerButton.c)
 *     PopRecordPowerButton @ 0x14066A52C (PopRecordPowerButton.c)
 *     PopSetCleanShutdownMarker @ 0x14066A634 (PopSetCleanShutdownMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x14066A6C4 (PopSetConnectedStandbyMarker.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwFsControlFile @ 0x14015A3A0 (ZwFsControlFile.c)
 *     ZwFlushBuffersFile @ 0x14015A5E0 (ZwFlushBuffersFile.c)
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

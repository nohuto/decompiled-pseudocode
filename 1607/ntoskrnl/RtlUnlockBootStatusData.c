/*
 * XREFs of RtlUnlockBootStatusData @ 0x1405482EC
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopClearSleepMarker @ 0x14052F198 (PopClearSleepMarker.c)
 *     PopSetSleepMarker @ 0x140531BD0 (PopSetSleepMarker.c)
 *     PoClearTransitionMarker @ 0x1405808D0 (PoClearTransitionMarker.c)
 *     PopClearConnectedStandbyMarker @ 0x14066A3F4 (PopClearConnectedStandbyMarker.c)
 *     PopRecordPhysicalPowerButton @ 0x14066A504 (PopRecordPhysicalPowerButton.c)
 *     PopRecordPowerButton @ 0x14066A610 (PopRecordPowerButton.c)
 *     PopSetCleanShutdownMarker @ 0x14066A718 (PopSetCleanShutdownMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x14066A7A8 (PopSetConnectedStandbyMarker.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwFsControlFile @ 0x14015A910 (ZwFsControlFile.c)
 *     ZwFlushBuffersFile @ 0x14015AB50 (ZwFlushBuffersFile.c)
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

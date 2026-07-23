/*
 * XREFs of PopRecordPowerButton @ 0x14066A610
 * Callers:
 *     PdcPoRecordButton @ 0x14066FC8C (PdcPoRecordButton.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 *     RtlGetSetBootStatusData @ 0x140543854 (RtlGetSetBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140547E3C (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x1405482EC (RtlUnlockBootStatusData.c)
 */

void PopRecordPowerButton()
{
  HANDLE FileHandle; // [rsp+40h] [rbp+8h] BYREF

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock);
  if ( RtlLockBootStatusData(&FileHandle) >= 0 )
  {
    *((_DWORD *)&Buffer + 3) = MEMORY[0xFFFFF780000002C4];
    *(_QWORD *)&PopBsdPowerTransition = MEMORY[0xFFFFF78000000014];
    RtlGetSetBootStatusData(FileHandle, 0, RtlBsdPowerTransition, &PopBsdPowerTransition, 0x20u, 0LL);
    RtlUnlockBootStatusData(FileHandle);
  }
  PopReleaseRwLock(&PopBsdUpdateLock);
}

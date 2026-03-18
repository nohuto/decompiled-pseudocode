/*
 * XREFs of PopRecordPowerButton @ 0x14066A52C
 * Callers:
 *     PdcPoRecordButton @ 0x14066FBA8 (PdcPoRecordButton.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400FBFA8 (PopAcquireRwLockExclusive.c)
 *     RtlGetSetBootStatusData @ 0x140543314 (RtlGetSetBootStatusData.c)
 *     RtlLockBootStatusData @ 0x1405478FC (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x140547DAC (RtlUnlockBootStatusData.c)
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

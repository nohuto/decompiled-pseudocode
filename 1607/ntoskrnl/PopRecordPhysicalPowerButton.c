/*
 * XREFs of PopRecordPhysicalPowerButton @ 0x14066A504
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 *     RtlGetSetBootStatusData @ 0x140543854 (RtlGetSetBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140547E3C (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x1405482EC (RtlUnlockBootStatusData.c)
 */

void __fastcall PopRecordPhysicalPowerButton(int a1)
{
  HANDLE FileHandle; // [rsp+48h] [rbp+10h] BYREF

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock);
  if ( a1 )
  {
    *(_QWORD *)&PopBsdPhysicalPowerButtonInfo = MEMORY[0xFFFFF78000000014];
    ++DWORD2(PopBsdPhysicalPowerButtonInfo);
    WORD6(PopBsdPhysicalPowerButtonInfo) = MEMORY[0xFFFFF780000002C4];
    BYTE14(PopBsdPhysicalPowerButtonInfo) = PopBsdLastPowerWatchdogStage;
    HIBYTE(PopBsdPhysicalPowerButtonInfo) = PopBsdPowerWatchdogArmed & 1 | HIBYTE(PopBsdPhysicalPowerButtonInfo) & 0xFC | (2 * (PopBsdShutdownInProgress & 1));
  }
  else
  {
    *(_QWORD *)&xmmword_140341530 = MEMORY[0xFFFFF78000000014];
    ++DWORD2(xmmword_140341530);
    WORD6(xmmword_140341530) = MEMORY[0xFFFFF780000002C4];
  }
  if ( RtlLockBootStatusData(&FileHandle) >= 0 )
  {
    RtlGetSetBootStatusData(FileHandle, 0, RtlBsdItemPowerButtonPressInfo, &PopBsdPhysicalPowerButtonInfo, 0x20u, 0LL);
    RtlUnlockBootStatusData(FileHandle);
  }
  else if ( HIWORD(xmmword_140341530) != 0xFFFF )
  {
    ++HIWORD(xmmword_140341530);
  }
  PopReleaseRwLock(&PopBsdUpdateLock);
}

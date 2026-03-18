/*
 * XREFs of PopSetSleepMarker @ 0x140531690
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopIssueActionRequest @ 0x140530068 (PopIssueActionRequest.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x14010FFAC (RtlComputeCrc32.c)
 *     PopGetTransitionsToOnCount @ 0x140114774 (PopGetTransitionsToOnCount.c)
 *     RtlGetSetBootStatusData @ 0x140543314 (RtlGetSetBootStatusData.c)
 *     RtlLockBootStatusData @ 0x1405478FC (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x140547DAC (RtlUnlockBootStatusData.c)
 */

int __fastcall PopSetSleepMarker(char a1)
{
  int TransitionsToOnCount; // edi
  int result; // eax
  HANDLE FileHandle; // [rsp+48h] [rbp+10h] BYREF

  TransitionsToOnCount = PopGetTransitionsToOnCount();
  result = RtlLockBootStatusData(&FileHandle);
  if ( result >= 0 )
  {
    *((_DWORD *)&Buffer + 3) = MEMORY[0xFFFFF780000002C4];
    *(_QWORD *)&Buffer = MEMORY[0xFFFFF78000000014];
    *((_DWORD *)&Buffer + 2) = RtlComputeCrc32(0, &Buffer, 8u);
    HIDWORD(PopBsdPowerTransition) = TransitionsToOnCount;
    BYTE8(PopBsdPowerTransition) = (16 * a1) | BYTE8(PopBsdPowerTransition) & 0xF;
    RtlGetSetBootStatusData(FileHandle, 0, RtlBsdPowerTransition, &PopBsdPowerTransition, 0x20u, 0LL);
    return RtlUnlockBootStatusData(FileHandle);
  }
  return result;
}

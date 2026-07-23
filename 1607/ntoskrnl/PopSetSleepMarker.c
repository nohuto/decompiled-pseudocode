/*
 * XREFs of PopSetSleepMarker @ 0x140531BD0
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopIssueActionRequest @ 0x1405305A8 (PopIssueActionRequest.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140110510 (RtlComputeCrc32.c)
 *     PopGetTransitionsToOnCount @ 0x140114CE4 (PopGetTransitionsToOnCount.c)
 *     RtlGetSetBootStatusData @ 0x140543854 (RtlGetSetBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140547E3C (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x1405482EC (RtlUnlockBootStatusData.c)
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

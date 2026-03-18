/*
 * XREFs of PopSetSleepMarker @ 0x1404F899C
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     PopIssueActionRequest @ 0x1404F7688 (PopIssueActionRequest.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140104938 (RtlComputeCrc32.c)
 *     RtlGetSetBootStatusData @ 0x14050BC64 (RtlGetSetBootStatusData.c)
 *     RtlLockBootStatusData @ 0x14050CBEC (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x14050CE8C (RtlUnlockBootStatusData.c)
 */

int __fastcall PopSetSleepMarker(char a1)
{
  int result; // eax
  HANDLE FileHandle; // [rsp+48h] [rbp+10h] BYREF

  result = RtlLockBootStatusData(&FileHandle);
  if ( result >= 0 )
  {
    *(_QWORD *)&Buffer = MEMORY[0xFFFFF78000000014];
    dword_1403059F0 = RtlComputeCrc32(0, &Buffer, 8u);
    HIBYTE(word_1403059E0) = a1;
    RtlGetSetBootStatusData(FileHandle, 0, RtlBsdPowerTransition, &PopBsdPowerTransition, 0x20u, 0LL);
    return RtlUnlockBootStatusData(FileHandle);
  }
  return result;
}

/*
 * XREFs of PopSetSleepMarker @ 0x140567668
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     PopIssueActionRequest @ 0x14056624C (PopIssueActionRequest.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140134D10 (RtlComputeCrc32.c)
 *     RtlGetSetBootStatusData @ 0x140583084 (RtlGetSetBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140583F50 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x140584278 (RtlUnlockBootStatusData.c)
 */

int __fastcall PopSetSleepMarker(char a1)
{
  int result; // eax
  HANDLE FileHandle; // [rsp+48h] [rbp+10h] BYREF

  result = RtlLockBootStatusData(&FileHandle);
  if ( result >= 0 )
  {
    *(_QWORD *)&Buffer = MEMORY[0xFFFFF78000000014];
    dword_140353760 = RtlComputeCrc32(0, &Buffer, 8u);
    HIBYTE(word_140353750) = a1;
    RtlGetSetBootStatusData(FileHandle, 0, RtlBsdPowerTransition, &PopBsdPowerTransition, 0x20u, 0LL);
    return RtlUnlockBootStatusData(FileHandle);
  }
  return result;
}

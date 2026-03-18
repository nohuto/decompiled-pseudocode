/*
 * XREFs of PopClearSleepMarker @ 0x1404F5BA8
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14039DEDC (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140104938 (RtlComputeCrc32.c)
 *     RtlGetSetBootStatusData @ 0x14050BC64 (RtlGetSetBootStatusData.c)
 *     RtlLockBootStatusData @ 0x14050CBEC (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x14050CE8C (RtlUnlockBootStatusData.c)
 */

int PopClearSleepMarker()
{
  int result; // eax
  HANDLE FileHandle; // [rsp+40h] [rbp+8h] BYREF

  result = RtlLockBootStatusData(&FileHandle);
  if ( result >= 0 )
  {
    PopBsdPowerTransition = 0LL;
    HIBYTE(word_1403059E0) = 0;
    *(_QWORD *)&Buffer = MEMORY[0xFFFFF78000000014];
    dword_1403059F0 = RtlComputeCrc32(0, &Buffer, 8u);
    RtlGetSetBootStatusData(FileHandle, 0, RtlBsdPowerTransition, &PopBsdPowerTransition, 0x20u, 0LL);
    return RtlUnlockBootStatusData(FileHandle);
  }
  return result;
}

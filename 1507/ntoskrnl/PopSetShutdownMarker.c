/*
 * XREFs of PopSetShutdownMarker @ 0x1406B0898
 * Callers:
 *     PopGracefulShutdown @ 0x140403318 (PopGracefulShutdown.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140134D10 (RtlComputeCrc32.c)
 *     RtlGetSetBootStatusData @ 0x140583084 (RtlGetSetBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140583F50 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x140584278 (RtlUnlockBootStatusData.c)
 */

int PopSetShutdownMarker()
{
  int result; // eax
  HANDLE FileHandle; // [rsp+40h] [rbp+8h] BYREF

  result = RtlLockBootStatusData(&FileHandle);
  if ( result >= 0 )
  {
    *(_QWORD *)&Buffer = MEMORY[0xFFFFF78000000014];
    dword_140353760 = RtlComputeCrc32(0, &Buffer, 8u);
    LOBYTE(word_140353750) = 0;
    RtlGetSetBootStatusData(FileHandle, 0, RtlBsdPowerTransition, &PopBsdPowerTransition, 0x20u, 0LL);
    return RtlUnlockBootStatusData(FileHandle);
  }
  return result;
}

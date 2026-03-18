/*
 * XREFs of PoClearTransitionMarker @ 0x140580424
 * Callers:
 *     NtInitializeRegistry @ 0x140547164 (NtInitializeRegistry.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x14010FFAC (RtlComputeCrc32.c)
 *     RtlGetSetBootStatusData @ 0x140543314 (RtlGetSetBootStatusData.c)
 *     RtlLockBootStatusData @ 0x1405478FC (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x140547DAC (RtlUnlockBootStatusData.c)
 */

int PoClearTransitionMarker()
{
  int result; // eax
  HANDLE FileHandle; // [rsp+40h] [rbp+8h] BYREF

  result = RtlLockBootStatusData(&FileHandle);
  if ( result >= 0 )
  {
    *(_QWORD *)&PopBsdPowerTransition = 0LL;
    HIDWORD(PopBsdPowerTransition) = 0;
    *(_WORD *)((char *)&PopBsdPowerTransition + 9) &= 0xE000u;
    *(_DWORD *)((char *)&PopBsdPowerTransition + 11) = BYTE11(PopBsdPowerTransition) & 0xE0;
    BYTE8(PopBsdPowerTransition) = BYTE8(PopBsdPowerTransition) & 0xC | 1;
    *((_DWORD *)&Buffer + 3) = MEMORY[0xFFFFF780000002C4];
    *(_QWORD *)&Buffer = MEMORY[0xFFFFF78000000014];
    *((_DWORD *)&Buffer + 2) = RtlComputeCrc32(0, &Buffer, 8u);
    RtlGetSetBootStatusData(FileHandle, 0, RtlBsdPowerTransition, &PopBsdPowerTransition, 0x20u, 0LL);
    return RtlUnlockBootStatusData(FileHandle);
  }
  return result;
}

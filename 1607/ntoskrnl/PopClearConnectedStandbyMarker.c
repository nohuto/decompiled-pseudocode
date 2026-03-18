/*
 * XREFs of PopClearConnectedStandbyMarker @ 0x14066A310
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140547F5C (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x14010FFAC (RtlComputeCrc32.c)
 *     RtlGetSetBootStatusData @ 0x140543314 (RtlGetSetBootStatusData.c)
 *     RtlLockBootStatusData @ 0x1405478FC (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x140547DAC (RtlUnlockBootStatusData.c)
 */

int PopClearConnectedStandbyMarker()
{
  char v0; // bl
  int result; // eax
  HANDLE FileHandle; // [rsp+48h] [rbp+10h] BYREF

  v0 = PopPdcLastCsExitReason;
  result = RtlLockBootStatusData(&FileHandle);
  if ( result >= 0 )
  {
    *(_QWORD *)&PopBsdPowerTransition = 0LL;
    BYTE8(PopBsdPowerTransition) &= ~2u;
    BYTE11(PopBsdPowerTransition) ^= (v0 ^ BYTE11(PopBsdPowerTransition)) & 0x1F;
    *((_DWORD *)&Buffer + 3) = MEMORY[0xFFFFF780000002C4];
    *(_QWORD *)&Buffer = MEMORY[0xFFFFF78000000014];
    *((_DWORD *)&Buffer + 2) = RtlComputeCrc32(0, &Buffer, 8u);
    RtlGetSetBootStatusData(FileHandle, 0, RtlBsdPowerTransition, &PopBsdPowerTransition, 0x20u, 0LL);
    return RtlUnlockBootStatusData(FileHandle);
  }
  return result;
}

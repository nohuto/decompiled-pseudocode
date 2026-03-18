/*
 * XREFs of PopSetConnectedStandbyMarker @ 0x14066A6C4
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140547F5C (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x14010FFAC (RtlComputeCrc32.c)
 *     RtlGetSetBootStatusData @ 0x140543314 (RtlGetSetBootStatusData.c)
 *     RtlLockBootStatusData @ 0x1405478FC (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x140547DAC (RtlUnlockBootStatusData.c)
 */

int PopSetConnectedStandbyMarker()
{
  char v0; // bl
  char v1; // di
  int result; // eax
  ULONG v3; // eax
  HANDLE FileHandle; // [rsp+50h] [rbp+18h] BYREF

  v0 = PopPdcLastCsEnterReason;
  v1 = PopWdiCurrentScenarioInstanceId;
  result = RtlLockBootStatusData(&FileHandle);
  if ( result >= 0 )
  {
    *((_DWORD *)&Buffer + 3) = MEMORY[0xFFFFF780000002C4];
    *(_QWORD *)&Buffer = MEMORY[0xFFFFF78000000014];
    v3 = RtlComputeCrc32(0, &Buffer, 8u);
    BYTE8(PopBsdPowerTransition) |= 2u;
    *((_DWORD *)&Buffer + 2) = v3;
    BYTE9(PopBsdPowerTransition) = v1;
    BYTE10(PopBsdPowerTransition) ^= (v0 ^ BYTE10(PopBsdPowerTransition)) & 0x1F;
    RtlGetSetBootStatusData(FileHandle, 0, RtlBsdPowerTransition, &PopBsdPowerTransition, 0x20u, 0LL);
    return RtlUnlockBootStatusData(FileHandle);
  }
  return result;
}

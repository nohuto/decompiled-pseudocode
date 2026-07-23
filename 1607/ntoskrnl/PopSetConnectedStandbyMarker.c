/*
 * XREFs of PopSetConnectedStandbyMarker @ 0x14066A7A8
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x14054849C (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140110510 (RtlComputeCrc32.c)
 *     RtlGetSetBootStatusData @ 0x140543854 (RtlGetSetBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140547E3C (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x1405482EC (RtlUnlockBootStatusData.c)
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

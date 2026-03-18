/*
 * XREFs of PopUnreferencePowerSetting @ 0x14045705C
 * Callers:
 *     PopSetPowerSettingValue @ 0x140448F44 (PopSetPowerSettingValue.c)
 *     PopCallPowerSettingCallback @ 0x140456E2C (PopCallPowerSettingCallback.c)
 *     PopMarshalSettingValues @ 0x140456F14 (PopMarshalSettingValues.c)
 *     PopFreeRegistration @ 0x1404F4A74 (PopFreeRegistration.c)
 * Callees:
 *     <none>
 */

void __fastcall PopUnreferencePowerSetting(_DWORD *a1)
{
  if ( (*a1)-- == 1 )
    ExFreePoolWithTag(a1, 0x74655350u);
}

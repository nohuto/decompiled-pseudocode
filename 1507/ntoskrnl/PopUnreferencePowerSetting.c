/*
 * XREFs of PopUnreferencePowerSetting @ 0x1404E55B0
 * Callers:
 *     PopCallPowerSettingCallback @ 0x1404E52C0 (PopCallPowerSettingCallback.c)
 *     PopMarshalSettingValues @ 0x1404E5454 (PopMarshalSettingValues.c)
 *     PopSetPowerSettingValue @ 0x1404FFFC0 (PopSetPowerSettingValue.c)
 *     PopFreeRegistration @ 0x140568E5C (PopFreeRegistration.c)
 * Callees:
 *     <none>
 */

void __fastcall PopUnreferencePowerSetting(_DWORD *a1)
{
  if ( (*a1)-- == 1 )
    ExFreePoolWithTag(a1, 0x74655350u);
}

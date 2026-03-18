/*
 * XREFs of PopUnreferencePowerSetting @ 0x1403F5C54
 * Callers:
 *     PopCallPowerSettingCallback @ 0x1403F36FC (PopCallPowerSettingCallback.c)
 *     PopSetPowerSettingValue @ 0x1403F80D0 (PopSetPowerSettingValue.c)
 *     PopMarshalSettingValues @ 0x14051E528 (PopMarshalSettingValues.c)
 *     PopFreeRegistration @ 0x140533A30 (PopFreeRegistration.c)
 * Callees:
 *     <none>
 */

void __fastcall PopUnreferencePowerSetting(_DWORD *a1)
{
  if ( (*a1)-- == 1 )
    ExFreePoolWithTag(a1, 0x74655350u);
}

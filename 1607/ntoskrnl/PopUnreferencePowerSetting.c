/*
 * XREFs of PopUnreferencePowerSetting @ 0x1403F4B18
 * Callers:
 *     PopCallPowerSettingCallback @ 0x1403F25C0 (PopCallPowerSettingCallback.c)
 *     PopSetPowerSettingValue @ 0x1403F6F90 (PopSetPowerSettingValue.c)
 *     PopMarshalSettingValues @ 0x140501590 (PopMarshalSettingValues.c)
 *     PopFreeRegistration @ 0x140533F70 (PopFreeRegistration.c)
 * Callees:
 *     <none>
 */

void __fastcall PopUnreferencePowerSetting(_DWORD *a1)
{
  if ( (*a1)-- == 1 )
    ExFreePoolWithTag(a1, 0x74655350u);
}

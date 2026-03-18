/*
 * XREFs of ACPIInitGetEmOverride @ 0x1C0085AD8
 * Callers:
 *     DriverEntry @ 0x1C0084228 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 ACPIInitGetEmOverride()
{
  ULONG ActiveProcessorCount; // eax
  __int64 result; // rax
  int v2; // [rsp+30h] [rbp+10h] BYREF

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v2 = 1;
  if ( ActiveProcessorCount > 1 )
  {
    EmClientQueryRuleState(&GUID_EM_RULE_ACPI_SLP_WORKAROUND, &v2);
    if ( v2 == 2 )
      AcpiOverrideAttributes |= 4u;
  }
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_DISABLE_S1, &v2);
  if ( v2 == 2 )
    AcpiOverrideAttributes |= 0x10u;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_DISABLE_S2, &v2);
  if ( v2 == 2 )
    AcpiOverrideAttributes |= 0x20u;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_DISABLE_S3, &v2);
  if ( v2 == 2 )
    AcpiOverrideAttributes |= 0x40u;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_IGNORE_QWORD_LENGTH, &v2);
  if ( v2 == 2 )
    AcpiOverrideAttributes |= 0x80u;
  EmClientQueryRuleState(&GUID_EM_RULE_IGNORE_PCI_SEGMENTS, &v2);
  if ( v2 == 2 )
    AcpiOverrideAttributes |= 0x1000u;
  v2 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_FORCE_RUN_REG_METHOD_ON_PCI_DEVICE, &v2);
  if ( v2 == 2 )
    AcpiOverrideAttributes |= 0x8000u;
  v2 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_RESCAN_AFTER_INIT_DEPENDENCIES_SATISFIED, &v2);
  if ( v2 == 2 )
    AcpiOverrideAttributes |= 0x80000u;
  v2 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_PLATFORM_CHECK_D3COLD_ON_SURPRISE_REMOVAL, &v2);
  if ( v2 == 2 )
    AcpiOverrideAttributes |= 0x100000u;
  v2 = 1;
  result = EmClientQueryRuleState(&GUID_EM_RULE_ACPI_PLATFORM_CHECK_IGNORE_HANDLES_ON_DEVICE_RESET, &v2);
  if ( v2 == 2 )
    AcpiOverrideAttributes |= 0x200000u;
  return result;
}

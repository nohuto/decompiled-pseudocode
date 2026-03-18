/*
 * XREFs of ACPIInitGetEmOverride @ 0x1C00A7F54
 * Callers:
 *     DriverEntry @ 0x1C00A8520 (DriverEntry.c)
 * Callees:
 *     AcpiDiagOverrideAttribute @ 0x1C0041F14 (AcpiDiagOverrideAttribute.c)
 */

NTSTATUS ACPIInitGetEmOverride()
{
  ULONG ActiveProcessorCount; // eax
  NTSTATUS result; // eax
  int v2; // [rsp+30h] [rbp+10h] BYREF

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v2 = 1;
  if ( ActiveProcessorCount > 1 )
  {
    EmClientQueryRuleState(&GUID_EM_RULE_ACPI_SLP_WORKAROUND, &v2);
    if ( v2 == 2 )
    {
      AcpiOverrideAttributes |= 4u;
      AcpiDiagOverrideAttribute(0);
    }
  }
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_DISABLE_S1, &v2);
  if ( v2 == 2 )
  {
    AcpiOverrideAttributes |= 0x10u;
    AcpiDiagOverrideAttribute(1);
  }
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_DISABLE_S2, &v2);
  if ( v2 == 2 )
  {
    AcpiOverrideAttributes |= 0x20u;
    AcpiDiagOverrideAttribute(2);
  }
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_DISABLE_S3, &v2);
  if ( v2 == 2 )
  {
    AcpiOverrideAttributes |= 0x40u;
    AcpiDiagOverrideAttribute(3);
  }
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_IGNORE_QWORD_LENGTH, &v2);
  if ( v2 == 2 )
  {
    AcpiOverrideAttributes |= 0x80u;
    AcpiDiagOverrideAttribute(4);
  }
  EmClientQueryRuleState(&GUID_EM_RULE_IGNORE_PCI_SEGMENTS, &v2);
  if ( v2 == 2 )
  {
    AcpiOverrideAttributes |= 0x1000u;
    AcpiDiagOverrideAttribute(5);
  }
  v2 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_FORCE_RUN_REG_METHOD_ON_PCI_DEVICE, &v2);
  if ( v2 == 2 )
  {
    AcpiOverrideAttributes |= 0x8000u;
    AcpiDiagOverrideAttribute(6);
  }
  v2 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_RESCAN_AFTER_INIT_DEPENDENCIES_SATISFIED, &v2);
  if ( v2 == 2 )
  {
    AcpiOverrideAttributes |= 0x80000u;
    AcpiDiagOverrideAttribute(7);
  }
  v2 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_PLATFORM_CHECK_D3COLD_ON_SURPRISE_REMOVAL, &v2);
  if ( v2 == 2 )
  {
    AcpiOverrideAttributes |= 0x100000u;
    AcpiDiagOverrideAttribute(8);
  }
  v2 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_PLATFORM_CHECK_FAIL_RESET_ON_OPEN_HANDLES, &v2);
  if ( v2 == 2 )
  {
    AcpiOverrideAttributes |= 0x200000u;
    AcpiDiagOverrideAttribute(9);
  }
  v2 = 1;
  result = EmClientQueryRuleState(&GUID_EM_RULE_ACPI_PLATFORM_CHECK_IGNORE_FIXED_BUTTON, &v2);
  if ( v2 == 2 )
  {
    AcpiOverrideAttributes |= 0x400000u;
    return AcpiDiagOverrideAttribute(10);
  }
  return result;
}

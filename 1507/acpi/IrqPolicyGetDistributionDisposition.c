/*
 * XREFs of IrqPolicyGetDistributionDisposition @ 0x1C0086344
 * Callers:
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C006F918 (AcpiIrqLibSetupSciInterrupt.c)
 * Callees:
 *     OSOpenUnicodeHandle @ 0x1C0065958 (OSOpenUnicodeHandle.c)
 *     OSGetRegistryValue @ 0x1C006B108 (OSGetRegistryValue.c)
 *     IrqArbIrqFromGsiv @ 0x1C0080668 (IrqArbIrqFromGsiv.c)
 */

__int64 __fastcall IrqPolicyGetDistributionDisposition(__int64 a1, __int64 a2)
{
  int v2; // edi
  unsigned int v3; // ebx
  NTSTATUS v4; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  PVOID P; // [rsp+50h] [rbp+20h] BYREF
  int v8; // [rsp+58h] [rbp+28h] BYREF
  int v9; // [rsp+5Ch] [rbp+2Ch]
  HANDLE Handle; // [rsp+60h] [rbp+30h] BYREF

  v9 = HIDWORD(a2);
  Handle = 0LL;
  P = 0LL;
  v2 = 1;
  v3 = 0;
  IrqArbGlobalDistributionDisposition = 0;
  v8 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_IRQ_DISTRIBUTION_STACK_UP, &v8);
  if ( v8 == 2 )
    IrqArbGlobalDistributionDisposition = 2;
  EmClientQueryRuleState(&GUID_EM_RULE_ACPI_IRQ_DISTRIBUTION_SPREAD_OUT, &v8);
  if ( v8 == 2 )
    IrqArbGlobalDistributionDisposition = 1;
  else
    v2 = IrqArbGlobalDistributionDisposition;
  if ( v2 )
  {
    EmClientQueryRuleState(&GUID_EM_RULE_ACPI_IRQ_ROUTING_STACK_ON_IRQ9, &v8);
    if ( v8 == 2 )
    {
      IrqArbGlobalStackingIrq = 9;
    }
    else
    {
      EmClientQueryRuleState(&GUID_EM_RULE_ACPI_IRQ_ROUTING_STACK_ON_IRQ10, &v8);
      if ( v8 == 2 )
      {
        IrqArbGlobalStackingIrq = 10;
      }
      else
      {
        EmClientQueryRuleState(&GUID_EM_RULE_ACPI_IRQ_ROUTING_STACK_ON_IRQ11, &v8);
        if ( v8 == 2 )
          IrqArbGlobalStackingIrq = 11;
      }
    }
  }
  else
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters");
    v4 = OSOpenUnicodeHandle(&DestinationString, 0LL, &Handle);
    v3 = v4;
    if ( v4 < 0 || (v4 = OSGetRegistryValue(Handle, L"IRQDistribution", &P), v3 = v4, v4 < 0) )
    {
      if ( v4 != -1073741772 )
        goto LABEL_11;
      IrqArbGlobalDistributionDisposition = 0;
      goto LABEL_10;
    }
    if ( *((_DWORD *)P + 1) && *(_DWORD *)P == 4 )
    {
      IrqArbGlobalDistributionDisposition = *((_DWORD *)P + 2);
      ExFreePoolWithTag(P, 0);
      IrqArbGlobalStackingIrq = IrqArbIrqFromGsiv(IrqLibSciGsiv);
      if ( OSGetRegistryValue(Handle, L"ForcePCIBootConfig", &P) >= 0 )
      {
        if ( *((_DWORD *)P + 1) && *(_DWORD *)P == 4 )
          IrqArbGlobalStackingIrq = *((_DWORD *)P + 2);
        ExFreePoolWithTag(P, 0);
      }
LABEL_10:
      v3 = 0;
      goto LABEL_11;
    }
    v3 = -1073741275;
    ExFreePoolWithTag(P, 0);
  }
LABEL_11:
  if ( Handle )
    ZwClose(Handle);
  return v3;
}

/*
 * XREFs of IrqPolicyConfigure @ 0x1C008697C
 * Callers:
 *     AcpiIrqLibConfigureLibrary @ 0x1C00866DC (AcpiIrqLibConfigureLibrary.c)
 * Callees:
 *     OSOpenUnicodeHandle @ 0x1C0065958 (OSOpenUnicodeHandle.c)
 *     OSGetRegistryValue @ 0x1C006B108 (OSGetRegistryValue.c)
 */

__int64 IrqPolicyConfigure()
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  PVOID P; // [rsp+40h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters");
  if ( OSOpenUnicodeHandle(&DestinationString, 0LL, &Handle) >= 0 )
  {
    if ( OSGetRegistryValue(Handle, L"IrqDefaultDevicePolicy", &P) >= 0 )
    {
      if ( *((_DWORD *)P + 1) && *(_DWORD *)P == 4 && (unsigned __int16)(*((_WORD *)P + 4) - 1) <= 3u )
        IrqMachinePolicy = *((_WORD *)P + 4);
      ExFreePoolWithTag(P, 0);
    }
    if ( OSGetRegistryValue(Handle, L"PCIDeviceExclusionMask", &P) >= 0 )
    {
      if ( *((_DWORD *)P + 1) && *(_DWORD *)P == 4 )
        PciExclusionMask = *((_WORD *)P + 4);
      ExFreePoolWithTag(P, 0);
    }
    ZwClose(Handle);
  }
  return 0LL;
}

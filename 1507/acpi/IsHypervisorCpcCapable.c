/*
 * XREFs of IsHypervisorCpcCapable @ 0x1C007EEDC
 * Callers:
 *     ACPIRootInitialize @ 0x1C006640C (ACPIRootInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     OSOpenUnicodeHandle @ 0x1C0065958 (OSOpenUnicodeHandle.c)
 *     OSGetRegistryValue @ 0x1C006B108 (OSGetRegistryValue.c)
 */

char IsHypervisorCpcCapable()
{
  char v0; // bl
  int v1; // edi
  int v3; // [rsp+20h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-40h] BYREF
  PVOID P; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF
  _BYTE SystemInformation[8]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]

  v0 = 0;
  if ( ZwQuerySystemInformation(SystemHypervisorInformation, SystemInformation, 0x10u, 0LL) >= 0
    && (v8 & 0x400) != 0
    && (int)HvlQueryActiveHypervisorProcessorCount(&v3) >= 0
    && KeQueryActiveProcessorCountEx(0xFFFFu) == v3 )
  {
    v1 = 0;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor");
    if ( OSOpenUnicodeHandle(&DestinationString, 0LL, &Handle) < 0 )
      return 1;
    if ( OSGetRegistryValue(Handle, L"LegacyHvAlgorithm", &P) >= 0 )
    {
      if ( *((_DWORD *)P + 1) && *(_DWORD *)P == 4 )
        v1 = *((_DWORD *)P + 2);
      ExFreePoolWithTag(P, 0);
    }
    ZwClose(Handle);
    if ( !v1 )
      return 1;
  }
  return v0;
}

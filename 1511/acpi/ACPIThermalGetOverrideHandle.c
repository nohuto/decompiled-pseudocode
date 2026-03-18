/*
 * XREFs of ACPIThermalGetOverrideHandle @ 0x1C006D228
 * Callers:
 *     ACPIThermalWorker @ 0x1C006CD70 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C001A874 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     OSOpenUnicodeHandle @ 0x1C00658BC (OSOpenUnicodeHandle.c)
 *     OSOpenHandle @ 0x1C006592C (OSOpenHandle.c)
 */

void *__fastcall ACPIThermalGetOverrideHandle(__int64 a1)
{
  struct _UNICODE_STRING v2; // [rsp+20h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp+18h] BYREF
  void *v4; // [rsp+50h] [rbp+20h] BYREF

  Handle = 0LL;
  v4 = 0LL;
  *(_DWORD *)&v2.Length = 0;
  v2.Buffer = 0LL;
  if ( (AcpiOverrideAttributes & 0x10000) != 0 )
  {
    if ( (int)ACPIAmliBuildObjectPathnameUnicode(*(__int64 **)(a1 + 704), (__int64)&v2, 2) >= 0
      && OSOpenHandle(
           "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters\\ThermalOverride",
           0LL,
           &Handle) >= 0 )
    {
      OSOpenUnicodeHandle(&v2, Handle, &v4);
    }
    if ( Handle )
      ZwClose(Handle);
    if ( v2.Buffer )
      ExFreePoolWithTag(v2.Buffer, 0);
  }
  return v4;
}

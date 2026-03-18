/*
 * XREFs of AcpiDiagTraceTemperatureChange @ 0x1C001A5FC
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C0019DFC (ACPIThermalLoopEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C00344DC (ACPIAmliBuildObjectPathnameUnicode.c)
 */

void __fastcall AcpiDiagTraceTemperatureChange(__int64 a1, __int64 a2)
{
  __int16 v4; // [rsp+30h] [rbp-50h] BYREF
  int v5; // [rsp+34h] [rbp-4Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int16 *Buffer; // [rsp+58h] [rbp-28h]
  int v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+64h] [rbp-1Ch]
  int *v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+70h] [rbp-10h]
  int v13; // [rsp+74h] [rbp-Ch]

  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( AcpiDiagHandle
    && EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_TEMPERATURE_CHANGE)
    && (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a2 + 704), &DestinationString, 1LL) >= 0 )
  {
    UserData.Reserved = 0;
    v10 = 0;
    v13 = 0;
    UserData.Ptr = (unsigned __int64)&v4;
    Buffer = DestinationString.Buffer;
    v4 = DestinationString.Length >> 1;
    v9 = 2 * (DestinationString.Length >> 1);
    v5 = *(_DWORD *)(a1 + 16);
    v11 = &v5;
    UserData.Size = 2;
    v12 = 4;
    EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_TEMPERATURE_CHANGE, 0LL, 3u, &UserData);
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
}

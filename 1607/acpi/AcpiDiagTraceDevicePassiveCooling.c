/*
 * XREFs of AcpiDiagTraceDevicePassiveCooling @ 0x1C0042810
 * Callers:
 *     ACPIThermalReevaluateConstraintsWorker @ 0x1C0028B80 (ACPIThermalReevaluateConstraintsWorker.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C0009D04 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceDevicePassiveCooling(__int64 a1, char a2)
{
  __int16 v3; // [rsp+30h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  wchar_t *Buffer; // [rsp+58h] [rbp-28h]
  int v7; // [rsp+60h] [rbp-20h]
  int v8; // [rsp+64h] [rbp-1Ch]
  char *v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+70h] [rbp-10h]
  int v11; // [rsp+74h] [rbp-Ch]
  char v12; // [rsp+98h] [rbp+18h] BYREF

  v12 = a2;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *((_QWORD *)&WPP_MAIN_CB.Reserved + 1)
    && EtwEventEnabled(*((REGHANDLE *)&WPP_MAIN_CB.Reserved + 1), &ACPI_ETW_EVENT_DEVICE_PASSIVE_COOLING)
    && (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 712), (__int64)&DestinationString) >= 0 )
  {
    UserData.Reserved = 0;
    v8 = 0;
    v11 = 0;
    UserData.Ptr = (unsigned __int64)&v3;
    Buffer = DestinationString.Buffer;
    v3 = DestinationString.Length >> 1;
    v7 = 2 * (DestinationString.Length >> 1);
    v9 = &v12;
    UserData.Size = 2;
    v10 = 1;
    EtwWrite(*((REGHANDLE *)&WPP_MAIN_CB.Reserved + 1), &ACPI_ETW_EVENT_DEVICE_PASSIVE_COOLING, 0LL, 3u, &UserData);
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
}

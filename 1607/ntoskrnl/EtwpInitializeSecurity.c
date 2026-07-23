/*
 * XREFs of EtwpInitializeSecurity @ 0x1407BC7EC
 * Callers:
 *     EtwpInitialize @ 0x1407A0D3C (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x140406DCC (EtwpGetGuidSecurityDescriptor.c)
 */

NTSTATUS EtwpInitializeSecurity()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-58h] BYREF
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\Security");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&EtwpSecurityKeyHandle, 0x20019u, &ObjectAttributes);
  v1 = result;
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"0811c1af-7a07-4a06-82ed-869455cdf713");
    EtwpGetGuidSecurityDescriptor(&ValueName, &EtwpDefaultTraceSecurityDescriptor);
    if ( !EtwpDefaultTraceSecurityDescriptor )
      EtwpDefaultTraceSecurityDescriptor = WmipDefaultAccessSd;
    return v1;
  }
  return result;
}

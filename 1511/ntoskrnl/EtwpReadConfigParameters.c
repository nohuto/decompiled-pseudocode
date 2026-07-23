/*
 * XREFs of EtwpReadConfigParameters @ 0x140755760
 * Callers:
 *     EtwpInitialize @ 0x140757334 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     RtlQueryRegistryValuesEx @ 0x1404C8798 (RtlQueryRegistryValuesEx.c)
 */

void EtwpReadConfigParameters()
{
  const WCHAR *v0; // rbx
  int v1; // eax
  WCHAR *PoolWithTag; // rax
  unsigned __int64 v3; // rax
  unsigned int v4; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v5; // [rsp+3Ch] [rbp-CCh] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[3]; // [rsp+98h] [rbp-70h] BYREF

  v5 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v0 = 0LL;
  v4 = 10;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_13;
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)EtwpQueryRegistryCallback;
  QueryTable[0].EntryContext = &UnicodeString;
  QueryTable[1].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)EtwpQueryRegistryCallback;
  QueryTable[0].Name = L"RTBacklogRoot";
  QueryTable[0].DefaultType = 1;
  QueryTable[0].DefaultData = &v5;
  QueryTable[1].DefaultType = 4;
  QueryTable[1].EntryContext = &v4;
  QueryTable[1].Name = L"MaxNonPagedPoolUsage";
  if ( RtlQueryRegistryValuesEx(0x40000000u, (PCWSTR)KeyHandle, QueryTable, 0LL, 0LL) < 0 )
  {
LABEL_13:
    v1 = v4;
  }
  else
  {
    if ( UnicodeString.Buffer )
    {
      if ( UnicodeString.Length >= 4u )
      {
        PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, UnicodeString.MaximumLength + 2LL, 0x50777445u);
        v0 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, UnicodeString.Buffer, UnicodeString.MaximumLength);
          v3 = (unsigned __int64)UnicodeString.Length >> 1;
          if ( v0[v3 - 1] != 92 )
          {
            v0[v3] = 92;
            v0[((unsigned __int64)UnicodeString.Length >> 1) + 1] = 0;
          }
        }
      }
    }
    v1 = 50;
    if ( v4 <= 0x32 )
    {
      v1 = v4;
      if ( v4 < 0xA )
        v1 = 10;
    }
    v4 = v1;
  }
  EtwpMaxNonPagedPoolUsage = v1;
  if ( v0 )
    EtwpRTBacklogFileRoot = v0;
  if ( KeyHandle )
    ZwClose(KeyHandle);
  RtlFreeAnsiString(&UnicodeString);
}

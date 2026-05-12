/*
 * XREFs of PortRegistrySetValueKey @ 0x1C000CB6C
 * Callers:
 *     PortMapBuildAdapterEntry @ 0x1C000C954 (PortMapBuildAdapterEntry.c)
 *     PortMapBuildLunEntry @ 0x1C000CA38 (PortMapBuildLunEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall PortRegistrySetValueKey(
        HANDLE KeyHandle,
        const WCHAR *a2,
        ULONG a3,
        unsigned __int16 *Buffer,
        ULONG a5)
{
  char v5; // bp
  struct _UNICODE_STRING *p_ValueName; // rsi
  ULONG DataSize; // eax
  NTSTATUS v11; // ebx
  NTSTATUS result; // eax
  struct _STRING SourceString; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-18h] BYREF

  v5 = 0;
  if ( a2 )
  {
    RtlInitUnicodeString(&ValueName, a2);
    p_ValueName = &ValueName;
  }
  else
  {
    p_ValueName = 0LL;
  }
  DataSize = a5;
  if ( a3 != 119742466 )
  {
LABEL_4:
    v11 = ZwSetValueKey(KeyHandle, p_ValueName, 0, a3, Buffer, DataSize);
    if ( v5 )
      RtlFreeUnicodeString(&DestinationString);
    return v11;
  }
  if ( a5 > 0xFFFF )
    return -1073741675;
  a3 = 1;
  SourceString.Length = a5;
  SourceString.MaximumLength = a5;
  SourceString.Buffer = (char *)Buffer;
  result = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u);
  if ( result >= 0 )
  {
    v5 = 1;
    Buffer = DestinationString.Buffer;
    DataSize = DestinationString.Length + 2;
    goto LABEL_4;
  }
  return result;
}

/*
 * XREFs of PnpOpenFirstMatchingSubKey @ 0x14062DC6C
 * Callers:
 *     PiQueryRemovableDeviceOverride @ 0x14050D9CC (PiQueryRemovableDeviceOverride.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140635B98 (PiDevCfgConfigureDeviceLocation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 */

NTSTATUS __fastcall PnpOpenFirstMatchingSubKey(
        PCWSTR SourceString,
        void *a2,
        __int64 a3,
        __int64 a4,
        PHANDLE KeyHandle)
{
  const WCHAR *v6; // rbx
  NTSTATUS result; // eax
  __int64 v8; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  v6 = SourceString;
  if ( !SourceString || !a2 || !KeyHandle )
    return -1073741811;
  *KeyHandle = 0LL;
  result = -1073741772;
  if ( *SourceString )
  {
    do
    {
      RtlInitUnicodeString(&DestinationString, v6);
      *KeyHandle = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = a2;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      result = ZwOpenKey(KeyHandle, 0x20019u, &ObjectAttributes);
      if ( result >= 0 )
        break;
      *KeyHandle = 0LL;
      v8 = -1LL;
      do
        ++v8;
      while ( v6[v8] );
      v6 += v8 + 1;
    }
    while ( *v6 );
  }
  return result;
}

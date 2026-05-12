/*
 * XREFs of RaidLoadATADeviceIdMappings @ 0x1C002C258
 * Callers:
 *     DllInitialize @ 0x1C00178E0 (DllInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     RaidAddATADeviceIdMapping @ 0x1C002C0CC (RaidAddATADeviceIdMapping.c)
 */

int RaidLoadATADeviceIdMappings()
{
  int result; // eax
  ULONG Length; // esi
  char *PoolWithTag; // rbx
  ULONG v3; // edi
  NTSTATUS v4; // eax
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp-29h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-21h] BYREF
  UNICODE_STRING GuidString; // [rsp+48h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+7h] BYREF
  GUID Guid; // [rsp+98h] [rbp+37h] BYREF

  Guid.Data1 = 0;
  *(_QWORD *)&Guid.Data2 = 0LL;
  *(_DWORD *)&Guid.Data4[4] = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\ATADeviceIdMappings");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    Length = 20;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x14uLL, 0x48536152u);
    if ( PoolWithTag )
    {
      v3 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v4 = ZwEnumerateValueKey(KeyHandle, v3, KeyValueFullInformation, PoolWithTag, Length, (PULONG)&NumberOfBytes);
          if ( v4 < 0 )
            break;
          if ( *((_DWORD *)PoolWithTag + 4) == 76 )
          {
            *(_DWORD *)&GuidString.Length = 4980812;
            GuidString.Buffer = (wchar_t *)(PoolWithTag + 20);
            if ( RtlGUIDFromString(&GuidString, &Guid) >= 0 )
            {
              ExAcquireResourceExclusiveLite((PERESOURCE)&WPP_MAIN_CB.DeviceExtension, 1u);
              RaidAddATADeviceIdMapping(
                &PoolWithTag[*((unsigned int *)PoolWithTag + 2)],
                *((_DWORD *)PoolWithTag + 3),
                (struct _STRING *)&Guid);
              ExReleaseResourceLite((PERESOURCE)&WPP_MAIN_CB.DeviceExtension);
            }
          }
          ++v3;
        }
        if ( v4 != -2147483643 && v4 != -1073741789 )
          break;
        Length = NumberOfBytes;
        ExFreePoolWithTag(PoolWithTag, 0x48536152u);
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x48536152u);
        if ( !PoolWithTag )
          return ZwClose(KeyHandle);
      }
      ExFreePoolWithTag(PoolWithTag, 0x48536152u);
    }
    return ZwClose(KeyHandle);
  }
  return result;
}

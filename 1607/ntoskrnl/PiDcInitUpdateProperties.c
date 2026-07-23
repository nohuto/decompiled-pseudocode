/*
 * XREFs of PiDcInitUpdateProperties @ 0x140577CF8
 * Callers:
 *     PiDcInit @ 0x14079D9B0 (PiDcInit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlInsertElementGenericTableAvl @ 0x1400C23E4 (RtlInsertElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x14015A450 (ZwEnumerateValueKey.c)
 *     ZwEnumerateKey @ 0x14015A830 (ZwEnumerateKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlUnicodeStringToInteger @ 0x1404A31F0 (RtlUnicodeStringToInteger.c)
 *     RtlGUIDFromString @ 0x1404DE2FC (RtlGUIDFromString.c)
 */

__int64 PiDcInitUpdateProperties()
{
  wchar_t *PoolWithTag; // rdi
  NTSTATUS v1; // eax
  NTSTATUS v2; // ebx
  ULONG v3; // r14d
  ULONG i; // edx
  NTSTATUS v5; // eax
  unsigned __int16 v6; // ax
  int v7; // esi
  ULONG j; // edx
  NTSTATUS v9; // eax
  ULONG ResultLength; // [rsp+38h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-31h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-11h] BYREF
  GUID Guid; // [rsp+90h] [rbp+1Fh] BYREF
  ULONG Value; // [rsp+A0h] [rbp+2Fh] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x218uLL, 0x47706E50u);
  if ( PoolWithTag )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\DeviceContainerPropertyUpdateEvents");
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v1 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
    v2 = v1;
    if ( v1 != -1073741772 )
    {
      if ( v1 < 0 )
        goto LABEL_21;
      v3 = 0;
      for ( i = 0; ; i = v3 )
      {
        v5 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, PoolWithTag, 0x218u, &ResultLength);
        v2 = v5;
        if ( v5 == -2147483622 )
          break;
        if ( v5 < 0 )
          goto LABEL_21;
        ObjectAttributes.Length = 48;
        DestinationString.Buffer = PoolWithTag + 8;
        v6 = PoolWithTag[6];
        Handle = 0LL;
        DestinationString.Length = v6;
        DestinationString.MaximumLength = v6;
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v2 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
        if ( v2 < 0 )
          goto LABEL_21;
        v7 = 0;
        for ( j = 0; ; j = ++v7 )
        {
          v9 = ZwEnumerateValueKey(Handle, j, KeyValueBasicInformation, PoolWithTag, 0x218u, &ResultLength);
          v2 = v9;
          if ( v9 == -2147483622 )
          {
            v2 = 0;
            goto LABEL_18;
          }
          if ( v9 != -2147483643 )
          {
            if ( v9 < 0 )
              goto LABEL_18;
            if ( (unsigned int)(*((_DWORD *)PoolWithTag + 2) - 80) <= 0x12 )
            {
              DestinationString.Buffer = PoolWithTag + 6;
              *(_DWORD *)&DestinationString.Length = 4980812;
              if ( RtlGUIDFromString(&DestinationString, &Guid) >= 0 )
              {
                DestinationString.Buffer = PoolWithTag + 45;
                DestinationString.Length = PoolWithTag[4] - 78;
                DestinationString.MaximumLength = DestinationString.Length;
                if ( RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value) >= 0
                  && !RtlInsertElementGenericTableAvl(&PiDcUpdateProperties, &Guid, 0x14u, 0LL) )
                {
                  break;
                }
              }
            }
          }
        }
        v2 = -1073741670;
LABEL_18:
        ZwClose(Handle);
        Handle = 0LL;
        if ( v2 < 0 )
          goto LABEL_21;
        ++v3;
      }
    }
    v2 = 0;
  }
  else
  {
    v2 = -1073741670;
  }
LABEL_21:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x47706E50u);
  return (unsigned int)v2;
}

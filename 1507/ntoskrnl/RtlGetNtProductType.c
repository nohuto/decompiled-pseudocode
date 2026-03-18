/*
 * XREFs of RtlGetNtProductType @ 0x14054E0B0
 * Callers:
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14041374C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     RtlGetVersion @ 0x14054DFF8 (RtlGetVersion.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 */

BOOLEAN __stdcall RtlGetNtProductType(PNT_PRODUCT_TYPE ProductType)
{
  BOOLEAN v3; // r14
  NTSTATUS v4; // eax
  unsigned __int16 *PoolWithTag; // rdi
  wchar_t *v6; // rax
  UNICODE_STRING String1; // [rsp+30h] [rbp-49h] BYREF
  UNICODE_STRING String2; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING v9; // [rsp+50h] [rbp-29h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-19h] BYREF
  UNICODE_STRING v11; // [rsp+70h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+17h] BYREF
  ULONG ResultLength; // [rsp+E8h] [rbp+6Fh] BYREF
  HANDLE KeyHandle; // [rsp+F0h] [rbp+77h] BYREF

  if ( MEMORY[0xFFFFF78000000268] )
  {
    *ProductType = MEMORY[0xFFFFF78000000264];
    return 1;
  }
  *ProductType = NtProductWinNt;
  v3 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  RtlInitUnicodeString(&ValueName, L"ProductType");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 0x2000000u, &ObjectAttributes);
  PoolWithTag = 0LL;
  if ( v4 < 0 )
  {
    KeyHandle = 0LL;
    goto LABEL_7;
  }
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x69507452u);
  if ( PoolWithTag )
  {
    v4 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, PoolWithTag, 0x100u, &ResultLength);
LABEL_7:
    if ( v4 >= 0 && *((_DWORD *)PoolWithTag + 1) == 1 )
    {
      v6 = (unsigned __int16 *)((char *)PoolWithTag + *((unsigned int *)PoolWithTag + 2));
      String1.MaximumLength = PoolWithTag[6];
      String1.Buffer = v6;
      String1.Length = String1.MaximumLength - 2;
      RtlInitUnicodeString(&String2, L"WinNt");
      RtlInitUnicodeString(&v9, L"LanmanNt");
      RtlInitUnicodeString(&v11, L"ServerNt");
      if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
      {
        *ProductType = NtProductWinNt;
      }
      else if ( RtlEqualUnicodeString(&String1, &v9, 1u) )
      {
        *ProductType = NtProductLanManNt;
      }
      else
      {
        if ( !RtlEqualUnicodeString(&String1, &v11, 1u) )
          goto LABEL_16;
        *ProductType = NtProductServer;
      }
      v3 = 1;
    }
LABEL_16:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v3;
}

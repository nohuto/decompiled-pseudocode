/*
 * XREFs of ?ReadTabletButtonIndex@@YAJIPEAK@Z @ 0x1C015AE10
 * Callers:
 *     ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C015AD94 (-RegisterTabletButtonHandler@@YAXXZ.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00DCB5C (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall ReadTabletButtonIndex(unsigned int a1, unsigned int *a2)
{
  unsigned int *v4; // rdi
  NTSTATUS v5; // ebx
  unsigned int v7; // ecx
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+80h] [rbp-80h] BYREF
  WCHAR SourceString[264]; // [rsp+90h] [rbp-70h] BYREF

  *a2 = 0;
  v4 = (unsigned int *)Win32AllocPool(548LL, 1984656213LL);
  if ( !v4 )
    return 3221225495LL;
  RtlStringCchPrintfW(
    SourceString,
    261LL,
    L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\TabletPC\\TabletButtons\\%d",
    a1);
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v5 >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"ButtonId");
    v5 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, v4, 0x224u, &ResultLength);
    if ( v5 < 0 || v4[3] != 4 || (v7 = *(unsigned int *)((char *)v4 + v4[2]), ((v7 - 1) & v7) != 0) || v7 - 1 > 0x3FE )
    {
      v5 = -1073741492;
    }
    else
    {
      do
      {
        ++*a2;
        v7 >>= 1;
      }
      while ( v7 );
      --*a2;
    }
    ZwClose(KeyHandle);
  }
  Win32FreePool(v4);
  return (unsigned int)v5;
}

/*
 * XREFs of RegistryCreateMediaCategoriesKey @ 0x1C001AE94
 * Callers:
 *     RegistryInitProductNameKey @ 0x1C001AF68 (RegistryInitProductNameKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RegistryCreateMediaCategoriesKey(struct _UNICODE_STRING *a1, void **a2)
{
  NTSTATUS result; // eax
  NTSTATUS v5; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+A0h] [rbp+20h] BYREF
  void *KeyHandle; // [rsp+A8h] [rbp+28h] BYREF

  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\MediaCategories\\");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = a1;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateKey(a2, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    ZwClose(KeyHandle);
    return v5;
  }
  return result;
}

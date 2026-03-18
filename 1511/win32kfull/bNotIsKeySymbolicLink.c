/*
 * XREFs of bNotIsKeySymbolicLink @ 0x1C000EE18
 * Callers:
 *     bReadUserSystemEUDCRegistry @ 0x1C000ED04 (bReadUserSystemEUDCRegistry.c)
 *     bAddAllFlEntry @ 0x1C000F208 (bAddAllFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C028B33C (bWriteUserSystemEUDCRegistry.c)
 * Callees:
 *     IsRegNameEqual @ 0x1C028B000 (IsRegNameEqual.c)
 */

__int64 __fastcall bNotIsKeySymbolicLink(PCWSTR SourceString, PHANDLE KeyHandle, PHANDLE a3)
{
  unsigned int v3; // ebx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  v3 = 0;
  *KeyHandle = 0LL;
  *a3 = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(KeyHandle, 0xF003Fu, &ObjectAttributes) < 0 )
    return 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 832;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(a3, 0xF003Fu, &ObjectAttributes) < 0 )
    return 0LL;
  LOBYTE(v3) = (int)IsRegNameEqual(*KeyHandle, *a3) >= 0;
  return v3;
}

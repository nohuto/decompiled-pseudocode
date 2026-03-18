/*
 * XREFs of bDoubleDpi @ 0x1C0113480
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 */

__int64 __fastcall bDoubleDpi(int a1)
{
  int v1; // esi
  unsigned int v2; // ebx
  unsigned int *v4; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Length; // [rsp+90h] [rbp+20h] BYREF
  void *KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  v1 = 0;
  if ( !a1 )
    return 0;
  if ( !(unsigned int)UserIsConsoleConnection() )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"DoubleDpi");
  v2 = 1;
  Length = 48;
  v4 = (unsigned int *)PALLOCMEM2(0x30uLL, 1886221383LL, 1);
  if ( v4 )
  {
    if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, v4, Length, &Length) >= 0 )
      v1 = *(unsigned int *)((char *)v4 + v4[2]);
    Win32FreePool(v4);
  }
  ZwClose(KeyHandle);
  if ( v1 != 1 )
    return 0;
  return v2;
}

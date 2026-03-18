/*
 * XREFs of WinSqmIsOptedInEx @ 0x1C0068A00
 * Callers:
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C006825C (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     WinSqmIsOptedIn @ 0x1C00B25B0 (WinSqmIsOptedIn.c)
 *     DriverEntry @ 0x1C013B110 (DriverEntry.c)
 * Callees:
 *     ?ReadUlongFromKey@@YAJPEAXPEBGPEAK@Z @ 0x1C0068B40 (-ReadUlongFromKey@@YAJPEAXPEBGPEAK@Z.c)
 */

_BOOL8 __fastcall WinSqmIsOptedInEx(int a1)
{
  bool v1; // bl
  int v4; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v7; // [rsp+80h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+28h] BYREF
  void *KeyHandle; // [rsp+90h] [rbp+30h] BYREF

  KeyHandle = 0LL;
  v1 = 0;
  Handle = 0LL;
  v7 = 0;
  if ( a1 != 2 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\SQMClient\\Windows");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v4 = ReadUlongFromKey(KeyHandle, L"CEIPEnable", &v7);
      if ( v4 >= 0 )
      {
LABEL_16:
        v1 = v7 == 1;
        goto LABEL_9;
      }
      if ( v4 != -1073741772 )
      {
        v1 = 0;
        goto LABEL_9;
      }
    }
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\SQMClient\\Windows");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) < 0 )
      goto LABEL_9;
    if ( (int)ReadUlongFromKey(Handle, L"CEIPEnable", &v7) >= 0 )
      v1 = v7 == 1;
  }
  if ( (a1 & 3) != 0 && (v1 || a1 == 2) && (int)ReadUlongFromKey(Handle, L"CEIPSampledIn", &v7) >= 0 )
    goto LABEL_16;
LABEL_9:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return v1;
}

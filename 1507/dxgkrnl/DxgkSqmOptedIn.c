/*
 * XREFs of DxgkSqmOptedIn @ 0x1C000EA40
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C0025B74 (DpiMiracastTearDownAssociation.c)
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C00D85B4 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C01696F0 (DpiMiracastHandleStartSessionDone.c)
 *     DpiPdoSqmProtectedSession @ 0x1C0170AF0 (DpiPdoSqmProtectedSession.c)
 * Callees:
 *     ?ReadUlongFromKey@@YAJPEAXPEBGPEAK@Z @ 0x1C000EB70 (-ReadUlongFromKey@@YAJPEAXPEBGPEAK@Z.c)
 */

_BOOL8 DxgkSqmOptedIn()
{
  bool v0; // bl
  int v2; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v5; // [rsp+70h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+18h] BYREF
  void *KeyHandle; // [rsp+80h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  v5 = 0;
  v0 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\SQMClient\\Windows");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v2 = ReadUlongFromKey(KeyHandle, L"CEIPEnable", &v5);
    if ( v2 >= 0 )
    {
LABEL_11:
      v0 = v5 == 1;
      goto LABEL_6;
    }
    if ( v2 != -1073741772 )
      goto LABEL_12;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\SQMClient\\Windows");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 && (int)ReadUlongFromKey(Handle, L"CEIPEnable", &v5) >= 0 )
  {
    v0 = 1;
    if ( v5 == 1 )
    {
      if ( (int)ReadUlongFromKey(Handle, L"CEIPSampledIn", &v5) < 0 )
        goto LABEL_6;
      goto LABEL_11;
    }
LABEL_12:
    v0 = 0;
  }
LABEL_6:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return v0;
}

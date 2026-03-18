/*
 * XREFs of ?GetSymbolicLink@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C00E6F60
 * Callers:
 *     GetWindowsDirectoryDevicePath @ 0x1C00E6E38 (GetWindowsDirectoryDevicePath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSymbolicLink(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  WCHAR *v4; // rbx
  __int64 v5; // rdx
  NTSTATUS v6; // edi
  __int64 v7; // r8
  struct _UNICODE_STRING LinkTarget; // [rsp+20h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationStringa; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *LinkHandle; // [rsp+A0h] [rbp+30h] BYREF

  v4 = (WCHAR *)Win32AllocPool(520LL, 1651209045LL);
  if ( !v4 )
    return 3221225495LL;
  RtlInitUnicodeString(&DestinationStringa, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationStringa;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenSymbolicLinkObject(&LinkHandle, 0x80000000, &ObjectAttributes);
  if ( v6 >= 0 )
  {
    LinkTarget.Buffer = v4;
    *(_DWORD *)&LinkTarget.Length = 34078720;
    v6 = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
    ZwClose(LinkHandle);
    if ( v6 >= 0 )
      RtlCopyUnicodeString(DestinationString, &LinkTarget);
  }
  Win32FreePool(v4, v5, v7);
  return (unsigned int)v6;
}

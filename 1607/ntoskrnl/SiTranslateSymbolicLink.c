/*
 * XREFs of SiTranslateSymbolicLink @ 0x140542818
 * Callers:
 *     SiGetSystemPartition @ 0x140542570 (SiGetSystemPartition.c)
 *     SiGetFirmwareBootDeviceName @ 0x1405425BC (SiGetFirmwareBootDeviceName.c)
 *     SiGetSystemDisk @ 0x1406D60EC (SiGetSystemDisk.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x1406D6E38 (SiIsWinPeHardDiskZeroUfdBoot.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenSymbolicLinkObject @ 0x14015C5B0 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x14015CB50 (ZwQuerySymbolicLinkObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall SiTranslateSymbolicLink(PCWSTR SourceString, wchar_t **a2)
{
  NTSTATUS result; // eax
  unsigned __int16 v4; // di
  NTSTATUS v5; // ebx
  wchar_t *Buffer; // rax
  UNICODE_STRING LinkTarget; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ReturnedLength; // [rsp+A0h] [rbp+30h] BYREF
  HANDLE LinkHandle; // [rsp+A8h] [rbp+38h] BYREF

  LinkHandle = 0LL;
  LinkTarget.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&LinkTarget, 0LL);
    v4 = 0;
    ReturnedLength = 0;
    do
    {
      while ( 1 )
      {
        v5 = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, &ReturnedLength);
        if ( v5 == -1073741789 )
          break;
        ZwClose(LinkHandle);
        Buffer = LinkTarget.Buffer;
        LinkHandle = 0LL;
        if ( v5 < 0 )
          goto LABEL_16;
        LinkTarget.Buffer[(unsigned __int64)LinkTarget.Length >> 1] = 0;
        ObjectAttributes.ObjectName = &LinkTarget;
        LinkTarget.MaximumLength = v4;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes) < 0 )
        {
          Buffer = LinkTarget.Buffer;
          v5 = 0;
          *a2 = LinkTarget.Buffer;
          goto LABEL_7;
        }
      }
      if ( LinkTarget.Buffer )
        ExFreePoolWithTag(LinkTarget.Buffer, 0);
      LinkTarget.MaximumLength = ReturnedLength;
      v4 = ReturnedLength + 2;
      Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, ReturnedLength + 2, 0x4B505953u);
      LinkTarget.Buffer = Buffer;
    }
    while ( Buffer );
    v5 = -1073741670;
LABEL_7:
    if ( LinkHandle )
    {
      ZwClose(LinkHandle);
      Buffer = LinkTarget.Buffer;
      LinkHandle = 0LL;
    }
    if ( v5 < 0 )
    {
LABEL_16:
      if ( Buffer )
        ExFreePoolWithTag(Buffer, 0);
    }
    return v5;
  }
  return result;
}

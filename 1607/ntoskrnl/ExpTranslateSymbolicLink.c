/*
 * XREFs of ExpTranslateSymbolicLink @ 0x1406B31E0
 * Callers:
 *     ExpConvertArcName @ 0x1406B0088 (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x1406B023C (ExpConvertSignatureName.c)
 *     ExpFindArcName @ 0x1406B0998 (ExpFindArcName.c)
 *     ExpTranslateEfiPath @ 0x1406B28C4 (ExpTranslateEfiPath.c)
 *     ExpTranslateNtPath @ 0x1406B2F14 (ExpTranslateNtPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenSymbolicLinkObject @ 0x14015C5B0 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x14015CB50 (ZwQuerySymbolicLinkObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall ExpTranslateSymbolicLink(PCWSTR SourceString, UNICODE_STRING *a2)
{
  wchar_t *PoolWithTag; // rbx
  unsigned __int16 v4; // si
  NTSTATUS result; // eax
  NTSTATUS v6; // edi
  UNICODE_STRING LinkTarget; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ReturnedLength; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE LinkHandle; // [rsp+B8h] [rbp+48h] BYREF

  PoolWithTag = 0LL;
  v4 = 2;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        LinkTarget.Length = 0;
        LinkTarget.Buffer = PoolWithTag;
        LinkTarget.MaximumLength = v4 - 2;
        v6 = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, &ReturnedLength);
        if ( v6 != -1073741789 )
          break;
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        v4 = ReturnedLength + 2;
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, ReturnedLength + 2, 0x72766E45u);
        if ( !PoolWithTag )
        {
          ZwClose(LinkHandle);
          return -1073741670;
        }
      }
      ZwClose(LinkHandle);
      if ( v6 < 0 )
        break;
      PoolWithTag[(unsigned __int64)LinkTarget.Length >> 1] = 0;
      LinkTarget.MaximumLength = v4;
      RtlInitUnicodeString(&DestinationString, PoolWithTag);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes) < 0 )
      {
        result = 0;
        *a2 = LinkTarget;
        return result;
      }
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    return v6;
  }
  return result;
}

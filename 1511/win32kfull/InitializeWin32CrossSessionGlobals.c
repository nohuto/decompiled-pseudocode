/*
 * XREFs of InitializeWin32CrossSessionGlobals @ 0x1C0112740
 * Callers:
 *     <none>
 * Callees:
 *     Win32OpenSectionByHandle @ 0x1C01D3950 (Win32OpenSectionByHandle.c)
 *     ZwWin32CreateSectionRetainHandle @ 0x1C01D398C (ZwWin32CreateSectionRetainHandle.c)
 */

NTSTATUS InitializeWin32CrossSessionGlobals()
{
  int v0; // edx
  NTSTATUS SectionRetainHandle; // ebx
  __int64 v2; // r8
  int v4; // [rsp+28h] [rbp-11h]
  void *v5; // [rsp+38h] [rbp-1h]
  int v6; // [rsp+40h] [rbp+7h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+27h] BYREF
  void *SectionHandle; // [rsp+A0h] [rbp+67h] BYREF
  ULONG_PTR ViewSize; // [rsp+A8h] [rbp+6Fh] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\Win32kCrossSessionGlobals");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( gSessionId )
  {
    SectionRetainHandle = ZwOpenSection(&SectionHandle, 4u, &ObjectAttributes);
    if ( SectionRetainHandle < 0 )
      return SectionRetainHandle;
    SectionRetainHandle = Win32OpenSectionByHandle(SectionHandle, 983071LL, v2, &gxsSection);
    ZwClose(SectionHandle);
  }
  else
  {
    SectionHandle = (void *)48;
    SectionRetainHandle = ZwWin32CreateSectionRetainHandle(
                            (int)&gxsSection,
                            v0,
                            (int)&ObjectAttributes,
                            (int)&SectionHandle,
                            4u,
                            v4,
                            0LL,
                            v5,
                            v6,
                            &gxsSectionHandle);
  }
  if ( SectionRetainHandle >= 0 )
  {
    ViewSize = 48LL;
    return MmMapViewInSessionSpace(gxsSection, &gpxsGlobals, &ViewSize);
  }
  return SectionRetainHandle;
}

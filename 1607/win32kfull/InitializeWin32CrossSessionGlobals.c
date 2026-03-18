/*
 * XREFs of InitializeWin32CrossSessionGlobals @ 0x1C00BD290
 * Callers:
 *     <none>
 * Callees:
 *     ZwWin32CreateSectionRetainHandle @ 0x1C00BD120 (ZwWin32CreateSectionRetainHandle.c)
 *     ?rbc_InitializeFeatureStaging@@YAJXZ @ 0x1C01CBA80 (-rbc_InitializeFeatureStaging@@YAJXZ.c)
 */

NTSTATUS InitializeWin32CrossSessionGlobals()
{
  __int64 v0; // rdx
  NTSTATUS v1; // ebx
  int v3; // [rsp+28h] [rbp-11h]
  void *v4; // [rsp+38h] [rbp-1h]
  int v5; // [rsp+40h] [rbp+7h]
  int v6; // [rsp+50h] [rbp+17h] BYREF
  const wchar_t *v7; // [rsp+58h] [rbp+1Fh]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+27h] BYREF
  void *SectionHandle; // [rsp+A0h] [rbp+67h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+6Fh] BYREF
  ULONG_PTR ViewSize; // [rsp+B0h] [rbp+77h] BYREF

  v6 = 3538996;
  v7 = L"\\Win32kCrossSessionGlobals";
  rbc_InitializeFeatureStaging();
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v6;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 66112;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( gSessionId == gServiceSessionId )
  {
    SectionHandle = (void *)48;
    v1 = ZwWin32CreateSectionRetainHandle(
           &gxsSection,
           v0,
           &ObjectAttributes,
           (union _LARGE_INTEGER *)&SectionHandle,
           4u,
           v3,
           0LL,
           v4,
           v5,
           &gxsSectionHandle);
  }
  else
  {
    v1 = ZwOpenSection(&SectionHandle, 4u, &ObjectAttributes);
    if ( v1 < 0 )
      return v1;
    v1 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    gxsSection = Object;
    ZwClose(SectionHandle);
  }
  if ( v1 >= 0 )
  {
    ViewSize = 48LL;
    return MmMapViewInSessionSpace(gxsSection, &gpxsGlobals, &ViewSize);
  }
  return v1;
}

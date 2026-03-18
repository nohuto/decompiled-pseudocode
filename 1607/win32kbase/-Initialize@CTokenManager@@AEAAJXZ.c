/*
 * XREFs of ?Initialize@CTokenManager@@AEAAJXZ @ 0x1C001A9E4
 * Callers:
 *     InitializeGre @ 0x1C0154000 (InitializeGre.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTokenManager::Initialize(CTokenManager *this)
{
  NTSTATUS v2; // ebx
  NTSTATUS v3; // eax
  PVOID v4; // rcx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *SectionHandle; // [rsp+98h] [rbp+28h] BYREF
  union _LARGE_INTEGER MaximumSize; // [rsp+A0h] [rbp+30h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+38h] BYREF

  SectionHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  MaximumSize.QuadPart = 4096LL;
  v2 = ZwCreateSection(&SectionHandle, 6u, &ObjectAttributes, &MaximumSize, 4u, 0x8400000u, 0LL);
  if ( v2 >= 0 )
  {
    v3 = ObReferenceObjectByHandle(SectionHandle, 0xC0000000, MmSectionObjectType, 0, &Object, 0LL);
    v4 = Object;
    v2 = v3;
    *((_QWORD *)this + 1) = Object;
    if ( v3 >= 0 )
    {
      Object = 0LL;
      v2 = MmMapViewInSessionSpace(v4, (PVOID *)this + 2, (PSIZE_T)&Object);
      if ( v2 >= 0 )
      {
        *((_QWORD *)this + 3) = 4096LL;
        v2 = ZwCreateEvent((PHANDLE)this + 4, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
        if ( v2 >= 0 )
          v2 = ZwCreateEvent((PHANDLE)this + 5, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
      }
    }
    ObCloseHandle(SectionHandle, 0);
  }
  return (unsigned int)v2;
}

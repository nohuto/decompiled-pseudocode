/*
 * XREFs of SmCreateEvent @ 0x140545D88
 * Callers:
 *     SmRegistrationCtxStart @ 0x140545D38 (SmRegistrationCtxStart.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwCreateEvent @ 0x140150F20 (ZwCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall SmCreateEvent(__int64 a1, PVOID *a2)
{
  NTSTATUS v3; // ebx
  NTSTATUS v4; // eax
  PVOID v5; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE EventHandle; // [rsp+80h] [rbp+20h] BYREF
  PVOID Object; // [rsp+88h] [rbp+28h] BYREF

  EventHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
  if ( v3 >= 0 )
  {
    v4 = ObReferenceObjectByHandle(EventHandle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v5 = Object;
    v3 = v4;
    if ( v4 >= 0 )
    {
      *a2 = Object;
      v5 = 0LL;
      v3 = 0;
    }
    if ( v5 )
      ObfDereferenceObject(v5);
  }
  if ( EventHandle )
    ZwClose(EventHandle);
  return (unsigned int)v3;
}

/*
 * XREFs of IoCreateSynchronizationEvent @ 0x14062380C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ZwCreateEvent @ 0x14015AAF0 (ZwCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 */

PKEVENT __stdcall IoCreateSynchronizationEvent(PUNICODE_STRING EventName, PHANDLE EventHandle)
{
  PKEVENT result; // rax
  OBJECT_ATTRIBUTES v4; // [rsp+30h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+8h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  v4.RootDirectory = 0LL;
  v4.ObjectName = EventName;
  v4.Length = 48;
  v4.Attributes = 640;
  *(_OWORD *)&v4.SecurityDescriptor = 0LL;
  if ( ZwCreateEvent(&Handle, 0x1F0003u, &v4, SynchronizationEvent, 1u) < 0 )
    return 0LL;
  ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  ObfDereferenceObject(Object);
  result = (PKEVENT)Object;
  *EventHandle = Handle;
  return result;
}

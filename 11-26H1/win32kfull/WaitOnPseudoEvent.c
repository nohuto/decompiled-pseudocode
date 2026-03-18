/*
 * XREFs of WaitOnPseudoEvent @ 0x140229124
 * Callers:
 *     xxxWaitForInputIdle @ 0x14022D64C (xxxWaitForInputIdle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WaitOnPseudoEvent(PVOID *a1, int a2)
{
  char *v2; // rax
  NTSTATUS v5; // ebx
  unsigned int v6; // ecx
  __int64 result; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *EventHandle; // [rsp+70h] [rbp+10h] BYREF
  PVOID Object; // [rsp+80h] [rbp+20h] BYREF

  v2 = (char *)*a1;
  EventHandle = 0LL;
  if ( v2 )
    return v2 + 1 != 0LL ? 0x80 : 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0) < 0 )
  {
    result = 0xFFFFFFFFLL;
    if ( a2 != -1 )
      return 258LL;
  }
  else
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(EventHandle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    *a1 = Object;
    ZwClose(EventHandle);
    v6 = 128;
    if ( v5 < 0 )
      return (unsigned int)-1;
    return v6;
  }
  return result;
}

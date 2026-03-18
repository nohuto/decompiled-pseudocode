/*
 * XREFs of WaitOnPseudoEvent @ 0x1C00E2AB0
 * Callers:
 *     xxxWaitForInputIdle @ 0x1C00E296C (xxxWaitForInputIdle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WaitOnPseudoEvent(PVOID *a1, int a2)
{
  NTSTATUS v4; // ebx
  __int64 result; // rax
  struct _OBJECT_ATTRIBUTES v6; // [rsp+30h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+8h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  if ( *a1 )
  {
    if ( *a1 != (PVOID)-1LL )
      return 128LL;
    return 0LL;
  }
  else
  {
    v6.Length = 48;
    v6.RootDirectory = 0LL;
    v6.Attributes = 512;
    v6.ObjectName = 0LL;
    *(_OWORD *)&v6.SecurityDescriptor = 0LL;
    if ( ZwCreateEvent(&Handle, 0x1F0003u, &v6, NotificationEvent, 0) < 0 )
    {
      result = 0xFFFFFFFFLL;
      if ( a2 != -1 )
        return 258LL;
    }
    else
    {
      v4 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
      *a1 = Object;
      ZwClose(Handle);
      if ( v4 >= 0 )
        return 128LL;
      return 0xFFFFFFFFLL;
    }
  }
  return result;
}

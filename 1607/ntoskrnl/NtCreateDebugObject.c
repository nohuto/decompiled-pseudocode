/*
 * XREFs of NtCreateDebugObject @ 0x1406196B0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 */

NTSTATUS __stdcall NtCreateDebugObject(
        PHANDLE DebugHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Flags)
{
  char v4; // si
  PHANDLE v6; // rdi
  char PreviousMode; // r10
  NTSTATUS result; // eax
  PRKEVENT v9; // rbx
  PRKEVENT Event; // [rsp+58h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-28h] BYREF

  v4 = Flags;
  v6 = DebugHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)DebugHandle >= 0x7FFFFFFF0000LL )
      DebugHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *DebugHandle = *DebugHandle;
  }
  *v6 = 0LL;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  result = ObCreateObject(
             PreviousMode,
             DbgkDebugObjectType,
             (__int64)ObjectAttributes,
             PreviousMode,
             0,
             104,
             0,
             0,
             &Event);
  if ( result >= 0 )
  {
    v9 = Event;
    Event[1].Header.LockNV = 1;
    v9[1].Header.WaitListHead.Flink = 0LL;
    LODWORD(v9[1].Header.WaitListHead.Blink) = 0;
    KeInitializeEvent(v9 + 2, SynchronizationEvent, 0);
    v9[3].Header.WaitListHead.Blink = &v9[3].Header.WaitListHead;
    v9[3].Header.WaitListHead.Flink = &v9[3].Header.WaitListHead;
    KeInitializeEvent(v9, NotificationEvent, 0);
    if ( (v4 & 1) != 0 )
      v9[4].Header.LockNV = 2;
    else
      v9[4].Header.LockNV = 0;
    if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
      v9[4].Header.LockNV |= 4u;
    result = ObInsertObject(Event, 0LL, DesiredAccess, 0, 0LL, &Handle);
    if ( result >= 0 )
      *v6 = Handle;
  }
  return result;
}

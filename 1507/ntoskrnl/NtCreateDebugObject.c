/*
 * XREFs of NtCreateDebugObject @ 0x140668404
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
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
  PRKEVENT Event; // [rsp+58h] [rbp-30h]
  HANDLE Handle; // [rsp+60h] [rbp-28h] BYREF

  v4 = Flags;
  v6 = DebugHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)DebugHandle >= MmUserProbeAddress )
      DebugHandle = (PHANDLE)MmUserProbeAddress;
    *DebugHandle = *DebugHandle;
  }
  *v6 = 0LL;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  LOBYTE(Flags) = PreviousMode;
  LOBYTE(DebugHandle) = PreviousMode;
  result = ObCreateObject((int)DebugHandle, (int)DbgkDebugObjectType, (int)ObjectAttributes, Flags);
  if ( result >= 0 )
  {
    Event[1].Header.LockNV = 1;
    Event[1].Header.WaitListHead.Flink = 0LL;
    LODWORD(Event[1].Header.WaitListHead.Blink) = 0;
    KeInitializeEvent(Event + 2, SynchronizationEvent, 0);
    Event[3].Header.WaitListHead.Blink = &Event[3].Header.WaitListHead;
    Event[3].Header.WaitListHead.Flink = &Event[3].Header.WaitListHead;
    KeInitializeEvent(Event, NotificationEvent, 0);
    if ( (v4 & 1) != 0 )
      Event[4].Header.LockNV = 2;
    else
      Event[4].Header.LockNV = 0;
    if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
      Event[4].Header.LockNV |= 4u;
    result = ObInsertObject(Event, 0LL, DesiredAccess, 0, 0LL, &Handle);
    if ( result >= 0 )
      *v6 = Handle;
  }
  return result;
}

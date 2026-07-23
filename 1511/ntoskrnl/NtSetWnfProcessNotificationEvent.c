/*
 * XREFs of NtSetWnfProcessNotificationEvent @ 0x1404B2B4C
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ExpWnfCreateProcessContext @ 0x1404B2C08 (ExpWnfCreateProcessContext.c)
 */

NTSTATUS __cdecl NtSetWnfProcessNotificationEvent(HANDLE NotificationEvent)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rcx
  struct _LIST_ENTRY *v4; // rdi
  int v5; // ebx
  struct _LIST_ENTRY *Flink; // [rsp+48h] [rbp+10h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Process = KeGetCurrentThread()->ApcState.Process;
  Flink = Process[2].ReadyListHead.Flink;
  v4 = Flink;
  if ( !Flink )
  {
    v5 = ExpWnfCreateProcessContext(Process, &Flink);
    if ( v5 < 0 )
      goto LABEL_5;
    v4 = Flink;
  }
  v5 = ObReferenceObjectByHandle(NotificationEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  if ( v5 >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v4[8], (signed __int64)Object, 0LL) )
    {
      ObfDereferenceObject(Object);
      v5 = -1073740008;
    }
    else
    {
      v5 = 0;
    }
  }
LABEL_5:
  KeLeaveCriticalRegion();
  return v5;
}

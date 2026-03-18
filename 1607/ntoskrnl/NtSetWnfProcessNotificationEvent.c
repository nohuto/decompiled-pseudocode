/*
 * XREFs of NtSetWnfProcessNotificationEvent @ 0x1404D7F74
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     ExpWnfCreateProcessContext @ 0x1404D8030 (ExpWnfCreateProcessContext.c)
 */

__int64 __fastcall NtSetWnfProcessNotificationEvent(HANDLE Handle)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rcx
  struct _SINGLE_LIST_ENTRY *v4; // rdi
  NTSTATUS v5; // ebx
  struct _SINGLE_LIST_ENTRY *Next; // [rsp+48h] [rbp+10h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Process = KeGetCurrentThread()->ApcState.Process;
  Next = Process[2].SwapListEntry.Next;
  v4 = Next;
  if ( !Next )
  {
    v5 = ExpWnfCreateProcessContext(Process, &Next);
    if ( v5 < 0 )
      goto LABEL_5;
    v4 = Next;
  }
  v5 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  if ( v5 >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v4[16], (signed __int64)Object, 0LL) )
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
  return (unsigned int)v5;
}

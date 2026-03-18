/*
 * XREFs of IopCreatePassiveInterruptRealtimeThreads @ 0x140545E4C
 * Callers:
 *     IopInitializePassiveInterruptServices @ 0x14076E2E0 (IopInitializePassiveInterruptServices.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThread @ 0x1404D20DC (PsCreateSystemThread.c)
 */

NTSTATUS __fastcall IopCreatePassiveInterruptRealtimeThreads(void *a1, void *a2)
{
  int v2; // edi
  NTSTATUS result; // eax
  NTSTATUS v4; // ebx
  __int64 v5; // r8
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  PVOID Object; // [rsp+80h] [rbp+8h] BYREF
  HANDLE ThreadHandle; // [rsp+88h] [rbp+10h] BYREF

  ThreadHandle = a2;
  Object = a1;
  ObjectAttributes.RootDirectory = 0LL;
  v2 = 0;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( !PassiveInterruptRealtimeWorkerCount )
    return 0;
  while ( 1 )
  {
    result = PsCreateSystemThread(
               &ThreadHandle,
               0x1FFFFFu,
               &ObjectAttributes,
               0LL,
               0LL,
               (PKSTART_ROUTINE)IopPassiveInterruptRealtimeWorker,
               &PassiveInterruptRealtimeWorkQueue);
    if ( result < 0 )
      break;
    v4 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    ZwClose(ThreadHandle);
    if ( v4 >= 0 )
    {
      KeSetActualBasePriorityThread((__int64)Object, (unsigned __int8)PassiveInterruptRealtimeWorkerPriority, v5);
      ObfDereferenceObject(Object);
    }
    if ( ++v2 >= (unsigned int)(unsigned __int8)PassiveInterruptRealtimeWorkerCount )
      return 0;
  }
  return result;
}

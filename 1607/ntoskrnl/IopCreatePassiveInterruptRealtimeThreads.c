/*
 * XREFs of IopCreatePassiveInterruptRealtimeThreads @ 0x14057A718
 * Callers:
 *     IopInitializePassiveInterruptServices @ 0x1407B80E0 (IopInitializePassiveInterruptServices.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     KeSetActualBasePriorityThread @ 0x1400D2840 (KeSetActualBasePriorityThread.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     PsCreateSystemThread @ 0x1403E4710 (PsCreateSystemThread.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall IopCreatePassiveInterruptRealtimeThreads(void *a1, void *a2)
{
  int v2; // edi
  NTSTATUS result; // eax
  NTSTATUS v4; // ebx
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
      KeSetActualBasePriorityThread((__int64)Object, (unsigned __int8)PassiveInterruptRealtimeWorkerPriority);
      ObfDereferenceObject(Object);
    }
    if ( ++v2 >= (unsigned int)(unsigned __int8)PassiveInterruptRealtimeWorkerCount )
      return 0;
  }
  return result;
}

/*
 * XREFs of NtTerminateThread @ 0x1404EB8E8
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     PspTerminateThreadByPointer @ 0x1404EC9C0 (PspTerminateThreadByPointer.c)
 */

NTSTATUS __stdcall NtTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  __int64 v2; // r8
  struct _KTHREAD *CurrentThread; // rsi
  NTSTATUS v4; // edi
  NTSTATUS result; // eax
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  if ( ThreadHandle )
  {
    if ( ThreadHandle != (HANDLE)-2LL )
    {
      result = ObReferenceObjectByHandle(
                 ThreadHandle,
                 1u,
                 (POBJECT_TYPE)PsThreadType,
                 CurrentThread->PreviousMode,
                 &Object,
                 0LL);
      v4 = result;
      if ( result < 0 )
        return result;
      if ( Object != CurrentThread )
      {
        v4 = PspTerminateThreadByPointer(Object, (unsigned int)ExitStatus, 0LL);
        ObfDereferenceObject(Object);
        return v4;
      }
      ObfDereferenceObject(Object);
    }
  }
  else if ( CurrentThread->ApcState.Process[1].ThreadSeed[0] == 1 )
  {
    return -1073741605;
  }
  LOBYTE(v2) = 1;
  PspTerminateThreadByPointer(CurrentThread, (unsigned int)ExitStatus, v2);
  return v4;
}

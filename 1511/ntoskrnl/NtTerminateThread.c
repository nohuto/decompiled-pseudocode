/*
 * XREFs of NtTerminateThread @ 0x1404AF3BC
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PspTerminateThreadByPointer @ 0x1403F2F24 (PspTerminateThreadByPointer.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  struct _KTHREAD *CurrentThread; // rsi
  NTSTATUS v3; // edi
  NTSTATUS result; // eax
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
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
      v3 = result;
      if ( result < 0 )
        return result;
      if ( Object != CurrentThread )
      {
        v3 = PspTerminateThreadByPointer((ULONG_PTR)Object, ExitStatus, 0);
        ObfDereferenceObject(Object);
        return v3;
      }
      ObfDereferenceObject(Object);
    }
  }
  else if ( CurrentThread->ApcState.Process[1].ThreadSeed[0] == 1 )
  {
    return -1073741605;
  }
  PspTerminateThreadByPointer((ULONG_PTR)CurrentThread, ExitStatus, 1);
  return v3;
}

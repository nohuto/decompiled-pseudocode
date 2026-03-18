/*
 * XREFs of NtTerminateThread @ 0x140420500
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PspTerminateThreadByPointer @ 0x1404205B0 (PspTerminateThreadByPointer.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
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
        v3 = PspTerminateThreadByPointer((ULONG_PTR)Object);
        ObfDereferenceObject(Object);
        return v3;
      }
      ObfDereferenceObject(Object);
    }
  }
  else if ( *(_DWORD *)&CurrentThread->ApcState.Process[1].0 == 1 )
  {
    return -1073741605;
  }
  PspTerminateThreadByPointer((ULONG_PTR)CurrentThread);
  return v3;
}

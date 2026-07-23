/*
 * XREFs of NtAlertThreadByThreadId @ 0x140511594
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAlertThreadByThreadId @ 0x1400F33C0 (KeAlertThreadByThreadId.c)
 *     PsLookupThreadByThreadId @ 0x1405115F0 (PsLookupThreadByThreadId.c)
 */

NTSTATUS __cdecl NtAlertThreadByThreadId(HANDLE ThreadId)
{
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS result; // eax
  NTSTATUS v3; // edi
  _KPROCESS *Process; // rax
  PETHREAD v5; // rbx
  PETHREAD Thread; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  result = PsLookupThreadByThreadId(ThreadId, &Thread);
  v3 = 0;
  if ( result >= 0 )
  {
    Process = CurrentThread->Process;
    v5 = Thread;
    if ( Thread->Process == Process )
      KeAlertThreadByThreadId((__int64)Thread);
    else
      v3 = -1073741790;
    ObfDereferenceObject(v5);
    return v3;
  }
  return result;
}

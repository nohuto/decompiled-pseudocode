/*
 * XREFs of IsThreadCrossSessionAttached @ 0x1401405E0
 * Callers:
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400F79BC (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsThreadCrossSessionAttached()
{
  __int64 v0; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  if ( !(unsigned __int8)KeIsAttachedProcess() )
    return 0LL;
  CurrentProcess = PsGetCurrentProcess(v0);
  ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  return ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess);
}

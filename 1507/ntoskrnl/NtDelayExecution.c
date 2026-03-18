/*
 * XREFs of NtDelayExecution @ 0x1404FD770
 * Callers:
 *     LdrpInitMuiCrits @ 0x14002A838 (LdrpInitMuiCrits.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtDelayExecution(BOOLEAN Alertable, LARGE_INTEGER *Interval)
{
  KPROCESSOR_MODE PreviousMode; // cl
  LARGE_INTEGER Intervala; // [rsp+40h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)Interval & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    Intervala = *Interval;
  }
  else
  {
    Intervala = *Interval;
  }
  return KeDelayExecutionThread(PreviousMode, Alertable, &Intervala);
}

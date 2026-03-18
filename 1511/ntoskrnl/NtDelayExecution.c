/*
 * XREFs of NtDelayExecution @ 0x1403EFB60
 * Callers:
 *     LdrpInitMuiCrits @ 0x1400DE030 (LdrpInitMuiCrits.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
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

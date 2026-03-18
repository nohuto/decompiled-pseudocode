/*
 * XREFs of PsGetThreadExitStatus @ 0x14051B9A8
 * Callers:
 *     NtQueryInformationThread @ 0x140519650 (NtQueryInformationThread.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 */

NTSTATUS __stdcall PsGetThreadExitStatus(PETHREAD Thread)
{
  struct _EX_RUNDOWN_REF *p_WaitStatus; // rdi

  p_WaitStatus = (struct _EX_RUNDOWN_REF *)&Thread[1].WaitStatus;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
    return (NTSTATUS)Thread[1].Timer.Header.WaitListHead.Blink;
  ExReleaseRundownProtection(p_WaitStatus);
  return 259;
}

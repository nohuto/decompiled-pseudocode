/*
 * XREFs of PsGetThreadExitStatus @ 0x1406BF48C
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 */

NTSTATUS __stdcall PsGetThreadExitStatus(PETHREAD Thread)
{
  struct _EX_RUNDOWN_REF *p_WaitStatus; // rbx
  unsigned __int64 v3; // rtt
  unsigned __int64 v5; // rtt

  p_WaitStatus = (struct _EX_RUNDOWN_REF *)&Thread[1].WaitStatus;
  _m_prefetchw((const void *)&Thread[1].WaitStatus);
  v3 = Thread[1].WaitStatus & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v3 != _InterlockedCompareExchange64(&Thread[1].WaitStatus, v3 + 2, v3)
    && !ExfAcquireRundownProtection((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
  {
    return (NTSTATUS)Thread[1].Timer.Header.WaitListHead.Flink;
  }
  _m_prefetchw(p_WaitStatus);
  v5 = p_WaitStatus->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v5 != _InterlockedCompareExchange64((volatile signed __int64 *)p_WaitStatus, v5 - 2, v5) )
    ExfReleaseRundownProtection(p_WaitStatus);
  return 259;
}

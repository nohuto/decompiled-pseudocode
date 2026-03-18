/*
 * XREFs of NtQueryPerformanceCounter @ 0x14052E2C0
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryPerformanceCounter(PLARGE_INTEGER Counter, PLARGE_INTEGER Frequency)
{
  PLARGE_INTEGER v3; // rdi
  _BYTE *v4; // rcx
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+18h] BYREF

  v3 = Counter;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((unsigned __int8)Counter & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)Counter >= MmUserProbeAddress )
      Counter = (PLARGE_INTEGER)MmUserProbeAddress;
    LOBYTE(Counter->LowPart) = Counter->LowPart;
    HIBYTE(Counter->QuadPart) = HIBYTE(Counter->QuadPart);
    if ( Frequency )
    {
      if ( ((unsigned __int8)Frequency & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v4 = Frequency;
      if ( (unsigned __int64)Frequency >= MmUserProbeAddress )
        v4 = (_BYTE *)MmUserProbeAddress;
      *v4 = *v4;
      v4[7] = v4[7];
    }
    *v3 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( Frequency )
      *Frequency = PerformanceFrequency;
  }
  else
  {
    *Counter = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( Frequency )
      *Frequency = PerformanceFrequency;
  }
  return 0;
}

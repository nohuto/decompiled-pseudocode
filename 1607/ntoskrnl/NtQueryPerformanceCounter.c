/*
 * XREFs of NtQueryPerformanceCounter @ 0x1404AA6AC
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryPerformanceCounter(PLARGE_INTEGER Counter, PLARGE_INTEGER Frequency)
{
  PLARGE_INTEGER v3; // rdi
  __int64 v4; // rcx
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+18h] BYREF

  v3 = Counter;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((unsigned __int8)Counter & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)Counter >= 0x7FFFFFFF0000LL )
      Counter = (PLARGE_INTEGER)0x7FFFFFFF0000LL;
    LOBYTE(Counter->LowPart) = Counter->LowPart;
    HIBYTE(Counter->QuadPart) = HIBYTE(Counter->QuadPart);
    if ( Frequency )
    {
      if ( ((unsigned __int8)Frequency & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v4 = (__int64)Frequency;
      if ( (unsigned __int64)Frequency >= 0x7FFFFFFF0000LL )
        v4 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v4 = *(_BYTE *)v4;
      *(_BYTE *)(v4 + 7) = *(_BYTE *)(v4 + 7);
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

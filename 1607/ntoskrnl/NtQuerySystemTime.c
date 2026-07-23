/*
 * XREFs of NtQuerySystemTime @ 0x1406AD1D0
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQuerySystemTime(PLARGE_INTEGER CurrentTime)
{
  PLARGE_INTEGER v1; // r8

  v1 = CurrentTime;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((unsigned __int8)CurrentTime & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)CurrentTime >= 0x7FFFFFFF0000LL )
      CurrentTime = (PLARGE_INTEGER)0x7FFFFFFF0000LL;
    LOBYTE(CurrentTime->LowPart) = CurrentTime->LowPart;
    HIBYTE(CurrentTime->QuadPart) = HIBYTE(CurrentTime->QuadPart);
    v1->QuadPart = MEMORY[0xFFFFF78000000014];
  }
  else
  {
    CurrentTime->QuadPart = MEMORY[0xFFFFF78000000014];
  }
  return 0;
}

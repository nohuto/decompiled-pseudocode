/*
 * XREFs of NtQuerySystemTime @ 0x1406EDCD0
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQuerySystemTime(PLARGE_INTEGER CurrentTime)
{
  PLARGE_INTEGER v1; // r8

  v1 = CurrentTime;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((unsigned __int8)CurrentTime & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)CurrentTime >= MmUserProbeAddress )
      CurrentTime = (PLARGE_INTEGER)MmUserProbeAddress;
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

/*
 * XREFs of NtWaitForAlertByThreadId @ 0x140524314
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForAlertByThreadId @ 0x14010BF10 (KeWaitForAlertByThreadId.c)
 */

NTSTATUS __cdecl NtWaitForAlertByThreadId(PVOID Address, PLARGE_INTEGER Timeout)
{
  char PreviousMode; // cl
  LONGLONG QuadPart; // [rsp+40h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( Timeout && PreviousMode )
  {
    if ( (unsigned __int64)Timeout >= MmUserProbeAddress )
      Timeout = (PLARGE_INTEGER)MmUserProbeAddress;
    QuadPart = Timeout->QuadPart;
    Timeout = (PLARGE_INTEGER)&QuadPart;
  }
  return KeWaitForAlertByThreadId(PreviousMode, (__int64)Timeout, Address);
}

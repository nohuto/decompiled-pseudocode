/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x1401F0C90
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     InbvReleaseResources @ 0x14015EED4 (InbvReleaseResources.c)
 *     InbvAcquireLock @ 0x1401F0A4C (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x1401F0A90 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x1401F0ADC (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x1401F0B48 (InbvReleaseLock.c)
 *     RotBarUpdate @ 0x1401F0DC4 (RotBarUpdate.c)
 */

void __fastcall InbvRotateGuiBootDisplay(PVOID StartContext)
{
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -800000LL;
  do
  {
    KeDelayExecutionThread(0, 0, &Interval);
    InbvAcquireLock();
    if ( !(unsigned int)InbvGetDisplayState() && RotBarSelection == 1 )
      RotBarUpdate();
    InbvReleaseLock();
  }
  while ( InbvCheckDisplayOwnership() );
  InbvReleaseResources();
  PsTerminateSystemThread(0);
}

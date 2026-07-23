/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x1401C3748
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     InbvReleaseResources @ 0x14013CC20 (InbvReleaseResources.c)
 *     InbvAcquireLock @ 0x1401C3504 (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x1401C3548 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x1401C3594 (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x1401C3600 (InbvReleaseLock.c)
 *     RotBarUpdate @ 0x1401C387C (RotBarUpdate.c)
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

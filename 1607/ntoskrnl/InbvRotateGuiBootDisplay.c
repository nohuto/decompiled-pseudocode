/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x1401C3864
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1400D0580 (KeDelayExecutionThread.c)
 *     InbvReleaseResources @ 0x14013C6B0 (InbvReleaseResources.c)
 *     InbvAcquireLock @ 0x1401C3620 (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x1401C3664 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x1401C36B0 (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x1401C371C (InbvReleaseLock.c)
 *     RotBarUpdate @ 0x1401C3998 (RotBarUpdate.c)
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

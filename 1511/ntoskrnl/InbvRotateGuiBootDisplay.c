/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x1401B5D7C
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     InbvReleaseResources @ 0x14013451C (InbvReleaseResources.c)
 *     InbvAcquireLock @ 0x1401B5B38 (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x1401B5B7C (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x1401B5BC8 (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x1401B5C34 (InbvReleaseLock.c)
 *     RotBarUpdate @ 0x1401B5EB0 (RotBarUpdate.c)
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

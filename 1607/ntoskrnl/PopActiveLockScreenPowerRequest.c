/*
 * XREFs of PopActiveLockScreenPowerRequest @ 0x140674910
 * Callers:
 *     <none>
 * Callees:
 *     PopGetLockConsoleTimeoutUnsafe @ 0x1403E2B18 (PopGetLockConsoleTimeoutUnsafe.c)
 *     PopAcquireAdaptiveLock @ 0x1404EF160 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1404EFF44 (PopReleaseAdaptiveLock.c)
 *     PopUpdateTimeouts @ 0x14052E3B0 (PopUpdateTimeouts.c)
 */

__int64 __fastcall PopActiveLockScreenPowerRequest(char a1)
{
  int LockConsoleTimeoutUnsafe; // eax
  int v4; // [rsp+40h] [rbp+18h] BYREF
  int v5; // [rsp+44h] [rbp+1Ch]

  v4 = 0;
  v5 = 0;
  PopAcquireAdaptiveLock(0);
  if ( a1 )
  {
    byte_1403023D5 = 1;
    if ( byte_1403023D6 )
    {
      LockConsoleTimeoutUnsafe = PopDisplayTimeout;
      v4 = PopDisplayTimeout;
      byte_1403023D6 = 0;
      goto LABEL_7;
    }
  }
  else
  {
    byte_1403023D5 = 0;
    LockConsoleTimeoutUnsafe = PopGetLockConsoleTimeoutUnsafe();
    v4 = LockConsoleTimeoutUnsafe;
    if ( LockConsoleTimeoutUnsafe && byte_1403023D4 )
    {
      byte_1403023D6 = 1;
LABEL_7:
      HIDWORD(PopLazyContext) = LockConsoleTimeoutUnsafe;
      BYTE1(qword_140302410) = 1;
      PopUpdateTimeouts(PopConsoleContext, (unsigned int *)&v4, 0LL);
    }
  }
  PopReleaseAdaptiveLock();
  return 0LL;
}

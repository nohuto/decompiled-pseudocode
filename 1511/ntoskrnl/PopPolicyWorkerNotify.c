/*
 * XREFs of PopPolicyWorkerNotify @ 0x140456CA4
 * Callers:
 *     PopPolicyWorkerThread @ 0x14009934C (PopPolicyWorkerThread.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     KeAreApcsDisabled @ 0x140099410 (KeAreApcsDisabled.c)
 */

__int64 PopPolicyWorkerNotify()
{
  unsigned int v0; // ebx
  unsigned int v1; // eax
  __int64 (__fastcall **v2)(); // rcx
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    v0 = _InterlockedExchange(&PopNotifyEvents, 0);
    if ( !v0 )
      break;
    do
    {
      _BitScanForward(&v1, v0);
      v0 &= ~(1 << v1);
      v2 = &PopNotifyWork + 2 * v1;
      if ( *v2 )
      {
        ((void (__fastcall *)(_QWORD))*v2)(*((unsigned int *)v2 + 2));
        if ( KeAreApcsDisabled() )
          __fastfail(0x20u);
      }
    }
    while ( v0 );
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return 0LL;
}

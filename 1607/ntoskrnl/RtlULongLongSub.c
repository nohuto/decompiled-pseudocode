/*
 * XREFs of RtlULongLongSub @ 0x1400C2ED4
 * Callers:
 *     LdrpResSearchResourceInsideDirectory @ 0x1404A6230 (LdrpResSearchResourceInsideDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongSub(ULONGLONG ullMinuend, ULONGLONG ullSubtrahend, ULONGLONG *pullResult)
{
  if ( ullMinuend < ullSubtrahend )
  {
    *pullResult = -1LL;
    return -1073741675;
  }
  else
  {
    *pullResult = ullMinuend - ullSubtrahend;
    return 0;
  }
}

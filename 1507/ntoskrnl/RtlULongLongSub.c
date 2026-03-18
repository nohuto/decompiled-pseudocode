/*
 * XREFs of RtlULongLongSub @ 0x14002AB4C
 * Callers:
 *     LdrpResSearchResourceInsideDirectory @ 0x14046410C (LdrpResSearchResourceInsideDirectory.c)
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

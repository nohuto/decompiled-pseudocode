/*
 * XREFs of RtlULongLongSub @ 0x1400DC7B4
 * Callers:
 *     LdrpResSearchResourceInsideDirectory @ 0x140465BDC (LdrpResSearchResourceInsideDirectory.c)
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

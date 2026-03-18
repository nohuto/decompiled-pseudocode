/*
 * XREFs of ULongLongSub @ 0x1C0279204
 * Callers:
 *     EngCopyBits @ 0x1C0040D90 (EngCopyBits.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall ULongLongSub(ULONGLONG ullMinuend, ULONGLONG ullSubtrahend, ULONGLONG *pullResult)
{
  if ( ullMinuend < ullSubtrahend )
  {
    *pullResult = -1LL;
    return -2147024362;
  }
  else
  {
    *pullResult = ullMinuend - ullSubtrahend;
    return 0;
  }
}

/*
 * XREFs of _ReleaseDC @ 0x1C0035790
 * Callers:
 *     UserGetMonitorDC @ 0x1C0053DE0 (UserGetMonitorDC.c)
 * Callees:
 *     ReleaseCacheDC @ 0x1C00357B0 (ReleaseCacheDC.c)
 */

_BOOL8 __fastcall ReleaseDC(__int64 a1)
{
  return (unsigned int)ReleaseCacheDC(a1, 0LL) != 2;
}

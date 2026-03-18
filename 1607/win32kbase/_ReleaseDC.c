/*
 * XREFs of _ReleaseDC @ 0x1C0021290
 * Callers:
 *     UserGetMonitorDC @ 0x1C0054ECC (UserGetMonitorDC.c)
 * Callees:
 *     ReleaseCacheDC @ 0x1C0024AF0 (ReleaseCacheDC.c)
 */

_BOOL8 __fastcall ReleaseDC(__int64 a1)
{
  return (unsigned int)ReleaseCacheDC(a1, 0LL) != 2;
}

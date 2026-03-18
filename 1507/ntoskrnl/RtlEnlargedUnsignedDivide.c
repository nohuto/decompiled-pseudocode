/*
 * XREFs of RtlEnlargedUnsignedDivide @ 0x14014D994
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x1403F283C (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlEnlargedUnsignedDivide(ULARGE_INTEGER Dividend, ULONG Divisor, PULONG Remainder)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx

  v3 = Dividend.QuadPart / 0x989680;
  v4 = Dividend.QuadPart % 0x989680;
  if ( Remainder )
    *Remainder = v4;
  return v3;
}

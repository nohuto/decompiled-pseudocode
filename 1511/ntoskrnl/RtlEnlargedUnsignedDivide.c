/*
 * XREFs of RtlEnlargedUnsignedDivide @ 0x140118D58
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x14039FC48 (KiCalibrateTimeAdjustment.c)
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

/*
 * XREFs of RtlIsPackageSid @ 0x140479C40
 * Callers:
 *     ObpVerifyAccessToBoundaryEntry @ 0x140478298 (ObpVerifyAccessToBoundaryEntry.c)
 *     SepFilterToken @ 0x140479EC4 (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x14047AAA8 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
 */

BOOLEAN __cdecl RtlIsPackageSid(PSID Sid)
{
  return *((_BYTE *)Sid + 1) >= 2u
      && *(_BYTE *)Sid == 1
      && RtlCompareMemory((char *)Sid + 2, &RtlpAppPackageAuthority, 6uLL) == 6
      && *((_DWORD *)Sid + 2) == 2;
}

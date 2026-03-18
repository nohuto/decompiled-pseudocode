/*
 * XREFs of RtlIsPackageSid @ 0x1403C09B0
 * Callers:
 *     ObpVerifyAccessToBoundaryEntry @ 0x1403BF560 (ObpVerifyAccessToBoundaryEntry.c)
 *     NtCreateLowBoxToken @ 0x1403C0A6C (NtCreateLowBoxToken.c)
 *     SepFilterToken @ 0x1403C11C8 (SepFilterToken.c)
 * Callees:
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsPackageSid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 2;
}

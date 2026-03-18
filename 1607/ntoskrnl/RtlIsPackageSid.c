/*
 * XREFs of RtlIsPackageSid @ 0x14047AD70
 * Callers:
 *     ObpVerifyAccessToBoundaryEntry @ 0x1404793C8 (ObpVerifyAccessToBoundaryEntry.c)
 *     SepFilterToken @ 0x14047AFF4 (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x14047BBD8 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlCompareMemory @ 0x140167460 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsPackageSid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 2;
}

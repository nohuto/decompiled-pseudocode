/*
 * XREFs of RtlIsCapabilitySid @ 0x14047C1D8
 * Callers:
 *     RtlCheckTokenCapability @ 0x14021060C (RtlCheckTokenCapability.c)
 *     SepFilterToken @ 0x14047AFF4 (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x14047BBD8 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlCompareMemory @ 0x140167460 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsCapabilitySid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 3;
}

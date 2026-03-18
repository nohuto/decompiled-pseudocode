/*
 * XREFs of RtlIsCapabilitySid @ 0x140413050
 * Callers:
 *     RtlCheckTokenCapability @ 0x1402450DC (RtlCheckTokenCapability.c)
 *     SepFilterToken @ 0x140411C6C (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x140412A24 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsCapabilitySid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 3;
}

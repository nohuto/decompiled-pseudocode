/*
 * XREFs of RtlIsCapabilitySid @ 0x180062060
 * Callers:
 *     RtlCheckTokenCapability @ 0x18005E0B0 (RtlCheckTokenCapability.c)
 * Callees:
 *     RtlCompareMemory @ 0x1800A9270 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsCapabilitySid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 3;
}

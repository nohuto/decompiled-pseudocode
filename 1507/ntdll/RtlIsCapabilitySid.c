/*
 * XREFs of RtlIsCapabilitySid @ 0x18004E940
 * Callers:
 *     RtlCheckTokenCapability @ 0x18004AAA0 (RtlCheckTokenCapability.c)
 * Callees:
 *     RtlCompareMemory @ 0x180095EE0 (RtlCompareMemory.c)
 */

BOOLEAN __cdecl RtlIsCapabilitySid(PSID Sid)
{
  return *((_BYTE *)Sid + 1) >= 2u
      && *(_BYTE *)Sid == 1
      && RtlCompareMemory((char *)Sid + 2, &RtlpAppPackageAuthority, 6uLL) == 6
      && *((_DWORD *)Sid + 2) == 3;
}

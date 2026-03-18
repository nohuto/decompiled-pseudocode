/*
 * XREFs of SepIsCapabilitySid @ 0x1400E34E4
 * Callers:
 *     SepMaximumAccessCheck @ 0x14008A7E0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x14008C110 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x14012BB10 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140135D0C (SepNormalAccessCheckEx.c)
 * Callees:
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 */

bool __fastcall SepIsCapabilitySid(__int64 a1)
{
  __int64 v2; // rdi

  v2 = SeCapabilityPrefixSid;
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == *(_BYTE *)SeCapabilityPrefixSid
      && RtlCompareMemory((const void *)(a1 + 2), (const void *)(SeCapabilityPrefixSid + 2), 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(v2 + 8);
}

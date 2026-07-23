/*
 * XREFs of SepIsCapabilitySid @ 0x14009F6D4
 * Callers:
 *     SepMaximumAccessCheck @ 0x140061220 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x140061FC0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x140133534 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x1401366B8 (SepNormalAccessCheckEx.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
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

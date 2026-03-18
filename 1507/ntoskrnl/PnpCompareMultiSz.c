/*
 * XREFs of PnpCompareMultiSz @ 0x14067E0B8
 * Callers:
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140690F40 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406968A0 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     PnpGetMultiSzLength @ 0x140416AD8 (PnpGetMultiSzLength.c)
 *     RtlCompareUnicodeStrings @ 0x1404DA390 (RtlCompareUnicodeStrings.c)
 */

bool __fastcall PnpCompareMultiSz(PCWCH String1, PCWCH String2)
{
  char v4; // bl
  size_t String2Length[3]; // [rsp+30h] [rbp-18h] BYREF
  SIZE_T String1Length; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  if ( PnpGetMultiSzLength((__int64)String1, 0x7FFFFFFFLL, &String1Length) >= 0
    && PnpGetMultiSzLength((__int64)String2, 0x7FFFFFFFLL, String2Length) >= 0
    && String1Length == String2Length[0] )
  {
    return RtlCompareUnicodeStrings(String1, String1Length, String2, String2Length[0], 1u) == 0;
  }
  return v4;
}

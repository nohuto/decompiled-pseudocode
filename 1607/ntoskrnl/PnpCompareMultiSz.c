/*
 * XREFs of PnpCompareMultiSz @ 0x14062D5E4
 * Callers:
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1406455D8 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14064D464 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x140489820 (RtlCompareUnicodeStrings.c)
 *     PnpGetMultiSzLength @ 0x1404A2DC0 (PnpGetMultiSzLength.c)
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

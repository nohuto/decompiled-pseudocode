/*
 * XREFs of ObpCheckDuplicateEntries @ 0x1404778C8
 * Callers:
 *     ObpCaptureBoundaryDescriptor @ 0x140477664 (ObpCaptureBoundaryDescriptor.c)
 * Callees:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x140477F64 (RtlEnumerateBoundaryDescriptorEntries.c)
 */

_BOOL8 __fastcall ObpCheckDuplicateEntries(__int64 a1)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-38h] BYREF
  int v3; // [rsp+38h] [rbp-20h]
  int v4; // [rsp+3Ch] [rbp-1Ch]
  int v5; // [rsp+40h] [rbp-18h]

  v5 = 0;
  v4 = 0;
  v3 = 0;
  v2[0] = a1;
  v2[1] = a1;
  return (int)RtlEnumerateBoundaryDescriptorEntries(a1 + 48, ObpCompareEntryLevel1, v2) >= 0 && v5 >= 0 && v4 == v3;
}

/*
 * XREFs of KiSetPageAttributesTable @ 0x1403F7158
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x14014E950 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     <none>
 */

unsigned __int64 KiSetPageAttributesTable()
{
  unsigned __int64 result; // rax
  unsigned __int64 v1; // [rsp+8h] [rbp+8h]

  v1 = 0x7010600070106LL;
  __wbinvd();
  result = v1;
  __writemsr(0x277u, v1);
  __wbinvd();
  return result;
}

/*
 * XREFs of HvpGetBinContextInTempBin @ 0x1401B6CD8
 * Callers:
 *     HvpSetRangeProtection @ 0x1405139A4 (HvpSetRangeProtection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetBinContextInTempBin(unsigned __int8 *a1)
{
  return (*a1 >> 1) & 1;
}

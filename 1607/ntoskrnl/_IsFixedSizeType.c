/*
 * XREFs of _IsFixedSizeType @ 0x14010B168
 * Callers:
 *     _PnpValidatePropertyData @ 0x140511B44 (_PnpValidatePropertyData.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsFixedSizeType(__int16 a1)
{
  unsigned int v1; // ecx

  v1 = a1 & 0xFFF;
  return v1 < 0x12 || v1 > 0x14 && v1 != 25;
}

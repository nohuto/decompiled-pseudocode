/*
 * XREFs of BiIsFirmwareApplication @ 0x14012E024
 * Callers:
 *     BcdDeleteElement @ 0x14053D21C (BcdDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14053DADC (BcdSetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x1406D1FA4 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x1406D2034 (BcdDeleteObject.c)
 * Callees:
 *     BiGetObjectDescription @ 0x14053D854 (BiGetObjectDescription.c)
 */

bool __fastcall BiIsFirmwareApplication(__int64 a1)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF
  int v3; // [rsp+3Ch] [rbp+14h]

  return (int)BiGetObjectDescription(a1, &v2) >= 0 && (v3 & 0xF0000000) == 0x10000000 && (v3 & 0xF00000) == 0x100000;
}

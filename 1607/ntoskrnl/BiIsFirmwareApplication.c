/*
 * XREFs of BiIsFirmwareApplication @ 0x14012E594
 * Callers:
 *     BcdDeleteElement @ 0x14053D75C (BcdDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14053E01C (BcdSetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x1406D20DC (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x1406D216C (BcdDeleteObject.c)
 * Callees:
 *     BiGetObjectDescription @ 0x14053DD94 (BiGetObjectDescription.c)
 */

bool __fastcall BiIsFirmwareApplication(__int64 a1)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF
  int v3; // [rsp+3Ch] [rbp+14h]

  return (int)BiGetObjectDescription(a1, &v2) >= 0 && (v3 & 0xF0000000) == 0x10000000 && (v3 & 0xF00000) == 0x100000;
}

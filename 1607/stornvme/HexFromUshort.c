/*
 * XREFs of HexFromUshort @ 0x1C00097B8
 * Callers:
 *     FormInquirySerialNumberData @ 0x1C0009214 (FormInquirySerialNumberData.c)
 * Callees:
 *     <none>
 */

char __fastcall HexFromUshort(unsigned __int16 a1, char *a2)
{
  char result; // al

  a2[3] = `HexFromUchar'::`2'::hexDigits[a1 & 0xF];
  a2[2] = `HexFromUchar'::`2'::hexDigits[(unsigned __int8)a1 >> 4];
  a2[1] = `HexFromUchar'::`2'::hexDigits[HIBYTE(a1) & 0xF];
  result = `HexFromUchar'::`2'::hexDigits[(unsigned __int64)a1 >> 12];
  *a2 = result;
  return result;
}

/*
 * XREFs of HdlspUTF8Encode @ 0x14022C6C8
 * Callers:
 *     HdlspPutString @ 0x140723C8C (HdlspPutString.c)
 *     HdlspPutWideString @ 0x140723DEC (HdlspPutWideString.c)
 * Callees:
 *     <none>
 */

char __fastcall HdlspUTF8Encode(unsigned __int16 a1, _BYTE *a2)
{
  char result; // al

  result = 0x80;
  if ( (a1 & 0xFF80) != 0 )
  {
    if ( (a1 & 0xF800) != 0 )
    {
      a2[2] = a1 & 0x3F | 0x80;
      result = (a1 >> 6) & 0x3F | 0x80;
      a2[1] = result;
      *a2 = (a1 >> 12) & 0xF | 0xE0;
    }
    else
    {
      result = a1 & 0x3F | 0x80;
      a2[2] = result;
      a2[1] = (a1 >> 6) & 0x1F | 0xC0;
    }
  }
  else
  {
    a2[2] = a1;
  }
  return result;
}

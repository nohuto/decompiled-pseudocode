/*
 * XREFs of CpReadLsr @ 0x14022223C
 * Callers:
 *     CpGetByte @ 0x14022208C (CpGetByte.c)
 *     CpPutByte @ 0x1402221A8 (CpPutByte.c)
 * Callees:
 *     MY_READ_PORT_UCHAR @ 0x140167044 (MY_READ_PORT_UCHAR.c)
 */

unsigned __int8 __fastcall CpReadLsr(_WORD *a1, unsigned __int8 a2)
{
  unsigned __int8 v4; // si

  v4 = READ_UCHAR(*a1 + 5 * CpRegisterWidth);
  if ( (v4 & a2) == 0 )
  {
    byte_1403352C0 |= 2 - ((READ_UCHAR(*a1 + 6 * CpRegisterWidth) & 0x40) != 0);
    if ( byte_1403352C0 == 3 )
      a1[6] |= 2u;
  }
  return v4;
}

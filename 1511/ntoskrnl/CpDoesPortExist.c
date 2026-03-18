/*
 * XREFs of CpDoesPortExist @ 0x140221FB8
 * Callers:
 *     InbvPortInitialize @ 0x14022239C (InbvPortInitialize.c)
 * Callees:
 *     MY_READ_PORT_UCHAR @ 0x140167044 (MY_READ_PORT_UCHAR.c)
 *     MY_WRITE_PORT_UCHAR @ 0x140167050 (MY_WRITE_PORT_UCHAR.c)
 */

bool __fastcall CpDoesPortExist(__int16 a1)
{
  unsigned __int8 v2; // si
  bool v3; // bl

  v2 = READ_UCHAR(a1 + 4 * CpRegisterWidth);
  WRITE_UCHAR(a1 + 4 * CpRegisterWidth, 0x10u);
  WRITE_UCHAR(a1 + 4 * CpRegisterWidth, 0x10u);
  if ( (READ_UCHAR(a1 + 6 * CpRegisterWidth) & 0xF0) != 0 )
  {
    v3 = 0;
  }
  else
  {
    WRITE_UCHAR(a1 + 4 * CpRegisterWidth, 0x14u);
    v3 = (READ_UCHAR(a1 + 6 * CpRegisterWidth) & 0x40) != 0;
  }
  WRITE_UCHAR(a1 + 4 * CpRegisterWidth, v2);
  return v3;
}

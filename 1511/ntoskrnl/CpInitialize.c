/*
 * XREFs of CpInitialize @ 0x140222160
 * Callers:
 *     InbvPortInitialize @ 0x14022239C (InbvPortInitialize.c)
 * Callees:
 *     MY_WRITE_PORT_UCHAR @ 0x140167050 (MY_WRITE_PORT_UCHAR.c)
 *     CpSetBaud @ 0x1402222BC (CpSetBaud.c)
 */

unsigned __int8 __fastcall CpInitialize(__int64 a1, __int64 a2, unsigned int a3)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = a2;
  CpSetBaud(a1, a3);
  WRITE_UCHAR(*(_WORD *)a1 + 4 * CpRegisterWidth, 3u);
  return WRITE_UCHAR(CpRegisterWidth + *(_WORD *)a1, 0);
}

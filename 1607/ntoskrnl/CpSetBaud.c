/*
 * XREFs of CpSetBaud @ 0x14023DC30
 * Callers:
 *     CpInitialize @ 0x14023DAD4 (CpInitialize.c)
 * Callees:
 *     MY_READ_PORT_UCHAR @ 0x140171F74 (MY_READ_PORT_UCHAR.c)
 *     MY_WRITE_PORT_UCHAR @ 0x140171F80 (MY_WRITE_PORT_UCHAR.c)
 */

unsigned __int8 __fastcall CpSetBaud(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  unsigned __int8 v6; // al
  __int64 v7; // rbx
  unsigned __int8 result; // al

  v4 = *(_QWORD *)a1 + 3 * CpRegisterWidth;
  v5 = 0x1C200 / a2;
  v6 = READ_UCHAR(*(_WORD *)a1 + 3 * CpRegisterWidth);
  WRITE_UCHAR(v4, v6 | 0x80);
  v7 = *(_QWORD *)a1 + CpRegisterWidth;
  WRITE_UCHAR(*(_WORD *)a1 + CpRegisterWidth, BYTE1(v5));
  WRITE_UCHAR(v7 - 1, 0x1C200 / a2);
  result = WRITE_UCHAR(*(_WORD *)a1 + 3 * CpRegisterWidth, 3u);
  *(_DWORD *)(a1 + 8) = a2;
  return result;
}

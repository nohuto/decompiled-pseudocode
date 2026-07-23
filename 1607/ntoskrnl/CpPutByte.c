/*
 * XREFs of CpPutByte @ 0x14023DB1C
 * Callers:
 *     <none>
 * Callees:
 *     MY_READ_PORT_UCHAR @ 0x140171F74 (MY_READ_PORT_UCHAR.c)
 *     CpReadLsr @ 0x14023DBB0 (CpReadLsr.c)
 */

unsigned __int8 __fastcall CpPutByte(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // si
  unsigned __int8 v4; // di

  v2 = a2;
  while ( (*(_BYTE *)(a1 + 12) & 2) != 0 )
  {
    v4 = READ_UCHAR(*(_WORD *)a1 + 6 * CpRegisterWidth) & 0xB0;
    if ( v4 == 0xB0 )
      break;
    if ( ((unsigned __int8)~(v4 >> 7) & (unsigned __int8)CpReadLsr(a1, 0LL) & 1) != 0 )
      READ_UCHAR(*(_QWORD *)a1);
  }
  do
    LOBYTE(a2) = 32;
  while ( (CpReadLsr(a1, a2) & 0x20) == 0 );
  return WRITE_UCHAR(*(_QWORD *)a1, v2);
}

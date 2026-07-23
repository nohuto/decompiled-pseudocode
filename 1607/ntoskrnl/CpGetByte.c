/*
 * XREFs of CpGetByte @ 0x14023DA00
 * Callers:
 *     <none>
 * Callees:
 *     MY_READ_PORT_UCHAR @ 0x140171F74 (MY_READ_PORT_UCHAR.c)
 *     CpReadLsr @ 0x14023DBB0 (CpReadLsr.c)
 */

__int64 __fastcall CpGetByte(__int64 a1, _BYTE *a2, char a3, char a4)
{
  _BYTE *v5; // r14
  int v8; // edi
  char Lsr; // al

  v5 = a2;
  if ( !*(_QWORD *)a1 )
    return 1LL;
  v8 = a3 != 0 ? 204800 : 1;
  while ( 1 )
  {
    LOBYTE(a2) = 1;
    --v8;
    Lsr = CpReadLsr(a1, a2);
    if ( (Lsr & 1) == 0 )
      goto LABEL_9;
    if ( (Lsr & 0xC) != 0 )
      break;
    if ( a4 )
      return 0LL;
    *v5 = READ_UCHAR(*(_QWORD *)a1);
    if ( (*(_BYTE *)(a1 + 12) & 2) == 0 || (READ_UCHAR(*(_WORD *)a1 + 6 * CpRegisterWidth) & 0x80u) != 0 )
      return 0LL;
LABEL_9:
    if ( !v8 )
    {
      CpReadLsr(a1, 0LL);
      return 1LL;
    }
  }
  *v5 = 0;
  return 2LL;
}

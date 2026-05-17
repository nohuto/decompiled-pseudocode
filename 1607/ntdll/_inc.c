/*
 * XREFs of _inc @ 0x18009FFC8
 * Callers:
 *     ReadString @ 0x18009FCB4 (ReadString.c)
 *     _input_l @ 0x1800A0000 (_input_l.c)
 * Callees:
 *     _filbuf_s @ 0x1800A5A78 (_filbuf_s.c)
 */

__int64 __fastcall inc(__int64 a1)
{
  if ( --*(_DWORD *)(a1 + 8) < 0 )
    return (unsigned int)filbuf_s();
  else
    return *(unsigned __int8 *)(*(_QWORD *)a1)++;
}

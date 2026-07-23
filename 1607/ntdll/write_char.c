/*
 * XREFs of write_char @ 0x18009D92C
 * Callers:
 *     _output_l @ 0x18009D0E0 (_output_l.c)
 *     write_multi_char @ 0x18009D97C (write_multi_char.c)
 *     write_string @ 0x18009D9D4 (write_string.c)
 * Callees:
 *     _flsbuf @ 0x1800A5A68 (_flsbuf.c)
 */

void __fastcall write_char(unsigned __int8 a1, __int64 a2, _DWORD *a3)
{
  int v5; // eax

  if ( (*(_BYTE *)(a2 + 24) & 0x40) == 0 || *(_QWORD *)(a2 + 16) )
  {
    if ( --*(_DWORD *)(a2 + 8) < 0 )
    {
      v5 = flsbuf((char)a1, (FILE *)a2);
    }
    else
    {
      *(_BYTE *)(*(_QWORD *)a2)++ = a1;
      v5 = a1;
    }
    if ( v5 == -1 )
      *a3 = -1;
    else
      ++*a3;
  }
  else
  {
    ++*a3;
  }
}

/*
 * XREFs of _hextodec @ 0x140155EF0
 * Callers:
 *     _winput_s @ 0x140155FEC (_winput_s.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall hextodec(unsigned __int16 a1)
{
  unsigned __int16 v1; // r8
  int v2; // edx

  if ( (a1 & 0xFF00) != 0 )
    return (unsigned __int16)((a1 & 0xFFDF) - 7);
  v1 = a1;
  v2 = (unsigned __int8)a1;
  if ( (unsigned __int8)a1 == -1 )
    v2 = -1;
  if ( (pctype[v2] & 4) == 0 )
    return (unsigned __int16)((a1 & 0xFFDF) - 7);
  return v1;
}

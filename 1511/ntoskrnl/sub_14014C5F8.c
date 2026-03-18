/*
 * XREFs of sub_14014C5F8 @ 0x14014C5F8
 * Callers:
 *     _winput_s @ 0x14014C6F4 (_winput_s.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14014C5F8(unsigned __int16 a1)
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

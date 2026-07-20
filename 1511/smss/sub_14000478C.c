/*
 * XREFs of sub_14000478C @ 0x14000478C
 * Callers:
 *     sub_1400037AC @ 0x1400037AC (sub_1400037AC.c)
 *     sub_14000474C @ 0x14000474C (sub_14000474C.c)
 *     sub_140012F08 @ 0x140012F08 (sub_140012F08.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14000478C(__int64 a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( (*(_BYTE *)(a1 + 8) & 4) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    {
      if ( *(_QWORD *)(a1 + 48) )
        return result;
      return 0LL;
    }
    if ( *(_DWORD *)(a1 + 24) == -1 )
      return 0LL;
  }
  return result;
}

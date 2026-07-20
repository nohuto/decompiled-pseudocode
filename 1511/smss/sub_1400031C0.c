/*
 * XREFs of sub_1400031C0 @ 0x1400031C0
 * Callers:
 *     sub_140002E90 @ 0x140002E90 (sub_140002E90.c)
 *     sub_1400030DC @ 0x1400030DC (sub_1400030DC.c)
 *     sub_140004800 @ 0x140004800 (sub_140004800.c)
 *     sub_140004C90 @ 0x140004C90 (sub_140004C90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400031C0(int a1)
{
  __int64 result; // rax
  _DWORD *i; // rcx

  if ( a1 == -1 )
    return 0xFFFFFFFFLL;
  result = 0LL;
  if ( !dword_14001F028 )
    return 0xFFFFFFFFLL;
  for ( i = (_DWORD *)qword_14001FCC8; a1 != *i; i += 10 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= dword_14001F028 )
      return 0xFFFFFFFFLL;
  }
  return result;
}

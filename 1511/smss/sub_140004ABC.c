/*
 * XREFs of sub_140004ABC @ 0x140004ABC
 * Callers:
 *     sub_140004A4C @ 0x140004A4C (sub_140004A4C.c)
 *     sub_140004ABC @ 0x140004ABC (sub_140004ABC.c)
 * Callees:
 *     sub_140004ABC @ 0x140004ABC (sub_140004ABC.c)
 */

__int64 __fastcall sub_140004ABC(__int64 a1, __int64 a2)
{
  _QWORD *v5; // rax

  if ( !a1 )
    return 1LL;
  if ( *(_DWORD *)(a2 + 8) < *(_DWORD *)(a1 - 96) )
  {
    if ( !(unsigned int)sub_140004ABC(*(_QWORD *)(a1 + 8), a2) )
      return 0LL;
    v5 = (_QWORD *)(a2 + 104);
    *(_QWORD *)(a1 + 8) = a2 + 104;
    goto LABEL_6;
  }
  if ( (unsigned int)sub_140004ABC(*(_QWORD *)(a1 + 16), a2) )
  {
    v5 = (_QWORD *)(a2 + 104);
    *(_QWORD *)(a1 + 16) = a2 + 104;
LABEL_6:
    *v5 = a1;
  }
  return 0LL;
}

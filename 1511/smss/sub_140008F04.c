/*
 * XREFs of sub_140008F04 @ 0x140008F04
 * Callers:
 *     sub_1400092A8 @ 0x1400092A8 (sub_1400092A8.c)
 * Callees:
 *     sub_140008E1C @ 0x140008E1C (sub_140008E1C.c)
 */

void __fastcall sub_140008F04(__int64 **a1, __int16 a2)
{
  __int64 *i; // rbx
  ULONG v5; // ebp

  for ( i = *a1; i != (__int64 *)a1; i = (__int64 *)*i )
  {
    if ( (*((_BYTE *)i + 92) & 1) != 0 && (a2 == 63 || *(_WORD *)(i[3] + 8) == a2) )
    {
      v5 = *((_DWORD *)i + 22) | 0x20000000;
      if ( (int)sub_140008E1C((UNICODE_STRING *)i + 1, (union _LARGE_INTEGER)i[9], (union _LARGE_INTEGER)i[10], v5) >= 0 )
        *((_DWORD *)i + 22) = v5;
    }
  }
}

/*
 * XREFs of RtlUpperString @ 0x1800DAA80
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180072780 (RtlUpperChar.c)
 */

void __fastcall RtlUpperString(__int64 a1, unsigned __int16 *a2)
{
  int v2; // ebx
  char *v3; // rdi
  char *v4; // rsi

  v2 = *a2;
  v3 = *(char **)(a1 + 8);
  v4 = (char *)*((_QWORD *)a2 + 1);
  if ( (unsigned __int16)v2 > *(_WORD *)(a1 + 2) )
    v2 = *(unsigned __int16 *)(a1 + 2);
  for ( *(_WORD *)a1 = v2; v2; --v2 )
    *v3++ = RtlUpperChar(*v4++);
}

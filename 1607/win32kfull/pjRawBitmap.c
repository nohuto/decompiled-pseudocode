/*
 * XREFs of pjRawBitmap @ 0x1C0018988
 * Callers:
 *     BmfdQueryFontData @ 0x1C0018508 (BmfdQueryFontData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall pjRawBitmap(unsigned int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int16 *v5; // rcx
  int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // eax

  if ( a1 > *(unsigned __int8 *)(a2 + 5) - (unsigned int)*(unsigned __int8 *)(a2 + 4) )
    a1 = *(unsigned __int8 *)(a2 + 6);
  v5 = (unsigned __int16 *)(*(_QWORD *)a3 + *(int *)(a2 + 16) + 2LL * a1 * ((*(_WORD *)a2 != 512) + 2));
  *a4 = *v5;
  if ( *v5 )
  {
    if ( *(_WORD *)a2 == 512 )
      v6 = *((unsigned __int8 *)v5 + 3) << 8;
    else
      v6 = (*((unsigned __int8 *)v5 + 5) << 24) | (*(unsigned __int16 *)((char *)v5 + 3) << 8);
    v7 = *((unsigned __int8 *)v5 + 2) | v6;
    v8 = v7 + ((unsigned int)(*a4 + 7) >> 3) * *(unsigned __int16 *)(a2 + 8);
    if ( v7 <= v8 && v8 <= *(_DWORD *)(a3 + 12) )
      return *(_QWORD *)a3 + v7;
    *a4 = 0;
  }
  return 0LL;
}

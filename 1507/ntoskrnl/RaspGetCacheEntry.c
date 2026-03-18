/*
 * XREFs of RaspGetCacheEntry @ 0x140152B2C
 * Callers:
 *     BgpRasPrintGlyph @ 0x14015078C (BgpRasPrintGlyph.c)
 *     RaspGetXExtent @ 0x1401661BC (RaspGetXExtent.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RaspGetCacheEntry(_QWORD *a1, __int16 a2, int a3, int a4, __int64 a5, _QWORD *a6)
{
  _QWORD *v6; // rax
  _QWORD *v7; // r10
  __int64 v8; // r8
  _QWORD *v9; // rdx
  _QWORD *v10; // rdx
  _QWORD *result; // rax

  v6 = (_QWORD *)*a1;
  v7 = 0LL;
  if ( (_QWORD *)*a1 != a1 )
  {
    while ( *((_WORD *)v6 + 30) != a2 || *((_DWORD *)v6 + 10) != a3 || *((_DWORD *)v6 + 9) != a4 || v6[3] != a5 )
    {
      v6 = (_QWORD *)*v6;
      if ( v6 == a1 )
        goto LABEL_12;
    }
    v8 = *v6;
    v7 = v6;
    v9 = (_QWORD *)v6[1];
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (_QWORD *)*v9 != v6 )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    v10 = (_QWORD *)*a1;
    *v6 = *a1;
    v6[1] = a1;
    if ( (_QWORD *)v10[1] != a1 )
      __fastfail(3u);
    v10[1] = v6;
    *a1 = v6;
  }
LABEL_12:
  result = a6;
  *a6 = v7;
  return result;
}

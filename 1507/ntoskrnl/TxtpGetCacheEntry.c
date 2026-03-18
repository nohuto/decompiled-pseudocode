/*
 * XREFs of TxtpGetCacheEntry @ 0x140150520
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x140150300 (BgpTxtDisplayCharacter.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall TxtpGetCacheEntry(_QWORD *a1, __int16 a2, __int64 a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // r10
  __int64 v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rax

  v3 = (_QWORD *)*a1;
  v4 = 0LL;
  while ( v3 != a1 )
  {
    if ( *((_WORD *)v3 + 8) == a2
      && *((_DWORD *)v3 + 6) == *(_DWORD *)a3
      && *((_DWORD *)v3 + 7) == *(_DWORD *)(a3 + 4)
      && v3[4] == *(_QWORD *)(a3 + 8)
      && *((_DWORD *)v3 + 10) == *(_DWORD *)(a3 + 16) )
    {
      v5 = *v3;
      v4 = v3;
      v6 = (_QWORD *)v3[1];
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (_QWORD *)*v6 != v3 )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      v7 = (_QWORD *)*a1;
      *v3 = *a1;
      v3[1] = a1;
      if ( (_QWORD *)v7[1] != a1 )
        __fastfail(3u);
      v7[1] = v3;
      *a1 = v3;
      return v4;
    }
    v3 = (_QWORD *)*v3;
  }
  return v4;
}

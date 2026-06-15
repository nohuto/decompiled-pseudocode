/*
 * XREFs of ?GrowBuffer@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@AEAA_N_K@Z @ 0x180009A5C
 * Callers:
 *     ?AddInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18000934C (-AddInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

char __fastcall ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::GrowBuffer(__int64 a1, size_t a2)
{
  unsigned __int64 v4; // rdx
  void *v5; // rax
  size_t v7; // rcx
  void *v8; // rax
  void *v9; // rsi
  errno_t v10; // eax

  v4 = *(_QWORD *)(a1 + 16);
  if ( a2 > v4 )
  {
    if ( *(_QWORD *)a1 )
    {
      v7 = *(int *)(a1 + 24);
      if ( !v7 )
      {
        v7 = v4 >> 1;
        if ( a2 - v4 > v4 >> 1 )
          v7 = a2 - v4;
      }
      if ( a2 < v4 + v7 )
        a2 = v4 + v7;
      v8 = calloc(a2, 4uLL);
      v9 = v8;
      if ( !v8 )
        return 0;
      v10 = memmove_s(v8, 4LL * *(_QWORD *)(a1 + 8), *(const void *const *)a1, 4LL * *(_QWORD *)(a1 + 8));
      if ( v10 )
      {
        if ( v10 == 12 )
          ATL::AtlThrowImpl(-2147024882);
        if ( v10 == 22 || v10 == 34 )
          ATL::AtlThrowImpl(-2147024809);
        if ( v10 != 80 )
          ATL::AtlThrowImpl(-2147467259);
      }
      free(*(void **)a1);
      *(_QWORD *)a1 = v9;
    }
    else
    {
      if ( *(int *)(a1 + 24) > a2 )
        a2 = *(int *)(a1 + 24);
      v5 = calloc(a2, 4uLL);
      *(_QWORD *)a1 = v5;
      if ( !v5 )
        return 0;
    }
    *(_QWORD *)(a1 + 16) = a2;
  }
  return 1;
}

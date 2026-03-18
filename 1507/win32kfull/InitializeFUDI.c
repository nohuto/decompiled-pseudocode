/*
 * XREFs of InitializeFUDI @ 0x1C00FFD50
 * Callers:
 *     AAHalftoneBitmap @ 0x1C00A4ED0 (AAHalftoneBitmap.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

void *__fastcall InitializeFUDI(__int64 a1)
{
  int v2; // eax
  const void **v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rbp
  _BYTE **v6; // r15
  __int64 v7; // r12
  __int64 v8; // r13
  _BYTE *v9; // rbx
  __int64 v11; // r12
  _BYTE *v12; // rbx

  if ( (*(_DWORD *)a1 & 0x400) != 0 )
    v2 = *(_DWORD *)(a1 + 148);
  else
    v2 = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a1 + 532) = v2;
  v3 = (const void **)(a1 + 496);
  v4 = *(unsigned int *)(a1 + 56);
  v5 = 2LL;
  v6 = (_BYTE **)(a1 + 496);
  if ( (*(_BYTE *)(a1 + 8) & 4) != 0 )
  {
    v11 = v4;
    do
    {
      v12 = *v6;
      (*(void (__fastcall **)(__int64, _BYTE *))(a1 + 24))(a1 + 8, *v6++ + 1);
      *v12 = v12[2];
      v12[v11 + 1] = v12[v11 - 1];
      --v5;
    }
    while ( v5 );
  }
  else
  {
    v7 = 3 * v4;
    v8 = 3 * v4;
    do
    {
      v9 = *v6;
      (*(void (__fastcall **)(__int64, _BYTE *))(a1 + 24))(a1 + 8, *v6++ + 3);
      *(_WORD *)v9 = *((_WORD *)v9 + 3);
      v9[2] = v9[8];
      *(_WORD *)&v9[v8 + 3] = *(_WORD *)&v9[v7 - 3];
      v9[v8 + 5] = v9[v7 - 1];
      --v5;
    }
    while ( v5 );
  }
  memmove(*(void **)(a1 + 520), *v3, *(unsigned int *)(a1 + 528));
  return memmove(*(void **)(a1 + 488), *(const void **)(a1 + 504), *(unsigned int *)(a1 + 528));
}

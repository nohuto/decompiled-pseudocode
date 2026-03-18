/*
 * XREFs of InitializeFUDI @ 0x140141B6C
 * Callers:
 *     AAHalftoneBitmap @ 0x140141E5C (AAHalftoneBitmap.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void *__fastcall InitializeFUDI(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rsi
  const void **v3; // r14
  _QWORD *v5; // r15
  __int64 v6; // rbp
  bool v7; // zf
  __int64 v8; // rsi
  _BYTE *v9; // rbx
  _BYTE *v11; // rbx

  v1 = a1 + 8;
  v2 = *(unsigned int *)(a1 + 56);
  v3 = (const void **)(a1 + 496);
  v5 = (_QWORD *)(a1 + 496);
  v6 = 2LL;
  v7 = (*(_BYTE *)(a1 + 8) & 4) == 0;
  *(_DWORD *)(a1 + 532) = *(_DWORD *)(((*(_DWORD *)a1 & 0x400) != 0 ? 0x58 : 0) + a1 + 60);
  if ( v7 )
  {
    v8 = 3 * v2;
    do
    {
      v9 = (_BYTE *)*v5;
      (*(void (__fastcall **)(__int64, __int64))(a1 + 24))(v1, *v5++ + 3LL);
      *(_WORD *)v9 = *((_WORD *)v9 + 3);
      v9[2] = v9[8];
      *(_WORD *)&v9[v8 + 3] = *(_WORD *)&v9[v8 - 3];
      v9[v8 + 5] = v9[v8 - 1];
      --v6;
    }
    while ( v6 );
  }
  else
  {
    do
    {
      v11 = (_BYTE *)*v5;
      (*(void (__fastcall **)(__int64, __int64))(a1 + 24))(v1, *v5++ + 1LL);
      *v11 = v11[2];
      v11[v2 + 1] = v11[v2 - 1];
      --v6;
    }
    while ( v6 );
  }
  memmove(*(void **)(a1 + 520), *v3, *(unsigned int *)(a1 + 528));
  return memmove(*(void **)(a1 + 488), *(const void **)(a1 + 504), *(unsigned int *)(a1 + 528));
}

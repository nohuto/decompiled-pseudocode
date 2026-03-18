/*
 * XREFs of vSrcOpaqCopyS4D16 @ 0x1C0266380
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?pvFillOpaqTable@@YAPEAXKKKPEAVSURFACE@@@Z @ 0x1C014BF64 (-pvFillOpaqTable@@YAPEAXKKKPEAVSURFACE@@@Z.c)
 */

void __fastcall vSrcOpaqCopyS4D16(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  __int64 v12; // r14
  int *v15; // rdi
  unsigned __int8 *v16; // rbx
  _WORD *v17; // r11
  int v18; // r15d
  unsigned __int8 *v20; // r8
  _WORD *v21; // rdx
  int i; // r9d
  unsigned __int64 v23; // rax
  _WORD *v24; // rdx
  HSEMAPHORE v25; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v26; // [rsp+50h] [rbp-38h]
  int *v27; // [rsp+58h] [rbp-30h]

  v12 = a3;
  v25 = ghsemEUDC2;
  GreAcquireSemaphore(ghsemEUDC2);
  v15 = pvFillOpaqTable(2, a9, a10, a11);
  v27 = v15;
  v26 = (a5 + 1) & 0xFFFFFFFE;
  v16 = (unsigned __int8 *)(a2 / 2 + a1);
  v17 = (_WORD *)(a4 + 2LL * a5);
  v18 = (int)((a6 & 0xFFFFFFFE) - v26) / 2;
  while ( a8 )
  {
    v20 = v16;
    v21 = v17;
    if ( ((a5 + 1) & 0xFFFFFFFE) != a5 )
    {
      v20 = v16 + 1;
      *v17 = *((_WORD *)v15 + (*v16 & 0xF));
      v21 = v17 + 1;
    }
    for ( i = 0; i < v18; ++i )
    {
      v23 = *v20++;
      *v21 = *((_WORD *)v15 + (v23 >> 4));
      v24 = v21 + 1;
      *v24 = *((_WORD *)v15 + (v23 & 0xF));
      v21 = v24 + 1;
    }
    if ( a6 != (a6 & 0xFFFFFFFE) )
      *v21 = *((_WORD *)v15 + ((unsigned __int64)*v20 >> 4));
    --a8;
    v16 += v12;
    v17 = (_WORD *)((char *)v17 + a7);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v25);
}

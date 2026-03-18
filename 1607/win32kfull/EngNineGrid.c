/*
 * XREFs of EngNineGrid @ 0x1C00D3830
 * Callers:
 *     ?EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z @ 0x1C026930C (-EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z.c)
 *     ?BmpDevNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C028B760 (-BmpDevNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_.c)
 *     ?RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C028DE20 (-RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_B.c)
 * Callees:
 *     xxEngNineGrid @ 0x1C00D38DC (xxEngNineGrid.c)
 */

__int64 __fastcall EngNineGrid(int a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7, int *a8)
{
  _BYTE v9[4]; // [rsp+40h] [rbp-21h] BYREF
  int v10; // [rsp+44h] [rbp-1Dh]
  int v11; // [rsp+48h] [rbp-19h]
  int v12; // [rsp+4Ch] [rbp-15h]
  __int64 v13; // [rsp+50h] [rbp-11h]
  POINTL *v14; // [rsp+58h] [rbp-9h]
  __int64 v15; // [rsp+60h] [rbp-1h]
  __int64 v16; // [rsp+68h] [rbp+7h]
  __int64 v17; // [rsp+70h] [rbp+Fh]
  int v18; // [rsp+78h] [rbp+17h]
  __int64 v19; // [rsp+80h] [rbp+1Fh]

  if ( *(_WORD *)(a2 + 76) || *(_DWORD *)(a2 + 72) != 6 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    v13 = 0LL;
    v12 = 0;
    v11 = *a8;
    v10 = *(_DWORD *)(a7 + 20);
    v14 = &gptlZero;
    v17 = *((_QWORD *)a8 + 3);
    v16 = *((_QWORD *)a8 + 2);
    v15 = *((_QWORD *)a8 + 1);
    v19 = 0LL;
    v18 = 0;
    return xxEngNineGrid(a1, a2, a3, a4, a5, a6, a7, (__int64)v9);
  }
}

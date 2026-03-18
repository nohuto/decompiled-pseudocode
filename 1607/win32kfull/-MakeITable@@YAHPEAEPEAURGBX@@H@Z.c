/*
 * XREFs of ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x1C01368B4
 * Callers:
 *     ?bGenColorXlate555@XEPALOBJ@@QEAAHXZ @ 0x1C01366B0 (-bGenColorXlate555@XEPALOBJ@@QEAAHXZ.c)
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x1C01367C8 (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z @ 0x1C01369C0 (-inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z.c)
 *     ?MakeITable256@@YAHPEAE@Z @ 0x1C028CDF0 (-MakeITable256@@YAHPEAE@Z.c)
 *     ?MakeITableMono@@YAHPEAE@Z @ 0x1C028CE40 (-MakeITableMono@@YAHPEAE@Z.c)
 *     ?MakeITableVGA@@YAHPEAE@Z @ 0x1C028CEA8 (-MakeITableVGA@@YAHPEAE@Z.c)
 */

__int64 __fastcall MakeITable(unsigned __int8 *a1, struct RGBX *a2, int a3)
{
  int v3; // r14d
  int v4; // edi
  unsigned __int8 *v6; // rbx
  unsigned __int8 *v7; // rsi
  unsigned int v8; // ebp
  int v9; // r8d
  struct RGBX *v10; // r9
  unsigned int *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v18; // rcx
  unsigned __int8 *v19; // rax
  __int64 v20; // rcx
  __int128 v21; // xmm1
  __int64 v22; // rcx
  unsigned __int8 *v23; // rax
  __int128 v24; // xmm1
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v4 = a3;
  v6 = a1;
  v7 = a1;
  if ( a2 )
  {
    v25 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v8 = 1;
    if ( v4 >= 20 )
    {
      v9 = 0;
      v10 = a2;
      do
      {
        if ( *(_DWORD *)v10 != logDefaultPal[v9 % 20 + 1] )
          break;
        ++v9;
        v10 = (struct RGBX *)((char *)v10 + 4);
      }
      while ( v9 < v4 );
      if ( v9 == v4 )
      {
        v19 = gpDefITable;
        if ( gpDefITable )
        {
          v20 = 256LL;
          do
          {
            *(_OWORD *)v6 = *(_OWORD *)v19;
            *((_OWORD *)v6 + 1) = *((_OWORD *)v19 + 1);
            *((_OWORD *)v6 + 2) = *((_OWORD *)v19 + 2);
            *((_OWORD *)v6 + 3) = *((_OWORD *)v19 + 3);
            *((_OWORD *)v6 + 4) = *((_OWORD *)v19 + 4);
            *((_OWORD *)v6 + 5) = *((_OWORD *)v19 + 5);
            *((_OWORD *)v6 + 6) = *((_OWORD *)v19 + 6);
            v6 += 128;
            v21 = *((_OWORD *)v19 + 7);
            v19 += 128;
            *((_OWORD *)v6 - 1) = v21;
            --v20;
          }
          while ( v20 );
LABEL_10:
          SEMOBJ::vUnlock((SEMOBJ *)&v25);
          return v8;
        }
        v7 = (unsigned __int8 *)PALLOCMEM2(0x8000uLL, 1886221383LL, 0);
        v4 = 20;
        if ( !v7 )
          v7 = v6;
      }
    }
    v11 = (unsigned int *)PALLOCMEM2(0x20000uLL, 1886221383LL, 0);
    v14 = v11;
    if ( v11 )
    {
      inv_cmap(v4, a2, v13, v11, v7);
      Win32FreePool(v14, v15, v16);
      v3 = 1;
      if ( v7 != v6 )
      {
        v22 = 256LL;
        v23 = v7;
        do
        {
          *(_OWORD *)v6 = *(_OWORD *)v23;
          *((_OWORD *)v6 + 1) = *((_OWORD *)v23 + 1);
          *((_OWORD *)v6 + 2) = *((_OWORD *)v23 + 2);
          *((_OWORD *)v6 + 3) = *((_OWORD *)v23 + 3);
          *((_OWORD *)v6 + 4) = *((_OWORD *)v23 + 4);
          *((_OWORD *)v6 + 5) = *((_OWORD *)v23 + 5);
          *((_OWORD *)v6 + 6) = *((_OWORD *)v23 + 6);
          v6 += 128;
          v24 = *((_OWORD *)v23 + 7);
          v23 += 128;
          *((_OWORD *)v6 - 1) = v24;
          --v22;
        }
        while ( v22 );
        gpDefITable = v7;
      }
    }
    else if ( v7 != v6 )
    {
      Win32FreePool(v7, v12, v13);
    }
    v8 = v3;
    goto LABEL_10;
  }
  switch ( a3 )
  {
    case 2:
      return MakeITableMono(a1);
    case 16:
      return MakeITableVGA(a1);
    case 20:
      MakeITableVGA(a1);
      v18 = 0x8000LL;
      v8 = 1;
      do
      {
        if ( *v6 >= 8u )
          *v6 -= 16;
        ++v6;
        --v18;
      }
      while ( v18 );
      return v8;
    case 256:
      return MakeITable256(a1);
    default:
      return 0LL;
  }
}

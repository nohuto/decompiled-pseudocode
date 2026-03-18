/*
 * XREFs of ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x1C012D188
 * Callers:
 *     ?bGenColorXlate555@XEPALOBJ@@QEAAHXZ @ 0x1C012CF80 (-bGenColorXlate555@XEPALOBJ@@QEAAHXZ.c)
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x1C012D0A0 (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z @ 0x1C012D294 (-inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z.c)
 *     ?MakeITable256@@YAHPEAE@Z @ 0x1C028E1B0 (-MakeITable256@@YAHPEAE@Z.c)
 *     ?MakeITableMono@@YAHPEAE@Z @ 0x1C028E200 (-MakeITableMono@@YAHPEAE@Z.c)
 *     ?MakeITableVGA@@YAHPEAE@Z @ 0x1C028E268 (-MakeITableVGA@@YAHPEAE@Z.c)
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
  int v12; // r8d
  unsigned int *v13; // r15
  __int64 v15; // rcx
  unsigned __int8 *v16; // rax
  __int64 v17; // rcx
  __int128 v18; // xmm1
  __int64 v19; // rcx
  unsigned __int8 *v20; // rax
  __int128 v21; // xmm1
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v4 = a3;
  v6 = a1;
  v7 = a1;
  if ( a2 )
  {
    v22 = ghsemPalette;
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
        v16 = gpDefITable;
        if ( gpDefITable )
        {
          v17 = 256LL;
          do
          {
            *(_OWORD *)v6 = *(_OWORD *)v16;
            *((_OWORD *)v6 + 1) = *((_OWORD *)v16 + 1);
            *((_OWORD *)v6 + 2) = *((_OWORD *)v16 + 2);
            *((_OWORD *)v6 + 3) = *((_OWORD *)v16 + 3);
            *((_OWORD *)v6 + 4) = *((_OWORD *)v16 + 4);
            *((_OWORD *)v6 + 5) = *((_OWORD *)v16 + 5);
            *((_OWORD *)v6 + 6) = *((_OWORD *)v16 + 6);
            v6 += 128;
            v18 = *((_OWORD *)v16 + 7);
            v16 += 128;
            *((_OWORD *)v6 - 1) = v18;
            --v17;
          }
          while ( v17 );
LABEL_10:
          SEMOBJ::vUnlock((SEMOBJ *)&v22);
          return v8;
        }
        v7 = (unsigned __int8 *)PALLOCMEM2(0x8000uLL, 1886221383LL, 0);
        v4 = 20;
        if ( !v7 )
          v7 = v6;
      }
    }
    v11 = (unsigned int *)PALLOCMEM2(0x20000uLL, 1886221383LL, 0);
    v13 = v11;
    if ( v11 )
    {
      inv_cmap(v4, a2, v12, v11, v7);
      Win32FreePool(v13);
      v3 = 1;
      if ( v7 != v6 )
      {
        v19 = 256LL;
        v20 = v7;
        do
        {
          *(_OWORD *)v6 = *(_OWORD *)v20;
          *((_OWORD *)v6 + 1) = *((_OWORD *)v20 + 1);
          *((_OWORD *)v6 + 2) = *((_OWORD *)v20 + 2);
          *((_OWORD *)v6 + 3) = *((_OWORD *)v20 + 3);
          *((_OWORD *)v6 + 4) = *((_OWORD *)v20 + 4);
          *((_OWORD *)v6 + 5) = *((_OWORD *)v20 + 5);
          *((_OWORD *)v6 + 6) = *((_OWORD *)v20 + 6);
          v6 += 128;
          v21 = *((_OWORD *)v20 + 7);
          v20 += 128;
          *((_OWORD *)v6 - 1) = v21;
          --v19;
        }
        while ( v19 );
        gpDefITable = v7;
      }
    }
    else if ( v7 != v6 )
    {
      Win32FreePool(v7);
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
      v15 = 0x8000LL;
      v8 = 1;
      do
      {
        if ( *v6 >= 8u )
          *v6 -= 16;
        ++v6;
        --v15;
      }
      while ( v15 );
      return v8;
    case 256:
      return MakeITable256(a1);
    default:
      return 0LL;
  }
}

/*
 * XREFs of ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0021750
 * Callers:
 *     EngCopyBits @ 0x1C00131B0 (EngCopyBits.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C001BB50 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     EngAlphaBlend @ 0x1C0034230 (EngAlphaBlend.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0035314 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0061784 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C008A574 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     EngTextOut @ 0x1C009BA80 (EngTextOut.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C009D740 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     EngHTBlt @ 0x1C00A30B4 (EngHTBlt.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00D1988 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C00E828C (-vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z.c)
 *     CLIPOBJ_bEnum @ 0x1C00F9320 (CLIPOBJ_bEnum.c)
 *     EngTransparentBlt @ 0x1C0126F30 (EngTransparentBlt.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C026DABC (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C02781FC (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C028040C (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1C0283EC4 (-GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z.c)
 *     ?vFilteredShrink2x32bpp@@YAXPEAU_SURFOBJ@@0PEAVECLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0289840 (-vFilteredShrink2x32bpp@@YAXPEAU_SURFOBJ@@0PEAVECLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     NtGdiCLIPOBJ_bEnum @ 0x1C02AAF80 (NtGdiCLIPOBJ_bEnum.c)
 *     ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02BE174 (-vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6A.c)
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02BE414 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XCLIPOBJ::bEnum(XCLIPOBJ *this, unsigned int a2, char *a3, unsigned int *a4)
{
  _DWORD *v4; // rsi
  unsigned int v7; // ebp
  __int64 v8; // rax
  int v9; // r11d
  int v10; // ebx
  __int64 v11; // rdx
  _DWORD *v12; // r8
  unsigned int v13; // r9d
  int *v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  int v17; // r8d
  __int64 v18; // rax
  int v19; // eax
  int v20; // r10d
  __int64 v21; // rax
  int v22; // edx
  int v23; // r9d
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // r8
  int v29; // r9d
  int v30; // r10d
  int *v32; // r8
  int v33; // r11d
  unsigned int v34; // r9d
  int v35; // r10d
  BOOL v36; // ebx
  int v37; // edi
  unsigned int v38; // ebp
  __int64 v39; // rax

  v4 = a3 + 4;
  if ( a2 < 0x14 )
  {
    if ( a4 )
      *a4 = 0;
    return 0LL;
  }
  v7 = a2 - 4;
  if ( a4 )
    *a4 = 4;
  *(_DWORD *)a3 = 0;
  if ( !*((_DWORD *)this + 32) )
  {
    v8 = *((_QWORD *)this + 10);
    v9 = *(_DWORD *)(v8 + 4);
    v10 = *(_DWORD *)(v8 + 8);
    if ( !*((_DWORD *)this + 22) )
      return 0LL;
    while ( 1 )
    {
      v11 = *((unsigned int *)this + 24);
      v12 = (_DWORD *)*((_QWORD *)this + 10);
      if ( (_DWORD)v11 == *((_DWORD *)this + 26) )
      {
        v13 = *((_DWORD *)this + 27);
        if ( v13 >= 2 )
        {
          if ( v12[1] <= *((_DWORD *)this + 17) )
          {
LABEL_35:
            *((_DWORD *)this + 22) = 0;
            return 0LL;
          }
          *((_QWORD *)this + 10) = (char *)v12 - (unsigned int)(4 * *(v12 - 1) + 16);
        }
        else
        {
          if ( v12[2] >= *((_DWORD *)this + 19) )
            goto LABEL_35;
          *((_QWORD *)this + 10) = (char *)v12 + (unsigned int)(4 * *v12 + 16);
        }
        --*((_DWORD *)this + 22);
        v14 = (int *)*((_QWORD *)this + 10);
        v9 = v14[1];
        v10 = v14[2];
        if ( (v13 & 1) != 0 )
        {
          v15 = *v14 - 2;
          *((_DWORD *)this + 26) = -2;
          *((_DWORD *)this + 24) = v15;
          if ( v15 != -2 )
          {
            v16 = *((_QWORD *)this + 10);
            v17 = *((_DWORD *)this + 18);
            do
            {
              v18 = *((unsigned int *)this + 24);
              if ( *(_DWORD *)(v16 + 4 * v18 + 12) < v17 )
                break;
              v19 = v18 - 2;
              *((_DWORD *)this + 24) = v19;
            }
            while ( v19 != -2 );
          }
        }
        else
        {
          *((_DWORD *)this + 24) = 0;
          v27 = *v14;
          *((_DWORD *)this + 26) = v27;
          if ( v27 )
          {
            v28 = *((_QWORD *)this + 10);
            v29 = *((_DWORD *)this + 16);
            do
            {
              v30 = *((_DWORD *)this + 24);
              if ( *(_DWORD *)(v28 + 4LL * (unsigned int)(v30 + 1) + 12) > v29 )
                break;
              *((_DWORD *)this + 24) = v30 + 2;
            }
            while ( v30 + 2 != *((_DWORD *)this + 26) );
          }
        }
      }
      else
      {
        v20 = v12[v11 + 3];
        v21 = (unsigned int)(v11 + 1);
        v22 = *((_DWORD *)this + 16);
        v23 = v12[v21 + 3];
        if ( v22 <= v20 )
          v22 = v20;
        *v4 = v22;
        v24 = *((_DWORD *)this + 18);
        if ( v24 >= v23 )
          v24 = v23;
        v4[2] = v24;
        if ( v22 >= v24 )
        {
          *((_DWORD *)this + 24) = *((_DWORD *)this + 26);
        }
        else
        {
          v25 = *((_DWORD *)this + 17);
          if ( v25 <= v9 )
            v25 = v9;
          v4[1] = v25;
          v26 = *((_DWORD *)this + 19);
          if ( v26 >= v10 )
            v26 = v10;
          v4[3] = v26;
          v7 -= 16;
          v4 += 4;
          *((_DWORD *)this + 24) += *((_DWORD *)this + 25);
          if ( a4 )
            *a4 += 16;
          ++*(_DWORD *)a3;
          if ( v7 < 0x10 )
            return 1LL;
        }
      }
      if ( !*((_DWORD *)this + 22) )
        return 0LL;
    }
  }
  v32 = (int *)*((_QWORD *)this + 10);
  v33 = *((_DWORD *)this + 27) & 1;
  v34 = *((_DWORD *)this + 24);
  v35 = *((_DWORD *)this + 26);
  v36 = *((_DWORD *)this + 27) < 2u;
  v37 = *((_DWORD *)this + 25);
  v38 = v7 >> 4;
  if ( !*((_DWORD *)this + 22) )
    return 0LL;
  while ( v34 == v35 )
  {
    if ( v36 )
      v32 = (int *)((char *)v32 + (unsigned int)(4 * *v32 + 16));
    else
      v32 = (int *)((char *)v32 - (unsigned int)(4 * *(v32 - 1) + 16));
    --*((_DWORD *)this + 22);
    if ( *v32 )
    {
      if ( v33 )
      {
        v34 = *v32 - 2;
        v35 = -2;
      }
      else
      {
        v34 = 0;
        v35 = *v32;
      }
      break;
    }
LABEL_57:
    if ( !*((_DWORD *)this + 22) )
      return 0LL;
  }
  --v38;
  v39 = v34 + 1;
  *v4 = v32[v34 + 3];
  v34 += v37;
  v4[2] = v32[v39 + 3];
  v4[1] = v32[1];
  v4[3] = v32[2];
  v4 += 4;
  ++*(_DWORD *)a3;
  if ( a4 )
    *a4 += 16;
  if ( v38 )
    goto LABEL_57;
  *((_DWORD *)this + 24) = v34;
  *((_DWORD *)this + 26) = v35;
  *((_QWORD *)this + 10) = v32;
  return 1LL;
}

/*
 * XREFs of ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002DDC0
 * Callers:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00326B0 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     EngTextOut @ 0x1C0037A40 (EngTextOut.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C00396E0 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C003A730 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     EngAlphaBlend @ 0x1C003CDC0 (EngAlphaBlend.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C003E6F4 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C004F4A0 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C00685BC (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     EngHTBlt @ 0x1C00BAC98 (EngHTBlt.c)
 *     EngCopyBits @ 0x1C00BC250 (EngCopyBits.c)
 *     EngTransparentBlt @ 0x1C00DEAF0 (EngTransparentBlt.c)
 *     ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C00F9918 (-vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z.c)
 *     CLIPOBJ_bEnum @ 0x1C0101F80 (CLIPOBJ_bEnum.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C026C62C (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C02771F0 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C028077C (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1C0284214 (-GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z.c)
 *     ?vFilteredShrink2x32bpp@@YAXPEAU_SURFOBJ@@0PEAVECLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0289910 (-vFilteredShrink2x32bpp@@YAXPEAU_SURFOBJ@@0PEAVECLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     NtGdiCLIPOBJ_bEnum @ 0x1C02AA610 (NtGdiCLIPOBJ_bEnum.c)
 *     ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02BD5C4 (-vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6A.c)
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02BD864 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XCLIPOBJ::bEnum(XCLIPOBJ *this, unsigned int a2, char *a3, unsigned int *a4)
{
  _DWORD *v4; // rsi
  unsigned int v8; // edi
  __int64 v9; // rax
  int v10; // ebp
  int v11; // r15d
  __int64 v12; // rcx
  _DWORD *v13; // rdx
  unsigned int v14; // r8d
  int *v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // edx
  __int64 v19; // rax
  int v20; // eax
  int v21; // r9d
  int v22; // r8d
  int v23; // ecx
  int v24; // ecx
  int v26; // eax
  __int64 v27; // r8
  int v28; // r9d
  int v29; // edx
  int *v30; // rdx
  int v31; // ebp
  unsigned int v32; // r8d
  int v33; // r9d
  BOOL v34; // r15d
  int v35; // r13d
  unsigned int v36; // edi
  __int64 v37; // rax

  v4 = a3 + 4;
  if ( a2 < 0x14 )
  {
    if ( a4 )
      *a4 = 0;
    return 0LL;
  }
  v8 = a2 - 4;
  if ( a4 )
    *a4 = 4;
  *(_DWORD *)a3 = 0;
  if ( !*((_DWORD *)this + 32) )
  {
    v9 = *((_QWORD *)this + 10);
    v10 = *(_DWORD *)(v9 + 4);
    v11 = *(_DWORD *)(v9 + 8);
    if ( !*((_DWORD *)this + 22) )
      return 0LL;
    while ( 1 )
    {
      v12 = *((unsigned int *)this + 24);
      v13 = (_DWORD *)*((_QWORD *)this + 10);
      if ( (_DWORD)v12 == *((_DWORD *)this + 26) )
      {
        v14 = *((_DWORD *)this + 27);
        if ( v14 >= 2 )
        {
          if ( v13[1] <= *((_DWORD *)this + 17) )
          {
LABEL_30:
            *((_DWORD *)this + 22) = 0;
            return 0LL;
          }
          *((_QWORD *)this + 10) = (char *)v13 - (unsigned int)(4 * *(v13 - 1) + 16);
        }
        else
        {
          if ( v13[2] >= *((_DWORD *)this + 19) )
            goto LABEL_30;
          *((_QWORD *)this + 10) = (char *)v13 + (unsigned int)(4 * *v13 + 16);
        }
        --*((_DWORD *)this + 22);
        v15 = (int *)*((_QWORD *)this + 10);
        v10 = v15[1];
        v11 = v15[2];
        if ( (v14 & 1) != 0 )
        {
          v16 = *v15 - 2;
          *((_DWORD *)this + 26) = -2;
          *((_DWORD *)this + 24) = v16;
          if ( v16 != -2 )
          {
            v17 = *((_QWORD *)this + 10);
            v18 = *((_DWORD *)this + 18);
            do
            {
              v19 = *((unsigned int *)this + 24);
              if ( *(_DWORD *)(v17 + 4 * v19 + 12) < v18 )
                break;
              v20 = v19 - 2;
              *((_DWORD *)this + 24) = v20;
            }
            while ( v20 != -2 );
          }
        }
        else
        {
          *((_DWORD *)this + 24) = 0;
          v26 = *v15;
          *((_DWORD *)this + 26) = v26;
          if ( v26 )
          {
            v27 = *((_QWORD *)this + 10);
            v28 = *((_DWORD *)this + 16);
            do
            {
              v29 = *((_DWORD *)this + 24);
              if ( *(_DWORD *)(v27 + 4LL * (unsigned int)(v29 + 1) + 12) > v28 )
                break;
              *((_DWORD *)this + 24) = v29 + 2;
            }
            while ( v29 + 2 != *((_DWORD *)this + 26) );
          }
        }
      }
      else
      {
        v21 = v13[v12 + 3];
        v22 = v13[(unsigned int)(v12 + 1) + 3];
        if ( *((_DWORD *)this + 16) > v21 )
          v21 = *((_DWORD *)this + 16);
        *v4 = v21;
        if ( *((_DWORD *)this + 18) < v22 )
          v22 = *((_DWORD *)this + 18);
        v4[2] = v22;
        if ( v21 >= v22 )
        {
          *((_DWORD *)this + 24) = *((_DWORD *)this + 26);
        }
        else
        {
          v23 = v10;
          if ( *((_DWORD *)this + 17) > v10 )
            v23 = *((_DWORD *)this + 17);
          v4[1] = v23;
          v24 = v11;
          if ( *((_DWORD *)this + 19) < v11 )
            v24 = *((_DWORD *)this + 19);
          v8 -= 16;
          v4[3] = v24;
          v4 += 4;
          *((_DWORD *)this + 24) += *((_DWORD *)this + 25);
          if ( a4 )
            *a4 += 16;
          ++*(_DWORD *)a3;
          if ( v8 < 0x10 )
            return 1LL;
        }
      }
      if ( !*((_DWORD *)this + 22) )
        return 0LL;
    }
  }
  v30 = (int *)*((_QWORD *)this + 10);
  v31 = *((_DWORD *)this + 27) & 1;
  v32 = *((_DWORD *)this + 24);
  v33 = *((_DWORD *)this + 26);
  v34 = *((_DWORD *)this + 27) < 2u;
  v35 = *((_DWORD *)this + 25);
  v36 = v8 >> 4;
  if ( !*((_DWORD *)this + 22) )
    return 0LL;
  while ( v32 == v33 )
  {
    if ( v34 )
      v30 = (int *)((char *)v30 + (unsigned int)(4 * *v30 + 16));
    else
      v30 = (int *)((char *)v30 - (unsigned int)(4 * *(v30 - 1) + 16));
    --*((_DWORD *)this + 22);
    if ( *v30 )
    {
      if ( v31 )
      {
        v32 = *v30 - 2;
        v33 = -2;
      }
      else
      {
        v32 = 0;
        v33 = *v30;
      }
      break;
    }
LABEL_56:
    if ( !*((_DWORD *)this + 22) )
      return 0LL;
  }
  --v36;
  v37 = v32 + 1;
  *v4 = v30[v32 + 3];
  v32 += v35;
  v4[2] = v30[v37 + 3];
  v4[1] = v30[1];
  v4[3] = v30[2];
  v4 += 4;
  ++*(_DWORD *)a3;
  if ( a4 )
    *a4 += 16;
  if ( v36 )
    goto LABEL_56;
  *((_DWORD *)this + 24) = v32;
  *((_DWORD *)this + 26) = v33;
  *((_QWORD *)this + 10) = v30;
  return 1LL;
}

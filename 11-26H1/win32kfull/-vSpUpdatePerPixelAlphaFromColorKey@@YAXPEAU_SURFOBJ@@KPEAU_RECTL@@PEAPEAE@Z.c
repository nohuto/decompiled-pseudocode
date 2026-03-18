/*
 * XREFs of ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x140247A58
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140167254 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x14016A6F8 (-bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE.c)
 *     ?vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z @ 0x1403163E8 (-vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x140182D04 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 */

void __fastcall vSpUpdatePerPixelAlphaFromColorKey(
        struct _SURFOBJ *a1,
        int a2,
        struct _RECTL *a3,
        unsigned __int8 **a4)
{
  unsigned __int8 *v5; // r15
  int v6; // r13d
  int v7; // r12d
  LONG cx; // r14d
  LONG cy; // edi
  LONG lDelta; // eax
  int v11; // r14d
  int v12; // edi
  __int64 v13; // r8
  int v14; // ecx
  char *v15; // r8
  int v16; // r10d
  int v17; // r9d
  char *v18; // rdx
  int v19; // eax
  int v20; // [rsp+20h] [rbp-68h]
  char *v21; // [rsp+30h] [rbp-58h] BYREF
  LONG v22; // [rsp+38h] [rbp-50h]
  LONG v23; // [rsp+3Ch] [rbp-4Ch]
  LONG v24; // [rsp+40h] [rbp-48h]
  int v25; // [rsp+44h] [rbp-44h]
  unsigned __int8 *v26; // [rsp+48h] [rbp-40h]
  unsigned __int8 *v27; // [rsp+50h] [rbp-38h]
  char *v28; // [rsp+58h] [rbp-30h]
  LONG v29; // [rsp+90h] [rbp+8h]

  v5 = 0LL;
  v26 = 0LL;
  if ( a1->iBitmapFormat == 6 && !a1->iType )
  {
    v20 = a2 & 0xFF00 | ((unsigned __int8)a2 << 16) | BYTE2(a2);
    v6 = 0;
    v21 = 0LL;
    v7 = 0;
    cx = a1->sizlBitmap.cx;
    v22 = cx;
    cy = a1->sizlBitmap.cy;
    v23 = cy;
    if ( a3 )
    {
      ERECTL::operator*=((int *)&v21, &a3->left);
      cy = v23;
      cx = v22;
      v7 = HIDWORD(v21);
      v6 = (int)v21;
    }
    lDelta = a1->lDelta;
    v29 = lDelta;
    v24 = lDelta;
    v11 = cx - v6;
    v25 = v11;
    v12 = cy - v7;
    if ( a4 )
    {
      v13 = (unsigned int)-v11;
      if ( v11 > 0 )
        v13 = (unsigned int)v11;
      v14 = -v12;
      if ( v12 > 0 )
        v14 = v12;
      if ( (_DWORD)v13 && v14 )
      {
        if ( (int)v13 < 0x7FFFFFFF / v14 )
        {
          v5 = (unsigned __int8 *)PALLOCNOZ((int)v13 * v14, 1886221383LL, v13);
          v26 = v5;
          *a4 = v5;
        }
        lDelta = v29;
      }
    }
    v27 = v5;
    v15 = (char *)a1->pvScan0 + 4 * v6 + lDelta * v7;
    v16 = 0;
    while ( 1 )
    {
      v21 = v15;
      if ( !v12 )
        break;
      v17 = v11;
      v18 = v15;
      while ( 1 )
      {
        v28 = v18;
        if ( !v17 )
          break;
        if ( v5 )
          v5[v16] = v18[3];
        if ( *(_DWORD *)v18 == v20 )
          *(_DWORD *)v18 = 0;
        else
          v18[3] = -1;
        --v17;
        v18 += 4;
        v19 = v16 + 1;
        if ( !v5 )
          v19 = v16;
        v16 = v19;
      }
      --v12;
      v15 += v29;
    }
  }
}

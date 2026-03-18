/*
 * XREFs of ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C0277694
 * Callers:
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C026F02C (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0271C40 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z @ 0x1C0272CD0 (-vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00354E4 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 */

void __fastcall vSpUpdatePerPixelAlphaFromColorKey(
        struct _SURFOBJ *a1,
        int a2,
        struct _RECTL *a3,
        unsigned __int8 **a4)
{
  int v5; // r10d
  unsigned __int8 *v6; // r11
  int v7; // r13d
  LONG cy; // edi
  LONG cx; // r14d
  int v10; // r12d
  int v11; // r15d
  LONG lDelta; // r9d
  int v13; // r14d
  int v14; // edi
  int v15; // r8d
  signed int v16; // ecx
  char *i; // r8
  int v18; // r9d
  char *j; // rdx
  LONG v20; // [rsp+20h] [rbp-68h]
  __int64 v21; // [rsp+28h] [rbp-60h] BYREF
  LONG v22; // [rsp+30h] [rbp-58h]
  LONG v23; // [rsp+34h] [rbp-54h]
  int v24; // [rsp+38h] [rbp-50h]
  LONG v25; // [rsp+3Ch] [rbp-4Ch]
  int v26; // [rsp+40h] [rbp-48h]
  unsigned __int8 *v27; // [rsp+48h] [rbp-40h]
  char *v28; // [rsp+50h] [rbp-38h]
  char *v29; // [rsp+58h] [rbp-30h]

  v5 = 0;
  v6 = 0LL;
  v27 = 0LL;
  if ( a1->iBitmapFormat == 6 && !a1->iType )
  {
    v7 = a2 & 0xFF00 | ((unsigned __int8)a2 << 16) | BYTE2(a2);
    v24 = v7;
    cy = a1->sizlBitmap.cy;
    cx = a1->sizlBitmap.cx;
    v10 = 0;
    v21 = 0LL;
    v11 = 0;
    v22 = cx;
    v23 = cy;
    if ( a3 )
    {
      ERECTL::operator*=(&v21, a3);
      cy = v23;
      cx = v22;
      v11 = HIDWORD(v21);
      v10 = v21;
    }
    lDelta = a1->lDelta;
    v20 = lDelta;
    v25 = lDelta;
    v13 = cx - v10;
    v26 = v13;
    v14 = cy - v11;
    if ( a4 )
    {
      v15 = abs32(v13);
      v16 = abs32(v14);
      if ( v15 )
      {
        if ( v16 && v15 < 0x7FFFFFFF / v16 )
        {
          v6 = (unsigned __int8 *)PALLOCMEM2((unsigned int)(v15 * v16), 1886221383LL, 0);
          v27 = v6;
          *a4 = v6;
          v5 = 0;
          lDelta = v20;
        }
      }
    }
    for ( i = (char *)a1->pvScan0 + 4 * v10 + lDelta * v11; ; i += v20 )
    {
      v29 = i;
      if ( !v14 )
        break;
      v18 = v13;
      for ( j = i; ; j += 4 )
      {
        v28 = j;
        if ( !v18 )
          break;
        if ( v6 )
          v6[v5] = j[3];
        if ( *(_DWORD *)j == v7 )
          *(_DWORD *)j = 0;
        else
          j[3] = -1;
        if ( v6 )
          ++v5;
        --v18;
      }
      --v14;
    }
  }
}

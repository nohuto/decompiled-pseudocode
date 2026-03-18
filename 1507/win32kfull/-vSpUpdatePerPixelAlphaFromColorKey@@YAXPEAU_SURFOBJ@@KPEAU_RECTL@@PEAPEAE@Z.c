/*
 * XREFs of ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C027A158
 * Callers:
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0271B2C (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02746F4 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z @ 0x1C0275788 (-vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C025B15C (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 */

void __fastcall vSpUpdatePerPixelAlphaFromColorKey(
        struct _SURFOBJ *a1,
        int a2,
        struct _RECTL *a3,
        unsigned __int8 **a4)
{
  int v6; // r10d
  unsigned __int8 *v7; // r11
  LONG cy; // edi
  LONG cx; // esi
  int v10; // r12d
  int v11; // r15d
  LONG lDelta; // eax
  int v13; // esi
  int v14; // edi
  int v15; // r8d
  int v16; // ecx
  char *v17; // r8
  int v18; // r9d
  char *i; // rdx
  int v20; // [rsp+2Ch] [rbp-5Ch]
  __int64 v21; // [rsp+30h] [rbp-58h] BYREF
  LONG v22; // [rsp+38h] [rbp-50h]
  LONG v23; // [rsp+3Ch] [rbp-4Ch]
  LONG v24; // [rsp+40h] [rbp-48h]
  int v25; // [rsp+44h] [rbp-44h]
  char *v26; // [rsp+48h] [rbp-40h]
  char *v27; // [rsp+50h] [rbp-38h]
  unsigned __int8 *v28; // [rsp+58h] [rbp-30h]
  LONG v29; // [rsp+90h] [rbp+8h]

  v6 = 0;
  v7 = 0LL;
  v28 = 0LL;
  if ( a1->iBitmapFormat == 6 && !a1->iType )
  {
    v20 = a2 & 0xFF00 | ((unsigned __int8)a2 << 16) | BYTE2(a2);
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
    v29 = lDelta;
    v24 = lDelta;
    v13 = cx - v10;
    v25 = v13;
    v14 = cy - v11;
    if ( a4 )
    {
      v15 = v13;
      if ( v13 < 0 )
        v15 = -v13;
      v16 = v14;
      if ( v14 < 0 )
        v16 = -v14;
      if ( v15 && v16 )
      {
        if ( v15 < 0x7FFFFFFF / v16 )
        {
          v7 = (unsigned __int8 *)PALLOCMEM2((unsigned int)(v15 * v16), 1886221383LL, 0);
          v28 = v7;
          *a4 = v7;
          v6 = 0;
        }
        lDelta = v29;
      }
    }
    v17 = (char *)a1->pvScan0 + 4 * v10 + lDelta * v11;
    while ( 1 )
    {
      v27 = v17;
      if ( !v14 )
        break;
      v18 = v13;
      for ( i = v17; ; i += 4 )
      {
        v26 = i;
        if ( !v18 )
          break;
        if ( v7 )
        {
          v7[v6] = i[3];
          lDelta = v29;
        }
        if ( *(_DWORD *)i == v20 )
          *(_DWORD *)i = 0;
        else
          i[3] = -1;
        if ( v7 )
          ++v6;
        --v18;
      }
      --v14;
      v17 += lDelta;
      lDelta = v29;
    }
  }
}

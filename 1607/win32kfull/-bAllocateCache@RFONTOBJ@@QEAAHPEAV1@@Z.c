/*
 * XREFs of ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C002ADA0
 * Callers:
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C002B104 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C002B168 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C002D554 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C002E520 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002E60C (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002E8C8 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C0032270 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C01BF598 (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C029A158 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C02D2A3C (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall RFONTOBJ::bAllocateCache(RFONTOBJ *this, struct RFONTOBJ *a2)
{
  __int64 v2; // rbx
  _DWORD *v4; // rdi
  __int64 v5; // r14
  unsigned int v6; // ebp
  unsigned int v7; // ecx
  unsigned __int64 v8; // r12
  size_t v9; // r13
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r15
  char *v16; // r12
  __int64 v17; // rdx
  unsigned __int16 *v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rax
  _QWORD *v21; // rcx
  __int64 v22; // rcx
  int v23; // ecx
  int v24; // edx
  unsigned int v25; // eax
  unsigned int v26; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int16 *v30; // rdi
  int v31; // eax
  __int64 v32; // rax
  unsigned int v33; // ecx
  __int64 v34; // rax
  int v35; // eax
  int v36; // [rsp+20h] [rbp-68h]
  __int64 v37; // [rsp+30h] [rbp-58h]
  unsigned int v39; // [rsp+98h] [rbp+10h]
  int v40; // [rsp+A0h] [rbp+18h]
  unsigned int v41; // [rsp+A8h] [rbp+20h]

  v2 = *(_QWORD *)this;
  v4 = 0LL;
  v5 = 0LL;
  v36 = 2 * *(_DWORD *)(*(_QWORD *)this + 648LL);
  v40 = *(_DWORD *)(*(_QWORD *)this + 68LL) & 2;
  if ( v40 )
  {
    v5 = *(_QWORD *)(v2 + 472);
    v6 = *(_DWORD *)(v5 + 12);
    v7 = *(_DWORD *)(v5 + 8);
  }
  else
  {
    v4 = *(_DWORD **)(*(_QWORD *)(v2 + 112) + 80LL);
    if ( !v4 )
      return 0LL;
    v6 = v4[1];
    v7 = *v4;
  }
  v8 = 16LL * v6;
  v39 = v7;
  if ( v8 > 0xFFFFFFFF )
    return 0LL;
  v9 = 8LL * v7;
  if ( v9 > 0xFFFFFFFF )
    return 0LL;
  v10 = v8 + 16;
  if ( (unsigned int)v8 >= 0xFFFFFFF0 || v10 + (unsigned int)v9 < v10 )
    return 0LL;
  v11 = (v10 + v9 + 7) & 0xFFFFFFF8;
  v41 = v11;
  v12 = v11 + 32 * (*(_DWORD *)(v2 + 652) != 0 ? 24 : 64);
  if ( v12 + 8 > 0xC00 )
  {
    v12 = (v11 + 4095) & 0xFFFFF000;
    if ( v12 - v11 < 0x80 )
      v12 += 4096;
  }
  v13 = PALLOCMEM2(v12);
  v37 = v13;
  v14 = *(_QWORD *)this;
  if ( !v13 )
  {
    *(_DWORD *)(v14 + 68) |= 8u;
    return 0LL;
  }
  *(_QWORD *)(v14 + 480) = v13;
  v15 = *(_QWORD *)(*(_QWORD *)this + 480LL);
  v16 = (char *)(v15 + v8 + 16);
  *(_QWORD *)(v15 + 8) = 0LL;
  *(_DWORD *)v15 = v6;
  memset(v16, 0, v9);
  if ( v40 )
  {
    if ( v6 )
    {
      v17 = v6;
      v18 = (unsigned __int16 *)(v5 + 18);
      v19 = v15 - v5;
      do
      {
        *(_QWORD *)((char *)v18 + v19 + 6) = v16;
        *(_DWORD *)((char *)v18 + v19 - 2) = *(v18 - 1);
        v20 = *v18;
        *(_DWORD *)((char *)v18 + v19 + 2) = v20;
        v18 += 8;
        v16 += 8 * v20;
        --v17;
      }
      while ( v17 );
    }
  }
  else if ( v6 )
  {
    v28 = v6;
    v29 = v15 + 20;
    v30 = (unsigned __int16 *)(v4 + 2);
    do
    {
      *(_QWORD *)(v29 + 4) = v16;
      v31 = *v30;
      v30 += 2;
      *(_DWORD *)(v29 - 4) = v31;
      v32 = *(v30 - 1);
      *(_DWORD *)v29 = v32;
      v29 += 16LL;
      v16 += 8 * v32;
      --v28;
    }
    while ( v28 );
  }
  v21 = (_QWORD *)(v37 + v41);
  *(_QWORD *)(v2 + 560) = v21;
  *v21 = 0LL;
  v22 = v37 + v12;
  *(_QWORD *)(v2 + 536) = *(_QWORD *)(v2 + 560) + 16LL;
  *(_QWORD *)(v2 + 552) = v22;
  *(_QWORD *)(v2 + 544) = v22;
  v23 = *(_DWORD *)(*(_QWORD *)this + 72LL);
  if ( v23 && (*(_DWORD *)(*(_QWORD *)this + 68LL) & 1) == 0 )
  {
    if ( v23 == 2 )
    {
      *(_DWORD *)(v2 + 572) = v36;
      *(_DWORD *)(v2 + 576) = v36;
    }
    else
    {
      v24 = *(_DWORD *)(v2 + 648);
      v25 = (16 * v24 + 4095) & 0xFFFFF000;
      if ( v25 > 0x2000 )
      {
        if ( (unsigned int)(8 * v24) > 0x2000 )
        {
          v33 = 0x10000;
          if ( ((8 * v24 + 4095) & 0xFFFFF000) < 0x10000 )
            v33 = (8 * v24 + 4095) & 0xFFFFF000;
          *(_DWORD *)(v2 + 572) = v33;
          *(_DWORD *)(v2 + 576) = v33;
        }
        else
        {
          *(_DWORD *)(v2 + 572) = 0x2000;
          *(_DWORD *)(v2 + 576) = 0x2000;
        }
      }
      else
      {
        *(_DWORD *)(v2 + 576) = v25;
        if ( (unsigned int)(16 * v24) < 0xC00 )
          v25 = 16 * v24;
        *(_DWORD *)(v2 + 572) = v25;
      }
    }
    *(_DWORD *)(v2 + 580) = ((v39 + 1023) >> 10 << 16) / *(_DWORD *)(v2 + 576);
  }
  v26 = **(_DWORD **)(*(_QWORD *)this + 480LL);
  if ( v26 > 0xC8 )
  {
    v34 = v26 - 1;
    *(_DWORD *)(v2 + 656) = v34;
    if ( (v34 & 0xF000) != 0 )
    {
      v35 = acBits[(v34 >> 12) & 0xF] + 12;
    }
    else if ( (v34 & 0xF00) != 0 )
    {
      v35 = acBits[(v34 >> 8) & 0xF] + 8;
    }
    else if ( (v34 & 0xF0) != 0 )
    {
      v35 = acBits[(v34 >> 4) & 0xF] + 4;
    }
    else
    {
      v35 = acBits[v34 & 0xF];
    }
    *(_DWORD *)(v2 + 664) = v35;
    *(_DWORD *)(v2 + 660) = *((_DWORD *)&aiStart + v35);
  }
  else
  {
    *(_DWORD *)(v2 + 656) = 0;
  }
  return 1LL;
}

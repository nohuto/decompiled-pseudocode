/*
 * XREFs of ?vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ2@Z @ 0x1C02B8810
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0031964 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002E8C8 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 */

void __fastcall ESTROBJ::vCharPos_G1(
        ESTROBJ *this,
        struct XDCOBJ *a2,
        struct RFONTOBJ *a3,
        LONG a4,
        LONG a5,
        int *a6,
        int *a7)
{
  __int64 v7; // rax
  __int64 v11; // xmm0_8
  int v12; // esi
  struct _GLYPHPOS *v13; // r13
  int v14; // r14d
  float v15; // xmm6_4
  unsigned __int16 *v16; // r9
  int v17; // edi
  int v18; // r12d
  struct RFONTOBJ *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  GLYPHDEF **p_pgdf; // r15
  int *v23; // r11
  int v24; // ebx
  int v26; // r8d
  float v27; // xmm1_4
  float v28; // xmm0_4
  int v29; // eax
  float v30; // xmm1_4
  int v31; // r8d
  int v32; // edx
  float v33; // xmm1_4
  int v34; // r8d
  int v35; // ecx
  int v37; // [rsp+40h] [rbp-30h] BYREF
  __int64 v38; // [rsp+48h] [rbp-28h]
  __int64 i; // [rsp+50h] [rbp-20h]

  v7 = *(_QWORD *)a3;
  if ( !*(_DWORD *)(*(_QWORD *)a3 + 652LL) )
  {
    v11 = *(_QWORD *)(v7 + 392);
    v12 = 0;
    v13 = (struct _GLYPHPOS *)*((_QWORD *)this + 9);
    v14 = 0;
    v15 = *(float *)(v7 + 400);
    v16 = (unsigned __int16 *)*((_QWORD *)this + 5);
    v17 = 0;
    v18 = 0;
    v13->ptl.y = a5;
    v13->ptl.x = a4;
    v19 = (struct RFONTOBJ *)*(unsigned int *)this;
    v38 = v11;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(a3, v19, v13, v16, &v37, a2, this) )
    {
      if ( v37 )
      {
        v20 = *((_QWORD *)this + 9);
        *((_DWORD *)this + 16) |= 2u;
        *((_QWORD *)this + 4) = v20;
      }
      LODWORD(v21) = (*(_DWORD *)(*(_QWORD *)a3 + 268LL) & 0x10) != 0 && (*((_DWORD *)this + 16) & 0x1400) == 0;
      p_pgdf = &v13->pgdf;
      v23 = a7;
      v24 = *(_DWORD *)this;
      v21 = (int)v21;
      for ( i = (int)v21; ; v21 = i )
      {
        if ( v21 )
        {
          if ( v17 < v12 )
            v12 = v17;
          if ( v17 + HIDWORD((*p_pgdf)[1].ppo) > v14 )
            v14 = v17 + HIDWORD((*p_pgdf)[1].ppo);
        }
        else
        {
          if ( v17 + LODWORD((*p_pgdf)[2].pgb) < v12 )
            v12 = v17 + LODWORD((*p_pgdf)[2].pgb);
          if ( v17 + HIDWORD((*p_pgdf)[2].ppo) > v14 )
            v14 = v17 + HIDWORD((*p_pgdf)[2].ppo);
        }
        v18 += *a6++;
        if ( v23 )
          *v23 = v18;
        v37 = 0;
        bFToL((float)v18 * v15, &v37, 0);
        v17 = v37;
        v27 = (float)v37;
        v28 = (float)v37 * *(float *)&v38;
        if ( !--v24 )
          break;
        v37 &= v26;
        p_pgdf += 3;
        bFToL(v28, &v37, v26);
        v29 = v37 + a4;
        v30 = v27 * *((float *)&v38 + 1);
        v37 &= v31;
        *((_DWORD *)p_pgdf + 2) = v29;
        bFToL(v30, &v37, v31);
        *((_DWORD *)p_pgdf + 3) = v37 + a5;
      }
      if ( v37 > v14 )
        v14 = v37;
      v37 &= v26;
      bFToL(v28, &v37, v26);
      v32 = v37;
      v33 = v27 * *((float *)&v38 + 1);
      v37 &= v34;
      *((_DWORD *)this + 22) = v32;
      bFToL(v33, &v37, v34);
      *((_DWORD *)this + 23) = v37;
      *((_DWORD *)this + 26) = v12;
      *((_DWORD *)this + 28) = v14;
      *((_DWORD *)this + 27) = *(_DWORD *)(*(_QWORD *)a3 + 308LL);
      v35 = *(_DWORD *)(*(_QWORD *)a3 + 312LL);
      *((_DWORD *)this + 16) |= 4u;
      *((_DWORD *)this + 29) = v35;
    }
  }
}

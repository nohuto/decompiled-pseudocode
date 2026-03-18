/*
 * XREFs of ?vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ2@Z @ 0x1C0007C44
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0028490 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00238E4 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
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
  __int64 v10; // xmm0_8
  int v11; // esi
  struct _GLYPHPOS *v12; // r13
  int v13; // r14d
  unsigned __int16 *v14; // r9
  int v15; // edi
  int v16; // r12d
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rax
  GLYPHDEF **p_pgdf; // r15
  int *v21; // r11
  int v22; // ebx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // rcx
  int v30; // edx
  __int64 v31; // r8
  __int64 v32; // rcx
  int v33; // ecx
  int v35; // [rsp+40h] [rbp-30h] BYREF
  __int64 v36; // [rsp+48h] [rbp-28h]
  __int64 i; // [rsp+50h] [rbp-20h]

  if ( !*(_DWORD *)(*(_QWORD *)a3 + 652LL) )
  {
    v10 = *(_QWORD *)(*(_QWORD *)a3 + 392LL);
    v11 = 0;
    v12 = (struct _GLYPHPOS *)*((_QWORD *)this + 9);
    v13 = 0;
    v14 = (unsigned __int16 *)*((_QWORD *)this + 5);
    v15 = 0;
    v16 = 0;
    v12->ptl.y = a5;
    v12->ptl.x = a4;
    v17 = *(_DWORD *)this;
    v36 = v10;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(a3, v17, v12, v14, &v35, a2, this) )
    {
      if ( v35 )
      {
        v18 = *((_QWORD *)this + 9);
        *((_DWORD *)this + 16) |= 2u;
        *((_QWORD *)this + 4) = v18;
      }
      LODWORD(v19) = (*(_DWORD *)(*(_QWORD *)a3 + 268LL) & 0x10) != 0 && (*((_DWORD *)this + 16) & 0x1400) == 0;
      p_pgdf = &v12->pgdf;
      v21 = a7;
      v22 = *(_DWORD *)this;
      v19 = (int)v19;
      for ( i = (int)v19; ; v19 = i )
      {
        if ( v19 )
        {
          if ( v15 < v11 )
            v11 = v15;
          v24 = (unsigned int)(v15 + HIDWORD((*p_pgdf)[1].ppo));
          if ( (int)v24 > v13 )
            v13 = v15 + HIDWORD((*p_pgdf)[1].ppo);
        }
        else
        {
          if ( v15 + LODWORD((*p_pgdf)[2].pgb) < v11 )
            v11 = v15 + LODWORD((*p_pgdf)[2].pgb);
          v24 = (unsigned int)(v15 + HIDWORD((*p_pgdf)[2].ppo));
          if ( (int)v24 > v13 )
            v13 = v15 + HIDWORD((*p_pgdf)[2].ppo);
        }
        v16 += *a6++;
        if ( v21 )
          *v21 = v16;
        v35 = 0;
        bFToL(v24, &v35, 0LL);
        v15 = v35;
        if ( !--v22 )
          break;
        v35 &= v26;
        p_pgdf += 3;
        bFToL(v25, &v35, v26);
        v27 = v35 + a4;
        v35 &= v28;
        *((_DWORD *)p_pgdf + 2) = v27;
        bFToL(v29, &v35, v28);
        *((_DWORD *)p_pgdf + 3) = v35 + a5;
      }
      if ( v35 > v13 )
        v13 = v35;
      v35 &= v26;
      bFToL(v25, &v35, v26);
      v30 = v35;
      v35 &= v31;
      *((_DWORD *)this + 22) = v30;
      bFToL(v32, &v35, v31);
      *((_DWORD *)this + 23) = v35;
      *((_DWORD *)this + 26) = v11;
      *((_DWORD *)this + 28) = v13;
      *((_DWORD *)this + 27) = *(_DWORD *)(*(_QWORD *)a3 + 308LL);
      v33 = *(_DWORD *)(*(_QWORD *)a3 + 312LL);
      *((_DWORD *)this + 16) |= 4u;
      *((_DWORD *)this + 29) = v33;
    }
  }
}

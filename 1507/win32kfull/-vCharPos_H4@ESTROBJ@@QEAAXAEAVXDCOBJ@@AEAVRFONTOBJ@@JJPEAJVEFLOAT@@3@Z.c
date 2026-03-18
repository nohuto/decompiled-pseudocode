/*
 * XREFs of ?vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z @ 0x1C01119A0
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00225B0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002B178 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bIs16@EFLOAT@@QEAAHXZ @ 0x1C00328E0 (-bIs16@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C00A95A4 (bFToL.c)
 */

__int64 __fastcall ESTROBJ::vCharPos_H4(
        unsigned int *a1,
        __int64 a2,
        RFONTOBJ *a3,
        int a4,
        int a5,
        _DWORD *a6,
        float a7,
        float a8)
{
  struct _GLYPHPOS *v8; // r13
  struct XDCOBJ *v12; // rdx
  unsigned __int16 *v13; // r9
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // r15d
  int v18; // r12d
  POINTL *p_ptl; // r13
  signed int v20; // r14d
  signed int v21; // edi
  signed int v22; // esi
  int v23; // r9d
  int v24; // r10d
  int v25; // r11d
  int v26; // r8d
  int v27; // eax
  POINTL v28; // rdx
  int v29; // r9d
  int v30; // [rsp+40h] [rbp-20h]
  int v31; // [rsp+44h] [rbp-1Ch] BYREF
  int v32; // [rsp+48h] [rbp-18h]
  int v33; // [rsp+4Ch] [rbp-14h] BYREF
  BOOL v34; // [rsp+50h] [rbp-10h]
  BOOL v35; // [rsp+54h] [rbp-Ch]
  struct _GLYPHPOS *v36; // [rsp+58h] [rbp-8h]
  int v40; // [rsp+B8h] [rbp+58h]
  int v41; // [rsp+C0h] [rbp+60h]

  v36 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 9);
  v8 = v36;
  v34 = EFLOAT::bIs16((EFLOAT *)&a7);
  v35 = EFLOAT::bIs16((EFLOAT *)&a8);
  result = RFONTOBJ::bGetGlyphMetricsPlus(a3, (struct RFONTOBJ *)*a1, v36, v13, &v33, v12, (struct ESTROBJ *)a1);
  if ( (_DWORD)result )
  {
    if ( v33 )
    {
      v15 = *((_QWORD *)a1 + 9);
      a1[16] |= 2u;
      *((_QWORD *)a1 + 4) = v15;
    }
    v16 = *(_QWORD *)a3;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 352LL) & 0x40) != 0 )
    {
      v17 = -*(_DWORD *)(v16 + 312);
      v18 = -*(_DWORD *)(v16 + 308);
    }
    else
    {
      v17 = *(_DWORD *)(v16 + 308);
      v18 = *(_DWORD *)(v16 + 312);
    }
    v30 = 0;
    p_ptl = &v8->ptl;
    v41 = a5 + 8;
    v40 = a4 + 8;
    v20 = 0;
    v21 = 0;
    p_ptl->x = v40 >> 4;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v36->ptl.y = v41 >> 4;
    v33 = *a1;
    while ( 1 )
    {
      v27 = v30;
      v28 = p_ptl[-1];
      if ( v25 + *(_DWORD *)(*(_QWORD *)&v28 + 16LL) < v30 )
        v27 = v25 + *(_DWORD *)(*(_QWORD *)&v28 + 16LL);
      v30 = v27;
      if ( v25 + *(_DWORD *)(*(_QWORD *)&v28 + 20LL) > v20 )
        v20 = v25 + *(_DWORD *)(*(_QWORD *)&v28 + 20LL);
      if ( v26 + v17 > v21 )
        v21 = v26 + v17;
      if ( v26 + v18 < v22 )
        v22 = v26 + v18;
      v29 = *a6 + v23;
      v24 += a6[1];
      a6 += 2;
      LODWORD(v36) = v29;
      v32 = v24;
      if ( v34 )
      {
        v25 = 16 * v29;
      }
      else
      {
        v31 = 0;
        bFToL((float)v29 * a7, &v31, 0);
        v24 = v32;
        v25 = v31;
      }
      if ( v35 )
      {
        v26 = 16 * v24;
      }
      else
      {
        v31 = 0;
        bFToL((float)v24 * a8, &v31, 0);
        v24 = v32;
        v26 = v31;
      }
      if ( !--v33 )
        break;
      p_ptl += 3;
      v23 = (int)v36;
      p_ptl->x = (v25 + v40) >> 4;
      p_ptl->y = (v41 - v26) >> 4;
    }
    if ( v25 > v20 )
      v20 = v25;
    a1[26] = v30;
    a1[22] = v25;
    a1[23] = -v26;
    a1[28] = v20;
    result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 352LL);
    if ( (result & 0x40) != 0 )
    {
      a1[27] = -v22;
      a1[29] = -v21;
    }
    else
    {
      a1[27] = v21;
      a1[29] = v22;
    }
    a1[16] |= 4u;
  }
  return result;
}

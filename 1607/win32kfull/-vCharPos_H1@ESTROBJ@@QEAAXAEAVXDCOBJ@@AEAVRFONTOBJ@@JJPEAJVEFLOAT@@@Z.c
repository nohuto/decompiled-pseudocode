/*
 * XREFs of ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z @ 0x1C00327F4
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0031964 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002E8C8 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 */

__int64 __fastcall ESTROBJ::vCharPos_H1(
        unsigned int *a1,
        struct XDCOBJ *a2,
        RFONTOBJ *a3,
        int a4,
        int a5,
        _DWORD *a6,
        float a7)
{
  float v8; // xmm0_4
  struct _GLYPHPOS *v10; // r13
  unsigned __int16 *v11; // r9
  __int64 result; // rax
  __int64 v13; // rax
  LONG *p_y; // r11
  int v15; // r9d
  _BOOL8 v16; // r10
  int v17; // r12d
  signed int v18; // r15d
  signed int v19; // esi
  int v20; // ebp
  __int64 v21; // rax
  int v22; // r8d
  int v23; // r14d
  _DWORD *v24; // r13
  __int64 v25; // rdx
  struct XDCOBJ *v26; // rax
  bool v27; // zf
  __int64 v28; // rax
  int v29; // ecx
  int v30; // r14d
  _DWORD *v31; // r13
  __int64 v32; // rax
  int v33; // [rsp+90h] [rbp+8h] BYREF
  struct XDCOBJ *v34; // [rsp+98h] [rbp+10h]
  _BOOL8 v35; // [rsp+A0h] [rbp+18h]
  int v36; // [rsp+A8h] [rbp+20h]

  v36 = a4;
  v34 = a2;
  v8 = a7;
  v10 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 9);
  v11 = (unsigned __int16 *)*((_QWORD *)a1 + 5);
  a1[1] |= *(_DWORD *)(*(_QWORD *)a3 + 268LL) & 0x40 | 2;
  result = RFONTOBJ::bGetGlyphMetricsPlus(a3, (struct RFONTOBJ *)*a1, v10, v11, &v33, a2, (struct ESTROBJ *)a1);
  if ( (_DWORD)result )
  {
    if ( v33 )
    {
      v13 = *((_QWORD *)a1 + 9);
      a1[16] |= 2u;
      *((_QWORD *)a1 + 4) = v13;
    }
    p_y = &v10->ptl.y;
    v15 = v36 + 8;
    v16 = v8 == 16.0;
    v17 = (a5 + 8) >> 4;
    v18 = 0;
    v10->ptl.x = (v36 + 8) >> 4;
    v19 = 0;
    v10->ptl.y = v17;
    v20 = 0;
    v21 = *(_QWORD *)a3;
    v22 = 0;
    v36 = v15;
    v35 = v16;
    if ( (*(_DWORD *)(v21 + 268) & 0x10) == 0 || (a1[16] & 0x1400) != 0 )
    {
      v23 = *a1;
      v24 = a6;
      while ( 1 )
      {
        v25 = *(_QWORD *)(p_y - 3);
        if ( v22 + *(_DWORD *)(v25 + 16) < v18 )
          v18 = v22 + *(_DWORD *)(v25 + 16);
        if ( v22 + *(_DWORD *)(v25 + 20) > v19 )
          v19 = v22 + *(_DWORD *)(v25 + 20);
        v20 += *v24++;
        if ( v16 )
        {
          v22 = 16 * v20;
        }
        else
        {
          v33 = 0;
          bFToL((float)v20 * a7, &v33, 0);
          v15 = v36;
          v16 = v35;
          v22 = v33;
        }
        if ( !--v23 )
          break;
        p_y += 6;
        *p_y = v17;
        *(p_y - 1) = (v22 + v15) >> 4;
      }
    }
    else
    {
      v30 = *a1;
      v31 = a6;
      while ( 1 )
      {
        if ( v22 < v18 )
          v18 = v22;
        v32 = *(_QWORD *)(p_y - 3);
        if ( v22 + *(_DWORD *)(v32 + 12) > v19 )
          v19 = v22 + *(_DWORD *)(v32 + 12);
        v20 += *v31++;
        if ( v16 )
        {
          v22 = 16 * v20;
        }
        else
        {
          v33 = 0;
          bFToL((float)v20 * a7, &v33, 0);
          v15 = v36;
          v16 = v35;
          v22 = v33;
        }
        if ( !--v30 )
          break;
        p_y += 6;
        *p_y = v17;
        *(p_y - 1) = (v22 + v15) >> 4;
      }
    }
    v26 = v34;
    a1[22] = v22;
    a1[26] = v18;
    if ( v22 > v19 )
      v19 = v22;
    a1[23] = 0;
    a1[28] = v19;
    v27 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v26 + 80LL) + 352LL) & 0x40) == 0;
    v28 = *(_QWORD *)a3;
    if ( v27 )
    {
      a1[27] = *(_DWORD *)(v28 + 308);
      result = *(_QWORD *)a3;
      v29 = *(_DWORD *)(*(_QWORD *)a3 + 312LL);
    }
    else
    {
      a1[27] = -*(_DWORD *)(v28 + 312);
      result = *(_QWORD *)a3;
      v29 = -*(_DWORD *)(*(_QWORD *)a3 + 308LL);
    }
    a1[16] |= 4u;
    a1[29] = v29;
  }
  return result;
}

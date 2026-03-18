/*
 * XREFs of ?bSplitTriangle@@YAHPEAU_TRIVERTEX@@PEAKPEAU_GRADIENT_TRIANGLE@@1PEAE@Z @ 0x1C027EF4C
 * Callers:
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C013A3F8 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 * Callees:
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 *     ?lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C013AD38 (-lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 */

__int64 __fastcall bSplitTriangle(
        struct _TRIVERTEX *a1,
        unsigned int *a2,
        struct _GRADIENT_TRIANGLE *a3,
        unsigned int *a4,
        unsigned __int8 *a5)
{
  __int64 v7; // rsi
  ULONG Vertex1; // ecx
  ULONG Vertex3; // eax
  struct _TRIVERTEX *v10; // r15
  struct _TRIVERTEX *v11; // rdx
  struct _TRIVERTEX *v12; // rdi
  int x; // r8d
  int v14; // eax
  LONG y; // r10d
  LONG v16; // r14d
  __int64 v17; // r11
  int v18; // eax
  LONG v19; // ecx
  __int64 v20; // r13
  int v21; // eax
  __int64 v22; // r9
  LONG v23; // eax
  int v24; // r8d
  __int64 v25; // r12
  int v26; // ecx
  int v27; // eax
  __int64 v28; // r14
  int *p_x; // rdx
  __int64 v30; // r13
  __int64 v31; // r12
  __int64 v32; // r14
  ULONG v33; // r12d
  ULONG v34; // r14d
  ULONG v35; // edi
  char v36; // r8
  __int64 v37; // r11
  char v38; // r8
  int Green; // eax
  __int64 v40; // r11
  char v41; // r8
  int Blue; // eax
  __int64 v43; // r11
  char v44; // r8
  int Alpha; // eax
  __int64 v46; // r11
  char v47; // r8
  unsigned int *v48; // r10
  ULONG v49; // r9d
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int8 *v54; // rax
  ULONG v56; // [rsp+20h] [rbp-48h]
  LONG v57; // [rsp+28h] [rbp-40h]
  __int64 v58; // [rsp+28h] [rbp-40h]
  ULONG v59; // [rsp+30h] [rbp-38h]
  struct _TRIVERTEX *v60; // [rsp+38h] [rbp-30h]
  __int64 v61; // [rsp+40h] [rbp-28h]
  struct _TRIVERTEX v62; // [rsp+48h] [rbp-20h] BYREF
  ULONG Vertex2; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int *v66; // [rsp+C8h] [rbp+60h]

  v66 = a4;
  v7 = *a4 - 1;
  Vertex1 = a3[*a4 - 1].Vertex1;
  Vertex3 = a3[*a4 - 1].Vertex3;
  Vertex2 = a3[*a4 - 1].Vertex2;
  v10 = &a1[Vertex1];
  v11 = &a1[Vertex2];
  v12 = &a1[Vertex3];
  v59 = Vertex3;
  x = v10->x;
  v56 = Vertex1;
  v14 = v10->x - v11->x;
  v60 = v11;
  v57 = v11->x;
  if ( v14 < 0 )
    v14 = v11->x - x;
  y = v10->y;
  v16 = v11->y;
  v17 = v14;
  v18 = y - v16;
  v61 = v17;
  if ( y - v16 < 0 )
    v18 = v16 - y;
  v19 = v12->x;
  v20 = v18;
  v21 = x - v12->x;
  if ( v21 < 0 )
    v21 = v19 - x;
  v22 = v21;
  v23 = v12->y;
  v24 = y - v23;
  *(_QWORD *)&v62.x = v22;
  if ( y - v23 < 0 )
    v24 = v23 - y;
  v25 = v24;
  if ( v57 - v19 >= 0 )
    v26 = v57 - v19;
  else
    v26 = v19 - v57;
  v58 = v26;
  if ( v16 - v23 >= 0 )
    v27 = v16 - v23;
  else
    v27 = v23 - v16;
  v28 = v27;
  if ( (v17 > 0x4000 || v20 > 0x4000 || v22 > 0x4000 || v24 > 0x4000LL || v26 > 0x4000LL || v27 > 0x4000LL)
    && (unsigned int)lCalculateTriangleArea(v10, v11, v12, 0LL) )
  {
    v30 = v61 * v61 + v20 * v20;
    v31 = *(_QWORD *)&v62.x * *(_QWORD *)&v62.x + v25 * v25;
    v32 = v58 * v58 + v28 * v28;
    if ( v30 <= v31 )
    {
      if ( v31 <= v32 )
      {
        v34 = a3[v7].Vertex3;
        v10 = v12;
        v35 = a3[v7].Vertex1;
        v33 = Vertex2;
        goto LABEL_30;
      }
      v33 = a3[v7].Vertex3;
      p_x = &v12->x;
      v35 = a3[v7].Vertex2;
      v60 = (struct _TRIVERTEX *)p_x;
    }
    else
    {
      v33 = Vertex2;
      if ( v30 <= v32 )
      {
        v34 = a3[v7].Vertex3;
        v10 = v12;
        v35 = a3[v7].Vertex1;
LABEL_30:
        bFToL((float)((float)((float)*p_x - (float)v10->x) * 0.5) + (float)v10->x, &v62, 6);
        bFToL((float)((float)((float)v60->y - (float)v10->y) * 0.5) + (float)v10->y, &v62.y, v36);
        bFToL(
          (float)((float)((float)*(unsigned __int16 *)(v37 + 8) - (float)v10->Red) * 0.5) + (float)v10->Red,
          &Vertex2,
          v38);
        Green = v10->Green;
        v62.Red = Vertex2;
        bFToL(
          (float)((float)((float)*(unsigned __int16 *)(v40 + 10) - (float)Green) * 0.5) + (float)Green,
          &Vertex2,
          v41);
        Blue = v10->Blue;
        v62.Green = Vertex2;
        bFToL((float)((float)((float)*(unsigned __int16 *)(v43 + 12) - (float)Blue) * 0.5) + (float)Blue, &Vertex2, v44);
        Alpha = v10->Alpha;
        v62.Blue = Vertex2;
        bFToL(
          (float)((float)((float)*(unsigned __int16 *)(v46 + 14) - (float)Alpha) * 0.5) + (float)Alpha,
          &Vertex2,
          v47);
        v48 = v66;
        v49 = *a2;
        v50 = *v66;
        v51 = *a2;
        v62.Alpha = Vertex2;
        a1[v51] = v62;
        v52 = v50;
        a3[v52].Vertex1 = v34;
        a3[v52].Vertex2 = v35;
        a3[v52].Vertex3 = v49;
        v53 = (unsigned int)(v50 + 1);
        a3[v53].Vertex1 = v33;
        a3[v53].Vertex2 = v35;
        a3[v53].Vertex3 = v49;
        v54 = a5;
        a5[v50] = 1;
        v54[(unsigned int)(v50 + 1)] = 0;
        *v48 = v50 + 2;
        *a2 = v49 + 1;
        return 1LL;
      }
      v35 = v59;
    }
    v34 = v56;
    goto LABEL_30;
  }
  return 0LL;
}

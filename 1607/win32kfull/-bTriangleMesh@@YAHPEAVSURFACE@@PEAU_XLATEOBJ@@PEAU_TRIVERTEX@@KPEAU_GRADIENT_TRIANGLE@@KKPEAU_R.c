/*
 * XREFs of ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C0142F04
 * Callers:
 *     EngGradientFill @ 0x1C0061580 (EngGradientFill.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ?bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6AX0PEAU_GRADIENTRECTDATA@@@Z@Z @ 0x1C0067EE8 (-bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6.c)
 *     UIntAdd @ 0x1C0070A70 (UIntAdd.c)
 *     ULongLongToULong @ 0x1C0112064 (ULongLongToULong.c)
 *     ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1C01432A8 (-bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z.c)
 *     ?bIsTriangleInBounds@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C0143D80 (-bIsTriangleInBounds@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?bSplitTriangle@@YAHPEAU_TRIVERTEX@@PEAKPEAU_GRADIENT_TRIANGLE@@1PEAE@Z @ 0x1C027D3D8 (-bSplitTriangle@@YAHPEAU_TRIVERTEX@@PEAKPEAU_GRADIENT_TRIANGLE@@1PEAE@Z.c)
 */

__int64 __fastcall bTriangleMesh(
        struct SURFACE *a1,
        struct _XLATEOBJ *a2,
        struct _TRIVERTEX *a3,
        unsigned int a4,
        struct _GRADIENT_TRIANGLE *a5,
        UINT uAddend,
        LONG a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10)
{
  struct _RECTL *v10; // rbx
  __int64 v12; // r14
  unsigned int v14; // r15d
  int v15; // r9d
  struct _RECTL *v16; // rdx
  struct _POINTL *v17; // rsi
  __int64 v18; // r8
  struct _RECTL v19; // xmm0
  struct _POINTL *v20; // rax
  __int64 v21; // r12
  ULONG *p_Vertex3; // rbx
  struct _TRIVERTEX *v23; // rdi
  struct _TRIVERTEX *v24; // r14
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdi
  UINT v28; // r12d
  __int64 v29; // rbx
  struct _TRIVERTEX *v30; // rax
  struct _TRIVERTEX *v31; // r13
  UINT v32; // r12d
  __int64 Vertex3; // rdx
  __int64 Vertex2; // r8
  ULONG Vertex1; // r9d
  int v36; // eax
  unsigned __int8 v37; // cl
  UINT puResult; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v40; // [rsp+34h] [rbp-3Ch]
  __int64 v41; // [rsp+38h] [rbp-38h] BYREF
  struct _GRADIENT_TRIANGLE *v42; // [rsp+40h] [rbp-30h]
  unsigned __int8 *v43; // [rsp+48h] [rbp-28h]
  void (*v44)(struct SURFACE *, struct _TRIANGLEDATA *); // [rsp+50h] [rbp-20h] BYREF
  struct _TRIVERTEX *v45; // [rsp+58h] [rbp-18h]
  struct _TRIVERTEX *v46; // [rsp+60h] [rbp-10h]
  struct _TRIVERTEX *v47; // [rsp+68h] [rbp-8h]

  v10 = a8;
  v12 = a4;
  v14 = 1;
  v15 = a8->bottom - a8->top;
  if ( v15 <= 0 )
    return 0;
  if ( (unsigned __int64)(v15 - 1) > 0x6666661 )
    return 0;
  v17 = (struct _POINTL *)PALLOCMEM2((unsigned int)(40 * (v15 - 1) + 208), 1734624615LL, 1);
  if ( !v17 )
    return 0;
  v41 = *((_QWORD *)a1 + 15);
  if ( v41 || (v41 = *(_QWORD *)(*((_QWORD *)a1 + 6) + 1832LL)) != 0 )
  {
    bDetermineTriangleFillRoutine(
      a1,
      (struct XEPALOBJ *)&v41,
      &v44,
      (void (**)(struct SURFACE *, struct _GRADIENTRECTDATA *))&a8);
    v18 = 0x4000LL;
    v16 = a9;
    v19 = *v10;
    v17[18].x = a7;
    v17[20] = (struct _POINTL)&v41;
    v20 = a10;
    *(struct _RECTL *)&v17->x = v19;
    v17[19] = (struct _POINTL)a2;
    v17[16] = *v20;
    if ( v16->right - v16->left < 0x4000 && v16->bottom - v16->top < 0x4000 )
    {
      if ( uAddend )
      {
        v21 = uAddend;
        p_Vertex3 = &a5->Vertex3;
        do
        {
          v23 = &a3[*(p_Vertex3 - 2)];
          v24 = &a3[*(p_Vertex3 - 1)];
          if ( (unsigned int)bIsTriangleInBounds(v23, v24, &a3[*p_Vertex3], (struct _TRIANGLEDATA *)v17) )
            v14 = bCalculateAndDrawTriangle(a1, v23, v24, (struct _TRIVERTEX *)v18, (struct _TRIANGLEDATA *)v17, v44);
          p_Vertex3 += 3;
          --v21;
        }
        while ( v21 );
      }
      goto LABEL_37;
    }
    if ( UIntAdd(0x1Du, v12, &puResult) < 0
      || (LODWORD(v27) = uAddend, UIntAdd(0x3Au, uAddend, (UINT *)&a8) < 0)
      || (v28 = puResult, v29 = puResult, ULongLongToULong(v29 * 16 + 13LL * (unsigned int)a8, &puResult) < 0) )
    {
      Win32FreePool(v17, v25, v26);
      return 0LL;
    }
    v30 = (struct _TRIVERTEX *)PALLOCMEM2(puResult, 1953920071LL, 0);
    v31 = v30;
    if ( v30 )
    {
      v42 = (struct _GRADIENT_TRIANGLE *)&v30[v29];
      v32 = v28 - 1;
      v40 = (_DWORD)a8 - 2;
      v43 = (unsigned __int8 *)&v30[v29] + 12 * (unsigned int)a8;
      memmove(v30, a3, 16 * v12);
      memmove(v42, a5, 12LL * uAddend);
      memset(v43, 0, uAddend);
      puResult = v12;
      LODWORD(a8) = uAddend;
      do
      {
        Vertex1 = v42[(unsigned int)(v27 - 1)].Vertex1;
        if ( Vertex1 >= v32 )
          break;
        Vertex2 = v42[(unsigned int)(v27 - 1)].Vertex2;
        if ( (unsigned int)Vertex2 >= v32 )
          break;
        Vertex3 = v42[(unsigned int)(v27 - 1)].Vertex3;
        if ( (unsigned int)Vertex3 >= v32 )
          break;
        v45 = &v31[Vertex3];
        v46 = &v31[(unsigned int)Vertex2];
        v47 = &v31[Vertex1];
        if ( !(unsigned int)bIsTriangleInBounds(v47, v46, v45, (struct _TRIANGLEDATA *)v17) )
          goto LABEL_25;
        if ( !(unsigned int)bSplitTriangle(v31, &puResult, v42, (unsigned int *)&a8, v43) )
        {
          v36 = bCalculateAndDrawTriangle(a1, v47, v46, v45, (struct _TRIANGLEDATA *)v17, v44);
          LODWORD(v12) = puResult;
          v14 = v36;
          LODWORD(v27) = (_DWORD)a8;
LABEL_25:
          Vertex3 = 0xFFFFFFFFLL;
          while ( 1 )
          {
            v27 = (unsigned int)(v27 - 1);
            LODWORD(a8) = v27;
            v37 = v43[v27];
            if ( v37 )
            {
              LODWORD(v12) = v12 - 1;
              puResult = v12;
            }
            if ( !(_DWORD)v27 )
              goto LABEL_31;
            if ( v37 != 1 )
              goto LABEL_30;
          }
        }
        LODWORD(v12) = puResult;
        if ( puResult > v32 )
          break;
        LODWORD(v27) = (_DWORD)a8;
        if ( (unsigned int)a8 > v40 )
          break;
LABEL_30:
        ;
      }
      while ( (_DWORD)v27 );
LABEL_31:
      Win32FreePool(v31, Vertex3, Vertex2);
      goto LABEL_37;
    }
  }
  v14 = 0;
LABEL_37:
  Win32FreePool(v17, v16, v18);
  return v14;
}

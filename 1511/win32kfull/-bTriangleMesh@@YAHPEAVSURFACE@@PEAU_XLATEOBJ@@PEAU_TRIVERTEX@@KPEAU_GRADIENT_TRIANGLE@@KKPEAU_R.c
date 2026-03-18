/*
 * XREFs of ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C013A3F8
 * Callers:
 *     EngGradientFill @ 0x1C00DF0D0 (EngGradientFill.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     UIntAdd @ 0x1C00A93FC (UIntAdd.c)
 *     ?bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6AX0PEAU_GRADIENTRECTDATA@@@Z@Z @ 0x1C00DFC38 (-bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6.c)
 *     ULongLongToULong @ 0x1C00F1BDC (ULongLongToULong.c)
 *     ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1C013A7A0 (-bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z.c)
 *     ?bIsTriangleInBounds@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C013B0AC (-bIsTriangleInBounds@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?bSplitTriangle@@YAHPEAU_TRIVERTEX@@PEAKPEAU_GRADIENT_TRIANGLE@@1PEAE@Z @ 0x1C027EF4C (-bSplitTriangle@@YAHPEAU_TRIVERTEX@@PEAKPEAU_GRADIENT_TRIANGLE@@1PEAE@Z.c)
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
  struct _POINTL *v16; // rsi
  struct _RECTL *v17; // rdx
  struct _RECTL v18; // xmm0
  struct _POINTL *v19; // rax
  __int64 v20; // r12
  ULONG *p_Vertex3; // rbx
  struct _TRIVERTEX *v22; // rdi
  struct _TRIVERTEX *v23; // r14
  struct _TRIVERTEX *v24; // r8
  __int64 v25; // rdi
  UINT v26; // r12d
  __int64 v27; // rbx
  struct _TRIVERTEX *v28; // rax
  struct _TRIVERTEX *v29; // r13
  UINT v30; // r12d
  ULONG Vertex1; // r9d
  ULONG Vertex2; // r8d
  __int64 Vertex3; // rdx
  int v34; // eax
  unsigned __int8 v35; // cl
  UINT puResult; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int8 *v38; // [rsp+38h] [rbp-48h]
  struct _GRADIENT_TRIANGLE *v39; // [rsp+40h] [rbp-40h]
  __int64 v40; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v41; // [rsp+50h] [rbp-30h]
  void (*v42)(struct SURFACE *, struct _TRIANGLEDATA *); // [rsp+58h] [rbp-28h] BYREF
  struct _TRIVERTEX *v43; // [rsp+60h] [rbp-20h]
  struct _TRIVERTEX *v44; // [rsp+68h] [rbp-18h]
  struct _TRIVERTEX *v45; // [rsp+70h] [rbp-10h]

  v10 = a8;
  v12 = a4;
  v14 = 1;
  v15 = a8->bottom - a8->top;
  if ( v15 <= 0 )
    return 0;
  if ( (unsigned __int64)(v15 - 1) > 0x6666661 )
    return 0;
  v16 = (struct _POINTL *)PALLOCMEM2((unsigned int)(40 * (v15 - 1) + 208), 1734624615LL, 1);
  if ( !v16 )
    return 0;
  v40 = *((_QWORD *)a1 + 15);
  if ( v40 || (v40 = *(_QWORD *)(*((_QWORD *)a1 + 6) + 1832LL)) != 0 )
  {
    bDetermineTriangleFillRoutine(
      a1,
      (struct XEPALOBJ *)&v40,
      &v42,
      (void (**)(struct SURFACE *, struct _GRADIENTRECTDATA *))&a8);
    v17 = a9;
    v18 = *v10;
    v16[18].x = a7;
    v16[20] = (struct _POINTL)&v40;
    v19 = a10;
    *(struct _RECTL *)&v16->x = v18;
    v16[19] = (struct _POINTL)a2;
    v16[16] = *v19;
    if ( v17->right - v17->left < 0x4000 && v17->bottom - v17->top < 0x4000 )
    {
      if ( uAddend )
      {
        v20 = uAddend;
        p_Vertex3 = &a5->Vertex3;
        do
        {
          v22 = &a3[*(p_Vertex3 - 2)];
          v23 = &a3[*(p_Vertex3 - 1)];
          if ( (unsigned int)bIsTriangleInBounds(v22, v23, &a3[*p_Vertex3], (struct _TRIANGLEDATA *)v16) )
            v14 = bCalculateAndDrawTriangle(a1, v22, v23, v24, (struct _TRIANGLEDATA *)v16, v42);
          p_Vertex3 += 3;
          --v20;
        }
        while ( v20 );
      }
      goto LABEL_36;
    }
    if ( UIntAdd(0x1Du, v12, &puResult) < 0
      || (LODWORD(v25) = uAddend, UIntAdd(0x3Au, uAddend, (UINT *)&a8) < 0)
      || (v26 = puResult, v27 = puResult, ULongLongToULong(v27 * 16 + 13LL * (unsigned int)a8, &puResult) < 0) )
    {
      Win32FreePool(v16);
      return 0LL;
    }
    v28 = (struct _TRIVERTEX *)PALLOCMEM2(puResult, 1953920071LL, 0);
    v29 = v28;
    if ( v28 )
    {
      v39 = (struct _GRADIENT_TRIANGLE *)&v28[v27];
      v30 = v26 - 1;
      v41 = (_DWORD)a8 - 2;
      v38 = (unsigned __int8 *)&v28[v27] + 12 * (unsigned int)a8;
      memmove(v28, a3, 16 * v12);
      memmove(v39, a5, 12LL * uAddend);
      memset(v38, 0, uAddend);
      puResult = v12;
      LODWORD(a8) = uAddend;
      do
      {
        Vertex1 = v39[(unsigned int)(v25 - 1)].Vertex1;
        if ( Vertex1 >= v30 )
          break;
        Vertex2 = v39[(unsigned int)(v25 - 1)].Vertex2;
        if ( Vertex2 >= v30 )
          break;
        Vertex3 = v39[(unsigned int)(v25 - 1)].Vertex3;
        if ( (unsigned int)Vertex3 >= v30 )
          break;
        v44 = &v29[Vertex3];
        v43 = &v29[Vertex2];
        v45 = &v29[Vertex1];
        if ( !(unsigned int)bIsTriangleInBounds(v45, v43, v44, (struct _TRIANGLEDATA *)v16) )
          goto LABEL_25;
        if ( !(unsigned int)bSplitTriangle(v29, &puResult, v39, (unsigned int *)&a8, v38) )
        {
          v34 = bCalculateAndDrawTriangle(a1, v45, v43, v44, (struct _TRIANGLEDATA *)v16, v42);
          LODWORD(v12) = puResult;
          v14 = v34;
          LODWORD(v25) = (_DWORD)a8;
          while ( 1 )
          {
LABEL_25:
            v25 = (unsigned int)(v25 - 1);
            LODWORD(a8) = v25;
            v35 = v38[v25];
            if ( v35 )
            {
              LODWORD(v12) = v12 - 1;
              puResult = v12;
            }
            if ( !(_DWORD)v25 )
              goto LABEL_30;
            if ( v35 != 1 )
              goto LABEL_29;
          }
        }
        LODWORD(v12) = puResult;
        if ( puResult > v30 )
          break;
        LODWORD(v25) = (_DWORD)a8;
        if ( (unsigned int)a8 > v41 )
          break;
LABEL_29:
        ;
      }
      while ( (_DWORD)v25 );
LABEL_30:
      Win32FreePool(v29);
      goto LABEL_36;
    }
  }
  v14 = 0;
LABEL_36:
  Win32FreePool(v16);
  return v14;
}

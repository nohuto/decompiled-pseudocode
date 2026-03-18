/*
 * XREFs of ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C02A9E68
 * Callers:
 *     NtGdiEngBitBlt @ 0x1C02AAB60 (NtGdiEngBitBlt.c)
 *     NtGdiEngCopyBits @ 0x1C02AB110 (NtGdiEngCopyBits.c)
 *     NtGdiEngPlgBlt @ 0x1C02AC330 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02AC690 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02ACA80 (NtGdiEngStretchBltROP.c)
 * Callees:
 *     ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C0019BF0 (-bValid@DWMSPRITEREF@@QEAAHXZ.c)
 */

__int64 __fastcall bCheckSurfaceRectSize(
        struct _SURFOBJ *a1,
        struct _RECTL *a2,
        struct _CLIPOBJ *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int v5; // ebx
  RECTL *p_rclBounds; // rsi
  LONG bottom; // eax
  int v9; // r15d
  LONG v10; // r14d
  int v11; // r12d
  LONG v12; // r13d
  __int64 v13; // rax
  struct _SURFOBJ *v14; // r8
  _DWORD *v15; // rdx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  LONG v19; // r8d
  LONG left; // r9d
  LONG top; // edx
  LONG v22; // ecx
  int v23; // r8d
  int v24; // ecx
  int v25; // eax
  __int64 v27; // [rsp+20h] [rbp-10h]
  LONG right; // [rsp+28h] [rbp-8h]
  struct _SURFOBJ *v29; // [rsp+70h] [rbp+40h] BYREF
  unsigned int *v30; // [rsp+88h] [rbp+58h]

  v30 = a4;
  v29 = a1;
  v5 = 0;
  p_rclBounds = 0LL;
  if ( !a1 )
    return 1;
  if ( a3 && a3->iDComplexity )
  {
    p_rclBounds = &a3->rclBounds;
    v27 = *(_QWORD *)&a3->rclBounds.left;
    right = a3->rclBounds.right;
    bottom = a3->rclBounds.bottom;
LABEL_7:
    v9 = v27;
    v10 = right;
    if ( (int)v27 > right )
      return v5;
    v11 = HIDWORD(v27);
    v12 = bottom;
    if ( SHIDWORD(v27) > bottom )
      return v5;
    goto LABEL_11;
  }
  if ( a2 )
  {
    v27 = *(_QWORD *)&a2->left;
    right = a2->right;
    bottom = a2->bottom;
    goto LABEL_7;
  }
  v12 = 0;
  v10 = 0;
  v11 = 0;
  v9 = 0;
LABEL_11:
  v13 = SURFOBJ_TO_SURFACE_NOT_NULL(a1);
  v14 = v29;
  if ( *(int *)(v13 + 112) < 0 )
  {
    v29 = (struct _SURFOBJ *)v29->hdev;
    if ( DWMSPRITEREF::bValid((DWMSPRITEREF *)&v29) && (v15[14] & 0x20000) != 0 )
    {
      v16 = v15[652];
      v9 -= v16;
      v10 -= v16;
      v17 = v15[653];
      v11 -= v17;
      v12 -= v17;
    }
  }
  if ( v10 <= v14->sizlBitmap.cx && v9 >= 0 && v12 <= v14->sizlBitmap.cy && v11 >= 0 )
  {
    if ( p_rclBounds )
    {
      v18 = 0;
      if ( a2 )
      {
        v19 = a2->right;
        left = a2->left;
        top = a2->top;
        if ( p_rclBounds->left > a2->left )
          left = p_rclBounds->left;
        v22 = a2->bottom;
        if ( p_rclBounds->right < v19 )
          v19 = p_rclBounds->right;
        if ( p_rclBounds->top > top )
          top = p_rclBounds->top;
        if ( p_rclBounds->bottom < v22 )
          v22 = p_rclBounds->bottom;
        v23 = v19 - left;
        if ( v23 > 0 )
          v18 = v23;
        v24 = v22 - top;
        *v30 = v18;
      }
      else
      {
        if ( p_rclBounds->right - p_rclBounds->left > 0 )
          v18 = p_rclBounds->right - p_rclBounds->left;
        *v30 = v18;
        v24 = p_rclBounds->bottom - p_rclBounds->top;
      }
LABEL_39:
      if ( v24 > 0 )
        v5 = v24;
      *a5 = v5;
      return 1;
    }
    if ( a2 )
    {
      v25 = 0;
      if ( a2->right - a2->left > 0 )
        v25 = a2->right - a2->left;
      *v30 = v25;
      v24 = a2->bottom - a2->top;
      goto LABEL_39;
    }
    return 1;
  }
  return v5;
}

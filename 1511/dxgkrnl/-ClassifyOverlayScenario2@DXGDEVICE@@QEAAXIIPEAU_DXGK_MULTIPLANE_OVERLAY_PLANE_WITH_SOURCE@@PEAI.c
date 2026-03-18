/*
 * XREFs of ?ClassifyOverlayScenario2@DXGDEVICE@@QEAAXIIPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE@@PEAI11@Z @ 0x1C01395D4
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal2@DXGDEVICE@@QEAAJIIPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE@@HPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01380EC (-CheckMultiPlaneOverlayInternal2@DXGDEVICE@@QEAAJIIPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURC.c)
 * Callees:
 *     ?IsYUVAllocation@DXGDEVICE@@QEAAHPEAX@Z @ 0x1C013ACAC (-IsYUVAllocation@DXGDEVICE@@QEAAHPEAX@Z.c)
 */

void __fastcall DXGDEVICE::ClassifyOverlayScenario2(
        DXGDEVICE *this,
        int a2,
        unsigned int a3,
        struct _DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *a4,
        unsigned int *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  unsigned int v7; // edi
  unsigned int v8; // ebp
  float v9; // xmm7_4
  unsigned int v11; // r9d
  DXGDEVICE *v12; // rax
  int v13; // r15d
  float v14; // xmm6_4
  int v15; // r12d
  int v16; // r14d
  int v17; // r13d
  RECT *p_SrcRect; // rsi
  int v19; // r8d
  __int64 v20; // r8
  __int64 v21; // r9
  float v22; // xmm1_4
  float v23; // xmm1_4

  v7 = 0;
  v8 = 0;
  v9 = FLOAT_1_0;
  v11 = a3;
  v12 = this;
  v13 = 1;
  v14 = FLOAT_1_0;
  v15 = 1;
  v16 = 1;
  v17 = 1;
  if ( !a3 )
    goto LABEL_37;
  p_SrcRect = &a4->PlaneAttributes.SrcRect;
  do
  {
    if ( v7 == 3 )
      goto LABEL_26;
    if ( (unsigned int)DXGDEVICE::IsYUVAllocation(v12, *(void **)&p_SrcRect[-2].bottom) )
      v7 = 3;
    if ( v7 != 3 )
    {
      if ( v7 != 2 )
      {
        v19 = a2;
        if ( !v8 || v8 - 1 == a2 || v8 == a2 )
        {
LABEL_20:
          if ( v7 - 1 > 2
            && v8 != v19
            && (p_SrcRect->right - p_SrcRect->left < p_SrcRect[1].right - p_SrcRect[1].left
             || p_SrcRect->bottom - p_SrcRect->top < p_SrcRect[1].bottom - p_SrcRect[1].top) )
          {
            v7 = 1;
          }
          goto LABEL_25;
        }
        v20 = v8;
        v21 = v8 - 1;
        if ( a4[v21].PlaneAttributes.ClipRect.left <= a4[v20].PlaneAttributes.ClipRect.left
          && a4[v21].PlaneAttributes.ClipRect.right >= a4[v20].PlaneAttributes.ClipRect.right
          && a4[v21].PlaneAttributes.ClipRect.top <= a4[v20].PlaneAttributes.ClipRect.top
          && a4[v21].PlaneAttributes.ClipRect.bottom >= a4[v20].PlaneAttributes.ClipRect.bottom
          && (a4[v20].PlaneAttributes.SrcRect.right - a4[v20].PlaneAttributes.SrcRect.left < a4[v20].PlaneAttributes.DstRect.right
                                                                                           - a4[v20].PlaneAttributes.DstRect.left
           || a4[v20].PlaneAttributes.SrcRect.bottom - a4[v20].PlaneAttributes.SrcRect.top < a4[v20].PlaneAttributes.DstRect.bottom
                                                                                           - a4[v20].PlaneAttributes.DstRect.top)
          && (*(_BYTE *)&a4[v21].PlaneAttributes.Blend.0 & 1) != 0 )
        {
          v7 = 2;
        }
      }
      v19 = a2;
      goto LABEL_20;
    }
LABEL_25:
    v11 = a3;
LABEL_26:
    v22 = (float)(p_SrcRect[1].right - p_SrcRect[1].left) / (float)(p_SrcRect->right - p_SrcRect->left);
    if ( v22 <= v9 )
    {
      if ( v14 > v22 )
      {
        v16 = p_SrcRect->right - p_SrcRect->left;
        v17 = p_SrcRect[1].right - p_SrcRect[1].left;
        v14 = (float)v17 / (float)v16;
      }
    }
    else
    {
      v13 = p_SrcRect->right - p_SrcRect->left;
      v15 = p_SrcRect[1].right - p_SrcRect[1].left;
      v9 = (float)v15 / (float)v13;
    }
    v23 = (float)(p_SrcRect[1].bottom - p_SrcRect[1].top) / (float)(p_SrcRect->bottom - p_SrcRect->top);
    if ( v23 <= v9 )
    {
      if ( v14 > v23 )
      {
        v16 = p_SrcRect->bottom - p_SrcRect->top;
        v17 = p_SrcRect[1].bottom - p_SrcRect[1].top;
        v14 = (float)v17 / (float)v16;
      }
    }
    else
    {
      v13 = p_SrcRect->bottom - p_SrcRect->top;
      v15 = p_SrcRect[1].bottom - p_SrcRect[1].top;
      v9 = (float)v15 / (float)v13;
    }
    v12 = this;
    ++v8;
    p_SrcRect += 7;
  }
  while ( v8 < v11 );
  if ( v16 == 1 )
  {
LABEL_37:
    *a6 = v13;
    *a7 = v15;
    goto LABEL_38;
  }
  *a6 = v16;
  *a7 = v17;
LABEL_38:
  *a5 = v7;
}

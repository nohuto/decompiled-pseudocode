/*
 * XREFs of ?GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z @ 0x18007D128
 * Callers:
 *     ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@_NPEAPEAVCResource@@4PEAUMilPoint3F@@@Z @ 0x180008640 (-GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 * Callees:
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180018B1C (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NNN@Z @ 0x18007D4C0 (-s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NNN@Z.c)
 *     ?s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NPEBUtagRECT@@0@Z @ 0x18007D4F8 (-s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NPEBUtagRECT@@0@Z.c)
 */

__int64 __fastcall CThumbnailVisual::GetCVI(
        CThumbnailVisual *this,
        const struct tagRECT *a2,
        struct CResource **a3,
        struct MilPoint3F *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rcx
  double v10; // xmm2_8
  int v11; // eax
  int v12; // esi
  double v13; // xmm3_8
  int v14; // eax
  const struct tagRECT *v15; // rdx
  int v16; // r11d
  volatile signed __int32 *v17; // rax
  float v18; // xmm0_4

  v8 = -2147467259;
  if ( *((_QWORD *)this + 46)
    && *((_QWORD *)this + 52)
    && *((_QWORD *)this + 45)
    && !CThumbnailVisual::_IsImmersiveIconic(this) )
  {
    v9 = *((_QWORD *)this + 44);
    if ( v9 && (*(_BYTE *)(v9 + 36) & 2) != 0 )
      IsRectEmpty((const RECT *)(v9 + 56));
    v10 = *((double *)this + 58);
    v11 = a2->right - a2->left;
    if ( v11 < 0 )
      v11 = 0;
    if ( CThumbnailVisual::s_IsCloseEnoughToReuse((double)v11, *((double *)this + 58)) )
    {
      v12 = a2->bottom - a2->top;
      v13 = *((double *)this + 59);
      v14 = v12;
      if ( v12 < 0 )
        v14 = 0;
      if ( CThumbnailVisual::s_IsCloseEnoughToReuse((double)v14, *((double *)this + 59))
        && CThumbnailVisual::s_IsCloseEnoughToReuse(a2, v15) )
      {
        v17 = (volatile signed __int32 *)*((_QWORD *)this + 52);
        *a3 = (struct CResource *)v17;
        if ( v16 < 0 )
          v16 = 0;
        if ( v12 < 0 )
          v12 = 0;
        v18 = (double)v16 / v10;
        *(float *)a4 = v18;
        *((float *)a4 + 1) = (double)v12 / v13;
        if ( v17 )
          _InterlockedIncrement(v17 + 2);
        return 0;
      }
    }
  }
  return v8;
}

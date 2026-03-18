/*
 * XREFs of ?AreSupportedStretchFactors@COverlayContext@@AEAA_NPEAVIImageSource@@PEAUtagRECT@@1_N@Z @ 0x1800F60B4
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180006BFC (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEAV-$TMilR.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_xd @ 0x1800EDCB0 (Template_xd.c)
 */

char __fastcall COverlayContext::AreSupportedStretchFactors(
        COverlayContext *this,
        struct IImageSource *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        bool a5)
{
  char v5; // di
  int v6; // r10d
  int v7; // r11d
  int v8; // r8d
  float v9; // xmm4_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  _QWORD *v12; // rax
  char v14; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  v6 = a3->right - a3->left;
  v7 = a3->bottom - a3->top;
  v8 = v6;
  if ( a5 )
  {
    v8 = v7;
    v7 = v6;
  }
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(a4->right - a4->left) / (float)v8)) & _xmm);
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(a4->bottom - a4->top) / (float)v7)) & _xmm);
  if ( v9 <= v10 )
    v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(a4->bottom - a4->top) / (float)v7)) & _xmm);
  else
    v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(a4->right - a4->left) / (float)v8)) & _xmm);
  if ( v10 <= v9 )
    v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(a4->bottom - a4->top) / (float)v7)) & _xmm);
  if ( *((float *)this + 27) >= v11 && v9 >= *((float *)this + 28) )
    return 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v12 = (_QWORD *)(*(__int64 (__fastcall **)(struct IImageSource *, char *))(*(_QWORD *)a2 + 104LL))(a2, &v14);
    Template_xd(
      *(unsigned int *)v12,
      &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
      *(unsigned int *)v12 | (unsigned __int64)((__int64)(int)HIDWORD(*v12) << 32),
      4);
  }
  return v5;
}

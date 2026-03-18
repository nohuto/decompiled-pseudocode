/*
 * XREFs of ?AreSupportedStretchFactors@COverlayContext@@AEAA_NPEAVISwapChainContent@@PEAUtagRECT@@1_N@Z @ 0x180078E38
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1801269C0 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_xd @ 0x180106D50 (Template_xd.c)
 */

char __fastcall COverlayContext::AreSupportedStretchFactors(
        COverlayContext *this,
        struct ISwapChainContent *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        bool a5)
{
  char v5; // bl
  int v6; // r10d
  int v7; // r11d
  int v8; // r8d
  float v9; // xmm4_4
  float v10; // xmm5_4
  __int64 v12; // rax

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
  if ( *((float *)this + 36) >= fmaxf(v9, v10) && fminf(v9, v10) >= *((float *)this + 37) )
    return 1;
  v12 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a2 + 184LL))(a2);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_xd(
      *(unsigned int *)(v12 + 40),
      &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
      *(unsigned int *)(v12 + 40) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(v12 + 40)) << 32),
      4LL);
  return v5;
}

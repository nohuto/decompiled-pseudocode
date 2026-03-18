/*
 * XREFs of ?DiscardView@CD3DDeviceLevel1@@QEAAXPEAUID3D11View@@PEBUtagRECT@@I@Z @ 0x1800DD8E4
 * Callers:
 *     ?DiscardRectangle@CHwSurfaceRenderTarget@@UEAAXAEBUMilRectF@@@Z @ 0x1800DCF80 (-DiscardRectangle@CHwSurfaceRenderTarget@@UEAAXAEBUMilRectF@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_xqdddd @ 0x180134CEC (Template_xqdddd.c)
 */

void __fastcall CD3DDeviceLevel1::DiscardView(CD3DDeviceLevel1 *this, struct ID3D11View *a2, const struct tagRECT *a3)
{
  int v4; // ebp
  int v5; // edx
  int v6; // ecx
  int v7; // r9d

  if ( a2 )
  {
    v4 = (int)a2;
    (*(void (__fastcall **)(_QWORD, struct ID3D11View *, const struct tagRECT *, __int64))(**((_QWORD **)this + 69)
                                                                                         + 1064LL))(
      *((_QWORD *)this + 69),
      a2,
      a3,
      1LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_xqdddd(v6, v5, v4, v7, a3->left, a3->top, a3->right, a3->bottom);
  }
}

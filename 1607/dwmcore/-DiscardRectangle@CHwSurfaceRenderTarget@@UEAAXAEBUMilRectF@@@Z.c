/*
 * XREFs of ?DiscardRectangle@CHwSurfaceRenderTarget@@UEAAXAEBUMilRectF@@@Z @ 0x18010EB50
 * Callers:
 *     ?DiscardRectangle@CHwTextureRenderTarget@@UEAAXAEBUMilRectF@@@Z @ 0x18017B810 (-DiscardRectangle@CHwTextureRenderTarget@@UEAAXAEBUMilRectF@@@Z.c)
 * Callees:
 *     ?DiscardView@CD3DDeviceLevel1@@QEAAXPEAUID3D11View@@PEBUtagRECT@@I@Z @ 0x18007EA50 (-DiscardView@CD3DDeviceLevel1@@QEAAXPEAUID3D11View@@PEBUtagRECT@@I@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwSurfaceRenderTarget::DiscardRectangle(CHwSurfaceRenderTarget *this, const struct MilRectF *a2)
{
  __int64 v4; // rdx
  float v5; // xmm0_4
  float v6; // eax
  double v7; // xmm0_8
  int v8; // eax
  double v9; // xmm0_8
  int v10; // eax
  float v11; // [rsp+20h] [rbp-38h]
  CD3DDeviceLevel1 *v12; // [rsp+28h] [rbp-30h] BYREF
  struct tagRECT v13; // [rsp+30h] [rbp-28h] BYREF

  if ( (*(int (__fastcall **)(CHwSurfaceRenderTarget *, CD3DDeviceLevel1 **))(*(_QWORD *)this + 216LL))(this, &v12) >= 0 )
  {
    v4 = *((_QWORD *)this + 21);
    v5 = *(float *)a2 + 6291456.25;
    v6 = v5;
    v7 = *((float *)a2 + 1);
    v13.left = (int)(LODWORD(v6) << 10) >> 11;
    *(float *)&v7 = v7 + 6291456.25;
    v8 = LODWORD(v7);
    v9 = *((float *)a2 + 2);
    v13.top = v8 << 10 >> 11;
    *(float *)&v9 = v9 + 6291456.25;
    v10 = LODWORD(v9);
    LODWORD(v9) = *((_DWORD *)a2 + 3);
    v13.right = v10 << 10 >> 11;
    v11 = *(float *)&v9 + 6291456.25;
    v13.bottom = (int)(LODWORD(v11) << 10) >> 11;
    CD3DDeviceLevel1::DiscardView(v12, *(struct ID3D11View **)(v4 + 200), &v13);
  }
}

/*
 * XREFs of ?DiscardRectangle@CHwSurfaceRenderTarget@@UEAAXAEBUMilRectF@@@Z @ 0x1800F9AF8
 * Callers:
 *     ?DiscardRectangle@CHwTextureRenderTarget@@UEAAXAEBUMilRectF@@@Z @ 0x18014B1A0 (-DiscardRectangle@CHwTextureRenderTarget@@UEAAXAEBUMilRectF@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?DiscardView@CD3DDeviceLevel1@@QEAAXPEAUID3D11View@@PEBUtagRECT@@I@Z @ 0x1800FA138 (-DiscardView@CD3DDeviceLevel1@@QEAAXPEAUID3D11View@@PEBUtagRECT@@I@Z.c)
 */

void __fastcall CHwSurfaceRenderTarget::DiscardRectangle(
        CHwSurfaceRenderTarget *this,
        const struct MilRectF *a2,
        __int64 a3,
        unsigned int a4)
{
  float v4; // xmm0_4
  float v5; // eax
  double v6; // xmm0_8
  double v7; // xmm0_8
  __int64 v8; // rdx
  CD3DDeviceLevel1 *v9; // rcx
  int v10; // [rsp+20h] [rbp-28h]
  int v11; // [rsp+20h] [rbp-28h]
  float v12; // [rsp+20h] [rbp-28h]
  struct tagRECT v13; // [rsp+28h] [rbp-20h] BYREF

  v4 = *(float *)a2 + 6291456.25;
  v5 = v4;
  v6 = *((float *)a2 + 1);
  v13.left = (int)(LODWORD(v5) << 10) >> 11;
  *(float *)&v6 = v6 + 6291456.25;
  v10 = LODWORD(v6);
  v7 = *((float *)a2 + 2);
  v13.top = v10 << 10 >> 11;
  *(float *)&v7 = v7 + 6291456.25;
  v11 = LODWORD(v7);
  LODWORD(v7) = *((_DWORD *)a2 + 3);
  v8 = *((_QWORD *)this + 21);
  v9 = (CD3DDeviceLevel1 *)*((_QWORD *)this + 20);
  v13.right = v11 << 10 >> 11;
  v12 = *(float *)&v7 + 6291456.25;
  v13.bottom = (int)(LODWORD(v12) << 10) >> 11;
  CD3DDeviceLevel1::DiscardView(v9, *(struct ID3D11View **)(v8 + 200), &v13, a4);
}

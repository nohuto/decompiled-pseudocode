/*
 * XREFs of ?DiscardRectangle@CHwDisplayRenderTarget@@UEAAXAEBUMilRectF@@@Z @ 0x18008ECA0
 * Callers:
 *     ?DiscardRectangle@CHwDisplayRenderTarget@@WLA@EAAXAEBUMilRectF@@@Z @ 0x1800C0F60 (-DiscardRectangle@CHwDisplayRenderTarget@@WLA@EAAXAEBUMilRectF@@@Z.c)
 * Callees:
 *     ?DiscardView@CD3DDeviceLevel1@@QEAAXPEAUID3D11View@@PEBUtagRECT@@I@Z @ 0x18007EA50 (-DiscardView@CD3DDeviceLevel1@@QEAAXPEAUID3D11View@@PEBUtagRECT@@I@Z.c)
 *     ?GetDeviceNoRef@CHwDisplayRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x18008EE10 (-GetDeviceNoRef@CHwDisplayRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwDisplayRenderTarget::DiscardRectangle(CHwDisplayRenderTarget *this, const struct MilRectF *a2)
{
  __int64 (__fastcall *v4)(CHwDisplayRenderTarget *__hidden, struct CD3DDeviceLevel1 **); // rax
  int DeviceNoRef; // eax
  __int64 v6; // rdx
  float v7; // xmm0_4
  float v8; // eax
  double v9; // xmm0_8
  int v10; // eax
  double v11; // xmm0_8
  int v12; // eax
  float v13; // [rsp+20h] [rbp-38h]
  struct CD3DDeviceLevel1 *v14; // [rsp+28h] [rbp-30h] BYREF
  struct tagRECT v15; // [rsp+30h] [rbp-28h] BYREF

  v4 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *__hidden, struct CD3DDeviceLevel1 **))(*(_QWORD *)this + 216LL);
  if ( v4 == CHwDisplayRenderTarget::GetDeviceNoRef )
    DeviceNoRef = CHwDisplayRenderTarget::GetDeviceNoRef(this, &v14);
  else
    DeviceNoRef = v4(this, &v14);
  if ( DeviceNoRef >= 0 )
  {
    v6 = *((_QWORD *)this + 21);
    v7 = *(float *)a2 + 6291456.25;
    v8 = v7;
    v9 = *((float *)a2 + 1);
    v15.left = (int)(LODWORD(v8) << 10) >> 11;
    *(float *)&v9 = v9 + 6291456.25;
    v10 = LODWORD(v9);
    v11 = *((float *)a2 + 2);
    v15.top = v10 << 10 >> 11;
    *(float *)&v11 = v11 + 6291456.25;
    v12 = LODWORD(v11);
    LODWORD(v11) = *((_DWORD *)a2 + 3);
    v15.right = v12 << 10 >> 11;
    v13 = *(float *)&v11 + 6291456.25;
    v15.bottom = (int)(LODWORD(v13) << 10) >> 11;
    CD3DDeviceLevel1::DiscardView(v14, *(struct ID3D11View **)(v6 + 200), &v15);
  }
}

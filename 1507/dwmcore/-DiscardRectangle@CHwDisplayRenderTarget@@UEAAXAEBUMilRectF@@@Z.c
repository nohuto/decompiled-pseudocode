/*
 * XREFs of ?DiscardRectangle@CHwDisplayRenderTarget@@UEAAXAEBUMilRectF@@@Z @ 0x180044A40
 * Callers:
 *     ?DiscardRectangle@CHwDisplayRenderTarget@@WLA@EAAXAEBUMilRectF@@@Z @ 0x18009ABE0 (-DiscardRectangle@CHwDisplayRenderTarget@@WLA@EAAXAEBUMilRectF@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_xqdddd @ 0x180134CEC (Template_xqdddd.c)
 */

void __fastcall CHwDisplayRenderTarget::DiscardRectangle(CHwDisplayRenderTarget *this, const struct MilRectF *a2)
{
  __int64 v2; // rdi
  float v3; // xmm0_4
  float v4; // eax
  double v5; // xmm0_8
  int v6; // eax
  int v7; // eax
  __int64 v8; // rsi
  int v9; // edx
  int v10; // ecx
  int v11; // r9d
  float v12; // [rsp+40h] [rbp-28h]
  int v13; // [rsp+48h] [rbp-20h] BYREF
  int v14; // [rsp+4Ch] [rbp-1Ch]
  int v15; // [rsp+50h] [rbp-18h]
  int v16; // [rsp+54h] [rbp-14h]

  v2 = *((_QWORD *)this + 20);
  v3 = *(float *)a2 + 6291456.25;
  v4 = v3;
  v5 = *((float *)a2 + 1);
  v13 = (int)(LODWORD(v4) << 10) >> 11;
  *(float *)&v5 = v5 + 6291456.25;
  v6 = LODWORD(v5);
  LODWORD(v5) = *((_DWORD *)a2 + 2);
  v14 = v6 << 10 >> 11;
  *(float *)&v5 = *(float *)&v5 + 6291456.25;
  v7 = LODWORD(v5);
  LODWORD(v5) = *((_DWORD *)a2 + 3);
  v15 = v7 << 10 >> 11;
  v12 = *(float *)&v5 + 6291456.25;
  v16 = (int)(LODWORD(v12) << 10) >> 11;
  v8 = *(_QWORD *)(*((_QWORD *)this + 21) + 200LL);
  if ( v8 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, int *, __int64))(**(_QWORD **)(v2 + 552) + 1064LL))(
      *(_QWORD *)(v2 + 552),
      v8,
      &v13,
      1LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_xqdddd(v10, v9, v8, v11, v13, v14, v15, v16);
  }
}

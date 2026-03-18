/*
 * XREFs of ?DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV3@@Z @ 0x1801197D4
 * Callers:
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1801194A4 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@Coor.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006F15C (-DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingContext@@@Z @ 0x180119734 (-DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingCon.c)
 */

__int64 __fastcall CDisplayDebugFrameCounter::DisplayText(
        CDisplayDebugFrameCounter *this,
        unsigned int a2,
        unsigned int a3,
        struct CDrawingContext *a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  struct _D3DCOLORVALUE v10; // xmm8
  float v12; // xmm3_4
  float v13; // xmm6_4
  struct D2D_RECT_F v14; // xmm1
  bool v15; // zf
  int Factory; // eax
  unsigned int v17; // ebx
  _QWORD *v18; // r15
  int v19; // eax
  int v20; // eax
  int v21; // eax
  struct D2D_RECT_F v23; // [rsp+58h] [rbp-91h] BYREF
  struct _D3DCOLORVALUE v24; // [rsp+68h] [rbp-81h] BYREF
  struct D2D_RECT_F v25; // [rsp+78h] [rbp-71h] BYREF
  struct D2D_RECT_F v26; // [rsp+88h] [rbp-61h] BYREF

  *(struct _D3DCOLORVALUE *)&v10.r = (struct _D3DCOLORVALUE)_xmm;
  if ( a6 == 1 )
    v12 = (float)((float)(*(float *)(a5 + 12) * 0.25) * 3.0) - 60.0;
  else
    v12 = *(float *)(a5 + 8) - 120.0;
  v23.top = 0.0;
  v13 = v12 + 0.0;
  v23.bottom = 24.0;
  v23.left = v12 + 20.0;
  v23.right = (float)(v12 + 20.0) + 40.0;
  v14 = v23;
  v23.top = 0.0;
  v15 = *((_BYTE *)this + 16) == 0;
  v23.left = (float)(v12 + 40.0) + 40.0;
  v23.bottom = 24.0;
  v25 = v14;
  v23.right = v23.left + 40.0;
  v26 = v23;
  if ( v15 )
  {
    Factory = DWriteCreateFactory(0LL, &GUID_b859ee5a_d838_4b5b_a2e8_1adc7d93db48, (char *)this + 24);
    v17 = Factory;
    if ( Factory < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Factory, 0xA3u);
      return v17;
    }
    v18 = (_QWORD *)((char *)this + 32);
    v19 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, __int64, _DWORD, int, _DWORD, void *, char *))(**((_QWORD **)this + 3) + 120LL))(
            *((_QWORD *)this + 3),
            L"Lucida Console",
            0LL,
            400LL,
            0,
            5,
            LODWORD(FLOAT_20_0),
            &unk_1801ADA80,
            (char *)this + 32);
    v17 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xB2u);
      return v17;
    }
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v18 + 24LL))(*v18, 2LL);
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v18 + 32LL))(*v18, 2LL);
    *((_BYTE *)this + 16) = 1;
  }
  *(_QWORD *)&v23.left = LODWORD(v13);
  *(struct _D3DCOLORVALUE *)&v24.r = (struct _D3DCOLORVALUE)_xmm;
  v23.bottom = 24.0;
  v23.right = v12 + 120.0;
  CDrawingContext::DrawSolidRectangleInternal((__int64)a4, &v23, &v24);
  if ( a2 <= 0x1E )
    *(struct _D3DCOLORVALUE *)&v10.r = (struct _D3DCOLORVALUE)_xmm;
  *(struct _D3DCOLORVALUE *)&v24.r = *(struct _D3DCOLORVALUE *)&v10.r;
  v20 = CDisplayDebugFrameCounter::DisplayNumber((struct IDWriteTextFormat **)this, a2, &v24, &v25, a4);
  v17 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xCAu);
  }
  else
  {
    *(struct _D3DCOLORVALUE *)&v24.r = (struct _D3DCOLORVALUE)_xmm;
    v21 = CDisplayDebugFrameCounter::DisplayNumber((struct IDWriteTextFormat **)this, a3, &v24, &v26, a4);
    v17 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xCDu);
    }
    else
    {
      *(_DWORD *)(a7 + 4) = 0;
      *(float *)a7 = v13;
      *(float *)(a7 + 8) = v12 + 120.0;
      *(_DWORD *)(a7 + 12) = 1103101952;
    }
  }
  return v17;
}

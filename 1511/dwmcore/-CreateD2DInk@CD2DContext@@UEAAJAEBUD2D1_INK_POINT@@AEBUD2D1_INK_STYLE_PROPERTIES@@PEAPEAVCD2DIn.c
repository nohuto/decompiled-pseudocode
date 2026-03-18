/*
 * XREFs of ?CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x180146470
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z @ 0x18014DB68 (-Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CD2DContext::CreateD2DInk(
        CD2DContext *this,
        const struct D2D1_INK_POINT *a2,
        const struct D2D1_INK_STYLE_PROPERTIES *a3,
        struct CD2DInk **a4)
{
  __int64 v4; // rdi
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  int v11; // eax
  struct ID2D1InkStyle *v13; // [rsp+30h] [rbp-28h] BYREF
  struct ID2D1Ink *v14; // [rsp+60h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 5);
  v14 = 0LL;
  v13 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, const struct D2D1_INK_STYLE_PROPERTIES *, struct ID2D1InkStyle **))(*(_QWORD *)v4 + 768LL))(
         v4,
         a3,
         &v13);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, const struct D2D1_INK_POINT *, struct ID2D1Ink **))(**((_QWORD **)this + 5)
                                                                                               + 760LL))(
            *((_QWORD *)this + 5),
            a2,
            &v14);
    v9 = v10;
    if ( v10 >= 0 )
    {
      v11 = CD2DInk::Create(*((struct CD2DResourceManager **)this + 1), v14, v13, a4);
      v9 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x132u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x130u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x12Eu);
  }
  if ( v14 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v13 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v13 + 16LL))(v13);
  return v9;
}

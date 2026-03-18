/*
 * XREFs of ?CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x180175CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z @ 0x18017DC14 (-Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CD2DContext::CreateD2DInk(
        CD2DContext *this,
        const struct D2D1_INK_POINT *a2,
        const struct D2D1_INK_STYLE_PROPERTIES *a3,
        struct CD2DInk **a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  struct ID2D1InkStyle *v12; // [rsp+30h] [rbp-18h] BYREF
  struct ID2D1Ink *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, const struct D2D1_INK_STYLE_PROPERTIES *, struct ID2D1InkStyle **))(**((_QWORD **)this + 5) + 768LL))(
         *((_QWORD *)this + 5),
         a3,
         &v12);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x231u);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, const struct D2D1_INK_POINT *, struct ID2D1Ink **))(**((_QWORD **)this + 5)
                                                                                              + 760LL))(
           *((_QWORD *)this + 5),
           a2,
           &v13);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x233u);
    }
    else
    {
      v10 = CD2DInk::Create(*((struct CD2DResourceManager **)this + 1), v13, v12, a4);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x235u);
    }
  }
  if ( v13 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v12 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v12 + 16LL))(v12);
  return v8;
}

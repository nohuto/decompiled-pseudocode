/*
 * XREFs of ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x1800101A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z @ 0x18001D630 (-Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DContext::CreateD2DEffect(CD2DContext *this, const struct _GUID *a2, struct CD2DEffect **a3)
{
  __int64 v3; // rdi
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  struct ID2D1Effect *v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 5);
  v10 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, struct ID2D1Effect **))(*(_QWORD *)v3 + 504LL))(
         v3,
         a2,
         &v10);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x847u);
  }
  else
  {
    v8 = CD2DEffect::Create(*((struct CD2DResourceManager **)this + 1), v10, a3);
    v7 = v8;
    if ( v8 >= 0 )
      goto LABEL_3;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x848u);
  }
  *a3 = 0LL;
LABEL_3:
  if ( v10 )
    (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v10 + 16LL))(v10);
  return v7;
}

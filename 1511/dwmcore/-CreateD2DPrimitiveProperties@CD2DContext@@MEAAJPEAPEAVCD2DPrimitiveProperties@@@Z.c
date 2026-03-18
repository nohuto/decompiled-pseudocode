/*
 * XREFs of ?CreateD2DPrimitiveProperties@CD2DContext@@MEAAJPEAPEAVCD2DPrimitiveProperties@@@Z @ 0x180010250
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CD2DPrimitiveProperties@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitiveProperties@@PEAPEAV1@@Z @ 0x18001DD60 (-Create@CD2DPrimitiveProperties@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitive.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DContext::CreateD2DPrimitiveProperties(CD2DContext *this, struct CD2DPrimitiveProperties **a2)
{
  __int64 v2; // rdi
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  struct ID2D1PrivateCompositorPrimitiveProperties *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 6);
  v9 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, struct ID2D1PrivateCompositorPrimitiveProperties **))(*(_QWORD *)v2 + 40LL))(
         v2,
         &v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x8A9u);
  }
  else
  {
    v7 = CD2DPrimitiveProperties::Create(*((struct CD2DResourceManager **)this + 1), v9, a2);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x8ADu);
  }
  if ( v9 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorPrimitiveProperties *))(*(_QWORD *)v9 + 16LL))(v9);
  return v6;
}

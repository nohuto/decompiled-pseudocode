/*
 * XREFs of ?CreatePrimitiveProperties@CSwRenderTargetGetBounds@@UEAAJPEAPEAVCD2DPrimitiveProperties@@@Z @ 0x1801787D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x18017898C (-GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::CreatePrimitiveProperties(
        CSwRenderTargetGetBounds *this,
        struct CD2DPrimitiveProperties **a2)
{
  int FirstAvailableD2DContext; // eax
  struct ID2DContext *v4; // rdi
  unsigned int v5; // ebx
  int v6; // eax
  struct ID2DContext *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  FirstAvailableD2DContext = CSwRenderTargetGetBounds::GetFirstAvailableD2DContext(
                               (CSwRenderTargetGetBounds *)((char *)this - 24),
                               &v8);
  v4 = v8;
  v5 = FirstAvailableD2DContext;
  if ( FirstAvailableD2DContext < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, FirstAvailableD2DContext, 0x23Cu);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(struct ID2DContext *, struct CD2DPrimitiveProperties **))(*(_QWORD *)v8 + 256LL))(
           v8,
           a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x23Eu);
  }
  if ( v4 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v4 + 16LL))(v4);
  return v5;
}

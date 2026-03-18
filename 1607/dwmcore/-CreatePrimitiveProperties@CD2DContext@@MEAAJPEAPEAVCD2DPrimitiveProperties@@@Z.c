/*
 * XREFs of ?CreatePrimitiveProperties@CD2DContext@@MEAAJPEAPEAVCD2DPrimitiveProperties@@@Z @ 0x180003170
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CD2DPrimitiveProperties@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitiveProperties@@PEAPEAV1@@Z @ 0x18001BB1C (-Create@CD2DPrimitiveProperties@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitive.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::CreatePrimitiveProperties(CD2DContext *this, struct CD2DPrimitiveProperties **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  struct ID2D1PrivateCompositorPrimitiveProperties *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PrivateCompositorPrimitiveProperties **))(**((_QWORD **)this + 6)
                                                                                              + 40LL))(
         *((_QWORD *)this + 6),
         &v8);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xA21u);
  }
  else
  {
    v6 = CD2DPrimitiveProperties::Create(*((struct CD2DResourceManager **)this + 1), v8, a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xA25u);
  }
  if ( v8 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorPrimitiveProperties *))(*(_QWORD *)v8 + 16LL))(v8);
  return v5;
}

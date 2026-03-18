/*
 * XREFs of ?Create@CD2DPrimitiveProperties@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitiveProperties@@PEAPEAV1@@Z @ 0x18001DD60
 * Callers:
 *     ?CreateD2DPrimitiveProperties@CD2DContext@@MEAAJPEAPEAVCD2DPrimitiveProperties@@@Z @ 0x180010250 (-CreateD2DPrimitiveProperties@CD2DContext@@MEAAJPEAPEAVCD2DPrimitiveProperties@@@Z.c)
 * Callees:
 *     ??0CD2DPrimitiveProperties@@IEAA@PEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18000FDDC (--0CD2DPrimitiveProperties@@IEAA@PEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitivePro.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DPrimitiveProperties::Create(
        struct CD2DResourceManager *a1,
        struct ID2D1PrivateCompositorPrimitiveProperties *a2,
        struct CD2DPrimitiveProperties **a3)
{
  unsigned int v6; // esi
  CD2DPrimitiveProperties *v7; // rax
  struct CD2DPrimitiveProperties *v8; // rdi

  v6 = 0;
  v7 = (CD2DPrimitiveProperties *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                             + 16LL))(
                                    WPF::g_pProcessHeap,
                                    112LL);
  if ( v7 )
    v8 = CD2DPrimitiveProperties::CD2DPrimitiveProperties(v7, a1, a2);
  else
    v8 = 0LL;
  *a3 = v8;
  if ( v8 )
  {
    (*(void (__fastcall **)(struct CD2DPrimitiveProperties *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x12u);
  }
  return v6;
}

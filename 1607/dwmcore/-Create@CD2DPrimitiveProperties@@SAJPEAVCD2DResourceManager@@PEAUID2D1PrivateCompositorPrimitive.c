/*
 * XREFs of ?Create@CD2DPrimitiveProperties@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitiveProperties@@PEAPEAV1@@Z @ 0x18001BB1C
 * Callers:
 *     ?CreatePrimitiveProperties@CD2DContext@@MEAAJPEAPEAVCD2DPrimitiveProperties@@@Z @ 0x180003170 (-CreatePrimitiveProperties@CD2DContext@@MEAAJPEAPEAVCD2DPrimitiveProperties@@@Z.c)
 * Callees:
 *     ??0CD2DPrimitiveProperties@@IEAA@PEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18001C010 (--0CD2DPrimitiveProperties@@IEAA@PEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitivePro.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DPrimitiveProperties::Create(
        struct CD2DResourceManager *a1,
        struct ID2D1PrivateCompositorPrimitiveProperties *a2,
        struct CD2DPrimitiveProperties **a3)
{
  unsigned int v6; // ebx
  CD2DPrimitiveProperties *v7; // rax
  struct CD2DPrimitiveProperties *v8; // rdx

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

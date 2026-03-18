/*
 * XREFs of ?Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z @ 0x18014DB68
 * Callers:
 *     ?CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x180146470 (-CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DIn.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x180027830 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DInk::Create(
        struct CD2DResourceManager *a1,
        struct ID2D1Ink *a2,
        struct ID2D1InkStyle *a3,
        struct CD2DInk **a4)
{
  unsigned int v4; // esi
  CD2DResource *v9; // rax
  struct CD2DInk *v10; // rdi

  v4 = 0;
  *a4 = 0LL;
  v9 = (CD2DResource *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         120LL);
  v10 = v9;
  if ( v9 )
  {
    CD2DResource::CD2DResource(v9, a1);
    *((_QWORD *)v10 + 13) = 0LL;
    *((_QWORD *)v10 + 2) = &CD2DMesh::`vftable'{for `IDeviceResource'};
    *(_QWORD *)v10 = &CD2DInk::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v10 + 14) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    (*(void (__fastcall **)(struct CD2DInk *))(*(_QWORD *)v10 + 8LL))(v10);
    *((_QWORD *)v10 + 13) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)a2 + 8LL))(a2);
    *((_QWORD *)v10 + 14) = a3;
    if ( a3 )
      (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)a3 + 8LL))(a3);
    *a4 = v10;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x13u);
  }
  return v4;
}
